/*
 * XREFs of VfIsVerifierEnabled @ 0x1400F8F48
 * Callers:
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     KsepPatchDriverImportsTable @ 0x1405ECBF0 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x140796C6C (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x1407A209C (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
