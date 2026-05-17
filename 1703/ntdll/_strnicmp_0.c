/*
 * XREFs of _strnicmp_0 @ 0x180097284
 * Callers:
 *     _strnicmp @ 0x1800972E0 (_strnicmp.c)
 * Callees:
 *     <none>
 */

int __cdecl strnicmp_0(const char *String1, const char *String2, size_t MaxCount)
{
  int v4; // r9d
  int v5; // ecx

  if ( !MaxCount )
    return 0;
  do
  {
    v4 = *(unsigned __int8 *)String1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *(unsigned __int8 *)String2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    --MaxCount;
  }
  while ( MaxCount && v4 && v4 == v5 );
  return v4 - v5;
}
