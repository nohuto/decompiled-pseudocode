/*
 * XREFs of _wcsset_s @ 0x18008CD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl wcsset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value)
{
  wchar_t *i; // rax

  if ( !Destination || !SizeInWords )
    goto LABEL_8;
  for ( i = Destination; *i; ++i )
  {
    if ( !--SizeInWords )
      break;
    *i = Value;
  }
  if ( !SizeInWords )
  {
    *Destination = 0;
LABEL_8:
    sub_18008B020();
    return 22;
  }
  return 0;
}
