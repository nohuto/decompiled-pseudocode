/*
 * XREFs of CalcHorizSpSubpix @ 0x1C02CE5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcHorizSpSubpix(int a1, unsigned int *a2, int *a3)
{
  int v3; // edi
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  unsigned int v7; // ebx
  int v8; // esi
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // r9d
  int v13; // r10d

  v3 = a3[2];
  v4 = a2[1];
  v5 = a3[1];
  v6 = (a1 << 6) + 32;
  if ( *a3 >= v3 )
  {
    v7 = *a2;
    v3 = *a3;
    a2 += 2;
    a3 += 2;
  }
  else
  {
    v7 = a2[2];
  }
  v8 = *a3;
  v9 = *a2;
  do
  {
    v10 = (int)(v9 + v7 + 2 * v4 + 1) >> 2;
    v11 = (v3 + 2 * v5 + v8 + 1) >> 2;
    if ( v11 <= v6 )
    {
      if ( v11 >= v6 )
        continue;
      v12 = v7 + v4;
      v9 = v10;
      v13 = v3 + v5;
      v8 = v11;
    }
    else
    {
      v12 = v9 + v4;
      v7 = v10;
      v13 = v8 + v5;
      v3 = v11;
    }
    v4 = v12 >> 1;
    v5 = v13 >> 1;
  }
  while ( v11 != v6 );
  return v10;
}
