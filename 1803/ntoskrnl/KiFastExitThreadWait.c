/*
 * XREFs of KiFastExitThreadWait @ 0x140088FE4
 * Callers:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140088D40 (KeWaitForAlertByThreadId.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  v4 = a2;
  _InterlockedOr(v8, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v9);
      while ( *(_QWORD *)(v4 + 64) );
    }
    KiReleaseThreadLockSafe(v4);
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, v4, a3);
}
