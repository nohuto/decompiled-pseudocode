/*
 * XREFs of _vsnprintf @ 0x140169630
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14006DA6C (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140153C64 (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140155740 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14016964C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
