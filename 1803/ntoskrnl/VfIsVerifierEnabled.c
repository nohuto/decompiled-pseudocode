/*
 * XREFs of VfIsVerifierEnabled @ 0x1400D2C7C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14074596C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x14076DFD0 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x140803C74 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x14080EDCC (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
