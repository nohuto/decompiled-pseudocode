/*
 * XREFs of vDirectStretch8 @ 0x1C02B6110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // r13d
  int *v3; // r11
  int v4; // edx
  unsigned __int8 *v5; // r14
  int v6; // r10d
  int v7; // ecx
  int v8; // edi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  int v12; // r15d
  unsigned int v13; // r12d
  int v14; // ebx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // edi
  unsigned __int8 *v21; // rbx
  bool v22; // cf
  int *v23; // r13
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned __int8 *v27; // rbx
  int v28; // r9d
  unsigned __int8 *v29; // rbx
  int v30; // r8d
  unsigned __int8 *v31; // rbx
  int v32; // ecx
  bool v33; // zf
  int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+4h] [rbp-64h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+78h] [rbp+10h]
  int v42; // [rsp+80h] [rbp+18h]
  unsigned int v43; // [rsp+88h] [rbp+20h]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = 0;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  v8 = v1[13];
  v9 = v1[6] - v7;
  v10 = v1[12];
  v11 = (unsigned int)v1[10];
  v12 = v1[11];
  v13 = v1[15];
  v14 = ((_BYTE)v3 + (_BYTE)v7) & 3;
  LODWORD(v15) = -v6 & 3;
  v41 = v2;
  v42 = v6;
  v16 = v7 - v15 - v14;
  v35 = v14;
  v36 = v8;
  if ( v2 > 0 )
  {
    if ( v10 )
      v4 = v10 * v1[2];
    v17 = v16;
    v18 = v4;
    v39 = v16;
    v37 = v4;
    v38 = v9;
    while ( 1 )
    {
      v19 = v8 + v13;
      v20 = v1[14];
      v21 = v5;
      v43 = v19;
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
        goto LABEL_10;
      if ( v6 == 3 )
        goto LABEL_11;
LABEL_12:
      v23 = (int *)((char *)v3 + v17);
      if ( v3 != v23 )
      {
        do
        {
          v24 = *v21;
          v25 = v20 + v12;
          v26 = v20 + v12 + v12 + v12;
          v27 = &v21[(v20 + v12 < v20) + v11];
          v20 = v26 + v12;
          v28 = *v27;
          v29 = &v27[(v25 + v12 < v25) + v11];
          v30 = *v29;
          v31 = &v29[(v26 < v25 + v12) + v11];
          v32 = *v31;
          v21 = &v31[(v26 + v12 < v26) + v11];
          *v3++ = v24 | ((v28 | ((v30 | (v32 << 8)) << 8)) << 8);
        }
        while ( v3 != v23 );
        v1 = (_DWORD *)a1;
        v6 = v42;
        v19 = v43;
        v18 = v37;
      }
      if ( v35 == 1 )
        goto LABEL_20;
      LOBYTE(v15) = v35 - 2;
      if ( v35 == 2 )
        goto LABEL_19;
      if ( v35 == 3 )
      {
        v22 = v20 + v12 < v20;
        *(_BYTE *)v3 = *v21;
        v20 += v12;
        v21 += v11 + v22;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v21;
        v21 += v11 + (v20 + v12 < v20);
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v15) = *v21;
        *(_BYTE *)v3 = *v21;
        v3 = (int *)((char *)v3 + 1);
      }
      v5 += v18;
      if ( v19 < v13 )
      {
        v15 = (int)v1[2];
        v5 += v15;
      }
      v3 = (int *)((char *)v3 + v38);
      v13 = v19;
      v33 = v41-- == 1;
      v17 = v39;
      v8 = v36;
      if ( v33 )
        return v15;
    }
    v22 = v20 + v12 < v20;
    *(_BYTE *)v3 = *v5;
    v20 += v12;
    v21 = &v5[v22 + v11];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v22 = v20 + v12 < v20;
    *(_BYTE *)v3 = *v21;
    v20 += v12;
    v21 += v11 + v22;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v22 = v20 + v12 < v20;
    *(_BYTE *)v3 = *v21;
    v20 += v12;
    v21 += v11 + v22;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v15;
}
