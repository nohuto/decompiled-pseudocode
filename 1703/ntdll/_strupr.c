/*
 * XREFs of _strupr @ 0x1800972F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

char *__cdecl strupr(char *String)
{
  char *v1; // rdx

  v1 = String;
  if ( String )
  {
    while ( *String )
    {
      if ( (unsigned __int8)(*String - 97) <= 0x19u )
        *String -= 32;
      ++String;
    }
    return v1;
  }
  else
  {
    sub_180095DE0();
    return 0LL;
  }
}
