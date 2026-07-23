/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402705DC
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(volatile signed __int32 *BugCheckParameter2, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (unsigned __int64)v5);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  else
  {
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
    *a2 = 1;
    return 1LL;
  }
}
