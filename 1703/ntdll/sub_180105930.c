/*
 * XREFs of sub_180105930 @ 0x180105930
 * Callers:
 *     TpCheckTerminateWorker @ 0x180050E80 (TpCheckTerminateWorker.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 * Callees:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

__int64 __fastcall sub_180105930(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
