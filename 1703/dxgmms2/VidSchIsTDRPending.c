/*
 * XREFs of VidSchIsTDRPending @ 0x1C00096C0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00116B0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C002AAF8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C006AE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 *     VidSchSwitchFromContext @ 0x1C006C800 (VidSchSwitchFromContext.c)
 *     VidSchiDrainFlipQueue @ 0x1C006D070 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00AAC54 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00AAD78 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00AAEA4 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00AB184 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00AC9E0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2820) != 0;
}
