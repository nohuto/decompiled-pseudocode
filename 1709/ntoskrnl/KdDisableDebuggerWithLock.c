/*
 * XREFs of KdDisableDebuggerWithLock @ 0x14015CD54
 * Callers:
 *     KdDisableDebugger @ 0x14015CD40 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KdPowerTransitionEx @ 0x1402017B0 (KdPowerTransitionEx.c)
 *     KdpAllowDisable @ 0x1407992C8 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x140799F2C (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // di
  int v2; // ebx

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( !KdDisableCount )
  {
    KdPreviouslyEnabled = (char)KdDebuggerEnabled;
    if ( (_BYTE)KdDebuggerEnabled )
    {
      v2 = KdpAllowDisable();
      if ( v2 < 0 )
        goto LABEL_11;
    }
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      MEMORY[0xFFFFF780000002D4] = 0;
      KdpDebugRoutineSelect = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(4LL, 0LL);
    }
  }
  ++KdDisableCount;
  v2 = 0;
LABEL_11:
  KxReleaseSpinLock(&KdDebuggerLock);
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
