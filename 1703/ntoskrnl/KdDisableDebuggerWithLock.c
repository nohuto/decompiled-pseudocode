/*
 * XREFs of KdDisableDebuggerWithLock @ 0x14016832C
 * Callers:
 *     KdDisableDebugger @ 0x140168320 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KdPowerTransitionEx @ 0x1401FBA90 (KdPowerTransitionEx.c)
 *     KdpAllowDisable @ 0x14078C0A4 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x14078CD0C (KdpSuspendAllBreakpoints.c)
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
  if ( KdDisableCount )
    goto LABEL_10;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled )
    goto LABEL_10;
  v2 = KdpAllowDisable();
  if ( v2 >= 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      MEMORY[0xFFFFF780000002D4] = 0;
      KdpDebugRoutineSelect = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(4LL, 0LL);
    }
LABEL_10:
    ++KdDisableCount;
    v2 = 0;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
