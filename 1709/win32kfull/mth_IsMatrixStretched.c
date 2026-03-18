/*
 * XREFs of mth_IsMatrixStretched @ 0x1C02B7858
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C02C1ABC (fsg_InitInterpreterTrans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_IsMatrixStretched(int *a1)
{
  unsigned int v1; // r9d
  __int64 v3; // r10
  int v4; // eax
  int v5; // edx
  int v6; // ecx

  v1 = 0;
  v3 = 2LL;
  do
  {
    v4 = *a1;
    v5 = a1[1];
    if ( *a1 < 0 )
      v4 = -v4;
    if ( v5 < 0 )
      v5 = -v5;
    if ( v4 < v5 )
    {
      v6 = v4;
      v4 = v5;
      v5 = v6;
    }
    a1 += 3;
    v1 |= v4 - v5 <= 33;
    --v3;
  }
  while ( v3 );
  return v1;
}
