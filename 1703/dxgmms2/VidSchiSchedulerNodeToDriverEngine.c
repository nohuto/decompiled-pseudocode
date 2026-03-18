/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C006B7E0 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C0074ED8 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00AAD78 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00AAEA4 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00AB184 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00AC0E0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00AC4F0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 416) + 6LL);
}
