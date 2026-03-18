/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02A28A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r9
  int v3; // r11d
  BOOL v4; // r12d
  int v5; // esi
  __int16 *v6; // r10
  unsigned int v7; // r8d
  __int64 i; // rcx
  __int16 v9; // ax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  char v13; // r10
  char v14; // r10
  int v15; // r13d
  int v16; // ecx
  int v17; // r15d
  int v18; // r8d
  int v19; // esi
  int v20; // ecx
  _DWORD *v21; // r11
  int v22; // eax
  __int64 v23; // rdx
  _BYTE *v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // r15
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  char v33; // di
  __int64 v34; // r13
  _BYTE *v35; // r15
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  int v39; // r11d
  _BYTE *v40; // r8
  _WORD *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r9
  _WORD *v44; // rsi
  unsigned __int8 v45; // di
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // r9
  _WORD *v50; // rsi
  unsigned __int8 v51; // di
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r9
  unsigned __int8 v56; // bl
  _WORD *v57; // rsi
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // ecx
  _WORD *v61; // rdx
  int v62; // r11d
  int v63; // eax
  _BYTE *v64; // r8
  int v65; // ebx
  __int64 v66; // r15
  __int64 v67; // rsi
  char v68; // r12
  unsigned __int8 v69; // r9
  _WORD *v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rbx
  unsigned __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rsi
  char v76; // r12
  _WORD *v77; // r10
  __int64 v78; // rbx
  unsigned __int64 v79; // rcx
  unsigned __int8 v80; // r9
  unsigned __int64 v81; // rax
  int v82; // [rsp+4h] [rbp-6Ch]
  int v83; // [rsp+Ch] [rbp-64h]
  int v84; // [rsp+10h] [rbp-60h]
  _WORD v85[2]; // [rsp+14h] [rbp-5Ch]
  int v86; // [rsp+18h] [rbp-58h]
  int v87; // [rsp+1Ch] [rbp-54h]
  __int64 v88; // [rsp+20h] [rbp-50h]
  int v89; // [rsp+28h] [rbp-48h]
  struct BLTINFO *v90; // [rsp+30h] [rbp-40h]
  int v91; // [rsp+38h] [rbp-38h]
  __int64 v92; // [rsp+48h] [rbp-28h]
  _DWORD v93[4]; // [rsp+50h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v3 = *((_DWORD *)a1 + 14);
  v4 = 1;
  v5 = *((_DWORD *)a1 + 7);
  v90 = a1;
  v6 = *(__int16 **)(v1 + 16);
  v91 = v5 + v3;
  v7 = (*((_DWORD *)v6 + 1) << 16) | *((_DWORD *)v6 + 1);
  v93[0] = (*(_DWORD *)v6 << 16) | *(_DWORD *)v6;
  v93[3] = v7;
  v93[1] = HIWORD(v93[0]) | (v7 << 16);
  v93[2] = (v93[0] << 16) | HIWORD(v7);
  for ( i = 0LL; i < 2; ++i )
  {
    v9 = *v6;
    v6 += 2;
    v85[i] = v9;
  }
  v10 = *((_DWORD *)v2 + 12);
  v11 = v3 & 7;
  v12 = v10 & 7;
  v13 = *((_BYTE *)v2 + 48) & 7;
  v89 = v12;
  v14 = v13 - v11;
  if ( v12 < v11 )
    v14 += 8;
  v15 = *((_DWORD *)v2 + 11);
  v16 = *((_DWORD *)v2 + 10);
  v17 = (v5 + v3) >> 3;
  v18 = v3 >> 3;
  v87 = (unsigned __int8)(8 - v14);
  v83 = v15;
  v86 = v16;
  v82 = v3 >> 3;
  v84 = v17;
  if ( v17 != v3 >> 3 )
  {
    v19 = *((_DWORD *)v2 + 8);
    v20 = (v3 + 7) >> 3;
    v21 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v3 + 7) & 0xFFFFFFF8)));
    v22 = v10 + (-v11 & 7);
    LODWORD(v23) = v17 - v20;
    v24 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v22 >> 3));
    LODWORD(v25) = v15 - 16 * (v17 - v20);
    v26 = v86 - v23;
    if ( v14 )
    {
      if ( v19 )
      {
        v33 = v87;
        v23 = (int)v23;
        v88 = (int)v23;
        v34 = v26;
        do
        {
          v35 = &v24[v23];
          --v19;
          v36 = *v24 << v14;
          if ( v24 != &v24[v23] )
          {
            do
            {
              v37 = v36 | ((unsigned __int64)(unsigned __int8)*++v24 >> v33);
              *v21 = v93[v37 >> 6];
              v21[1] = v93[(v37 >> 4) & 3];
              v21[2] = v93[(v37 >> 2) & 3];
              v21[3] = v93[v37 & 3];
              v21 += 4;
              v36 = *v24 << v14;
            }
            while ( v24 != v35 );
            v23 = v88;
          }
          v21 = (_DWORD *)((char *)v21 + (int)v25);
          v24 += v34;
        }
        while ( v19 );
        v2 = v90;
        goto LABEL_23;
      }
    }
    else if ( v19 )
    {
      v25 = (int)v25;
      v92 = (int)v25;
      v27 = v26;
      v28 = (int)v23;
      do
      {
        --v19;
        v29 = v28;
        v30 = 0LL;
        if ( v24 > &v24[v28] )
          v29 = 0LL;
        if ( v29 )
        {
          do
          {
            v31 = (unsigned __int8)*v24;
            ++v30;
            v32 = (unsigned __int8)*v24++;
            *v21 = v93[v32 >> 6];
            v21[1] = v93[(v31 >> 4) & 3];
            v21[2] = v93[(v31 >> 2) & 3];
            v21[3] = v93[v31 & 3];
            v21 += 4;
          }
          while ( v30 != v29 );
          v25 = v92;
        }
        v21 = (_DWORD *)((char *)v21 + v25);
        v24 += v27;
      }
      while ( v19 );
LABEL_23:
      v4 = 1;
      v17 = v84;
      v15 = v83;
      v12 = v89;
    }
    v16 = v86;
    v18 = v82;
    v5 = 8 - v11;
    goto LABEL_26;
  }
  v4 = v5 + v12 > 8;
LABEL_26:
  v38 = 0LL;
  if ( v11 | (v17 == v18) )
  {
    v39 = *((_DWORD *)v2 + 8);
    v40 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v41 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v12 <= v11 )
    {
      if ( v39 )
      {
        v54 = v5;
        v55 = v16;
        do
        {
          --v39;
          v56 = *v40 << v12;
          v57 = v41;
          v58 = (unsigned __int64)(v54 * 2 + 1) >> 1;
          if ( v41 > &v41[v54] )
            v58 = 0LL;
          if ( v58 )
          {
            do
            {
              ++v38;
              v59 = (unsigned __int64)v56 >> 7;
              v56 *= 2;
              *v57++ = v85[v59];
            }
            while ( v38 != v58 );
          }
          v41 = (_WORD *)((char *)v41 + v15);
          v40 += v55;
          v38 = 0LL;
        }
        while ( v39 );
        goto LABEL_52;
      }
    }
    else if ( v4 )
    {
      if ( v39 )
      {
        v42 = v5;
        v43 = v16;
        do
        {
          --v39;
          v44 = v41;
          v45 = ((unsigned __int8)(*v40 << v14) | (unsigned __int8)(v40[1] >> v87)) << v11;
          v46 = (unsigned __int64)(v42 * 2 + 1) >> 1;
          if ( v41 > &v41[v42] )
            v46 = 0LL;
          if ( v46 )
          {
            do
            {
              ++v38;
              v47 = (unsigned __int64)v45 >> 7;
              v45 *= 2;
              *v44++ = v85[v47];
            }
            while ( v38 != v46 );
          }
          v41 = (_WORD *)((char *)v41 + v15);
          v40 += v43;
          v38 = 0LL;
        }
        while ( v39 );
LABEL_52:
        v17 = v84;
        v15 = v83;
        v2 = v90;
      }
    }
    else if ( v39 )
    {
      v48 = v5;
      v49 = v16;
      do
      {
        --v39;
        v50 = v41;
        v51 = *v40 << v14 << v11;
        v52 = (unsigned __int64)(v48 * 2 + 1) >> 1;
        if ( v41 > &v41[v48] )
          v52 = 0LL;
        if ( v52 )
        {
          do
          {
            ++v38;
            v53 = (unsigned __int64)v51 >> 7;
            v51 *= 2;
            *v50++ = v85[v53];
          }
          while ( v38 != v52 );
        }
        v41 = (_WORD *)((char *)v41 + v15);
        v40 += v49;
        v38 = 0LL;
      }
      while ( v39 );
      goto LABEL_52;
    }
    v18 = v82;
  }
  if ( (v91 & 7) != 0 && v17 != v18 )
  {
    v60 = *((_DWORD *)v2 + 13) - 1;
    v61 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v91 & 0xFFFFFFF8)));
    v62 = *((_DWORD *)v2 + 8);
    v63 = ((_BYTE)v91 - 1) & 7;
    v64 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v60 >> 3));
    v65 = v63 + 1;
    if ( (v60 & 7) < v63 )
    {
      if ( v62 )
      {
        v74 = v86;
        v75 = v65;
        v76 = v14;
        do
        {
          --v62;
          v77 = v61;
          v78 = 0LL;
          v79 = (unsigned __int64)(v75 * 2 + 1) >> 1;
          v80 = (*v64 >> v87) | (*(v64 - 1) << v76);
          if ( v61 > &v61[v75] )
            v79 = 0LL;
          if ( v79 )
          {
            do
            {
              ++v78;
              v81 = (unsigned __int64)v80 >> 7;
              v80 *= 2;
              *v77++ = v85[v81];
            }
            while ( v78 != v79 );
          }
          v61 = (_WORD *)((char *)v61 + v15);
          v64 += v74;
        }
        while ( v62 );
      }
    }
    else if ( v62 )
    {
      v66 = v86;
      v67 = v65;
      v68 = v14;
      do
      {
        --v62;
        v69 = *v64 << v68;
        v70 = v61;
        v71 = (unsigned __int64)(v67 * 2 + 1) >> 1;
        v72 = 0LL;
        if ( v61 > &v61[v67] )
          v71 = 0LL;
        if ( v71 )
        {
          do
          {
            ++v72;
            v73 = (unsigned __int64)v69 >> 7;
            v69 *= 2;
            *v70++ = v85[v73];
          }
          while ( v72 != v71 );
        }
        v61 = (_WORD *)((char *)v61 + v15);
        v64 += v66;
      }
      while ( v62 );
    }
  }
}
