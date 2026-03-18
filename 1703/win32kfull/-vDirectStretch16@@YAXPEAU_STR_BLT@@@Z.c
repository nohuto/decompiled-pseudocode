/*
 * XREFs of ?vDirectStretch16@@YAXPEAU_STR_BLT@@@Z @ 0x1C02B5E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch16(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r9d
  int v4; // edi
  unsigned int v5; // r14d
  unsigned __int16 *v6; // rbx
  int v7; // edx
  unsigned __int16 *v8; // r10
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  signed int v13; // edx
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // r8
  unsigned int v18; // r15d
  unsigned int v19; // edi
  unsigned __int16 *v20; // rsi
  bool v21; // cf
  unsigned __int16 *v22; // r12
  int v23; // r9d
  unsigned int v24; // r8d
  unsigned __int16 *v25; // rcx
  bool v26; // zf
  unsigned int v27; // [rsp+0h] [rbp-68h]
  int v28; // [rsp+4h] [rbp-64h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+10h] [rbp-58h]
  unsigned int v31; // [rsp+70h] [rbp+8h]
  int v32; // [rsp+78h] [rbp+10h]
  int v33; // [rsp+80h] [rbp+18h]
  unsigned int v34; // [rsp+88h] [rbp+20h]

  v1 = *((int *)a1 + 7);
  v3 = *((_DWORD *)a1 + 6);
  v4 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a1 + 15);
  v6 = (unsigned __int16 *)(*(_QWORD *)a1 + 2LL * *((int *)a1 + 3));
  v7 = *((_DWORD *)a1 + 8) - v1;
  v33 = *((_DWORD *)a1 + 9);
  v28 = v4;
  v8 = (unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2 * v1);
  v9 = *((_DWORD *)a1 + 12);
  v10 = 2 * v7;
  v31 = *((_DWORD *)a1 + 10);
  v11 = ((unsigned int)((_DWORD)v8 - 2 * v7) >> 1) & 1;
  v12 = ((unsigned int)v8 >> 1) & 1;
  v32 = *((_DWORD *)a1 + 11);
  v27 = v12;
  v13 = v7 - v11 - v12;
  v34 = v11;
  v14 = 0;
  LODWORD(v15) = v3 - v10;
  if ( v33 > 0 )
  {
    if ( v9 )
      v14 = v9 * *((_DWORD *)a1 + 2);
    v16 = v13;
    v17 = v14;
    v15 = (int)v15;
    v29 = v14;
    v30 = (int)v15;
    do
    {
      v18 = v4 + v5;
      v19 = *((_DWORD *)a1 + 14);
      v20 = v6;
      if ( v12 )
      {
        v21 = v19 + v32 < v19;
        *v8 = *v6;
        v19 += v32;
        ++v8;
        v20 = &v6[v21 + (unsigned __int64)v31];
      }
      v22 = &v8[v16];
      if ( v8 != v22 )
      {
        do
        {
          v23 = *v20;
          v24 = v19 + v32;
          v21 = v19 + v32 < v19;
          v19 += v32 + v32;
          v25 = &v20[v21 + (unsigned __int64)v31];
          v20 = &v25[(v19 < v24) + (unsigned __int64)v31];
          *(_DWORD *)v8 = v23 | (*v25 << 16);
          v8 += 2;
        }
        while ( v8 != v22 );
        v11 = v34;
        v12 = v27;
        v17 = v29;
        v15 = v30;
      }
      if ( v11 )
        *v8++ = *v20;
      v6 = (unsigned __int16 *)((char *)v6 + v17);
      if ( v18 < v5 )
        v6 = (unsigned __int16 *)((char *)v6 + *((int *)a1 + 2));
      v16 = v13;
      v8 = (unsigned __int16 *)((char *)v8 + v15);
      v26 = v33-- == 1;
      v5 = v18;
      v4 = v28;
    }
    while ( !v26 );
  }
}
