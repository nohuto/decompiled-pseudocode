/*
 * XREFs of SetupAAHeader @ 0x1C0074630
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00799CC (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0042368 (ComputeBytesPerScanLine.c)
 *     _ALIGN_MEM @ 0x1C0074F9C (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C0075990 (ComputeByteOffset.c)
 *     CheckBMPNeedFixup @ 0x1C00F2770 (CheckBMPNeedFixup.c)
 *     ComputeAABBP @ 0x1C00F2ADC (ComputeAABBP.c)
 *     ComputeInputColorInfo @ 0x1C0101CC0 (ComputeInputColorInfo.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  int v4; // r13d
  _BYTE *v5; // r10
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // esi
  int v11; // r15d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r13
  __int64 v17; // rdx
  char v18; // al
  int v19; // r15d
  int v20; // ecx
  __int64 v21; // r13
  unsigned int *v22; // r14
  __int16 v23; // r12
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // rsi
  __int64 v27; // r13
  unsigned int v28; // r11d
  char v29; // dl
  __int64 (__fastcall *v30)(); // rax
  unsigned int v31; // r8d
  __int64 (__fastcall *v32)(int, int, int, int, int); // rax
  __int64 (__fastcall *v33)(int, int, int, int, int); // rcx
  __int64 v34; // r10
  unsigned int v35; // ecx
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // r9d
  unsigned __int64 v40; // r10
  unsigned int v41; // r11d
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r10
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  int v47; // esi
  int v48; // r11d
  int v49; // r10d
  _QWORD *v50; // r13
  int v51; // r9d
  int v52; // r15d
  int v53; // r12d
  unsigned __int64 v54; // rcx
  unsigned int v55; // ecx
  unsigned int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // r13d
  __int64 v62; // rax
  int *v63; // rsi
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // rax
  size_t v71; // r8
  unsigned int v72; // r12d
  unsigned int v73; // r15d
  int v74; // r10d
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rdx
  int v78; // r9d
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rdi
  int v82; // r9d
  __int64 v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  int v86; // r10d
  int v87; // r11d
  __int64 v88; // rcx
  int v89; // eax
  int v90; // r9d
  int v91; // r10d
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  int v96; // eax
  __int64 (__fastcall **v97)(__int128 *); // rcx
  __int64 (__fastcall *v98)(__int128 *); // rax
  __int64 result; // rax
  unsigned int v100; // ecx
  __int64 v101; // rdx
  int v102; // eax
  bool v103; // cf
  int v104; // r9d
  _QWORD *v105; // rax
  __int64 v106; // r8
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rcx
  int v110; // r9d
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rcx
  int v114; // r9d
  __int64 (__fastcall *v115)(); // rsi
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  int v119; // r8d
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rcx
  unsigned int v122; // eax
  int v123; // r9d
  __int64 (__fastcall *v124)(); // r8
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // rcx
  unsigned int v127; // edx
  unsigned int v128; // eax
  unsigned int v129; // ecx
  int v130; // r9d
  unsigned int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rax
  int v134; // eax
  __int64 v135; // rax
  int v136; // r13d
  int v137; // r8d
  int v138; // r12d
  __int64 v139; // rdx
  int v140; // ecx
  __int64 v141; // r8
  int v142; // eax
  int v143; // r12d
  int v144; // r9d
  _DWORD *v145; // r8
  __int64 v146; // rcx
  _BYTE *v147; // rax
  int *v148; // rcx
  int v149; // [rsp+60h] [rbp-A0h] BYREF
  int v150; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v151; // [rsp+68h] [rbp-98h]
  int v152; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 (__fastcall *v153)(__int128 *); // [rsp+70h] [rbp-90h]
  int v154; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v155; // [rsp+7Ch] [rbp-84h]
  int v156; // [rsp+80h] [rbp-80h]
  int v157; // [rsp+84h] [rbp-7Ch]
  int v158; // [rsp+88h] [rbp-78h] BYREF
  int v159; // [rsp+8Ch] [rbp-74h]
  unsigned int v160; // [rsp+90h] [rbp-70h]
  __int64 v161; // [rsp+98h] [rbp-68h]
  _DWORD *v162; // [rsp+A0h] [rbp-60h]
  _QWORD *v163; // [rsp+A8h] [rbp-58h]
  __int64 v164; // [rsp+B0h] [rbp-50h]
  _BYTE *v165; // [rsp+B8h] [rbp-48h]
  __int64 v166; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v167)(__int128 *); // [rsp+C8h] [rbp-38h]
  unsigned int v168; // [rsp+D0h] [rbp-30h] BYREF
  char v169; // [rsp+D4h] [rbp-2Ch]
  char v170; // [rsp+D5h] [rbp-2Bh]
  __int64 (__fastcall *v171)(int, int, int, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v172)(__int64, __int64, unsigned int *, _BYTE *, int, int, int, int *, int *, int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v173)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E8h] [rbp-18h]
  __int64 v174; // [rsp+F0h] [rbp-10h]
  __int64 v175; // [rsp+F8h] [rbp-8h]
  __int64 v176; // [rsp+100h] [rbp+0h]
  __int64 v177; // [rsp+108h] [rbp+8h]
  unsigned int v178; // [rsp+110h] [rbp+10h] BYREF
  int v179; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v180[4]; // [rsp+118h] [rbp+18h] BYREF
  char v181[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v182; // [rsp+120h] [rbp+20h] BYREF
  int v183; // [rsp+124h] [rbp+24h] BYREF
  int v184; // [rsp+128h] [rbp+28h] BYREF
  int v185; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v186; // [rsp+130h] [rbp+30h]
  int v187; // [rsp+134h] [rbp+34h]
  int v188; // [rsp+138h] [rbp+38h]
  int v189; // [rsp+13Ch] [rbp+3Ch]
  int v190; // [rsp+140h] [rbp+40h]
  int v191; // [rsp+144h] [rbp+44h]
  int v192; // [rsp+150h] [rbp+50h]
  int v193; // [rsp+154h] [rbp+54h]
  int v194; // [rsp+158h] [rbp+58h]
  int v195; // [rsp+15Ch] [rbp+5Ch]

  v4 = (int)a1;
  v5 = (_BYTE *)a1[2];
  v161 = a1[3];
  v7 = (_DWORD *)a1[4];
  v163 = a1;
  v162 = v7;
  v164 = a2;
  v8 = a1[5];
  v167 = a4;
  v165 = v5;
  v166 = v8;
  v160 = *(unsigned __int8 *)(v8 + 10);
  v9 = a1[1];
  v10 = *(_DWORD *)(v9 + 56);
  v11 = 2 * ((*(_BYTE *)(v9 + 24) & 1) == 0) + 1;
  v151 = v11;
  v168 = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v168 = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v5, v8, &v168, v11 == 1) <= 0 )
    return 0LL;
  v13 = v168;
  v14 = 3100LL;
  v149 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = v168 | 0x800;
    v168 |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      v168 = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        v168 = v13;
      }
      v14 = 3868LL;
    }
    v149 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    v168 = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v149, v14) < 0 )
    return 4294967294LL;
  v15 = v4 + 64;
  v16 = v161;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v161 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v161 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v161 + 32) + 3LL),
    v15,
    a3 + 8);
  v17 = v168;
  v18 = 6;
  if ( v11 != 1 )
    v18 = 2;
  *(_BYTE *)(a3 + 8) |= v18;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    v168 = v17;
  }
  if ( (*v165 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v168 = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v168 = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, &v168);
    v17 = v168;
    if ( (v168 & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v17 = v168 | 0x200;
      else
        LODWORD(v17) = v168 & 0xFFFFFDFF;
      v168 = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    v168 = v17;
  }
  if ( v162 )
  {
    LODWORD(v17) = v17 | 0x80;
    v168 = v17;
  }
  v19 = v149;
  v20 = *(_DWORD *)(v16 + 12);
  v21 = v164;
  v22 = (unsigned int *)v172(v164, v17, &v178, v180, v20, v186, v188, &v182, &v184, v149);
  if ( !v22 )
  {
    v19 = 0;
    v22 = (unsigned int *)v172(v21, v168, &v178, v180, *(_DWORD *)(v161 + 12), v186, v188, &v182, &v184, 0);
    if ( !v22 )
      return 4294967294LL;
  }
  if ( !*v22 || !v22[1] )
    goto LABEL_164;
  v23 = v168;
  if ( !v19 )
  {
    v168 |= 0x80000000;
    v23 = v168;
    *(_QWORD *)(a3 + 376) = v21 + 856;
    v25 = v23 & 0x800;
    if ( (v23 & 0x800) == 0 )
      goto LABEL_26;
    v112 = *(_QWORD *)(v21 + 7064);
    *(_QWORD *)(a3 + 336) = v112;
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_26;
    v111 = v112 + 768;
    goto LABEL_159;
  }
  v24 = *((_QWORD *)v22 + 4);
  *(_QWORD *)(a3 + 376) = v24;
  v25 = v23 & 0x800;
  if ( (v23 & 0x800) != 0 )
  {
    v111 = v24 + 3100;
LABEL_159:
    *(_QWORD *)(a3 + 336) = v111;
  }
LABEL_26:
  *(_QWORD *)(a3 + 384) = *(_QWORD *)(a3 + 376) + 28LL;
  if ( (v23 & 1) != 0 )
  {
    v182 = v190 - v182 - 1;
    v184 = v190 - v184 - 1;
  }
  v26 = *v22;
  v27 = v22[1];
  v155 = v26;
  v156 = v27;
  if ( (int)v26 + 6 < (unsigned int)v26 )
    goto LABEL_164;
  v28 = v26 + 6;
  v29 = v169;
  v150 = 0;
  v30 = BltDIB_CY;
  v153 = 0LL;
  if ( (v23 & 0x200) != 0 )
  {
    if ( v169 == 1 )
      goto LABEL_37;
    if ( (unsigned __int8)v169 > 1u )
    {
      if ( (unsigned __int8)v169 <= 3u )
      {
        v30 = SkipDIB_CY;
        goto LABEL_37;
      }
      if ( (unsigned __int8)v169 <= 5u )
      {
        if ( v25 )
        {
          if ( (int)v27 + 6 < (unsigned int)v27 )
            goto LABEL_164;
          v113 = 3LL * (unsigned int)(v27 + 6);
          v114 = -1;
          if ( v113 <= 0xFFFFFFFF )
            v114 = 3 * (v27 + 6);
          v150 = v114;
          if ( v113 > 0xFFFFFFFF )
            goto LABEL_164;
        }
        else
        {
          v150 = 0;
        }
        v30 = RepDIB_CY;
LABEL_37:
        v31 = v151;
        v153 = (__int64 (__fastcall *)(__int128 *))v30;
        if ( v170 )
        {
          if ( v170 == 1 )
          {
            v32 = SkipDIB_CX;
            v33 = GraySkipDIB_CX;
          }
          else
          {
            if ( v170 != 2 )
            {
LABEL_44:
              v29 = -1;
              v169 = -1;
              goto LABEL_45;
            }
            v32 = RepDIB_CX;
            v33 = GrayRepDIB_CX;
          }
        }
        else
        {
          v32 = CopyDIB_CX;
          v33 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
        }
        if ( v151 == 1 )
          v32 = v33;
        v171 = v32;
        goto LABEL_44;
      }
    }
  }
  v31 = v151;
LABEL_45:
  switch ( v29 )
  {
    case 0:
      v153 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
      if ( v31 != 1 )
      {
        v150 = 0;
        goto LABEL_51;
      }
      v130 = -1;
      if ( (unsigned __int64)(2 * v26) <= 0xFFFFFFFF )
        v130 = 2 * v26;
      v150 = v130;
      if ( (unsigned __int64)(2 * v26) <= 0xFFFFFFFF )
        goto LABEL_51;
      goto LABEL_164;
    case 1:
      v153 = (__int64 (__fastcall *)(__int128 *))BltDIB_CY;
      goto LABEL_51;
    case 2:
      if ( v151 == 1 )
      {
        v153 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v27) > 0xFFFFFFFF )
          goto LABEL_164;
        v127 = 12 * v27;
        if ( (int)v27 + 6 < (unsigned int)v27 )
          goto LABEL_164;
        v128 = v27 + 2054;
      }
      else
      {
        v153 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
        if ( v151 * (unsigned __int64)v28 > 0xFFFFFFFF )
          goto LABEL_164;
        v127 = v151 * v28;
        if ( (unsigned __int64)(36 * v26) > 0xFFFFFFFF )
          goto LABEL_164;
        v128 = 36 * v26 + 2048;
      }
      if ( v128 >= 0x800 )
      {
        v129 = v128;
        v102 = v127 + v128;
        v103 = v127 + v129 < v127;
LABEL_113:
        v104 = -1;
        if ( !v103 )
          v104 = v102;
        v150 = v104;
        if ( !v103 )
          goto LABEL_51;
      }
LABEL_164:
      EngFreeMem(v22);
      return 0LL;
    case 3:
      v100 = v22[5];
      v153 = ShrinkDIB_CY_SrkCX;
      if ( v100 + 2 < v100 )
        goto LABEL_164;
      v101 = v100 + 2;
      if ( (unsigned __int64)(36 * v101) > 0xFFFFFFFF )
        goto LABEL_164;
      v102 = 36 * v101 + 2048;
      v103 = (unsigned int)(36 * v101) >= 0xFFFFF800;
      goto LABEL_113;
    case 4:
      v124 = GrayExpandDIB_CY;
      if ( v151 != 1 )
        v124 = ExpandDIB_CY;
      v153 = (__int64 (__fastcall *)(__int128 *))v124;
      if ( (int)v27 + 6 < (unsigned int)v27 )
        goto LABEL_164;
      v125 = v151 * (unsigned __int64)(unsigned int)(v27 + 6);
      if ( v125 > 0xFFFFFFFF )
        goto LABEL_164;
      v126 = 6LL * (unsigned int)v125;
      if ( v126 > 0xFFFFFFFF )
        goto LABEL_164;
      v102 = v126 + 4096;
      v103 = (unsigned int)v126 >= 0xFFFFF000;
      goto LABEL_113;
  }
  if ( v29 != 5 )
    goto LABEL_51;
  if ( (v23 & 0x4000) != 0 )
  {
    v109 = v31 * (unsigned __int64)v28;
    if ( v109 <= 0xFFFFFFFF )
    {
      v110 = -1;
      if ( 5 * (unsigned __int64)(unsigned int)v109 <= 0xFFFFFFFF )
        v110 = 5 * v109;
      v150 = v110;
      if ( 5 * (unsigned __int64)(unsigned int)v109 <= 0xFFFFFFFF )
      {
        v153 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
        goto LABEL_51;
      }
    }
    goto LABEL_164;
  }
  v115 = GrayExpandDIB_CY_ExpCX;
  if ( v31 != 1 )
    v115 = ExpandDIB_CY_ExpCX;
  v153 = (__int64 (__fastcall *)(__int128 *))v115;
  if ( (int)v27 + 6 < (unsigned int)v27 )
    goto LABEL_226;
  v116 = v31;
  v117 = v31 * (unsigned __int64)(unsigned int)(v27 + 6);
  if ( v117 > 0xFFFFFFFF )
    goto LABEL_226;
  v118 = 4LL * (unsigned int)v117;
  if ( v118 > 0xFFFFFFFF )
    goto LABEL_226;
  v119 = v118;
  v120 = v116 * v28;
  if ( v120 > 0xFFFFFFFF )
    goto LABEL_226;
  v121 = 3LL * (unsigned int)v120;
  if ( v121 > 0xFFFFFFFF || (int)v121 + v119 < (unsigned int)v121 )
    goto LABEL_226;
  v122 = v121 + v119 + 4096;
  v123 = -1;
  if ( v122 >= 0x1000 )
    v123 = v121 + v119 + 4096;
  v150 = v123;
  if ( v122 < 0x1000 )
    goto LABEL_226;
  LODWORD(v26) = v155;
LABEL_51:
  v103 = v25 != 0;
  v34 = v151;
  v35 = v103 ? v27 : 0;
  *(_BYTE *)(a3 + 96) = v151 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v34 * v35;
  if ( v35 + 8 < v35 )
    goto LABEL_138;
  v36 = (unsigned int)v34;
  v37 = v34 * (v35 + 8);
  v38 = 0xFFFFFFFFLL;
  if ( v37 <= 0xFFFFFFFF )
    v38 = (unsigned int)v37;
  v149 = v38;
  if ( v37 > 0xFFFFFFFF || (int)ALIGN_MEM(&v149, v38) < 0 || (int)ALIGN_MEM(&v150, v39) < 0 || v41 + 2 < v41 )
    goto LABEL_138;
  v42 = (unsigned int)v40;
  v43 = v36 * (v41 + 2);
  if ( v43 <= v40 )
    v42 = (unsigned int)v43;
  v152 = v42;
  if ( v43 > v40 || (int)ALIGN_MEM(&v152, v42) < 0 || (unsigned int)v27 >= 0xFFFFFFF6 )
    goto LABEL_138;
  v45 = (unsigned int)v44;
  v46 = 4LL * (unsigned int)(v27 + 10);
  if ( v46 <= v44 )
    v45 = (unsigned int)v46;
  v158 = v45;
  if ( v46 > v44 || (int)ALIGN_MEM(&v158, v45) < 0 )
    goto LABEL_138;
  if ( (v23 & 0x80u) != 0 )
  {
    v131 = ComputeBytesPerScanLine(1u, 4u, v26);
    v132 = v131 + 4;
    if ( (unsigned int)v132 < v131 )
      goto LABEL_138;
    v154 = v131 + 4;
    if ( (int)ALIGN_MEM(&v154, v132) < 0 )
      goto LABEL_138;
    v47 = v154;
    v159 = v154;
  }
  else
  {
    v47 = 0;
    v159 = 0;
  }
  v48 = v152;
  if ( v152 < v149 )
    v48 = v149;
  v157 = v48;
  if ( (v23 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v149, (unsigned int)v27) < 0 )
      goto LABEL_138;
    v49 = v149;
    v154 = v149;
  }
  else
  {
    v49 = 0;
    v154 = 0;
  }
  v50 = v163;
  if ( v160 == 254 && v163[7] )
  {
    if ( (int)ALIGN_MEM(&v152, 366LL) < 0 )
      goto LABEL_138;
    v51 = v152;
    v149 = v152;
  }
  else
  {
    v51 = 0;
    v149 = 0;
  }
  if ( (v23 & 0x40) != 0 )
  {
    if ( v155 + 4 >= v155 )
    {
      v107 = 0xFFFFFFFFLL;
      v108 = v36 * (v155 + 4);
      if ( v108 <= 0xFFFFFFFF )
        v107 = (unsigned int)v108;
      v152 = v107;
      if ( v108 <= 0xFFFFFFFF && (int)ALIGN_MEM(&v152, v107) >= 0 )
      {
        v52 = v152;
        goto LABEL_77;
      }
    }
LABEL_138:
    v12 = -2;
LABEL_226:
    v148 = (int *)v22;
    goto LABEL_227;
  }
  v52 = 0;
LABEL_77:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (v50[8] & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v50 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v152, 3072LL) >= 0 )
    {
      v53 = v152;
      goto LABEL_79;
    }
    goto LABEL_138;
  }
  v53 = 0;
LABEL_79:
  v54 = 6LL * (unsigned int)v52;
  if ( v54 > 0xFFFFFFFF )
    goto LABEL_147;
  v55 = v54 + v48;
  if ( 6 * v52 + v48 < (unsigned int)(6 * v52) )
    goto LABEL_147;
  v56 = v55 + v158;
  if ( v55 + v158 < v55
    || (v57 = v56 + v47, v56 + v47 < v56)
    || (v58 = v57 + v49, v57 + v49 < v57)
    || (v59 = v58 + v53, v58 + v53 < v58)
    || (v60 = v59 + v51, v59 + v51 < v59)
    || (v61 = v150, v60 + v150 < v60)
    || (v62 = v173(v164, v168, &v179, v181, *(_DWORD *)(v161 + 16), v187, v189, &v183, &v185, v60 + v150),
        (v63 = (int *)v62) == 0LL) )
  {
LABEL_147:
    EngFreeMem(v22);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v62 || !*(_DWORD *)(v62 + 4) )
    goto LABEL_225;
  v64 = *(_QWORD *)(v62 + 32) + v61;
  v65 = v151 * v155;
  *(_DWORD *)a3 = v168;
  v66 = v154;
  *(_QWORD *)(a3 + 536) = v64;
  *(_DWORD *)(a3 + 64) = v65;
  v67 = v157 + v64;
  if ( (_DWORD)v66 )
  {
    v68 = v156;
    *(_QWORD *)(a3 + 352) = v67;
    *(_QWORD *)(a3 + 344) = v67;
    *(_DWORD *)(a3 + 368) = 1;
    v133 = v67 + v68;
    v67 += v66;
    *(_QWORD *)(a3 + 360) = v133;
  }
  else
  {
    LODWORD(v68) = v156;
  }
  if ( v52 )
  {
    *(_QWORD *)(a3 + 264) = v67;
    v105 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v52;
    v106 = 6LL;
    do
    {
      *v105 = v67;
      v67 += v52;
      ++v105;
      --v106;
    }
    while ( v106 );
  }
  v69 = v149;
  if ( v149 )
  {
    *(_QWORD *)(a3 + 400) = v67;
    v67 += v69;
  }
  v70 = v159;
  if ( v159 )
  {
    *(_QWORD *)(a3 + 208) = v67;
    v67 += v70;
  }
  if ( v53 )
  {
    *(_QWORD *)(a3 + 16) = v67;
    v67 += v53;
  }
  else
  {
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a3 + 384);
  }
  v71 = 4LL * (int)v68;
  *(_QWORD *)(a3 + 576) = v67 + 20;
  *(_QWORD *)(a3 + 544) = v67 + 20;
  *(_QWORD *)(a3 + 560) = v67 + 20;
  *(_QWORD *)(a3 + 568) = v71 + v67 + 20;
  *(_QWORD *)(a3 + 552) = v71 + v67 + 20;
  *(_QWORD *)(a3 + 584) = v71 + v67 + 20;
  memset((void *)(v67 + 20), 255, v71);
  v72 = v182;
  if ( v182 > v184 )
  {
    v134 = v182;
    *(_DWORD *)(a3 + 592) = -4;
    v72 = v184;
    v184 = v134;
    v135 = *(_QWORD *)(a3 + 568) - 4LL;
    v182 = v72;
    *(_QWORD *)(a3 + 576) = v135;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
  }
  else
  {
    *(_DWORD *)(a3 + 592) = 4;
  }
  v73 = v168;
  *(_DWORD *)(a3 + 328) = v72 - v192;
  if ( (v73 & 2) != 0 )
  {
    v74 = v191 - v183 - 1;
    v183 = v74;
    v185 = v191 - v185 - 1;
  }
  else
  {
    v74 = v183;
  }
  *(_QWORD *)(a3 + 304) = v22;
  *(_DWORD *)(a3 + 332) = v74 - v193;
  *(_QWORD *)(a3 + 288) = v171;
  *(_QWORD *)(a3 + 312) = v63;
  *(_DWORD *)(a3 + 56) = *v22;
  v75 = *v63;
  *(_DWORD *)(a3 + 60) = *v63;
  *(_DWORD *)(a3 + 40) = v75;
  if ( (v73 & 0x80u) == 0 )
    goto LABEL_104;
  v136 = v22[30] + v194;
  v137 = v162[5];
  v194 = v136;
  v138 = v63[30] + v195;
  v195 = v138;
  v139 = v136 + v22[31];
  v140 = v138 + v63[31];
  v157 = v137;
  if ( v136 < 0 || v138 < 0 || (int)v139 > v162[3] || v140 > v162[4] )
  {
    v12 = -13;
LABEL_225:
    EngFreeMem(v22);
    v148 = v63;
LABEL_227:
    EngFreeMem(v148);
    return v12;
  }
  *(_DWORD *)(a3 + 224) = v137;
  *(_DWORD *)(a3 + 228) = v63[31];
  ComputeByteOffset(1LL, v139, a3 + 4);
  v142 = ComputeByteOffset(1LL, (unsigned int)v136, v141);
  v143 = v157 * v138;
  v145 = v162;
  *(_DWORD *)(a3 + 200) = v144 - v142 + 1;
  v146 = v142 + *((_QWORD *)v145 + 3) + v143;
  v147 = v165;
  *(_QWORD *)(a3 + 216) = v146;
  if ( (*v147 & 8) != 0 )
  {
    v73 |= 0x100u;
    v168 = v73;
  }
  v72 = v182;
  LODWORD(v68) = v156;
  *(_QWORD *)(a3 + 184) = v174;
  *(_QWORD *)(a3 + 192) = v175;
LABEL_104:
  v76 = v161;
  v77 = v178;
  v78 = *(_DWORD *)(v161 + 20);
  *(_DWORD *)(a3 + 68) = v78;
  *(_DWORD *)(a3 + 260) = v78;
  v79 = ComputeByteOffset(*(unsigned __int8 *)(v76 + 10), v77, a3 + 9);
  v80 = *(_QWORD *)(v76 + 24);
  v81 = v166;
  v83 = v82 * v179 + (__int64)v79;
  *(_QWORD *)(a3 + 232) = v176;
  v84 = v83 + v80;
  *(_QWORD *)(a3 + 240) = v177;
  *(_QWORD *)(a3 + 48) = v84;
  *(_QWORD *)(a3 + 32) = v84;
  v85 = *(_DWORD *)(v81 + 20);
  if ( v86 > v87 )
    v85 = -v85;
  v88 = v160;
  *(_DWORD *)(a3 + 156) = v85;
  v89 = ComputeByteOffset(v88, v72, a3 + 97);
  v92 = v91 * v90 + (__int64)v89;
  v93 = *(_DWORD *)(a3 + 156);
  v94 = v92 + *(_QWORD *)(v81 + 24);
  *(_QWORD *)(a3 + 136) = v94;
  *(_QWORD *)(a3 + 120) = v94;
  v95 = v63[1] * v93;
  *(_DWORD *)(a3 + 144) = v68;
  *(_QWORD *)(a3 + 320) = v94 + v95;
  v96 = v63[1];
  v97 = v167;
  *(_DWORD *)(a3 + 148) = v96;
  *(_DWORD *)(a3 + 128) = v96;
  v98 = v153;
  *(_DWORD *)a3 = v73;
  *v97 = v98;
  if ( (v73 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += *(_DWORD *)(a3 + 68) * v63[6];
    *(_DWORD *)(a3 + 60) -= v63[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
