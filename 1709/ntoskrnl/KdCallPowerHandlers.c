/*
 * XREFs of KdCallPowerHandlers @ 0x14020150C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14024A430 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rbx
  int v5; // edi

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v4 = KdpPowerListHead;
  v5 = 0;
  while ( (__int64 *)v4 != &KdpPowerListHead )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 16))(a1, *(_QWORD *)(v4 + 24));
    if ( v5 < 0 )
      break;
    v4 = *(_QWORD *)v4;
  }
  KxReleaseSpinLock(&KdpPowerSpinLock);
  __writecr8(CurrentIrql);
  return (unsigned int)v5;
}
