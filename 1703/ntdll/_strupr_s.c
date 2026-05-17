/*
 * XREFs of _strupr_s @ 0x180097340
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     strnlen @ 0x18009ADD0 (strnlen.c)
 */

errno_t __cdecl strupr_s(char *String, size_t Size)
{
  char *v2; // rbx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( strnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    sub_180095DE0();
    return 22;
  }
  while ( *v2 )
  {
    if ( (unsigned __int8)(*v2 - 97) <= 0x19u )
      *v2 -= 32;
    ++v2;
  }
  return 0;
}
