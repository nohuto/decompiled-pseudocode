/*
 * XREFs of KdPowerTransitionEx @ 0x14023E890
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmExitCoordinatedIdle @ 0x14010D150 (PpmExitCoordinatedIdle.c)
 *     KdDisableDebuggerWithLock @ 0x140186DD4 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x14023E74C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransition @ 0x14023E870 (KdPowerTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1402803A0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PpmCancelExitLatencyTrace @ 0x140271B20 (PpmCancelExitLatencyTrace.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned __int8 EffectiveIrql; // di

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 & 0x80000000;
    CurrentIrql = -1;
    v6 = a1 & 0x80000000 ^ a1;
    if ( KdTransportMaxPacketSize != 1408 )
      v4 = 0;
    if ( a2 )
    {
      if ( KeGetEffectiveIrql() < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      KxAcquireSpinLock(&KdDebuggerLock);
    }
    if ( v6 == 1 )
    {
      PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
      EffectiveIrql = KeGetEffectiveIrql();
      if ( EffectiveIrql >= 2u )
      {
        LOBYTE(v7) = 1;
        ((void (__fastcall *)(__int64, _QWORD))off_140398818[0])(v7, 0LL);
      }
      v3 = KdPower(v4 | 1, &KdpContext);
      if ( EffectiveIrql >= 2u )
        ((void (__fastcall *)(_QWORD, _QWORD))off_140398818[0])(0LL, 0LL);
    }
    else if ( v6 - 2 > 2 )
    {
      v3 = -1073741811;
    }
    else
    {
      v3 = KdPower(v4 | 4, &KdpContext);
    }
    if ( a2 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
    }
  }
  return v3;
}
