/*
 * XREFs of sub_1800891E4 @ 0x1800891E4
 * Callers:
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800891E4(__int64 a1)
{
  unsigned __int8 v1; // dl
  int v2; // r9d
  int v3; // r8d
  int *v4; // r10
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax

  v1 = 0;
  v2 = 0x7FFFFFFF;
  v3 = 0;
  if ( !dword_18015D044 )
    return v3 - v2 < 4;
  v4 = *(int **)(a1 + 40);
  v5 = (unsigned int)dword_18015D044;
  do
  {
    v6 = *v4;
    v7 = *v4++;
    if ( v3 >= v6 )
      v7 = v3;
    v3 = v7;
    if ( v2 <= v6 )
      v6 = v2;
    v2 = v6;
    --v5;
  }
  while ( v5 );
  if ( v6 > 0 )
    return v3 - v2 < 4;
  return v1;
}
