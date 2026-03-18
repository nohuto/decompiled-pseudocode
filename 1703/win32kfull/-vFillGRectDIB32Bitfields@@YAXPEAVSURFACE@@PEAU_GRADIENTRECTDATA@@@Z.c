/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02ACFB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // r14
  __int64 v4; // r11
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  char *v12; // r12
  char *v13; // rax
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 i; // rdi
  int v21; // eax
  char *v22; // rdi
  int j; // r15d
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r13
  unsigned int v27; // eax
  void *v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // [rsp+20h] [rbp-88h]
  char *v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+B0h] [rbp+8h]
  __int64 v33; // [rsp+B0h] [rbp+8h]
  int v35; // [rsp+C0h] [rbp+18h]
  __int64 v36; // [rsp+C0h] [rbp+18h]
  char *v37; // [rsp+C8h] [rbp+20h]
  __int64 v38; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v35 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v30 = v4;
  v32 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v10 = *((int *)a2 + 44);
    if ( (int)v10 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v10;
      v7 += *((_QWORD *)a2 + 15) * v10;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v11 = *((int *)a2 + 10);
    v12 = (char *)(v9 + 4LL * *((int *)a2 + 8));
    v13 = &v12[4 * v11];
    v31 = v12;
    v37 = v12;
    v14 = (unsigned __int64)(4 * v11 + 3) >> 2;
    v15 = v12;
    if ( v12 > v13 )
      v14 = 0LL;
    if ( v14 )
    {
      v16 = v14;
      v17 = *((_QWORD *)a2 + 14);
      v18 = *((_QWORD *)a2 + 15);
      v19 = *((_QWORD *)a2 + 16);
      for ( i = 0LL; i != v16; ++i )
      {
        v21 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v6 += v17;
        v4 = v30;
        v7 += v18;
        v8 += v19;
        *(_DWORD *)v37 = v21;
        v37 += 4;
      }
      v15 = v31;
      v3 = a2;
      v12 = v31;
      v5 = v32;
      v2 = v35;
    }
    v22 = (char *)v15 + v2;
    for ( j = v5 - 1; j > 0; --j )
    {
      memmove(v22, v12, 4 * *((_DWORD *)v3 + 10));
      v22 += v2;
    }
    return;
  }
  v24 = *((int *)a2 + 45);
  v33 = *((_QWORD *)a2 + 11);
  v36 = *((_QWORD *)a2 + 12);
  if ( (int)v24 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v24;
    v7 += *((_QWORD *)a2 + 11) * v24;
    v8 += *((_QWORD *)a2 + 12) * v24;
  }
  v25 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v38 = *((int *)a1 + 22);
    v26 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v27 = XEPALOBJ::ulDispatchGFPEFunction(
              v4,
              *(unsigned int *)(*(_QWORD *)v4 + 100LL),
              BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
      v28 = (void *)v25;
      v29 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
      if ( v29 )
      {
        if ( (v25 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v25 = v27;
        if ( --v29 )
          break;
      }
LABEL_24:
      v7 += v33;
      v6 += v26;
      v8 += v36;
      v25 += v38;
      v4 = v30;
      if ( !v5 )
        return;
    }
    v28 = (void *)(v25 + 4);
LABEL_22:
    memset64(v28, v27 | ((unsigned __int64)v27 << 32), v29 >> 1);
    if ( (v29 & 1) != 0 )
      *((_DWORD *)v28 + v29 - 1) = v27;
    goto LABEL_24;
  }
}
