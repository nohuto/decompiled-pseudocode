/*
 * XREFs of sub_180108740 @ 0x180108740
 * Callers:
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 * Callees:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

__int64 __fastcall sub_180108740(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
