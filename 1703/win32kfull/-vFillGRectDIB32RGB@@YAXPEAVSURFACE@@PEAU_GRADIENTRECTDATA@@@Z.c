/*
 * XREFs of ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AD2A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vFillGRectDIB32RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  __int64 v4; // r15
  int v5; // r9d
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // ecx
  int *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  int *v18; // r13
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int64 v21; // rax
  char *v22; // rdi
  char *i; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  void *v26; // r12
  unsigned int v27; // r11d
  unsigned __int64 v28; // r10
  int v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+70h] [rbp+8h]
  int v31; // [rsp+78h] [rbp+10h]
  __int64 v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v4 = 0LL;
  v29 = v2;
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v31 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v10 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v10 - 1) <= 0x9C3FFF )
    {
      v11 = (int *)AllocFreeTmpBuffer((unsigned int)(4 * v10));
      if ( v11 )
      {
        v12 = *((int *)a2 + 44);
        v13 = *((_QWORD *)a2 + 14);
        v14 = *((_QWORD *)a2 + 15);
        v15 = *((_QWORD *)a2 + 16);
        if ( (int)v12 > 0 )
        {
          v6 += v13 * v12;
          v7 += v14 * v12;
          v8 += v15 * *((int *)a2 + 44);
        }
        v16 = *((int *)a2 + 10);
        v17 = (unsigned __int64)(4 * v16 + 3) >> 2;
        if ( v11 > &v11[v16] )
          v17 = 0LL;
        if ( v17 )
        {
          v18 = v11;
          do
          {
            ++v4;
            v19 = HIWORD(v8);
            v8 += v15;
            v20 = (unsigned __int8)v19;
            v21 = HIWORD(v7);
            v7 += v14;
            BYTE6(v21) = BYTE6(v6);
            v6 += v13;
            *v18++ = BYTE6(v21) | (((unsigned __int8)v21 | (v20 << 8)) << 8);
          }
          while ( v4 != v17 );
          v2 = v29;
        }
        v22 = (char *)(v9 + 4LL * *((int *)a2 + 8));
        for ( i = &v22[v2 * v31]; v22 != i; v22 += v2 )
          memmove(v22, v11, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v11);
      }
    }
    return;
  }
  v24 = *((int *)a2 + 45);
  v32 = *((_QWORD *)a2 + 11);
  v33 = *((_QWORD *)a2 + 12);
  if ( (int)v24 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v24;
    v7 += *((_QWORD *)a2 + 11) * v24;
    v8 += *((_QWORD *)a2 + 12) * v24;
  }
  v25 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v34 = *((int *)a1 + 22);
    v30 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v26 = (void *)v25;
      v27 = BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8);
      v28 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v28 )
      {
        if ( (v25 & 4) == 0 )
          goto LABEL_23;
        *(_DWORD *)v25 = v27;
        if ( --v28 )
          break;
      }
LABEL_25:
      v7 += v32;
      v6 += v30;
      v8 += v33;
      v25 += v34;
      if ( !v5 )
        return;
    }
    v26 = (void *)(v25 + 4);
LABEL_23:
    memset64(v26, v27 | ((unsigned __int64)v27 << 32), v28 >> 1);
    if ( (v28 & 1) != 0 )
      *((_DWORD *)v26 + v28 - 1) = v27;
    goto LABEL_25;
  }
}
