/*
 * XREFs of _vsnprintf @ 0x14015DF70
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1400FA180 (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140139CB0 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1401467D0 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14015DF8C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
