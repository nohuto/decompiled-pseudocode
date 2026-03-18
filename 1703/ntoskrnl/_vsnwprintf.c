/*
 * XREFs of _vsnwprintf @ 0x140169530
 * Callers:
 *     StringCchPrintfW @ 0x140034264 (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringVPrintfWorkerW @ 0x140080084 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x14014FD80 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringPrintf @ 0x140156E08 (RtlUnicodeStringPrintf.c)
 *     StringVPrintfWorkerW @ 0x140265C98 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14016954C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
