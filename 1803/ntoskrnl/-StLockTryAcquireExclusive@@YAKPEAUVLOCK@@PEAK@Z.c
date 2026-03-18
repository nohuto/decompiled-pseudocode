/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14008F600
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(volatile signed __int32 *BugCheckParameter2, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KLOCK_ENTRY *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v5);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    return 0LL;
  }
  else
  {
    if ( v5 )
      v5->AcquiredByte |= 1u;
    *a2 = 1;
    return 1LL;
  }
}
