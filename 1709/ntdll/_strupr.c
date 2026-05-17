/*
 * XREFs of _strupr @ 0x180092130
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
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
    invalid_parameter();
    return 0LL;
  }
}
