/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C00019C0 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  char *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r8
  _DWORD *v17; // rsi
  int v18; // edi
  unsigned __int64 v19; // r13
  char *v20; // rbx
  int v21; // r11d
  __int64 v22; // rcx
  int v23; // r11d
  char *v24; // rax
  char *v25; // r10
  __int16 *v26; // r14
  __int64 FixupScan; // rax
  int *v28; // rax
  int v29; // ecx
  __int64 v30; // r8
  _DWORD *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  _WORD *v34; // r15
  __int64 v35; // r13
  unsigned int v36; // edi
  unsigned __int64 v37; // r14
  __int16 *v38; // r15
  __int64 v39; // rax
  unsigned int v40; // eax
  int *v41; // rcx
  int v42; // edi
  int v43; // edx
  int v44; // r8d
  int v45; // eax
  __int64 v46; // r8
  signed __int64 v47; // rbx
  _DWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r14d
  char *v51; // r12
  __int64 v52; // rax
  char *v53; // rdi
  __int16 *v54; // r15
  unsigned __int64 v55; // r12
  __int64 v56; // rax
  unsigned int v57; // eax
  int v58; // r14d
  int *v59; // rcx
  int v60; // edx
  int v61; // r8d
  int v62; // eax
  _DWORD *v63; // rdx
  int v64; // eax
  _BYTE *v65; // r10
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int16 v68; // ax
  __int64 v69; // r11
  __int64 v70; // r9
  __int64 v71; // r14
  unsigned int v72; // r8d
  int v73; // ecx
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rcx
  __int16 v77; // ax
  __int64 v79; // r8
  __int64 v80; // r9
  _DWORD *v81; // rdx
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // r8
  __int64 v85; // r9
  _DWORD *v86; // rdx
  __int64 v87; // rax
  char *v88; // rcx
  int v89; // eax
  int v90; // eax
  _BYTE *v91; // rdx
  _DWORD *v92; // r8
  char *v93; // rcx
  signed __int64 v94; // r9
  int v95; // eax
  int v96; // eax
  int v97; // eax
  __int16 v98; // ax
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int16 v101; // [rsp+50h] [rbp-B0h]
  _DWORD *v102; // [rsp+58h] [rbp-A8h]
  int v103; // [rsp+60h] [rbp-A0h]
  unsigned int v104; // [rsp+64h] [rbp-9Ch]
  _DWORD *Src; // [rsp+68h] [rbp-98h]
  unsigned int v106; // [rsp+70h] [rbp-90h]
  __int64 v107; // [rsp+78h] [rbp-88h]
  _WORD *v108; // [rsp+80h] [rbp-80h]
  _WORD *v109; // [rsp+80h] [rbp-80h]
  char *v110; // [rsp+90h] [rbp-70h]
  char v111[136]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v112; // [rsp+128h] [rbp+28h]
  int v113; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v114)(char *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v115)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v116; // [rsp+1B8h] [rbp+B8h]
  __int64 v117; // [rsp+1D0h] [rbp+D0h]
  __int64 v118; // [rsp+1D8h] [rbp+D8h]
  __int64 v119; // [rsp+1E0h] [rbp+E0h]
  __int64 v120; // [rsp+220h] [rbp+120h]
  __int64 v121; // [rsp+228h] [rbp+128h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  __int64 v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  int v125; // [rsp+250h] [rbp+150h]
  int v126; // [rsp+254h] [rbp+154h]
  int v127; // [rsp+258h] [rbp+158h]
  __int64 v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  __int64 v130; // [rsp+270h] [rbp+170h]
  int v131; // [rsp+278h] [rbp+178h]
  __int16 *v132; // [rsp+2B8h] [rbp+1B8h]
  __int64 v133; // [rsp+2C0h] [rbp+1C0h]
  __int64 v134; // [rsp+2C8h] [rbp+1C8h]
  __int64 v135; // [rsp+2D0h] [rbp+1D0h]
  __int64 v136; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v137; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v138; // [rsp+2E8h] [rbp+1E8h]
  int v139; // [rsp+2F0h] [rbp+1F0h]

  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v1 = v111;
  v2 = 4LL;
  do
  {
    v1 += 128;
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *((_OWORD *)v1 - 8) = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 - 7) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 - 6) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 - 5) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 - 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 - 3) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 - 2) = v9;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = v118;
  v17 = *(_DWORD **)(v118 + 32);
  v18 = *(unsigned __int16 *)(v118 + 14);
  v107 = *(_QWORD *)(v118 + 24);
  v19 = (unsigned __int64)(v17 + 256);
  v20 = (char *)(v17 + 515);
  v21 = 12 * (*(_DWORD *)(v117 + 20) + 2);
  v22 = v21;
  v23 = v21 - 24;
  v24 = (char *)v17 + v22 + 2048;
  v103 = v23;
  v25 = &v24[v22 + 12];
  Src = v24 + 12;
  v102 = v25;
  v106 = *(unsigned __int16 *)(v117 + 12) - 1;
  if ( *(_WORD *)(v118 + 14) )
  {
    v26 = v132;
    FixupScan = GetFixupScan(v111, v132);
    SrkYDIB_SrkCX(v117, FixupScan, v26);
    v28 = v17;
    v29 = -v18;
    do
    {
      v29 += v18;
      *v28++ = v29;
    }
    while ( (unsigned __int64)v28 < v19 );
    v25 = (char *)v102;
    v30 = (__int64)v26 + 1;
    v23 = v103;
    v31 = v102;
    do
    {
      v32 = *(unsigned __int8 *)(v30 + 1);
      v30 += 3LL;
      *v31 = v17[v32];
      v31[1] = v17[*(unsigned __int8 *)(v30 - 3)];
      v31[2] = v17[*(unsigned __int8 *)(v30 - 4)];
      v31 += 3;
    }
    while ( v31 < (_DWORD *)((char *)v102 + v103) );
    v16 = v118;
    if ( !*(_WORD *)(v118 + 10) )
      *(_DWORD *)v111 |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v16 + 12);
  v34 = *(_WORD **)(v16 + 40);
  v104 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v35 = v23;
    do
    {
      v36 = (unsigned __int16)*v34;
      v37 = (unsigned __int64)&v25[v35];
      v108 = v34 + 1;
      v38 = v132;
      v39 = GetFixupScan(v111, v132);
      SrkYDIB_SrkCX(v117, v39, v38);
      if ( (v36 & 0x4000) != 0 )
      {
        v40 = v36;
        v41 = v17;
        v42 = v36 & 0x3FFF;
        v43 = -v42;
        v44 = (v40 >> 15) + *(_DWORD *)(v107 + 4) - v42;
        v45 = -v44;
        do
        {
          v43 += v42;
          v45 += v44;
          *v41 = v43;
          v41[256] = v45;
          ++v41;
        }
        while ( v41 < v17 + 256 );
        v46 = (__int64)v38 + 1;
        v25 = v20;
        v47 = v20 - (char *)v102;
        v48 = v102 + 1;
        do
        {
          v49 = *(unsigned __int8 *)(v46 + 1);
          v48 += 3;
          v46 += 3LL;
          *(v48 - 4) += v17[v49];
          *(v48 - 3) += v17[*(unsigned __int8 *)(v46 - 3)];
          *(v48 - 2) += v17[*(unsigned __int8 *)(v46 - 4)];
          *(_DWORD *)((char *)v48 + v47 - 16) = v17[*(unsigned __int8 *)(v46 - 2) + 256];
          *(_DWORD *)((char *)v48 + v47 - 12) = v17[*(unsigned __int8 *)(v46 - 3) + 256];
          *(_DWORD *)((char *)v48 + v47 - 8) = v17[*(unsigned __int8 *)(v46 - 4) + 256];
        }
        while ( (unsigned __int64)(v48 - 1) < v37 );
        v20 = (char *)Src;
        --v33;
        Src = v102;
        v102 = v25;
      }
      else
      {
        v25 = (char *)v102;
        v84 = (__int64)v38 + 1;
        v85 = v107 + ((v36 >> 5) & 0x400);
        v86 = v102 + 2;
        do
        {
          v87 = *(unsigned __int8 *)(v84 + 1);
          v86 += 3;
          v84 += 3LL;
          *(v86 - 5) += *(_DWORD *)(v85 + 4 * v87);
          *(v86 - 4) += *(_DWORD *)(v85 + 4LL * *(unsigned __int8 *)(v84 - 3));
          *(v86 - 3) += *(_DWORD *)(v85 + 4LL * *(unsigned __int8 *)(v84 - 4));
        }
        while ( (unsigned __int64)(v86 - 2) < v37 );
      }
      v34 = v108;
    }
    while ( v33 );
    v16 = v118;
    v19 = (unsigned __int64)(v17 + 256);
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v20, Src, v103);
  v50 = (unsigned __int16)*v34;
  if ( *v34 )
  {
    v51 = (char *)v102;
    v52 = v103;
    do
    {
      v109 = v34 + 1;
      v53 = v51;
      v54 = v132;
      v55 = (unsigned __int64)&v51[v52];
      v56 = GetFixupScan(v111, v132);
      SrkYDIB_SrkCX(v117, v56, v54);
      if ( (v50 & 0x4000) != 0 )
      {
        v57 = v50;
        v58 = v50 & 0x3FFF;
        v59 = v17;
        v60 = -v58;
        v61 = (v57 >> 15) + *(_DWORD *)(v107 + 4) - v58;
        v62 = -v61;
        do
        {
          v60 += v58;
          v62 += v61;
          *v59 = v60;
          v59[256] = v62;
          ++v59;
        }
        while ( (unsigned __int64)v59 < v19 );
        v63 = Src;
        v110 = v20;
        v64 = *(_DWORD *)((char *)Src + v103 - 4);
        *(_QWORD *)((char *)Src + v103) = *(_QWORD *)((char *)Src + v103 - 12);
        *(_DWORD *)((char *)Src + v103 + 8) = v64;
        v65 = v137;
        if ( v106 )
        {
          v101 = *v54;
          v66 = *((unsigned __int8 *)v54 + 2);
          v54 = (__int16 *)((char *)v54 + 3);
          v53 = (char *)(v102 + 3);
          *v102 += v17[v66];
          v102[1] += v17[HIBYTE(v101)];
          v102[2] += v17[(unsigned __int8)v101];
          *(_DWORD *)v20 = v17[(unsigned int)v66 + 256];
          *((_DWORD *)v20 + 1) = v17[HIBYTE(v101) + 256];
          v63 = Src + 3;
          *((_DWORD *)v20 + 2) = v17[(unsigned __int8)v101 + 256];
          v20 += 12;
        }
        else
        {
          v83 = Src[2];
          *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
          *(Src - 1) = v83;
        }
        v67 = (unsigned __int64)(v63 + 5);
        do
        {
          v68 = *v54;
          v54 = (__int16 *)((char *)v54 + 3);
          v69 = HIBYTE(v68);
          v70 = *((unsigned __int8 *)v54 - 1);
          v71 = (unsigned __int8)v68;
          *(_DWORD *)v53 += v17[v70];
          *((_DWORD *)v53 + 1) += v17[HIBYTE(v68)];
          *((_DWORD *)v53 + 2) += v17[(unsigned __int8)v68];
          v72 = (12 * *(_DWORD *)(v67 - 12)
               - *(_DWORD *)(v67 - 24)
               - *(_DWORD *)v67
               - *((_DWORD *)v53 + 2)
               - *((_DWORD *)v20 + 2)) >> 16;
          if ( (v72 & 0xFF00) != 0 )
            v72 = ~HIBYTE(v72);
          *v65 = v72;
          v73 = (12 * *(_DWORD *)(v67 - 16)
               - *(_DWORD *)(v67 - 28)
               - *(_DWORD *)(v67 - 4)
               - *((_DWORD *)v53 + 1)
               - *((_DWORD *)v20 + 1)) >> 16;
          if ( (v73 & 0xFF00) != 0 )
            LOBYTE(v73) = ~HIBYTE(v73);
          v65[1] = v73;
          v74 = (12 * *(_DWORD *)(v67 - 20)
               - *(_DWORD *)(v67 - 32)
               - *(_DWORD *)(v67 - 8)
               - *(_DWORD *)v53
               - *(_DWORD *)v20) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          v65[2] = v74;
          v67 += 12LL;
          v53 += 12;
          *(_DWORD *)v20 = v17[v70 + 256];
          *((_DWORD *)v20 + 1) = v17[v69 + 256];
          *((_DWORD *)v20 + 2) = v17[v71 + 256];
          v20 += 12;
          v65 += v139;
        }
        while ( v65 != v138 );
        if ( (unsigned __int64)v53 < v55 )
        {
          v67 = (unsigned __int8)HIBYTE(*v54);
          v75 = *((unsigned __int8 *)v54 + 2);
          v76 = (unsigned __int8)*v54;
          *(_DWORD *)v53 += v17[v75];
          *((_DWORD *)v53 + 1) += v17[v67];
          *((_DWORD *)v53 + 2) += v17[v76];
          *(_DWORD *)v20 = v17[v75 + 256];
          *((_DWORD *)v20 + 1) = v17[v67 + 256];
          *((_DWORD *)v20 + 2) = v17[v76 + 256];
        }
        v51 = v110;
        v77 = *(_WORD *)v111;
        v20 = (char *)Src;
        Src = v102;
        v102 = v110;
        if ( v111[0] < 0 )
        {
          v114(v111, v67);
          v77 = *(_WORD *)v111;
        }
        if ( (v77 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v111, v67);
          LOBYTE(v77) = v111[0];
        }
        if ( (v77 & 0x10) != 0 )
        {
          MappingBGRF(v133, v134, v121, v128);
          v99 = v131 + v128;
          if ( v99 == v129 )
            v99 = v130;
          v128 = v99;
        }
        v115(v111, v135, v136, v112, v120, v122, v122 + v126, v127, v116);
        v122 += v125;
        if ( v122 == v123 )
          v122 = v124;
        v112 += v113;
        ++v104;
      }
      else
      {
        v79 = (__int64)v54 + 1;
        v80 = v107 + ((v50 >> 5) & 0x400);
        v81 = v102 + 2;
        do
        {
          v82 = *(unsigned __int8 *)(v79 + 1);
          v81 += 3;
          v79 += 3LL;
          *(v81 - 5) += *(_DWORD *)(v80 + 4 * v82);
          *(v81 - 4) += *(_DWORD *)(v80 + 4LL * *(unsigned __int8 *)(v79 - 3));
          *(v81 - 3) += *(_DWORD *)(v80 + 4LL * *(unsigned __int8 *)(v79 - 4));
        }
        while ( (unsigned __int64)(v81 - 2) < v55 );
        v51 = (char *)v102;
      }
      v34 = v109;
      v52 = v103;
      v50 = (unsigned __int16)*v109;
    }
    while ( *v109 );
  }
  if ( v112 == v119 )
    return v104;
  v88 = (char *)Src + v103;
  v89 = *((_DWORD *)v88 - 1);
  *(_QWORD *)v88 = *(_QWORD *)(v88 - 12);
  *((_DWORD *)v88 + 2) = v89;
  v90 = Src[2];
  v91 = v137;
  *(_QWORD *)(Src - 3) = *(_QWORD *)Src;
  *(Src - 1) = v90;
  v92 = &Src[3 * v106];
  v93 = &v20[12 * v106 + 4];
  v94 = (char *)Src - v20;
  do
  {
    v95 = (11 * *(_DWORD *)&v93[v94 + 4] - *(_DWORD *)&v93[v94 - 8] - *(_DWORD *)&v93[v94 + 16] - *((_DWORD *)v93 + 1)) >> 16;
    if ( (v95 & 0xFF00) != 0 )
      LOBYTE(v95) = ~HIBYTE(v95);
    *v91 = v95;
    v96 = (11 * *(_DWORD *)&v93[v94] - *(_DWORD *)&v93[v94 - 12] - *(_DWORD *)&v93[v94 + 12] - *(_DWORD *)v93) >> 16;
    if ( (v96 & 0xFF00) != 0 )
      LOBYTE(v96) = ~HIBYTE(v96);
    v91[1] = v96;
    v97 = (11 * *v92 - *(_DWORD *)&v93[v94 + 8] - *(_DWORD *)&v93[v94 - 16] - *((_DWORD *)v93 - 1)) >> 16;
    if ( (v97 & 0xFF00) != 0 )
      LOBYTE(v97) = ~HIBYTE(v97);
    v91[2] = v97;
    v92 += 3;
    v93 += 12;
    v91 += v139;
  }
  while ( v91 != v138 );
  v98 = *(_WORD *)v111;
  if ( v111[0] < 0 )
  {
    ((void (__fastcall *)(char *, _BYTE *, _DWORD *))v114)(v111, v91, v92);
    v98 = *(_WORD *)v111;
  }
  if ( (v98 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v111, v91);
    LOBYTE(v98) = v111[0];
  }
  if ( (v98 & 0x10) != 0 )
  {
    MappingBGRF(v133, v134, v121, v128);
    v100 = v131 + v128;
    if ( v100 == v129 )
      v100 = v130;
    v128 = v100;
  }
  v115(v111, v135, v136, v112, v120, v122, v122 + v126, v127, v116);
  return v104 + 1;
}
