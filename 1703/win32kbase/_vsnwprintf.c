/*
 * XREFs of _vsnwprintf @ 0x1C009D12C
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x1C006A7A4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCchPrintfW @ 0x1C00768AC (RtlStringCchPrintfW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E6B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     RtlUnicodeStringPrintf @ 0x1C010B90C (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C009D148 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
