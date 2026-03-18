/*
 * XREFs of vSrcAlphaCopyS4D32 @ 0x1C0252670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcAlphaCopyS4D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // r15
  int *v11; // r10
  int v12; // eax
  unsigned __int8 *v13; // r11
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int8 *v16; // rcx
  int *v17; // rdx
  __int64 v18; // r9
  unsigned __int8 v19; // r8

  v8 = a8;
  v9 = (a5 + 1) & 0xFFFFFFFE;
  v10 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - v9) / 2);
  v11 = (int *)(a4 + 4LL * a5);
  v12 = a2 / 2;
  v13 = (unsigned __int8 *)(a2 / 2 + a1);
  if ( a8 )
  {
    v14 = (int)(v9 - a5);
    v15 = a3;
    do
    {
      v16 = v13;
      v17 = v11;
      if ( v14 )
      {
        LOBYTE(v12) = *v13;
        if ( (*v13 & 0xF) != 0 )
        {
          v12 = dword_1C02F29B0[*v13 & 0xF];
          *v11 = v12;
        }
        v16 = v13 + 1;
        v17 = v11 + 1;
      }
      if ( (int)v10 > 0 )
      {
        v18 = v10;
        do
        {
          v19 = *v16;
          if ( (*v16 & 0xF0) != 0 )
          {
            v12 = dword_1C02F29B0[(unsigned __int64)v19 >> 4];
            *v17 = v12;
          }
          if ( (v19 & 0xF) != 0 )
          {
            v12 = dword_1C02F29B0[v19 & 0xF];
            v17[1] = v12;
          }
          ++v16;
          v17 += 2;
          --v18;
        }
        while ( v18 );
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        LOBYTE(v12) = *v16;
        if ( (*v16 & 0xF0) != 0 )
        {
          v12 = dword_1C02F29B0[(unsigned __int64)(unsigned __int8)v12 >> 4];
          *v17 = v12;
        }
      }
      v13 += v15;
      v11 = (int *)((char *)v11 + a7);
      --v8;
    }
    while ( v8 );
  }
  return v12;
}
