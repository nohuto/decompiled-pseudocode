/*
 * XREFs of ?vGradientFill32Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AB0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // r14
  int v4; // edx
  struct SURFACE *v5; // r9
  __int64 v6; // rbp
  char *v7; // r12
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // r13
  int v11; // r8d
  int v12; // edx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // r11
  int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  _DWORD *v21; // r14
  unsigned __int64 i; // r13
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-88h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  char *v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp+18h]
  __int64 v33; // [rsp+C8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a1;
  v6 = *((_QWORD *)v3 + 2);
  v7 = (char *)v3 + 168;
  v26 = (char *)v3 + 168;
  v32 = v6;
  v8 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v9 = *((_DWORD *)v3 + 29);
  v33 = *((_QWORD *)v3 + 3);
  v24 = *((_QWORD *)v3 + 4);
  v28 = *((_QWORD *)v3 + 20);
  v25 = v8;
  if ( *((_DWORD *)v3 + 3) < v9 )
    v9 = *((_DWORD *)v3 + 3);
  if ( v4 < v9 )
  {
    v29 = v2;
    v10 = (unsigned int)(v9 - v4);
    v27 = v10;
    do
    {
      v11 = *(_DWORD *)v3;
      v12 = *((_DWORD *)v3 + 2);
      v13 = *((_QWORD *)v7 + 1);
      v14 = *((_QWORD *)v7 + 2);
      if ( *(_DWORD *)v7 > *(_DWORD *)v3 )
        v11 = *(_DWORD *)v7;
      v15 = *((_QWORD *)v7 + 3);
      v16 = v11;
      if ( *((_DWORD *)v7 + 1) < v12 )
        v12 = *((_DWORD *)v7 + 1);
      if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)(v11 + v8) && v11 < v12 )
      {
        v17 = *(_DWORD *)v3 - *(_DWORD *)v7;
        v18 = v8 + 4LL * v11;
        v19 = v8 + 4LL * v12;
        if ( v17 > 0 )
        {
          v13 += v6 * v17;
          v14 += v33 * v17;
          v15 += v24 * v17;
        }
        v20 = (v19 - v18 + 3) >> 2;
        if ( v18 > v19 )
          v20 = 0LL;
        if ( v20 )
        {
          v21 = (_DWORD *)(v8 + 4 * v16);
          for ( i = 0LL; i < v20; ++i )
          {
            v23 = XEPALOBJ::ulDispatchGFPEFunction(
                    v28,
                    *(unsigned int *)(*(_QWORD *)v28 + 100LL),
                    HIBYTE(v13) | ((HIBYTE(v14) | ((unsigned int)HIBYTE(v15) << 8)) << 8));
            v15 += v24;
            v13 += v32;
            v14 += v33;
            *v21++ = v23;
          }
          v3 = a2;
          v8 = v25;
          v7 = v26;
          v10 = v27;
          v5 = a1;
        }
        v6 = v32;
      }
      v8 += v29;
      v7 += 40;
      --v10;
      v25 = v8;
      v27 = v10;
      v26 = v7;
    }
    while ( v10 );
  }
}
