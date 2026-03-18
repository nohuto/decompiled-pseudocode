/*
 * XREFs of SetupAAHeader @ 0x1C0035E8C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0033238 (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C00367DC (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C0036804 (ComputeByteOffset.c)
 *     ComputeInputColorInfo @ 0x1C0037084 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00371AC (ComputeAABBP.c)
 *     CheckBMPNeedFixup @ 0x1C00A28E0 (CheckBMPNeedFixup.c)
 *     ComputeBytesPerScanLine @ 0x1C00F434C (ComputeBytesPerScanLine.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  _BYTE *v5; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rdx
  _BYTE *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  char v17; // al
  int v18; // esi
  __int64 v19; // r13
  unsigned int *v20; // r15
  __int16 v21; // r13
  __int64 v22; // rax
  int v23; // r11d
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned int v26; // r10d
  char v27; // dl
  __int64 (__fastcall *v28)(); // r8
  __int64 (__fastcall *v29)(int, int, int, int, int); // rax
  __int64 (__fastcall *v30)(int, int, int, int, int); // rcx
  char v31; // al
  unsigned int v32; // ecx
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned int v35; // r9d
  unsigned int v36; // r10d
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  unsigned int v41; // r12d
  int v42; // r13d
  int v43; // r11d
  char v44; // r14
  int v45; // r10d
  int v46; // r9d
  int v47; // r14d
  int v48; // r12d
  unsigned __int64 v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // r13d
  __int64 v57; // rax
  int *v58; // rsi
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned int v67; // r12d
  unsigned int v68; // r14d
  int v69; // r10d
  int v70; // eax
  __int64 v71; // rdi
  __int64 v72; // rdx
  int v73; // r9d
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rdi
  int v77; // r9d
  __int64 v78; // rcx
  __int64 v79; // rdx
  int v80; // eax
  int v81; // r10d
  int v82; // r11d
  __int64 v83; // rcx
  int v84; // eax
  int v85; // r9d
  int v86; // r10d
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rdx
  int v90; // eax
  int v91; // eax
  __int64 (__fastcall **v92)(__int128 *); // rcx
  __int64 (__fastcall *v93)(__int128 *); // rax
  __int64 result; // rax
  unsigned int v95; // ecx
  unsigned int v96; // eax
  unsigned int v97; // ecx
  bool v98; // cf
  int v99; // eax
  _QWORD *v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  unsigned int v107; // eax
  __int64 (__fastcall *v108)(); // rsi
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned int v113; // ecx
  int v114; // eax
  __int64 (__fastcall *v115)(); // rsi
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rax
  int v123; // eax
  __int64 v124; // rax
  int v125; // r13d
  int v126; // r8d
  int v127; // r12d
  __int64 v128; // rdx
  int v129; // ecx
  __int64 v130; // r8
  int v131; // eax
  int v132; // r12d
  int v133; // r9d
  _DWORD *v134; // r8
  __int64 v135; // rcx
  _BYTE *v136; // rax
  int *v137; // rcx
  int v138; // [rsp+60h] [rbp-A0h] BYREF
  int v139; // [rsp+64h] [rbp-9Ch] BYREF
  int v140; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v141)(__int128 *); // [rsp+70h] [rbp-90h]
  int v142; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v143; // [rsp+7Ch] [rbp-84h]
  unsigned int v144; // [rsp+80h] [rbp-80h]
  int v145; // [rsp+84h] [rbp-7Ch]
  int v146; // [rsp+88h] [rbp-78h] BYREF
  int v147; // [rsp+8Ch] [rbp-74h]
  unsigned int v148; // [rsp+90h] [rbp-70h]
  __int64 v149; // [rsp+98h] [rbp-68h]
  unsigned int v150; // [rsp+A0h] [rbp-60h]
  __int64 v151; // [rsp+A8h] [rbp-58h]
  _DWORD *v152; // [rsp+B0h] [rbp-50h]
  _QWORD *v153; // [rsp+B8h] [rbp-48h]
  _BYTE *v154; // [rsp+C0h] [rbp-40h]
  _BYTE *v155; // [rsp+C8h] [rbp-38h]
  __int64 v156; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v157)(__int128 *); // [rsp+D8h] [rbp-28h]
  unsigned int v158; // [rsp+E0h] [rbp-20h] BYREF
  char v159; // [rsp+E4h] [rbp-1Ch]
  char v160; // [rsp+E5h] [rbp-1Bh]
  __int64 (__fastcall *v161)(int, int, int, int, int); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v162)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, int); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v163)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+F8h] [rbp-8h]
  __int64 v164; // [rsp+100h] [rbp+0h]
  __int64 v165; // [rsp+108h] [rbp+8h]
  __int64 v166; // [rsp+110h] [rbp+10h]
  __int64 v167; // [rsp+118h] [rbp+18h]
  unsigned int v168; // [rsp+120h] [rbp+20h] BYREF
  int v169; // [rsp+124h] [rbp+24h] BYREF
  _BYTE v170[4]; // [rsp+128h] [rbp+28h] BYREF
  char v171[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v172; // [rsp+130h] [rbp+30h] BYREF
  int v173; // [rsp+134h] [rbp+34h] BYREF
  int v174; // [rsp+138h] [rbp+38h] BYREF
  int v175; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v176; // [rsp+140h] [rbp+40h]
  int v177; // [rsp+144h] [rbp+44h]
  int v178; // [rsp+148h] [rbp+48h]
  int v179; // [rsp+14Ch] [rbp+4Ch]
  int v180; // [rsp+150h] [rbp+50h]
  int v181; // [rsp+154h] [rbp+54h]
  int v182; // [rsp+160h] [rbp+60h]
  int v183; // [rsp+164h] [rbp+64h]
  int v184; // [rsp+168h] [rbp+68h]
  int v185; // [rsp+16Ch] [rbp+6Ch]

  v5 = (_BYTE *)a1[2];
  v149 = a1[3];
  v152 = (_DWORD *)a1[4];
  v153 = a1;
  v151 = a2;
  v7 = a1[5];
  v157 = a4;
  v154 = v5;
  v156 = v7;
  v148 = *(unsigned __int8 *)(v7 + 10);
  v8 = a1[1];
  v9 = *(_DWORD *)(v8 + 56);
  v10 = (2 * ((*(_BYTE *)(v8 + 24) & 1) == 0)) | 1;
  v150 = v10;
  v158 = (v9 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v158 = 1536;
  v11 = 0;
  if ( (int)ComputeAABBP(v5, v7, &v158, v10 == 1) <= 0 )
    return 0LL;
  v12 = v158;
  v13 = 3100LL;
  v138 = 3100;
  if ( (v9 & 0x100000) != 0 )
  {
    v12 = v158 | 0x800;
    v158 |= 0x800u;
    if ( (v9 & 0x200000) != 0 )
    {
      v12 |= 0x1000u;
      v13 = 5148LL;
      v158 = v12;
    }
    else
    {
      if ( (v9 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v9 & 0x1000000) != 0 )
      {
        v12 |= 0x100000u;
        v158 = v12;
      }
      v13 = 3868LL;
    }
    v138 = v13;
  }
  if ( (v9 & 0x40000000) != 0 )
    v158 = v12 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v138, v13) < 0 )
    return 4294967294LL;
  v14 = a1 + 8;
  v15 = v149;
  v155 = v14;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v149 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v149 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v149 + 32) + 3LL),
    (_DWORD)v14,
    a3 + 8);
  v16 = v158;
  v17 = 0;
  if ( v10 == 1 )
    v17 = 4;
  *(_BYTE *)(a3 + 8) |= v17 | 2;
  if ( (v9 & 0x4000) != 0 )
  {
    v16 = (unsigned int)v16 | 4;
    v158 = v16;
  }
  if ( (*v154 & 0x40) != 0 )
  {
    v16 = (unsigned int)v16 & 0xFFFFFFBF;
    v158 = v16;
  }
  if ( (v16 & 0x200) != 0 )
  {
    v16 = (unsigned int)v16 & 0xFFFFFFBF;
    v158 = v16;
  }
  if ( (v16 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v15, &v158);
    v16 = v158;
    if ( (v158 & 0x80000) != 0 )
    {
      if ( (v9 & 0x80000) != 0 )
        v16 = v158 | 0x200;
      else
        LODWORD(v16) = v158 & 0xFFFFFDFF;
      v158 = v16;
    }
  }
  if ( (v16 & 0x200) != 0 )
  {
    LODWORD(v16) = v16 & 0xFFFFBFFF;
    v158 = v16;
  }
  if ( v152 )
  {
    LODWORD(v16) = v16 | 0x80;
    v158 = v16;
  }
  v18 = v138;
  v19 = v151;
  v20 = (unsigned int *)v162(v151, v16, &v168, v170, *(_DWORD *)(v15 + 12), v176, v178, &v172, &v174, v138);
  if ( !v20 )
  {
    v18 = 0;
    v20 = (unsigned int *)v162(v19, v158, &v168, v170, *(_DWORD *)(v149 + 12), v176, v178, &v172, &v174, 0);
    if ( !v20 )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_182;
  v21 = v158;
  if ( !v18 )
  {
    v105 = v151;
    v158 |= 0x80000000;
    v21 = v158;
    *(_QWORD *)(a3 + 376) = v151 + 856;
    v23 = v21 & 0x800;
    if ( (v21 & 0x800) == 0 )
      goto LABEL_26;
    v106 = *(_QWORD *)(v105 + 7064);
    *(_QWORD *)(a3 + 336) = v106;
    if ( (v9 & 0x200000) == 0 )
      goto LABEL_26;
    v104 = v106 + 768;
    goto LABEL_150;
  }
  v22 = *((_QWORD *)v20 + 4);
  *(_QWORD *)(a3 + 376) = v22;
  v23 = v21 & 0x800;
  if ( (v21 & 0x800) != 0 )
  {
    v104 = v22 + 3100;
LABEL_150:
    *(_QWORD *)(a3 + 336) = v104;
  }
LABEL_26:
  *(_QWORD *)(a3 + 384) = *(_QWORD *)(a3 + 376) + 28LL;
  if ( (v21 & 1) != 0 )
  {
    v172 = v180 - v172 - 1;
    v174 = v180 - v174 - 1;
  }
  v24 = *v20;
  v25 = v20[1];
  v144 = v24;
  v143 = v25;
  if ( (int)v24 + 6 < (unsigned int)v24 )
    goto LABEL_182;
  v26 = v24 + 6;
  v27 = v159;
  v139 = 0;
  v28 = BltDIB_CY;
  v141 = 0LL;
  if ( (v21 & 0x200) != 0 )
  {
    if ( v159 != 1 )
    {
      if ( (unsigned __int8)v159 <= 1u )
        goto LABEL_46;
      if ( (unsigned __int8)v159 <= 3u )
      {
        v28 = SkipDIB_CY;
      }
      else
      {
        if ( (unsigned __int8)v159 > 5u )
          goto LABEL_46;
        if ( v23 )
        {
          v107 = v25 + 6;
          if ( (int)v25 + 6 < (unsigned int)v25 || 3 * (unsigned __int64)v107 > 0xFFFFFFFF )
            goto LABEL_182;
          v139 = 3 * v107;
        }
        else
        {
          v139 = 0;
        }
        v28 = RepDIB_CY;
      }
    }
    v141 = (__int64 (__fastcall *)(__int128 *))v28;
    if ( v28 )
    {
      if ( v160 )
      {
        if ( v160 == 1 )
        {
          v29 = SkipDIB_CX;
          v30 = GraySkipDIB_CX;
        }
        else
        {
          if ( v160 != 2 )
          {
LABEL_45:
            v27 = -1;
            v159 = -1;
            goto LABEL_46;
          }
          v29 = RepDIB_CX;
          v30 = GrayRepDIB_CX;
        }
      }
      else
      {
        v29 = CopyDIB_CX;
        v30 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
      }
      if ( v10 == 1 )
        v29 = v30;
      v161 = v29;
      goto LABEL_45;
    }
  }
LABEL_46:
  switch ( v27 )
  {
    case 0:
      v141 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
      if ( v10 != 1 )
      {
        v139 = 0;
        goto LABEL_52;
      }
      if ( (unsigned __int64)(2 * v24) <= 0xFFFFFFFF )
      {
        v139 = 2 * v24;
        goto LABEL_52;
      }
      goto LABEL_182;
    case 1:
      v141 = (__int64 (__fastcall *)(__int128 *))BltDIB_CY;
      goto LABEL_52;
    case 2:
      if ( v10 == 1 )
      {
        v141 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
        LODWORD(v118) = 12 * v25;
        if ( (unsigned __int64)(12 * v25) > 0xFFFFFFFF || (int)v25 + 6 < (unsigned int)v25 )
          goto LABEL_182;
        v119 = (unsigned int)(v25 + 6);
      }
      else
      {
        v118 = v26 * (unsigned __int64)v10;
        v141 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
        if ( v118 > 0xFFFFFFFF )
          goto LABEL_182;
        v119 = 36 * v24;
      }
      if ( v119 > 0xFFFFFFFF || (unsigned int)v119 >= 0xFFFFF800 )
        goto LABEL_182;
      v97 = v118 + v119 + 2048;
      goto LABEL_174;
    case 3:
      v95 = v20[5];
      v141 = ShrinkDIB_CY_SrkCX;
      v96 = v95 + 2;
      if ( v95 + 2 < v95 || 36 * (unsigned __int64)v96 > 0xFFFFFFFF )
        goto LABEL_182;
      v97 = 36 * v96 + 2048;
      v98 = 36 * v96 >= 0xFFFFF800;
      goto LABEL_109;
    case 4:
      v115 = GrayExpandDIB_CY;
      if ( v10 != 1 )
        v115 = ExpandDIB_CY;
      v141 = (__int64 (__fastcall *)(__int128 *))v115;
      if ( (int)v25 + 6 < (unsigned int)v25 )
        goto LABEL_182;
      v116 = (unsigned int)(v25 + 6) * (unsigned __int64)v10;
      if ( v116 > 0xFFFFFFFF )
        goto LABEL_182;
      v117 = 6LL * (unsigned int)v116;
      if ( v117 > 0xFFFFFFFF )
        goto LABEL_182;
      v97 = v117 + 4096;
      LODWORD(v118) = 4096;
LABEL_174:
      v98 = v97 < (unsigned int)v118;
LABEL_109:
      v99 = -1;
      if ( !v98 )
        v99 = v97;
      v139 = v99;
      if ( !v98 )
        goto LABEL_52;
LABEL_182:
      EngFreeMem(v20);
      return 0LL;
  }
  if ( v27 != 5 )
    goto LABEL_52;
  if ( (v21 & 0x4000) != 0 )
  {
    v103 = v26 * (unsigned __int64)v10;
    if ( v103 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v103 <= 0xFFFFFFFF )
    {
      v139 = 5 * v103;
      v141 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
      goto LABEL_52;
    }
    goto LABEL_182;
  }
  v108 = GrayExpandDIB_CY_ExpCX;
  if ( v10 != 1 )
    v108 = ExpandDIB_CY_ExpCX;
  v141 = (__int64 (__fastcall *)(__int128 *))v108;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_216;
  v109 = v10 * (unsigned __int64)(unsigned int)(v25 + 6);
  if ( v109 > 0xFFFFFFFF )
    goto LABEL_216;
  v110 = 4LL * (unsigned int)v109;
  if ( v110 > 0xFFFFFFFF )
    goto LABEL_216;
  v111 = v10 * (unsigned __int64)v26;
  if ( v111 > 0xFFFFFFFF )
    goto LABEL_216;
  v112 = 3LL * (unsigned int)v111;
  if ( v112 > 0xFFFFFFFF || (int)v112 + (int)v110 < (unsigned int)v112 )
    goto LABEL_216;
  v113 = v112 + v110 + 4096;
  v114 = -1;
  if ( v113 >= 0x1000 )
    v114 = v113;
  v139 = v114;
  if ( v113 < 0x1000 )
    goto LABEL_216;
LABEL_52:
  v31 = 0;
  v32 = v23 != 0 ? v25 : 0;
  if ( v10 == 1 )
    v31 = 4;
  *(_BYTE *)(a3 + 96) = v31;
  *(_DWORD *)(a3 + 152) = v32 * v10;
  if ( v32 + 8 < v32 )
    goto LABEL_215;
  v33 = v10;
  v34 = v10 * (unsigned __int64)(v32 + 8);
  if ( v34 > 0xFFFFFFFF )
    goto LABEL_215;
  v138 = v10 * (v32 + 8);
  if ( (int)ALIGN_MEM(&v138, (unsigned int)v34) < 0 )
    goto LABEL_215;
  if ( (int)ALIGN_MEM(&v139, v35) < 0 )
    goto LABEL_215;
  if ( v36 + 2 < v36 )
    goto LABEL_215;
  v38 = v10 * (unsigned __int64)(v36 + 2);
  if ( v38 > v37 )
    goto LABEL_215;
  v140 = v10 * (v36 + 2);
  if ( (int)ALIGN_MEM(&v140, (unsigned int)v38) < 0 )
    goto LABEL_215;
  if ( (unsigned int)v25 >= 0xFFFFFFF6 )
    goto LABEL_215;
  v40 = 4LL * (unsigned int)(v25 + 10);
  if ( v40 > v39 )
    goto LABEL_215;
  v146 = 4 * (v25 + 10);
  if ( (int)ALIGN_MEM(&v146, (unsigned int)v40) < 0 )
    goto LABEL_215;
  v41 = v144;
  if ( (v21 & 0x80u) != 0 )
  {
    v120 = ComputeBytesPerScanLine(1LL, 4LL, v144);
    v121 = v120 + 4;
    if ( (unsigned int)v121 < v120 )
      goto LABEL_215;
    v142 = v120 + 4;
    if ( (int)ALIGN_MEM(&v142, v121) < 0 )
      goto LABEL_215;
    v42 = v142;
    v147 = v142;
  }
  else
  {
    v42 = 0;
    v147 = 0;
  }
  v43 = v140;
  v44 = v158;
  if ( v140 < v138 )
    v43 = v138;
  v145 = v43;
  if ( (v158 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v138, v143) < 0 )
      goto LABEL_215;
    v45 = v138;
    v142 = v138;
  }
  else
  {
    v45 = 0;
    v142 = 0;
  }
  if ( v148 == 254 && v153[7] )
  {
    if ( (int)ALIGN_MEM(&v140, 366LL) < 0 )
      goto LABEL_215;
    v46 = v140;
    v138 = v140;
  }
  else
  {
    v46 = 0;
    v138 = 0;
  }
  if ( (v44 & 0x40) != 0 )
  {
    if ( v41 + 4 >= v41 )
    {
      v102 = v33 * (v41 + 4);
      if ( v102 <= 0xFFFFFFFF )
      {
        v140 = v33 * (v41 + 4);
        if ( (int)ALIGN_MEM(&v140, (unsigned int)v102) >= 0 )
        {
          v47 = v140;
          goto LABEL_74;
        }
      }
    }
LABEL_215:
    v11 = -2;
LABEL_216:
    v137 = (int *)v20;
    goto LABEL_217;
  }
  v47 = 0;
LABEL_74:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (*v155 & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v153 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v140, 3072LL) >= 0 )
    {
      v48 = v140;
      goto LABEL_76;
    }
    goto LABEL_215;
  }
  v48 = 0;
LABEL_76:
  v49 = 6LL * (unsigned int)v47;
  if ( v49 > 0xFFFFFFFF )
    goto LABEL_138;
  v50 = v49 + v43;
  if ( (int)v49 + v43 < (unsigned int)v49 )
    goto LABEL_138;
  v51 = v50 + v146;
  if ( v50 + v146 < v50
    || (v52 = v51 + v42, v51 + v42 < v51)
    || (v53 = v52 + v45, v52 + v45 < v52)
    || (v54 = v53 + v48, v53 + v48 < v53)
    || (v55 = v54 + v46, v54 + v46 < v54)
    || (v56 = v139, v55 + v139 < v55)
    || (v57 = v163(v151, v158, &v169, v171, *(_DWORD *)(v149 + 16), v177, v179, &v173, &v175, v55 + v139),
        (v58 = (int *)v57) == 0LL) )
  {
LABEL_138:
    EngFreeMem(v20);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v57 || !*(_DWORD *)(v57 + 4) )
    goto LABEL_214;
  v59 = *(_QWORD *)(v57 + 32) + v56;
  v60 = v144 * v150;
  *(_DWORD *)a3 = v158;
  v61 = v142;
  *(_QWORD *)(a3 + 536) = v59;
  *(_DWORD *)(a3 + 64) = v60;
  v62 = v145 + v59;
  if ( (_DWORD)v61 )
  {
    v63 = (int)v143;
    *(_QWORD *)(a3 + 352) = v62;
    *(_QWORD *)(a3 + 344) = v62;
    *(_DWORD *)(a3 + 368) = 1;
    v122 = v62 + v63;
    v62 += v61;
    *(_QWORD *)(a3 + 360) = v122;
  }
  else
  {
    LODWORD(v63) = v143;
  }
  if ( v47 )
  {
    *(_QWORD *)(a3 + 264) = v62;
    v100 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v47;
    v101 = 6LL;
    do
    {
      *v100 = v62;
      v62 += v47;
      ++v100;
      --v101;
    }
    while ( v101 );
  }
  v64 = v138;
  if ( v138 )
  {
    *(_QWORD *)(a3 + 400) = v62;
    v62 += v64;
  }
  v65 = v147;
  if ( v147 )
  {
    *(_QWORD *)(a3 + 208) = v62;
    v62 += v65;
  }
  if ( v48 )
  {
    *(_QWORD *)(a3 + 16) = v62;
    v62 += v48;
  }
  else
  {
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a3 + 384);
  }
  *(_QWORD *)(a3 + 576) = v62 + 20;
  *(_QWORD *)(a3 + 544) = v62 + 20;
  *(_QWORD *)(a3 + 560) = v62 + 20;
  v66 = v62 + 20 + 4LL * (int)v63;
  *(_QWORD *)(a3 + 568) = v66;
  *(_QWORD *)(a3 + 552) = v66;
  *(_QWORD *)(a3 + 584) = v66;
  memset((void *)(v62 + 20), 255, 4LL * (int)v63);
  v67 = v172;
  if ( v172 > v174 )
  {
    v123 = v172;
    *(_DWORD *)(a3 + 592) = -4;
    v67 = v174;
    v174 = v123;
    v124 = *(_QWORD *)(a3 + 568) - 4LL;
    v172 = v67;
    *(_QWORD *)(a3 + 576) = v124;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
  }
  else
  {
    *(_DWORD *)(a3 + 592) = 4;
  }
  v68 = v158;
  *(_DWORD *)(a3 + 328) = v67 - v182;
  if ( (v68 & 2) != 0 )
  {
    v69 = v181 - v173 - 1;
    v173 = v69;
    v175 = v181 - v175 - 1;
  }
  else
  {
    v69 = v173;
  }
  *(_QWORD *)(a3 + 304) = v20;
  *(_DWORD *)(a3 + 332) = v69 - v183;
  *(_QWORD *)(a3 + 288) = v161;
  *(_QWORD *)(a3 + 312) = v58;
  *(_DWORD *)(a3 + 56) = *v20;
  v70 = *v58;
  *(_DWORD *)(a3 + 60) = *v58;
  *(_DWORD *)(a3 + 40) = v70;
  if ( (v68 & 0x80u) == 0 )
    goto LABEL_101;
  v125 = v20[30] + v184;
  v126 = v152[5];
  v184 = v125;
  v127 = v58[30] + v185;
  v185 = v127;
  v128 = v125 + v20[31];
  v129 = v127 + v58[31];
  v145 = v126;
  if ( v125 < 0 || v127 < 0 || (int)v128 > v152[3] || v129 > v152[4] )
  {
    v11 = -13;
LABEL_214:
    EngFreeMem(v20);
    v137 = v58;
LABEL_217:
    EngFreeMem(v137);
    return v11;
  }
  *(_DWORD *)(a3 + 224) = v126;
  *(_DWORD *)(a3 + 228) = v58[31];
  ComputeByteOffset(1LL, v128, a3 + 4);
  v131 = ComputeByteOffset(1LL, (unsigned int)v125, v130);
  v132 = v145 * v127;
  v134 = v152;
  *(_DWORD *)(a3 + 200) = v133 - v131 + 1;
  v135 = v131 + *((_QWORD *)v134 + 3) + v132;
  v136 = v154;
  *(_QWORD *)(a3 + 216) = v135;
  if ( (*v136 & 8) != 0 )
  {
    v68 |= 0x100u;
    v158 = v68;
  }
  v67 = v172;
  LODWORD(v63) = v143;
  *(_QWORD *)(a3 + 184) = v164;
  *(_QWORD *)(a3 + 192) = v165;
LABEL_101:
  v71 = v149;
  v72 = v168;
  v73 = *(_DWORD *)(v149 + 20);
  *(_DWORD *)(a3 + 68) = v73;
  *(_DWORD *)(a3 + 260) = v73;
  v74 = ComputeByteOffset(*(unsigned __int8 *)(v71 + 10), v72, a3 + 9);
  v75 = *(_QWORD *)(v71 + 24);
  v76 = v156;
  v78 = v77 * v169 + (__int64)v74;
  *(_QWORD *)(a3 + 232) = v166;
  v79 = v78 + v75;
  *(_QWORD *)(a3 + 240) = v167;
  *(_QWORD *)(a3 + 48) = v79;
  *(_QWORD *)(a3 + 32) = v79;
  v80 = *(_DWORD *)(v76 + 20);
  if ( v81 > v82 )
    v80 = -v80;
  v83 = v148;
  *(_DWORD *)(a3 + 156) = v80;
  v84 = ComputeByteOffset(v83, v67, a3 + 97);
  v87 = v86 * v85 + (__int64)v84;
  v88 = *(_DWORD *)(a3 + 156);
  v89 = v87 + *(_QWORD *)(v76 + 24);
  *(_QWORD *)(a3 + 136) = v89;
  *(_QWORD *)(a3 + 120) = v89;
  v90 = v58[1] * v88;
  *(_DWORD *)(a3 + 144) = v63;
  *(_QWORD *)(a3 + 320) = v89 + v90;
  v91 = v58[1];
  v92 = v157;
  *(_DWORD *)(a3 + 148) = v91;
  *(_DWORD *)(a3 + 128) = v91;
  v93 = v141;
  *(_DWORD *)a3 = v68;
  *v92 = v93;
  if ( (v68 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += *(_DWORD *)(a3 + 68) * v58[6];
    *(_DWORD *)(a3 + 60) -= v58[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
