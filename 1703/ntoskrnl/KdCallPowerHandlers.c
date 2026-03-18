/*
 * XREFs of KdCallPowerHandlers @ 0x1401FB804
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1402352E0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
