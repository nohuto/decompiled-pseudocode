/*
 * XREFs of ?vStrMirror04@@YAXPEAVSURFACE@@@Z @ 0x1C029F100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror04(unsigned int **a1)
{
  struct SURFACE *v1; // rbp
  unsigned int *v2; // r13
  int v3; // edx
  int v4; // r8d
  int v5; // ebx
  unsigned int v6; // r12d
  int v7; // edi
  int v8; // r14d
  int v9; // ebx
  unsigned int *v10; // r15
  int *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbp
  int v14; // edx
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // r10d
  unsigned int v20; // r11d
  int v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  unsigned int *v23; // [rsp+10h] [rbp-58h]
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h]
  int v26; // [rsp+88h] [rbp+20h]

  v1 = (struct SURFACE *)a1;
  v2 = a1[10];
  v23 = v2;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 14) / 2;
  v21 = v4;
  v26 = 0;
  if ( *((int *)a1 + 15) > 0 )
  {
    do
    {
      v5 = *((_DWORD *)v1 + 14) - 1;
      v6 = *v2;
      v7 = v5 >> 3;
      v8 = 0;
      v9 = v5 & 7;
      v25 = 0;
      v10 = v2;
      v11 = (int *)&v2[v7];
      v24 = *v11;
      if ( v4 > 0 )
      {
        v12 = 0LL;
        v22 = (unsigned int)v4;
        v13 = (unsigned int)v9;
        do
        {
          if ( v8 == v7 )
          {
            v14 = dword_1C02EA108[v12];
            v15 = dword_1C02EA128[v12];
            v16 = v6 & v15;
            v17 = v6 & ~v15 | ((v6 & dword_1C02EA128[v13]) >> dword_1C02EA108[v13] << v14);
            v18 = v24;
            v6 = (v16 >> v14 << dword_1C02EA108[v13]) | ~dword_1C02EA128[v13] & v17;
          }
          else
          {
            v19 = dword_1C02EA128[v12];
            v20 = (v6 & v19) >> dword_1C02EA108[v12];
            v6 = v6 & ~v19 | ((v24 & (unsigned int)dword_1C02EA128[v13]) >> dword_1C02EA108[v13] << dword_1C02EA108[v12]);
            v18 = (v20 << dword_1C02EA108[v13]) | v24 & ~dword_1C02EA128[v13];
            v24 = v18;
          }
          ++v12;
          --v9;
          --v13;
          if ( (++v25 & 8) != 0 )
          {
            *v10 = v6;
            ++v8;
            ++v10;
            if ( v8 == v7 )
              *v11 = v18;
            v6 = *v10;
            v25 = 0;
            v12 = 0LL;
          }
          if ( v9 < 0 )
          {
            *v11 = v18;
            --v7;
            --v11;
            if ( v7 == v8 )
            {
              *v10 = v6;
            }
            else
            {
              v18 = *v11;
              v24 = *v11;
            }
            v9 = 7;
            v13 = 7LL;
          }
          *v10 = v6;
          if ( v8 != v7 )
            *v11 = v18;
          --v22;
        }
        while ( v22 );
        v1 = (struct SURFACE *)a1;
        v2 = v23;
        v3 = v26;
        v4 = v21;
      }
      ++v3;
      v2 = (unsigned int *)((char *)v2 + *((int *)v1 + 22));
      v26 = v3;
      v23 = v2;
    }
    while ( v3 < *((_DWORD *)v1 + 15) );
  }
}
