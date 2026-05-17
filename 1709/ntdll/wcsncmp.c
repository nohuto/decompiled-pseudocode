/*
 * XREFs of wcsncmp @ 0x1800968B0
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18001F3D4 (LdrpResCompareResourceNames.c)
 *     ResourceEntryBinarySearch @ 0x180023CB4 (ResourceEntryBinarySearch.c)
 *     LdrpCompareResourceNames_U @ 0x180023E2C (LdrpCompareResourceNames_U.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
