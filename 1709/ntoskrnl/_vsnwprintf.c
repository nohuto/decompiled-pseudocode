/*
 * XREFs of _vsnwprintf @ 0x14015DE70
 * Callers:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x140019E0C (RtlStringVPrintfWorkerW.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x14012B374 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140133230 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x14028FFD4 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14015DE8C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
