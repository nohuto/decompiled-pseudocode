/*
 * XREFs of _vsnwprintf @ 0x140187B70
 * Callers:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x14006DFD0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x1400CC590 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1402C5C4C (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140187B8C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
