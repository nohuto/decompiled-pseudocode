/*
 * XREFs of strchr @ 0x180095590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char *result; // rax

  result = 0LL;
  while ( *Str && *Str != (_BYTE)Val )
    ++Str;
  if ( *Str == (_BYTE)Val )
    return (char *)Str;
  return result;
}
