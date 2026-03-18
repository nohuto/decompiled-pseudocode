/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C002E014
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  unsigned __int64 v4; // r10
  char *v5; // r8
  char v6; // al
  char v9; // al
  char v10; // cl
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = v2 + *(unsigned int *)(a2 + 24);
  v5 = (char *)(v2 + 2);
  do
    v6 = *v5++;
  while ( v6 < 0 );
  while ( *v5++ )
    ;
  while ( (unsigned __int64)v5 < v4 )
  {
    while ( *v5++ )
      ;
    if ( *v5 >= 0 )
      break;
    v9 = v5[1];
    v10 = *v5 & 0x7F;
    v5 += 2;
    if ( v9 >= 0 )
      break;
    while ( *v5 < 0 )
    {
      if ( *v5 != (char)0x80 )
        return v3;
      ++v5;
    }
    if ( v10 != 9 || (unsigned __int8)(*v5 - 113) > 2u )
      break;
    v11 = (unsigned int)v3++ + 2;
    *(_BYTE *)(16 * v11 + a2 + 13) = *v5;
  }
  return v3;
}
