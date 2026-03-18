/*
 * XREFs of _vsnwprintf @ 0x1C00A720C
 * Callers:
 *     RtlStringCchPrintfW @ 0x1C0005048 (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1C0088BDC (RtlStringVPrintfWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0096620 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     RtlUnicodeStringPrintf @ 0x1C010A8CC (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00A7228 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
