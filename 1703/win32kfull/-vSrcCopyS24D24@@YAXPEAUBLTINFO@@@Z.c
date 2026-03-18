/*
 * XREFs of ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C012A6E0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  unsigned int v2; // r12d
  int v3; // eax
  XLATEOBJ *v4; // r15
  unsigned __int8 *v5; // rcx
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // r12d
  unsigned int v9; // esi
  int v10; // r12d
  __int64 v11; // r14
  unsigned __int8 *v12; // rbx
  unsigned int i; // edi
  ULONG v14; // eax
  unsigned int v15; // r13d
  ULONG v16; // ebp
  ULONG v17; // esi
  ULONG v18; // edi
  ULONG v19; // eax
  int v20; // edi
  unsigned __int16 *v21; // rbx
  ULONG v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  int v27; // [rsp+98h] [rbp+10h]
  unsigned int v28; // [rsp+A0h] [rbp+18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 14);
  v4 = *(XLATEOBJ **)a1;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v24 = v5;
  v27 = *((_DWORD *)v1 + 8);
  v6 = *((_QWORD *)v1 + 2) + 3 * v3;
  v25 = v6;
  v7 = (*((_BYTE *)v1 + 16) + 3 * (_BYTE)v3) & 3;
  v28 = v7;
  if ( v7 > v2 )
  {
    v7 = v2;
    v28 = v2;
  }
  v8 = v2 - v7;
  v9 = v8 >> 2;
  v23 = v8 >> 2;
  v10 = v8 & 3;
  while ( 1 )
  {
    v11 = v6;
    v12 = v5;
    for ( i = v7; i; --i )
    {
      v14 = XLATEOBJ_iXlate(v4, *v12 | (*(unsigned __int16 *)(v12 + 1) << 8));
      *(_BYTE *)v11 = v14;
      v12 += 3;
      *(_BYTE *)(v11 + 1) = BYTE1(v14);
      *(_BYTE *)(v11 + 2) = BYTE2(v14);
      v11 += 3LL;
    }
    if ( v9 )
    {
      v15 = v9;
      do
      {
        v16 = XLATEOBJ_iXlate(v4, *v12 | (*(unsigned __int16 *)(v12 + 1) << 8));
        v17 = XLATEOBJ_iXlate(v4, v12[3] | (*((unsigned __int16 *)v12 + 2) << 8));
        v18 = XLATEOBJ_iXlate(v4, v12[6] | (*(unsigned __int16 *)(v12 + 7) << 8));
        v19 = XLATEOBJ_iXlate(v4, v12[9] | (*((unsigned __int16 *)v12 + 5) << 8));
        v12 += 12;
        *(_DWORD *)v11 = v16 | (v17 << 24);
        *(_DWORD *)(v11 + 4) = (v17 >> 8) | (v18 << 16);
        *(_DWORD *)(v11 + 8) = HIWORD(v18) | (v19 << 8);
        v11 += 12LL;
        --v15;
      }
      while ( v15 );
      v1 = a1;
      v9 = v23;
      v6 = v25;
    }
    v20 = v10;
    if ( v10 )
    {
      v21 = (unsigned __int16 *)(v12 + 1);
      do
      {
        v22 = XLATEOBJ_iXlate(v4, *((unsigned __int8 *)v21 - 1) | (*v21 << 8));
        *(_BYTE *)v11 = v22;
        v11 += 3LL;
        v21 = (unsigned __int16 *)((char *)v21 + 3);
        *(_BYTE *)(v11 - 2) = BYTE1(v22);
        *(_BYTE *)(v11 - 1) = BYTE2(v22);
        --v20;
      }
      while ( v20 );
    }
    if ( !--v27 )
      break;
    v5 = &v24[*((int *)v1 + 10)];
    v6 += *((int *)v1 + 11);
    v24 = v5;
    v7 = v28;
    v25 = v6;
  }
}
