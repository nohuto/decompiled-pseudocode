/*
 * XREFs of _wcslwr_s @ 0x180097740
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     wcsnlen @ 0x18009BBD0 (wcsnlen.c)
 */

errno_t __cdecl wcslwr_s(wchar_t *String, size_t SizeInWords)
{
  wchar_t *v2; // rbx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( wcsnlen(String, SizeInWords) >= SizeInWords )
  {
    *v2 = 0;
LABEL_2:
    sub_180095DE0();
    return 22;
  }
  while ( *v2 )
  {
    if ( (unsigned __int16)(*v2 - 65) <= 0x19u )
      *v2 += 32;
    ++v2;
  }
  return 0;
}
