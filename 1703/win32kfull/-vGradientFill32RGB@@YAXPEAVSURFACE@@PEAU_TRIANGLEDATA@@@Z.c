/*
 * XREFs of ?vGradientFill32RGB@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // r8d
  char *v3; // rsi
  struct _TRIANGLEDATA *v4; // r11
  struct SURFACE *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // r13
  int v11; // r10d
  struct _TRIANGLEDATA *v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  _DWORD *v17; // r14
  int v18; // r9d
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  int v23; // r10d
  int v24; // r10d
  unsigned __int64 v25; // r8
  __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp+18h]
  __int64 v31; // [rsp+78h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = a2;
  v5 = a1;
  v6 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v2;
  v30 = *((_QWORD *)a2 + 2);
  v31 = *((_QWORD *)a2 + 3);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 29);
  v26 = v7;
  if ( *((_DWORD *)v4 + 3) < v8 )
    v8 = *((_DWORD *)v4 + 3);
  if ( v2 < v8 )
  {
    v27 = *((int *)a1 + 22);
    v9 = (unsigned int)(v8 - v2);
    v10 = v27;
    do
    {
      v11 = *((_DWORD *)v4 + 2);
      v12 = v4;
      v13 = *((_QWORD *)v3 + 1);
      v14 = *((_QWORD *)v3 + 2);
      if ( *(_DWORD *)v3 > *(_DWORD *)v4 )
        v12 = (struct _TRIANGLEDATA *)v3;
      v15 = *((_QWORD *)v3 + 3);
      if ( *((_DWORD *)v3 + 1) < v11 )
        v11 = *((_DWORD *)v3 + 1);
      v16 = *(int *)v12;
      if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)(v16 + v6) && (int)v16 < v11 )
      {
        v17 = (_DWORD *)(v6 + 4 * v16);
        v18 = *(_DWORD *)v4 - *(_DWORD *)v3;
        v19 = v6 + 4LL * v11;
        if ( v18 > 0 )
        {
          v13 += v30 * v18;
          v14 += v31 * v18;
          v15 += v26 * v18;
        }
        v20 = 0LL;
        v21 = (v19 - (unsigned __int64)v17 + 3) >> 2;
        if ( (unsigned __int64)v17 > v19 )
          v21 = 0LL;
        if ( v21 )
        {
          do
          {
            v22 = v14;
            v14 += v31;
            v23 = HIBYTE(v15) << 8;
            v15 += v26;
            ++v20;
            v24 = HIBYTE(v22) | v23;
            v25 = HIBYTE(v13);
            v13 += v30;
            *v17++ = v25 | (v24 << 8);
          }
          while ( v20 < v21 );
          v4 = a2;
          v5 = a1;
          v10 = v27;
        }
      }
      v6 += v10;
      v3 += 40;
      --v9;
    }
    while ( v9 );
  }
}
