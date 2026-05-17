/*
 * XREFs of sub_18008C514 @ 0x18008C514
 * Callers:
 *     _strnicmp @ 0x18008C580 (_strnicmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008C514(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // r10
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  int v9; // r8d

  v3 = a3;
  if ( !a3 )
    return 0LL;
  do
  {
    v6 = *a1++;
    v7 = *a2;
    v8 = v6 + 32;
    if ( (unsigned int)(v6 - 65) > 0x19 )
      v8 = v6;
    v9 = v7 + 32;
    ++a2;
    if ( (unsigned int)(v7 - 65) > 0x19 )
      v9 = v7;
    --v3;
  }
  while ( v3 && v8 && v8 == v9 );
  return (unsigned int)(v8 - v9);
}
