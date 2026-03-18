/*
 * XREFs of _vsnprintf @ 0x1C009D2C8
 * Callers:
 *     RtlStringCchPrintfA @ 0x1C006F770 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x1C007EF28 (RtlStringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C009D2E4 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
