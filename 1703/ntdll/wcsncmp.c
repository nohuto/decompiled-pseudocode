/*
 * XREFs of wcsncmp @ 0x18009BB40
 * Callers:
 *     sub_18003635C @ 0x18003635C (sub_18003635C.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     sub_18005BD90 @ 0x18005BD90 (sub_18005BD90.c)
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
