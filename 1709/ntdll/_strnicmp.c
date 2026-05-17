/*
 * XREFs of _strnicmp @ 0x180092110
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x18010B5D4 (SbpLookup.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1800920A4 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
