/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A95B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
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
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  char *v11; // rcx
  _DWORD *v12; // rdi
  char *v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 i; // rdi
  int v19; // eax
  char *v20; // rdi
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // eax
  void *v26; // r9
  unsigned __int64 v27; // r8
  char *v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  char *v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+B0h] [rbp+8h]
  int v34; // [rsp+C0h] [rbp+18h]
  __int64 v35; // [rsp+C0h] [rbp+18h]
  char *v36; // [rsp+C8h] [rbp+20h]
  __int64 v37; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v34 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v29 = v4;
  v31 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = *((int *)a2 + 44);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v9;
      v7 += *((_QWORD *)a2 + 15) * v9;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v10 = 4LL * *((int *)a2 + 10);
    v11 = (char *)(*((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9) + 4LL * *((int *)a2 + 8));
    v28 = v11;
    v12 = v11;
    v13 = &v11[v10];
    v30 = v11;
    v14 = v10 >> 2;
    v36 = v11;
    if ( v11 > v13 )
      v14 = 0LL;
    if ( v14 )
    {
      v15 = *((_QWORD *)a2 + 14);
      v16 = *((_QWORD *)a2 + 15);
      v17 = *((_QWORD *)a2 + 16);
      for ( i = 0LL; i != v14; ++i )
      {
        v19 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v6 += v15;
        v4 = v29;
        v7 += v16;
        v8 += v17;
        *(_DWORD *)v36 = v19;
        v36 += 4;
      }
      v12 = v30;
      v3 = a2;
      v11 = v30;
      v5 = v31;
      v2 = v34;
    }
    v20 = (char *)v12 + v2;
    v21 = v5 - 1;
    while ( v21 > 0 )
    {
      --v21;
      memmove(v20, v11, 4 * *((_DWORD *)v3 + 10));
      v11 = v28;
      v20 += v2;
    }
    return;
  }
  v22 = *((int *)a2 + 45);
  v32 = *((_QWORD *)a2 + 11);
  v35 = *((_QWORD *)a2 + 12);
  if ( (int)v22 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v22;
    v7 += *((_QWORD *)a2 + 11) * v22;
    v8 += *((_QWORD *)a2 + 12) * v22;
  }
  v23 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v37 = *((int *)a1 + 22);
    v24 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v25 = XEPALOBJ::ulDispatchGFPEFunction(
              v4,
              *(unsigned int *)(*(_QWORD *)v4 + 100LL),
              BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
      v26 = (void *)v23;
      v27 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
      if ( v27 )
      {
        if ( (v23 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v23 = v25;
        if ( --v27 )
          break;
      }
LABEL_24:
      v7 += v32;
      v6 += v24;
      v8 += v35;
      v23 += v37;
      v4 = v29;
      if ( !v5 )
        return;
    }
    v26 = (void *)(v23 + 4);
LABEL_22:
    memset64(v26, v25 | ((unsigned __int64)v25 << 32), v27 >> 1);
    if ( (v27 & 1) != 0 )
      *((_DWORD *)v26 + v27 - 1) = v25;
    goto LABEL_24;
  }
}
