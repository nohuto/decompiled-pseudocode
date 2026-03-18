/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C0001A10 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0243B3C (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0247FD0 (MappingBGRF.c)
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
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r9d
  char *v24; // rax
  char *v25; // r10
  char *v26; // r15
  __int16 *v27; // r14
  __int64 FixupScan; // rax
  int *v29; // rax
  int v30; // ecx
  __int64 v31; // r8
  _DWORD *v32; // rdx
  __int64 v33; // rax
  int v34; // r12d
  _WORD *v35; // rax
  __int64 v36; // r13
  unsigned int v37; // edi
  __int16 *v38; // r15
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  unsigned int v41; // ecx
  int v42; // edi
  int *v43; // rdx
  int v44; // r8d
  int v45; // r9d
  int v46; // eax
  __int64 v47; // r8
  char *v48; // r9
  signed __int64 v49; // rbx
  _DWORD *v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r14d
  char *v53; // r15
  __int64 v54; // rcx
  unsigned __int64 v55; // r12
  char *v56; // rdi
  __int16 *v57; // r15
  __int64 v58; // rax
  unsigned int v59; // ecx
  int v60; // r14d
  int *v61; // rdx
  int v62; // r8d
  int v63; // r9d
  int v64; // eax
  char *v65; // rdx
  int v66; // eax
  _BYTE *v67; // r10
  unsigned __int16 v68; // ax
  __int64 v69; // r9
  unsigned __int64 v70; // rdx
  unsigned __int16 v71; // ax
  __int64 v72; // r9
  unsigned __int8 v73; // r11
  unsigned __int8 v74; // r14
  unsigned int v75; // r8d
  int v76; // ecx
  int v77; // eax
  __int64 v78; // r9
  __int64 v79; // r8
  __int16 v80; // ax
  __int64 v82; // r8
  __int64 v83; // r9
  _DWORD *v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // r8
  __int64 v88; // r9
  _DWORD *v89; // rdx
  __int64 v90; // rax
  char *v91; // rcx
  int v92; // eax
  int v93; // eax
  _BYTE *v94; // rdx
  char *v95; // r8
  char *v96; // rcx
  signed __int64 v97; // r9
  int v98; // eax
  int v99; // eax
  int v100; // eax
  __int16 v101; // ax
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // [rsp+54h] [rbp-ACh]
  _DWORD *v105; // [rsp+58h] [rbp-A8h]
  unsigned int v106; // [rsp+60h] [rbp-A0h]
  char *v107; // [rsp+68h] [rbp-98h]
  _WORD *v108; // [rsp+70h] [rbp-90h]
  _WORD *v109; // [rsp+70h] [rbp-90h]
  unsigned int v110; // [rsp+78h] [rbp-88h]
  __int64 v111; // [rsp+80h] [rbp-80h]
  char *v112; // [rsp+90h] [rbp-70h]
  char v113[136]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v114; // [rsp+128h] [rbp+28h]
  int v115; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v116)(char *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v117)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v118; // [rsp+1B8h] [rbp+B8h]
  __int64 v119; // [rsp+1D0h] [rbp+D0h]
  __int64 v120; // [rsp+1D8h] [rbp+D8h]
  __int64 v121; // [rsp+1E0h] [rbp+E0h]
  __int64 v122; // [rsp+220h] [rbp+120h]
  __int64 v123; // [rsp+228h] [rbp+128h]
  __int64 v124; // [rsp+238h] [rbp+138h]
  __int64 v125; // [rsp+240h] [rbp+140h]
  __int64 v126; // [rsp+248h] [rbp+148h]
  int v127; // [rsp+250h] [rbp+150h]
  int v128; // [rsp+254h] [rbp+154h]
  int v129; // [rsp+258h] [rbp+158h]
  __int64 v130; // [rsp+260h] [rbp+160h]
  __int64 v131; // [rsp+268h] [rbp+168h]
  __int64 v132; // [rsp+270h] [rbp+170h]
  int v133; // [rsp+278h] [rbp+178h]
  __int16 *v134; // [rsp+2B8h] [rbp+1B8h]
  __int64 v135; // [rsp+2C0h] [rbp+1C0h]
  __int64 v136; // [rsp+2C8h] [rbp+1C8h]
  __int64 v137; // [rsp+2D0h] [rbp+1D0h]
  __int64 v138; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v139; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v140; // [rsp+2E8h] [rbp+1E8h]
  int v141; // [rsp+2F0h] [rbp+1F0h]

  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v1 = v113;
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
  v16 = v120;
  v17 = *(_DWORD **)(v120 + 32);
  v18 = *(unsigned __int16 *)(v120 + 14);
  v111 = *(_QWORD *)(v120 + 24);
  v19 = (unsigned __int64)(v17 + 256);
  v20 = (char *)(v17 + 515);
  v21 = 12 * (*(_DWORD *)(v119 + 20) + 2);
  v22 = v21;
  v23 = v21 - 24;
  v24 = (char *)v17 + v22 + 2048;
  v104 = v23;
  v25 = &v24[v22 + 12];
  v26 = v24 + 12;
  v107 = v24 + 12;
  v105 = v25;
  v110 = *(unsigned __int16 *)(v119 + 12) - 1;
  if ( *(_WORD *)(v120 + 14) )
  {
    v27 = v134;
    FixupScan = GetFixupScan(v113, v134);
    SrkYDIB_SrkCX(v119, FixupScan, v27);
    v29 = v17;
    v30 = -v18;
    do
    {
      v30 += v18;
      *v29++ = v30;
    }
    while ( (unsigned __int64)v29 < v19 );
    v25 = (char *)v105;
    v31 = (__int64)v27 + 1;
    v32 = v105;
    do
    {
      v33 = *(unsigned __int8 *)(v31 + 1);
      v31 += 3LL;
      *v32 = v17[v33];
      v32[1] = v17[*(unsigned __int8 *)(v31 - 3)];
      v32[2] = v17[*(unsigned __int8 *)(v31 - 4)];
      v32 += 3;
    }
    while ( v32 < (_DWORD *)((char *)v105 + v104) );
    v16 = v120;
    v23 = v104;
    if ( !*(_WORD *)(v120 + 10) )
      *(_DWORD *)v113 |= 0x20u;
  }
  v34 = *(unsigned __int16 *)(v16 + 12);
  v35 = *(_WORD **)(v16 + 40);
  v108 = v35;
  v106 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v36 = v23;
    do
    {
      v37 = (unsigned __int16)*v35;
      v38 = v134;
      v39 = (unsigned __int64)&v25[v36];
      v108 = v35 + 1;
      v40 = GetFixupScan(v113, v134);
      SrkYDIB_SrkCX(v119, v40, v38);
      if ( (v37 & 0x4000) != 0 )
      {
        v41 = v37;
        v42 = v37 & 0x3FFF;
        v43 = v17;
        v44 = -v42;
        v45 = (v41 >> 15) + *(_DWORD *)(v111 + 4) - v42;
        v46 = -v45;
        do
        {
          v44 += v42;
          v46 += v45;
          *v43 = v44;
          v43[256] = v46;
          ++v43;
        }
        while ( v43 < v17 + 256 );
        v47 = (__int64)v38 + 1;
        v48 = v20;
        v49 = v20 - (char *)v105;
        v50 = v105 + 1;
        do
        {
          v51 = *(unsigned __int8 *)(v47 + 1);
          v50 += 3;
          v47 += 3LL;
          *(v50 - 4) += v17[v51];
          *(v50 - 3) += v17[*(unsigned __int8 *)(v47 - 3)];
          *(v50 - 2) += v17[*(unsigned __int8 *)(v47 - 4)];
          *(_DWORD *)((char *)v50 + v49 - 16) = v17[*(unsigned __int8 *)(v47 - 2) + 256];
          *(_DWORD *)((char *)v50 + v49 - 12) = v17[*(unsigned __int8 *)(v47 - 3) + 256];
          *(_DWORD *)((char *)v50 + v49 - 8) = v17[*(unsigned __int8 *)(v47 - 4) + 256];
        }
        while ( (unsigned __int64)(v50 - 1) < v39 );
        v20 = v107;
        v26 = (char *)v105;
        v107 = (char *)v105;
        --v34;
        v25 = v48;
        v105 = v48;
      }
      else
      {
        v25 = (char *)v105;
        v87 = (__int64)v38 + 1;
        v88 = v111 + ((v37 >> 5) & 0x400);
        v89 = v105 + 2;
        do
        {
          v90 = *(unsigned __int8 *)(v87 + 1);
          v89 += 3;
          v87 += 3LL;
          *(v89 - 5) += *(_DWORD *)(v88 + 4 * v90);
          *(v89 - 4) += *(_DWORD *)(v88 + 4LL * *(unsigned __int8 *)(v87 - 3));
          *(v89 - 3) += *(_DWORD *)(v88 + 4LL * *(unsigned __int8 *)(v87 - 4));
        }
        while ( (unsigned __int64)(v89 - 2) < v39 );
        v26 = v107;
      }
      v35 = v108;
    }
    while ( v34 );
    v16 = v120;
    v19 = (unsigned __int64)(v17 + 256);
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
  {
    memmove(v20, v26, v104);
    v35 = v108;
  }
  v52 = (unsigned __int16)*v35;
  if ( *v35 )
  {
    v53 = (char *)v105;
    v54 = v104;
    do
    {
      v55 = (unsigned __int64)&v53[v54];
      v56 = v53;
      v109 = v35 + 1;
      v57 = v134;
      v58 = GetFixupScan(v113, v134);
      SrkYDIB_SrkCX(v119, v58, v57);
      if ( (v52 & 0x4000) != 0 )
      {
        v59 = v52;
        v60 = v52 & 0x3FFF;
        v61 = v17;
        v62 = -v60;
        v63 = (v59 >> 15) + *(_DWORD *)(v111 + 4) - v60;
        v64 = -v63;
        do
        {
          v62 += v60;
          v64 += v63;
          *v61 = v62;
          v61[256] = v64;
          ++v61;
        }
        while ( (unsigned __int64)v61 < v19 );
        v65 = v107;
        v112 = v20;
        v66 = *(_DWORD *)&v107[v104 - 4];
        *(_QWORD *)&v107[v104] = *(_QWORD *)&v107[v104 - 12];
        *(_DWORD *)&v107[v104 + 8] = v66;
        v67 = v139;
        if ( v110 )
        {
          v68 = *v57;
          v69 = *((unsigned __int8 *)v57 + 2);
          v57 = (__int16 *)((char *)v57 + 3);
          *v105 += v17[v69];
          v105[1] += v17[HIBYTE(v68)];
          v105[2] += v17[(unsigned __int8)v68];
          v56 = (char *)(v105 + 3);
          *(_DWORD *)v20 = v17[(unsigned int)(v69 + 256)];
          v65 = v107 + 12;
          *((_DWORD *)v20 + 1) = v17[HIBYTE(v68) + 256];
          *((_DWORD *)v20 + 2) = v17[(unsigned __int8)v68 + 256];
          v20 += 12;
        }
        else
        {
          v86 = *((_DWORD *)v107 + 2);
          *(_QWORD *)(v107 - 12) = *(_QWORD *)v107;
          *((_DWORD *)v107 - 1) = v86;
        }
        v70 = (unsigned __int64)(v65 + 20);
        do
        {
          v71 = *v57;
          v72 = *((unsigned __int8 *)v57 + 2);
          v57 = (__int16 *)((char *)v57 + 3);
          v73 = HIBYTE(v71);
          v74 = v71;
          *(_DWORD *)v56 += v17[v72];
          *((_DWORD *)v56 + 1) += v17[HIBYTE(v71)];
          *((_DWORD *)v56 + 2) += v17[(unsigned __int8)v71];
          v75 = (12 * *(_DWORD *)(v70 - 12)
               - *(_DWORD *)(v70 - 24)
               - *(_DWORD *)v70
               - *((_DWORD *)v20 + 2)
               - *((_DWORD *)v56 + 2)) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            v75 = ~HIBYTE(v75);
          *v67 = v75;
          v76 = (12 * *(_DWORD *)(v70 - 16)
               - *(_DWORD *)(v70 - 28)
               - *(_DWORD *)(v70 - 4)
               - *((_DWORD *)v56 + 1)
               - *((_DWORD *)v20 + 1)) >> 16;
          if ( (v76 & 0xFF00) != 0 )
            LOBYTE(v76) = ~HIBYTE(v76);
          v67[1] = v76;
          v77 = (12 * *(_DWORD *)(v70 - 20)
               - *(_DWORD *)(v70 - 32)
               - *(_DWORD *)(v70 - 8)
               - *(_DWORD *)v56
               - *(_DWORD *)v20) >> 16;
          if ( (v77 & 0xFF00) != 0 )
            LOBYTE(v77) = ~HIBYTE(v77);
          v67[2] = v77;
          v70 += 12LL;
          v56 += 12;
          *(_DWORD *)v20 = v17[(unsigned __int8)v72 + 256];
          *((_DWORD *)v20 + 1) = v17[v73 + 256];
          *((_DWORD *)v20 + 2) = v17[v74 + 256];
          v20 += 12;
          v67 += v141;
        }
        while ( v67 != v140 );
        if ( (unsigned __int64)v56 < v55 )
        {
          v78 = *((unsigned __int8 *)v57 + 2);
          v70 = (unsigned __int8)HIBYTE(*v57);
          v79 = (unsigned __int8)*v57;
          *(_DWORD *)v56 += v17[v78];
          *((_DWORD *)v56 + 1) += v17[v70];
          *((_DWORD *)v56 + 2) += v17[v79];
          *(_DWORD *)v20 = v17[(unsigned int)(v78 + 256)];
          *((_DWORD *)v20 + 1) = v17[(unsigned int)(v70 + 256)];
          *((_DWORD *)v20 + 2) = v17[(unsigned int)(v79 + 256)];
        }
        v53 = v112;
        v80 = *(_WORD *)v113;
        v20 = v107;
        v107 = (char *)v105;
        v105 = v112;
        if ( v113[0] < 0 )
        {
          v116(v113, v70);
          v80 = *(_WORD *)v113;
        }
        if ( (v80 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v113, v70);
          LOBYTE(v80) = v113[0];
        }
        if ( (v80 & 0x10) != 0 )
        {
          MappingBGRF(v135, v136, v123, v130);
          v102 = v133 + v130;
          if ( v102 == v131 )
            v102 = v132;
          v130 = v102;
        }
        v117(v113, v137, v138, v114, v122, v124, v124 + v128, v129, v118);
        v124 += v127;
        if ( v124 == v125 )
          v124 = v126;
        v114 += v115;
        ++v106;
      }
      else
      {
        v82 = (__int64)v57 + 1;
        v83 = v111 + ((v52 >> 5) & 0x400);
        v84 = v105 + 2;
        do
        {
          v85 = *(unsigned __int8 *)(v82 + 1);
          v84 += 3;
          v82 += 3LL;
          *(v84 - 5) += *(_DWORD *)(v83 + 4 * v85);
          *(v84 - 4) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 3));
          *(v84 - 3) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 4));
        }
        while ( (unsigned __int64)(v84 - 2) < v55 );
        v53 = (char *)v105;
      }
      v35 = v109;
      v54 = v104;
      v52 = (unsigned __int16)*v109;
    }
    while ( *v109 );
  }
  if ( v114 == v121 )
    return v106;
  v91 = &v107[v104];
  v92 = *((_DWORD *)v91 - 1);
  *(_QWORD *)v91 = *(_QWORD *)(v91 - 12);
  *((_DWORD *)v91 + 2) = v92;
  v93 = *((_DWORD *)v107 + 2);
  v94 = v139;
  *(_QWORD *)(v107 - 12) = *(_QWORD *)v107;
  *((_DWORD *)v107 - 1) = v93;
  v95 = &v107[12 * v110];
  v96 = &v20[12 * v110 + 4];
  v97 = v107 - v20;
  do
  {
    v98 = (11 * *(_DWORD *)&v96[v97 + 4] - *(_DWORD *)&v96[v97 - 8] - *(_DWORD *)&v96[v97 + 16] - *((_DWORD *)v96 + 1)) >> 16;
    if ( (v98 & 0xFF00) != 0 )
      LOBYTE(v98) = ~HIBYTE(v98);
    *v94 = v98;
    v99 = (11 * *(_DWORD *)&v96[v97] - *(_DWORD *)&v96[v97 - 12] - *(_DWORD *)&v96[v97 + 12] - *(_DWORD *)v96) >> 16;
    if ( (v99 & 0xFF00) != 0 )
      LOBYTE(v99) = ~HIBYTE(v99);
    v94[1] = v99;
    v100 = (11 * *(_DWORD *)v95 - *(_DWORD *)&v96[v97 - 16] - *(_DWORD *)&v96[v97 + 8] - *((_DWORD *)v96 - 1)) >> 16;
    if ( (v100 & 0xFF00) != 0 )
      LOBYTE(v100) = ~HIBYTE(v100);
    v94[2] = v100;
    v95 += 12;
    v96 += 12;
    v94 += v141;
  }
  while ( v94 != v140 );
  v101 = *(_WORD *)v113;
  if ( v113[0] < 0 )
  {
    ((void (__fastcall *)(char *, _BYTE *, char *))v116)(v113, v94, v95);
    v101 = *(_WORD *)v113;
  }
  if ( (v101 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v113, v94);
    LOBYTE(v101) = v113[0];
  }
  if ( (v101 & 0x10) != 0 )
  {
    MappingBGRF(v135, v136, v123, v130);
    v103 = v133 + v130;
    if ( v103 == v131 )
      v103 = v132;
    v130 = v103;
  }
  v117(v113, v137, v138, v114, v122, v124, v124 + v128, v129, v118);
  return v106 + 1;
}
