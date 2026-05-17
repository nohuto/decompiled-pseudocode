/*
 * XREFs of _strlwr_s @ 0x18008C4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     strnlen @ 0x180090150 (strnlen.c)
 */

errno_t __cdecl strlwr_s(char *String, size_t Size)
{
  char *v2; // rbx
  char v4; // cl

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( strnlen(String, Size) >= Size )
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
    if ( (unsigned __int8)(v4 - 65) <= 0x19u )
      *v2 = v4 + 32;
    ++v2;
  }
  return 0;
}
