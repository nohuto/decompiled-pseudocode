/*
 * XREFs of _vsnprintf @ 0x1C00A73A8
 * Callers:
 *     RtlStringCbPrintfA @ 0x1C00083C0 (RtlStringCbPrintfA.c)
 *     RtlStringCchPrintfA @ 0x1C000873C (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00A73C4 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
