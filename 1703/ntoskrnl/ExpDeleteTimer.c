/*
 * XREFs of ExpDeleteTimer @ 0x14012B620
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PsRemoveVirtualizedTimer @ 0x14012B698 (PsRemoveVirtualizedTimer.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v6; // r14
  PRTL_BALANCED_NODE v7; // rax
  signed __int8 v8; // cf
  PRTL_BALANCED_NODE v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // rax

  v1 = (_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(a1 + 264) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD **)(a1 + 256);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v10 = *v1;
    v11 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v11 != v1 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v1 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v6 )
      PoDestroyReasonContext(v6);
  }
  v3 = *(_QWORD *)(a1 + 280);
  if ( v3 )
    PsRemoveVirtualizedTimer(v3, a1 + 288);
  return KeCancelTimer((PKTIMER)a1);
}
