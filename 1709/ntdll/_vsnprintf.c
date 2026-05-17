/*
 * XREFs of _vsnprintf @ 0x1800923D0
 * Callers:
 *     RtlStringCbPrintfA @ 0x180009EB8 (RtlStringCbPrintfA.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 *     StringCbPrintfA @ 0x1800D10D0 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1800923E8 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
