/*
 * XREFs of _vsnprintf @ 0x140187C70
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140161BE8 (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140171ACC (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x140179880 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x140187C8C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
