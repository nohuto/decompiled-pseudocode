/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1401F0038
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1, int a2)
{
  unsigned int v2; // esi
  void *IndependentPages; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbx

  dword_1403866B8 = a2;
  v2 = -1073741823;
  qword_1403866B0 = a1;
  if ( !a2 || (qword_1403866A8 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
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
        goto LABEL_20;
      stru_140386618.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140386618,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_20;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = 0LL;
        PoolWithTag[1] = HvlCrashdumpCallbackRoutine;
        PoolWithTag[3] = PoolWithTag;
        v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
        *v5 = KiNmiCallbackListHead;
        KiNmiCallbackListHead = v5;
        KxReleaseSpinLock(&KiNmiCallbackListLock);
        __writecr8(v6);
        PoolWithTag = (_QWORD *)v5[3];
      }
      HvlpCrashdumpData = (__int64)PoolWithTag;
      qword_1403866C0 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_1403866C0 )
        goto LABEL_20;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140386648.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140386648,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140386618.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140386618,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140386678.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140386678,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
          v8 = v7;
          if ( v7 )
          {
            v7[2] = 0LL;
            v7[1] = HvlSkCrashdumpCallbackRoutine;
            v7[3] = v7;
            v9 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
            *v8 = KiNmiCallbackListHead;
            KiNmiCallbackListHead = v8;
            KxReleaseSpinLock(&KiNmiCallbackListLock);
            __writecr8(v9);
            v7 = (_QWORD *)v8[3];
          }
          HvlpCrashdumpData = (__int64)v7;
          return 0;
        }
      }
    }
  }
LABEL_20:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
