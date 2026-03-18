/*
 * XREFs of vSrcAlphaCopyS4D32 @ 0x1C0254160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcAlphaCopyS4D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // r11d
  int *v9; // r10
  int v10; // eax
  unsigned __int8 *v11; // rsi
  __int64 v12; // rbx
  unsigned __int8 *v13; // rcx
  int *v14; // rdx
  __int64 v15; // r9
  unsigned __int8 v16; // r8

  v8 = a8;
  v9 = (int *)(a4 + 4LL * a5);
  v10 = a2 / 2;
  v11 = (unsigned __int8 *)(a2 / 2 + a1);
  if ( a8 )
  {
    v12 = a3;
    do
    {
      v13 = v11;
      v14 = v9;
      if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
      {
        LOBYTE(v10) = *v11;
        if ( (*v11 & 0xF) != 0 )
        {
          v10 = dword_1C02EF610[*v11 & 0xF];
          *v9 = v10;
        }
        v13 = v11 + 1;
        v14 = v9 + 1;
      }
      if ( (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2 > 0 )
      {
        v15 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2);
        do
        {
          v16 = *v13;
          if ( (*v13 & 0xF0) != 0 )
          {
            v10 = dword_1C02EF610[(unsigned __int64)v16 >> 4];
            *v14 = v10;
          }
          if ( (v16 & 0xF) != 0 )
          {
            v10 = dword_1C02EF610[v16 & 0xF];
            v14[1] = v10;
          }
          ++v13;
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        LOBYTE(v10) = *v13;
        if ( (*v13 & 0xF0) != 0 )
        {
          v10 = dword_1C02EF610[(unsigned __int64)(unsigned __int8)v10 >> 4];
          *v14 = v10;
        }
      }
      v11 += v12;
      v9 = (int *)((char *)v9 + a7);
      --v8;
    }
    while ( v8 );
  }
  return v10;
}
