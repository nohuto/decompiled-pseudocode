/*
 * XREFs of _stricmp_0 @ 0x1800971A0
 * Callers:
 *     _stricmp @ 0x1800971E0 (_stricmp.c)
 * Callees:
 *     <none>
 */

int __cdecl stricmp_0(const char *_String1, const char *_String2)
{
  int v3; // r8d
  int v4; // ecx

  do
  {
    v3 = *(unsigned __int8 *)_String1++;
    if ( (unsigned int)(v3 - 65) <= 0x19 )
      v3 += 32;
    v4 = *(unsigned __int8 *)_String2++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
