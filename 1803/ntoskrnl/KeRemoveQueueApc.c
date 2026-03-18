/*
 * XREFs of KeRemoveQueueApc @ 0x1400C6B54
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140005FA8 (EtwpCancelPendingStackwalkApcs.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1402B20B8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1402B4A98 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x1400C6BDC (KiRemoveQueueApc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  char v6; // r11
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(v3 + 64) );
  }
  KiRemoveQueueApc(a1);
  KiReleaseThreadLockSafe(v3);
  __writecr8(CurrentIrql);
  return v6;
}
