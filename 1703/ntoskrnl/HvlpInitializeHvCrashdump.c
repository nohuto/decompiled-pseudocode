/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1401EAE7C
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140144210 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeRegisterNmiCallback @ 0x1401FDA30 (KeRegisterNmiCallback.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  void *IndependentPages; // rax

  dword_14036A718 = a2;
  v2 = -1073741823;
  qword_14036A710 = a1;
  if ( !a2 || (qword_14036A708 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_14036A678.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_14036A678,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlNmiCallbackRoutine, 0LL);
      qword_14036A720 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_14036A720 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_14036A6A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_14036A6A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_14036A678.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_14036A678,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_14036A6D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_14036A6D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          HvlpCrashdumpData = (__int64)KeRegisterNmiCallback((PNMI_CALLBACK)HvlSkNmiCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
