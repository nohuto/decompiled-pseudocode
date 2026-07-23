/*
 * XREFs of _strnicmp_0 @ 0x180097284
 * Callers:
 *     _strnicmp @ 0x1800972E0 (_strnicmp.c)
 * Callees:
 *     <none>
 */

int __cdecl strnicmp_0(const char *_String1, const char *_String2, size_t _MaxCount)
{
  int v4; // r9d
  int v5; // ecx

  if ( !_MaxCount )
    return 0;
  do
  {
    v4 = *(unsigned __int8 *)_String1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *(unsigned __int8 *)_String2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    --_MaxCount;
  }
  while ( _MaxCount && v4 && v4 == v5 );
  return v4 - v5;
}
