/*
 * XREFs of PopCoalescingSetActiveState @ 0x140240E38
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x1406FA100 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x140240ED8 (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405CC0B0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140703F30 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140703F5C (PopDiagTraceIoCoalescingOn.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
  }
  PopUpdateDiskIdleTimeoutSetting();
  if ( !a1 )
    return PopDiagTraceIoCoalescingOff();
  LOBYTE(v1) = PopCoalescingEnforced == 0;
  return PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
}
