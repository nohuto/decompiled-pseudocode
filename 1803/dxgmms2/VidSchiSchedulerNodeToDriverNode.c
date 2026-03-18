/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C002CAE4
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0077330 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00BC094 (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00BD650 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00BDBC0 (VidSchReportDevice.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00BEF5C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 440) + 8LL);
}
