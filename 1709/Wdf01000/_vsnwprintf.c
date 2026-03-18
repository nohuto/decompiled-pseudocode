/*
 * XREFs of _vsnwprintf @ 0x1C003B8E0
 * Callers:
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0012A7C (RtlWideCharArrayVPrintfWorker.c)
 *     RtlStringVPrintfWorkerW @ 0x1C0065A50 (RtlStringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C003B8FC (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
