/*
 * XREFs of WbMoveHeapExecutedBlockToBackOfLRU @ 0x14053B6C0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall WbMoveHeapExecutedBlockToBackOfLRU(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v5; // rax
  PRTL_BALANCED_NODE v6; // rsi
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 **v9; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v5, a1 + 80);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  if ( (a2[2] & 1) != 0 )
  {
    v7 = (__int64 *)*a2;
    v8 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    v9 = *(__int64 ***)(a1 + 72);
    if ( *v9 != (__int64 *)(a1 + 64) )
      __fastfail(3u);
    *a2 = a1 + 64;
    a2[1] = (__int64)v9;
    *v9 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
