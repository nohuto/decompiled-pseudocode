/*
 * XREFs of _wcsupr_s @ 0x18008D060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     wcsnlen @ 0x180090E20 (wcsnlen.c)
 */

errno_t __cdecl wcsupr_s(wchar_t *String, size_t Size)
{
  wchar_t *v2; // rbx
  wchar_t v4; // cx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( wcsnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    sub_18008B020();
    return 22;
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int16)(v4 - 97) <= 0x19u )
      *v2 = v4 - 32;
    ++v2;
  }
  return 0;
}
