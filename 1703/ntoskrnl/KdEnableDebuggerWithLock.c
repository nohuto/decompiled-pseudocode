/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1401FB95C
 * Callers:
 *     KdEnableDebugger @ 0x1401FB920 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KdPowerTransitionEx @ 0x1401FBA90 (KdPowerTransitionEx.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x14078CB44 (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  int v4; // eax

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock(&KdDebuggerLock);
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( a1 )
      {
        KdPowerTransitionEx(1LL, 0LL);
        KdpDebugRoutineSelect = 1;
        LOBYTE(KdDebuggerEnabled) = 1;
        MEMORY[0xFFFFF780000002D4] = 1;
        KdpRestoreAllBreakpoints();
      }
      else
      {
        PoHiberInProgress = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        PoHiberInProgress = 0;
      }
    }
    if ( a1 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( a1 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      __writecr8(CurrentIrql);
      return 3221225485LL;
    }
    KdInitSystem(0LL, 0LL);
  }
  return 0LL;
}
