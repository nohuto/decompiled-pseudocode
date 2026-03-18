/*
 * XREFs of CalcVertSpSubpix @ 0x1C02CE650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcVertSpSubpix(int a1, int *a2, int *a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v9; // ebx
  int v10; // esi
  int v11; // r8d
  int v12; // ecx
  __int64 result; // rax
  int v14; // r9d
  int v15; // r10d

  v3 = a2[2];
  v5 = *a2;
  v6 = a2[1];
  v7 = a3[1];
  v8 = (a1 << 6) + 32;
  if ( *a2 >= v3 )
  {
    v9 = *a3;
    a2 += 2;
    a3 += 2;
    v3 = v5;
  }
  else
  {
    v9 = a3[2];
  }
  v10 = *a3;
  v11 = *a2;
  do
  {
    v12 = (v11 + v3 + 2 * v6 + 1) >> 2;
    result = (unsigned int)((v10 + v9 + 2 * v7 + 1) >> 2);
    if ( v12 <= v8 )
    {
      if ( v12 >= v8 )
        continue;
      v14 = v3 + v6;
      v11 = v12;
      v15 = v9 + v7;
      v10 = result;
    }
    else
    {
      v14 = v11 + v6;
      v3 = v12;
      v15 = v10 + v7;
      v9 = result;
    }
    v6 = v14 >> 1;
    v7 = v15 >> 1;
  }
  while ( v12 != v8 );
  return result;
}
