/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C00AC600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  char *v2; // rdx
  char v3; // r9
  char v4; // r8
  char v5; // al
  int v6; // edx
  int v7; // r14d
  int v8; // ecx
  int v9; // edi
  char v10; // r9
  int v11; // r11d
  int v12; // r12d
  int v13; // r13d
  int v14; // esi
  char v15; // r8
  int v16; // r15d
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  _BYTE *v20; // r11
  __int64 v21; // rdx
  _BYTE *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  char v32; // r10
  unsigned __int8 v33; // al
  _BYTE *v34; // r10
  unsigned __int64 v35; // rdx
  int v36; // esi
  int v37; // eax
  int v38; // r11d
  int *v39; // r8
  char *v40; // rbx
  char v41; // al
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // ecx
  unsigned __int8 v45; // al
  int v46; // ecx
  unsigned __int64 v47; // rdx
  int v48; // ecx
  int *v49; // r8
  int v50; // ebx
  _BYTE *v51; // r11
  int v52; // r10d
  unsigned __int8 v53; // al
  int v54; // ecx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  int v57; // ecx
  unsigned __int64 v58; // rdx
  char v59; // [rsp+0h] [rbp-58h]
  int v60; // [rsp+4h] [rbp-54h]
  int v61; // [rsp+Ch] [rbp-4Ch]
  int v62; // [rsp+10h] [rbp-48h]
  int v63; // [rsp+14h] [rbp-44h]
  __int64 v64; // [rsp+18h] [rbp-40h]
  int v65; // [rsp+20h] [rbp-38h]
  int v66; // [rsp+28h] [rbp-30h]
  __int64 v67; // [rsp+40h] [rbp-18h]
  char v69; // [rsp+B0h] [rbp+58h]
  char v70; // [rsp+B1h] [rbp+59h]
  char v71; // [rsp+B2h] [rbp+5Ah]
  char v72; // [rsp+B3h] [rbp+5Bh]
  int v73; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v66 = *((_DWORD *)a1 + 13);
  v2 = *(char **)(*(_QWORD *)a1 + 16LL);
  v3 = v2[4];
  v4 = *v2;
  v5 = 16 * *v2;
  v70 = v3 | v5;
  v6 = *((_DWORD *)a1 + 12);
  v7 = v6 & 7;
  v69 = v4 | v5;
  v63 = v7;
  v72 = v3 | (16 * v3);
  v8 = *((_DWORD *)a1 + 14);
  v9 = v8 & 7;
  v71 = v4 | (16 * v3);
  v10 = (v6 & 7) - (v8 & 7);
  if ( v7 < v9 )
    v10 += 8;
  v11 = *((_DWORD *)v1 + 7);
  v12 = *((_DWORD *)v1 + 11);
  v13 = *((_DWORD *)v1 + 10);
  v14 = v8 >> 3;
  v15 = v8 + v11;
  v59 = 8 - v10;
  v16 = (v8 + v11) >> 3;
  v73 = v11;
  v61 = v8 + v11;
  v65 = v12;
  v62 = v13;
  v60 = v8 >> 3;
  if ( v16 != v8 >> 3 )
  {
    v17 = *((_DWORD *)v1 + 8);
    v18 = v8 + 7;
    v19 = v6 + (-v9 & 7);
    v20 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)v18 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v21) = v16 - (v18 >> 3);
    v22 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)v19 >> 3));
    LODWORD(v23) = v12 - 4 * v21;
    v24 = v13 - v21;
    if ( v10 )
    {
      if ( !v17 )
        goto LABEL_14;
      v21 = (int)v21;
      v67 = (int)v21;
      v31 = v24;
      v32 = v10;
      do
      {
        v33 = *v22 << v32;
        --v17;
        if ( v22 != &v22[v21] )
        {
          v34 = &v22[v21];
          do
          {
            v35 = v33 | ((unsigned __int64)(unsigned __int8)*++v22 >> v59);
            *v20 = *(&v69 + (v35 >> 6));
            v20[1] = *(&v69 + ((v35 >> 4) & 3));
            v20[2] = *(&v69 + ((v35 >> 2) & 3));
            v20[3] = *(&v69 + (v35 & 3));
            v20 += 4;
            v33 = *v22 << v10;
          }
          while ( v22 != v34 );
          v21 = v67;
          v32 = v10;
        }
        v20 += (int)v23;
        v22 += v31;
      }
      while ( v17 );
      v1 = a1;
      v12 = v65;
    }
    else
    {
      if ( !v17 )
      {
LABEL_14:
        v11 = v73;
        v15 = v61;
        goto LABEL_15;
      }
      v23 = (int)v23;
      v64 = (int)v23;
      v25 = v24;
      v26 = (int)v21;
      do
      {
        --v17;
        v27 = v26;
        v28 = 0LL;
        if ( v22 > &v22[v26] )
          v27 = 0LL;
        if ( v27 )
        {
          do
          {
            v29 = (unsigned __int8)*v22;
            ++v28;
            v30 = (unsigned __int8)*v22++;
            *v20 = *(&v69 + (v30 >> 6));
            v20[1] = *(&v69 + ((v29 >> 4) & 3));
            v20[2] = *(&v69 + ((v29 >> 2) & 3));
            v20[3] = *(&v69 + (v29 & 3));
            v20 += 4;
          }
          while ( v28 != v27 );
          v23 = v64;
        }
        v20 += v23;
        v22 += v25;
      }
      while ( v17 );
    }
    v14 = v60;
    v13 = v62;
    v7 = v63;
    goto LABEL_14;
  }
LABEL_15:
  if ( v9 | (v16 == v14) )
  {
    v36 = dword_1C02F40F8[v9];
    if ( v16 == v60 )
      v36 &= dword_1C02F40D8[v15 & 7];
    v37 = v11 + v7;
    v38 = *((_DWORD *)v1 + 8);
    v39 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v40 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( v7 < v9 )
    {
      if ( !v38 )
        goto LABEL_33;
      do
      {
        v47 = (unsigned __int64)(unsigned __int8)*v40 >> v59;
        v40 += v13;
        v48 = *v39 & ~v36;
        LOBYTE(v73) = *(&v69 + (v47 >> 6));
        BYTE1(v73) = *(&v69 + ((v47 >> 4) & 3));
        BYTE2(v73) = *(&v69 + ((v47 >> 2) & 3));
        HIBYTE(v73) = *(&v69 + (v47 & 3));
        v73 &= v36;
        *v39 = v73 | v48;
        v39 = (int *)((char *)v39 + v12);
        --v38;
      }
      while ( v38 );
    }
    else
    {
      if ( v37 > 8 )
      {
        if ( v38 )
        {
          do
          {
            v41 = *v40;
            v42 = (unsigned __int8)v40[1];
            v40 += v13;
            v43 = (unsigned __int8)(v41 << v10) | (v42 >> v59);
            v44 = *v39 & ~v36;
            LOBYTE(v73) = *(&v69 + (v43 >> 6));
            BYTE1(v73) = *(&v69 + ((v43 >> 4) & 3));
            BYTE2(v73) = *(&v69 + ((v43 >> 2) & 3));
            HIBYTE(v73) = *(&v69 + (v43 & 3));
            v73 &= v36;
            *v39 = v73 | v44;
            v39 = (int *)((char *)v39 + v12);
            --v38;
          }
          while ( v38 );
          v1 = a1;
          v13 = v62;
        }
        goto LABEL_33;
      }
      if ( !v38 )
      {
LABEL_33:
        v14 = v60;
        goto LABEL_16;
      }
      do
      {
        v45 = *v40 << v10;
        v40 += v13;
        LOBYTE(v73) = *(&v69 + ((unsigned __int64)v45 >> 6));
        BYTE1(v73) = *(&v69 + (((unsigned __int64)v45 >> 4) & 3));
        BYTE2(v73) = *(&v69 + (((unsigned __int64)v45 >> 2) & 3));
        v46 = *v39 & ~v36;
        HIBYTE(v73) = *(&v69 + (v45 & 3));
        v73 &= v36;
        *v39 = v73 | v46;
        v39 = (int *)((char *)v39 + v12);
        --v38;
      }
      while ( v38 );
    }
    v1 = a1;
    goto LABEL_33;
  }
LABEL_16:
  if ( (v61 & 7) != 0 && v16 != v14 )
  {
    v49 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v61 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v50 = dword_1C02F40D8[v61 & 7];
    v51 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 13) - 1) >> 3));
    v52 = *((_DWORD *)v1 + 8);
    if ( (unsigned __int8)((v66 - 1) & 7) < (unsigned __int8)((v61 - 1) & 7) )
    {
      for ( ; v52; --v52 )
      {
        v55 = (unsigned __int8)(*(v51 - 1) << v10);
        v56 = (unsigned __int8)*v51;
        v51 += v13;
        v57 = *v49 & ~v50;
        v58 = (v56 >> v59) | v55;
        LOBYTE(v73) = *(&v69 + (v58 >> 6));
        BYTE1(v73) = *(&v69 + ((v58 >> 4) & 3));
        BYTE2(v73) = *(&v69 + ((v58 >> 2) & 3));
        HIBYTE(v73) = *(&v69 + (v58 & 3));
        v73 &= v50;
        *v49 = v73 | v57;
        v49 = (int *)((char *)v49 + v12);
      }
    }
    else
    {
      for ( ; v52; --v52 )
      {
        v53 = *v51 << v10;
        v51 += v13;
        LOBYTE(v73) = *(&v69 + ((unsigned __int64)v53 >> 6));
        BYTE1(v73) = *(&v69 + (((unsigned __int64)v53 >> 4) & 3));
        BYTE2(v73) = *(&v69 + (((unsigned __int64)v53 >> 2) & 3));
        v54 = *v49 & ~v50;
        HIBYTE(v73) = *(&v69 + (v53 & 3));
        v73 &= v50;
        *v49 = v73 | v54;
        v49 = (int *)((char *)v49 + v12);
      }
    }
  }
}
