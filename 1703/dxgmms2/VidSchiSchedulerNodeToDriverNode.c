/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0027864
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C006B7E0 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00AAD78 (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00AC0E0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00AC4F0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 416) + 8LL);
}
