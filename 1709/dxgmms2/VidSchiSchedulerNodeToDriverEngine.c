/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C006F570 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C007C648 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00B368C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00B37B8 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00B3AA0 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00B4AA0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00B4EB0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 424) + 6LL);
}
