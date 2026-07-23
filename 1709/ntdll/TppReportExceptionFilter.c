/*
 * XREFs of TppReportExceptionFilter @ 0x18010AF50
 * Callers:
 *     TpCheckTerminateWorker @ 0x18000A760 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
