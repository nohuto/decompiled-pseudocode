/*
 * XREFs of VfIsVerifierEnabled @ 0x14003CBA4
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     KsepPatchDriverImportsTable @ 0x140599AB8 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
