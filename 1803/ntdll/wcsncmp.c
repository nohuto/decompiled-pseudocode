/*
 * XREFs of wcsncmp @ 0x180090D80
 * Callers:
 *     sub_180053118 @ 0x180053118 (sub_180053118.c)
 *     sub_18009A1F4 @ 0x18009A1F4 (sub_18009A1F4.c)
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
