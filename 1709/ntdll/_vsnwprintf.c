/*
 * XREFs of _vsnwprintf @ 0x1800924A0
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x18006C4F8 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x180071620 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x18007EC64 (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x180088880 (StringCbPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800CF18C (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800DD958 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1800924B8 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
