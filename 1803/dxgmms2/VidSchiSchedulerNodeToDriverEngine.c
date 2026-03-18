/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0077330 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C007F53C (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00BC094 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00BD650 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00BDBC0 (VidSchReportDevice.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00BEF5C (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00BF058 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 440) + 6LL);
}
