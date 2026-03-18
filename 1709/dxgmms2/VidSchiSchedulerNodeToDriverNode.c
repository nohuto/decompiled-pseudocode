/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0029BD8
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C006F570 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00B368C (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00B4AA0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00B4EB0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 424) + 8LL);
}
