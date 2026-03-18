/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C002BA10
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // r8
  unsigned __int64 v5; // r10
  char *v6; // rcx
  char v7; // al
  char v10; // al
  char v11; // dl
  char v12; // r9
  __int64 v13; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    while ( *v6++ )
      ;
    if ( *v6 >= 0 )
      break;
    v10 = v6[1];
    v11 = *v6 & 0x7F;
    v6 += 2;
    if ( v10 >= 0 )
      break;
    while ( *v6 < 0 )
    {
      if ( *v6 != (char)0x80 )
        return v3;
      ++v6;
    }
    v12 = *v6;
    if ( v11 != 9 || (unsigned __int8)(v12 - 113) > 2u )
      break;
    v13 = 16LL * v3++;
    *(_BYTE *)(v13 + a2 + 45) = v12;
  }
  return v3;
}
