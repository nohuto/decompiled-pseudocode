/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x14022D040
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x140572870 (MmAllocateMappingAddress.c)
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

  dword_1403C9BD8 = a2;
  v2 = -1073741823;
  qword_1403C9BD0 = a1;
  if ( !a2 || (qword_1403C9BC8 = (void *)MmMapIoSpaceEx(a1, (unsigned int)(a2 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(0x1000uLL, -1);
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
      stru_1403C9B38.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_1403C9B38,
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
      qword_1403C9BE0 = (__int64)MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_1403C9BE0 )
        goto LABEL_20;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_1403C9B68.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_1403C9B68,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_1403C9B38.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_1403C9B38,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_1403C9B98.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_1403C9B98,
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
    MmFreeIndependentPages((unsigned __int64)HvlpFallbackScratchPage, 0x1000uLL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
