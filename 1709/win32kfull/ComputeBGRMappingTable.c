/*
 * XREFs of ComputeBGRMappingTable @ 0x1C023E944
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0079748 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C023FA08 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     FD6DivL @ 0x1C007B200 (FD6DivL.c)
 *     MulDivFD6Pairs @ 0x1C010E1AC (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C023E854 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C023F70C (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v4; // r11d
  unsigned __int8 v5; // al
  char v6; // cl
  __int64 v7; // r13
  unsigned __int64 *v9; // xmm1_8
  unsigned __int8 v10; // r15
  char v11; // r8
  unsigned __int64 *v12; // rdi
  unsigned int v13; // edx
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  char v20; // cl
  int v21; // eax
  __int16 v22; // bx
  __int16 v23; // r15
  int v24; // edi
  int v25; // r13d
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  char *v29; // rax
  char *v30; // rbx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r8d
  unsigned int v35; // r14d
  int v36; // r9d
  int v37; // r10d
  int v38; // eax
  _DWORD *v39; // rdx
  _BYTE *v40; // r13
  int v41; // eax
  int v42; // r12d
  int v43; // r14d
  int v44; // r15d
  int v45; // r9d
  int v46; // r13d
  int v47; // edi
  int v48; // ebx
  int v49; // edx
  int v50; // r14d
  int v51; // r15d
  int v52; // edx
  int v53; // ecx
  int v54; // r14d
  int v55; // eax
  int v56; // ebx
  int v57; // r14d
  int v58; // r15d
  int v59; // eax
  int v60; // eax
  int v61; // ebx
  int v62; // r14d
  int v63; // eax
  int v64; // r14d
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  int v68; // edx
  int v69; // r14d
  int v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // ebx
  int v74; // eax
  int v75; // edx
  int v76; // ebx
  int v77; // edx
  int v78; // eax
  int v79; // r13d
  int v80; // ecx
  _DWORD *v81; // r14
  int v82; // ebx
  int v83; // eax
  int v84; // r13d
  char v85; // al
  __int64 v86; // rbx
  void *v87; // rcx
  size_t v88; // r8
  unsigned __int8 v89; // [rsp+20h] [rbp-E0h]
  char v90; // [rsp+21h] [rbp-DFh]
  int v91; // [rsp+24h] [rbp-DCh]
  int v92; // [rsp+24h] [rbp-DCh]
  int v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+28h] [rbp-D8h]
  int v95; // [rsp+2Ch] [rbp-D4h]
  int v96; // [rsp+30h] [rbp-D0h]
  int v97; // [rsp+34h] [rbp-CCh]
  int v98; // [rsp+38h] [rbp-C8h]
  int v99; // [rsp+3Ch] [rbp-C4h]
  int v100; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v101; // [rsp+48h] [rbp-B8h]
  _BYTE *v102; // [rsp+48h] [rbp-B8h]
  char *Src; // [rsp+50h] [rbp-B0h]
  int v104; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v105; // [rsp+60h] [rbp-A0h]
  _DWORD *v106; // [rsp+68h] [rbp-98h]
  _DWORD *v107; // [rsp+70h] [rbp-90h]
  int v108; // [rsp+78h] [rbp-88h]
  int v109; // [rsp+7Ch] [rbp-84h]
  __int64 v110; // [rsp+80h] [rbp-80h]
  _DWORD *v111; // [rsp+88h] [rbp-78h]
  __int64 v112; // [rsp+90h] [rbp-70h]
  char *v113; // [rsp+98h] [rbp-68h]
  char *v114; // [rsp+A0h] [rbp-60h]
  __int64 v115; // [rsp+A8h] [rbp-58h]
  _DWORD *v116; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v117; // [rsp+B8h] [rbp-48h] BYREF
  int v118; // [rsp+C0h] [rbp-40h]
  int v119; // [rsp+C8h] [rbp-38h] BYREF
  int v120; // [rsp+D0h] [rbp-30h]
  int v121; // [rsp+D4h] [rbp-2Ch]
  int v122; // [rsp+D8h] [rbp-28h]
  int v123; // [rsp+DCh] [rbp-24h]
  int v124; // [rsp+E0h] [rbp-20h]
  int v125; // [rsp+E4h] [rbp-1Ch]
  __int128 v126; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v127; // [rsp+F8h] [rbp-8h]
  int v128; // [rsp+100h] [rbp+0h] BYREF
  int v129; // [rsp+104h] [rbp+4h]
  int v130; // [rsp+108h] [rbp+8h]
  int v131; // [rsp+10Ch] [rbp+Ch]
  int v132; // [rsp+110h] [rbp+10h]
  int v133; // [rsp+114h] [rbp+14h]

  v4 = 0;
  v110 = a4;
  v105 = 0LL;
  v106 = 0LL;
  v5 = 0;
  v113 = 0LL;
  v6 = 0;
  v111 = 0LL;
  v7 = a4;
  v107 = 0LL;
  Src = 0LL;
  v114 = 0LL;
  v104 = 0;
  v117 = 0LL;
  v118 = 0;
  v95 = 0;
  if ( a3 )
  {
    v9 = (unsigned __int64 *)*((_QWORD *)a3 + 2);
    v126 = *a3;
    v10 = BYTE2(v126);
    v11 = BYTE1(v126);
    v6 = v126;
    v91 = DWORD1(v126);
    v5 = BYTE3(v126);
    v127 = v9;
    v12 = v9;
    v89 = BYTE2(v126);
    v100 = DWORD2(v126);
  }
  else
  {
    v89 = 0;
    v91 = 255;
    v11 = 0;
    v12 = &v117;
    v100 = 0x8000;
    v10 = 0;
  }
  v101 = v12;
  if ( v6 )
    return 4294967267LL;
  v13 = *(_DWORD *)(a2 + 56);
  v98 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v12 )
    return 4294967278LL;
  v112 = 0LL;
  v15 = 0LL;
  if ( v11 )
  {
    if ( v5 > 5u )
      return 4294967273LL;
    v16 = SrcOrderTable[v5];
    v17 = v16 >> 8;
    if ( BYTE1(v16) >= 3u )
      return 4294967273LL;
    v13 = HIWORD(v16);
    if ( BYTE2(v16) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v16);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v105 = (_DWORD *)&v117 + (unsigned __int8)v17;
    v19 = (unsigned __int8)v13;
    LOWORD(v13) = v98;
    v106 = (_DWORD *)&v117 + v19;
    v107 = (_DWORD *)&v117 + (unsigned __int8)v18;
  }
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v96 = 1;
        break;
      case 2:
        v96 = 2;
        break;
      case 4:
        v96 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 304);
    v10 = 0;
    v112 = v15;
    v89 = 0;
    v91 = 31;
    v96 = 0;
  }
  v109 = v13 & 0x400;
  if ( (v13 & 0x400) != 0 )
    v111 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v20 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v90 = v20;
  if ( !v20 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v13 & 0x80C0) != 0 )
  {
    v21 = 1000000;
    v22 = 1;
    v23 = v20 == 0;
    v93 = 1000000;
    if ( (v13 & 0x40) != 0 )
      v24 = *(_DWORD *)(a2 + 92);
    else
      v24 = 1000000;
    v25 = v24;
    if ( (v13 & 0x80u) != 0 )
    {
      if ( v20 == 1 )
      {
        v25 = 500 * v24;
        v24 *= 200;
      }
      v23 = 1;
      v26 = *(_DWORD *)(a2 + 96);
      LODWORD(v127) = MulFD6(v24, -v26);
      v27 = MulFD6(v25, v26);
      v22 = 2;
      v132 = v27;
      v21 = *(_DWORD *)(a2 + 100);
      v93 = v21;
      DWORD1(v126) = 500000000;
      v129 = 200000000;
    }
    DWORD2(v126) = MulFD6(v25, v21);
    v28 = MulFD6(v24, v93);
    v12 = v101;
    v4 = 0;
    v7 = v110;
    WORD1(v126) = v23;
    HIWORD(v128) = v23;
    v10 = v89;
    v130 = v28;
    LOWORD(v126) = v22;
    LOWORD(v128) = v22;
  }
  if ( !v15 )
  {
    v30 = 0LL;
    goto LABEL_42;
  }
  v29 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x31355448u);
  v4 = 0;
  Src = v29;
  v30 = v29;
  if ( !v29 )
  {
LABEL_42:
    v34 = v91;
    goto LABEL_43;
  }
  v31 = *(unsigned __int16 *)(v15 + 16) + 1;
  v32 = CacheRGBToXYZ(v15, v29, (__int64)&v104, a2);
  v33 = 3LL * v31;
  v112 = v32;
  v30 = Src;
  v4 = 0;
  v34 = 0;
  v113 = &Src[4 * v33];
  v114 = &v113[4 * v33];
LABEL_43:
  v35 = v100;
  v119 = 3;
  v36 = 0;
  if ( v34 == 1000000 )
    v34 = 0;
  v97 = 0;
  v92 = v34;
  v37 = 0;
  v99 = 0;
  v38 = v100;
  v94 = 0;
  if ( v100 )
  {
    v39 = (_DWORD *)v12 + 1;
    v115 = v10;
    v40 = (_BYTE *)(v7 + 1);
    v108 = v98 & 0x80C0;
    v102 = v40;
    while ( 1 )
    {
      LODWORD(v110) = v38 - 1;
      if ( v96 )
      {
        if ( v96 == 1 )
        {
          *v105 = *((unsigned __int8 *)v39 - 4);
          *v106 = *((unsigned __int8 *)v39 - 3);
          v41 = *((unsigned __int8 *)v39 - 2);
        }
        else if ( v96 == 2 )
        {
          *v105 = *((__int16 *)v39 - 2);
          *v106 = *((__int16 *)v39 - 1);
          v41 = *(__int16 *)v39;
        }
        else
        {
          *v105 = *(v39 - 1);
          *v106 = *v39;
          v41 = v39[1];
        }
        *v107 = v41;
        v42 = v118;
        v43 = HIDWORD(v117);
        v44 = v117;
      }
      else
      {
        v44 = v4;
        v117 = __PAIR64__(v37, v4);
        v118 = v36;
        v43 = v37;
        v94 = v4 + 1;
        v42 = v36;
        if ( v4 + 1 >= 32 )
        {
          v94 = 0;
          v99 = v37 + 1;
          if ( v37 + 1 >= 32 )
          {
            v45 = v36 + 1;
            v99 = 0;
            if ( v45 >= 32 )
              v45 = 0;
            v97 = v45;
          }
        }
      }
      v116 = (_DWORD *)((char *)v39 + v115);
      if ( v34 )
      {
        v44 = DivFD6(v44, v34);
        LODWORD(v117) = v44;
        v43 = DivFD6(v43, v92);
        HIDWORD(v117) = v43;
        v42 = DivFD6(v42, v92);
        v118 = v42;
      }
      if ( !v108 )
        goto LABEL_104;
      if ( v30 )
      {
        v46 = *(_DWORD *)&v114[12 * v42] + *(_DWORD *)&v30[12 * v44] + *(_DWORD *)&v113[12 * v43];
        v47 = *(_DWORD *)&v114[12 * v42 + 4] + *(_DWORD *)&v113[12 * v43 + 4] + *(_DWORD *)&v30[12 * v44 + 4];
        v48 = *(_DWORD *)&v114[12 * v42 + 8] + *(_DWORD *)&v113[12 * v43 + 8] + *(_DWORD *)&v30[12 * v44 + 8];
      }
      else
      {
        v120 = *(_DWORD *)(a2 + 124);
        v122 = *(_DWORD *)(a2 + 128);
        v124 = *(_DWORD *)(a2 + 132);
        HIWORD(v119) = 0;
        v121 = v44;
        v123 = v43;
        v125 = v42;
        v46 = MulDivFD6Pairs(&v119);
        v121 = v44;
        v120 = *(_DWORD *)(a2 + 136);
        v122 = *(_DWORD *)(a2 + 140);
        v124 = *(_DWORD *)(a2 + 144);
        v123 = v43;
        v125 = v42;
        v47 = MulDivFD6Pairs(&v119);
        v120 = *(_DWORD *)(a2 + 148);
        v122 = *(_DWORD *)(a2 + 152);
        v124 = *(_DWORD *)(a2 + 156);
        v121 = v44;
        v123 = v43;
        v125 = v42;
        v48 = MulDivFD6Pairs(&v119);
      }
      if ( v90 )
      {
        v49 = *(_DWORD *)(a2 + 160);
        if ( v49 != 1000000 )
          v46 = DivFD6(v46, v49);
        if ( v46 < 8856 )
          v50 = MulFD6(v46, 7787000) + 137931;
        else
          v50 = RaisePower(v46, 3LL, 3);
        if ( v47 < 8856 )
          v51 = MulFD6(v47, 7787000) + 137931;
        else
          v51 = RaisePower(v47, 3LL, 3);
        v52 = *(_DWORD *)(a2 + 168);
        v95 = v51;
        if ( v52 != 1000000 )
          v48 = DivFD6(v48, v52);
        if ( v48 < 8856 )
          v53 = MulFD6(v48, 7787000) + 137931;
        else
          v53 = RaisePower(v48, 3LL, 3);
        v54 = v50 - v51;
        v55 = v51 - v53;
      }
      else
      {
        v56 = v46 + 2 * (v47 + v48 + 4 * v47) + v47 + v48 + 4 * v47;
        v57 = DivFD6(4 * v46, v56) - *(_DWORD *)(a2 + 184);
        v58 = DivFD6(9 * v47, v56) - *(_DWORD *)(a2 + 188);
        if ( v47 <= 8856 )
        {
          v60 = MulFD6(v47, 9033000);
        }
        else
        {
          v59 = RaisePower(v47, 3LL, 3);
          v60 = MulFD6(v59, 1160000) - 160000;
        }
        v61 = 13 * v60;
        v54 = MulFD6(13 * v60, v57);
        v55 = MulFD6(v61, v58);
        v51 = v95;
        DWORD1(v126) = v61;
        v129 = v61;
      }
      v133 = v54;
      HIDWORD(v126) = v54;
      v131 = v55;
      HIDWORD(v127) = v55;
      v62 = MulDivFD6Pairs((int *)&v126);
      v63 = MulDivFD6Pairs(&v128);
      if ( v90 )
      {
        v64 = v51 + v62;
        v65 = v51 - v63;
        if ( v64 <= 206893 )
        {
          v67 = DivFD6(v64 - 137931, 7787000);
        }
        else
        {
          v66 = MulFD6(v64, v64);
          v67 = MulFD6(v64, v66);
        }
        v68 = *(_DWORD *)(a2 + 240);
        v69 = v67;
        if ( v68 != 1000000 )
          v69 = MulFD6(v67, v68);
        if ( v65 <= 206893 )
        {
          v71 = DivFD6(v65 - 137931, 7787000);
        }
        else
        {
          v70 = MulFD6(v65, v65);
          v71 = MulFD6(v65, v70);
        }
        v72 = *(_DWORD *)(a2 + 248);
        v73 = v71;
        if ( v72 == 1000000 )
          goto LABEL_103;
        v74 = MulFD6(v71, v72);
      }
      else
      {
        v75 = v63 + *(_DWORD *)(a2 + 268);
        if ( v75 < 0 || (v76 = DivFD6(9 * v47, v75), v76 < 0) )
          v76 = 2147000000;
        v77 = v62 + *(_DWORD *)(a2 + 264);
        if ( v77 >= 0 )
        {
          v78 = MulFD6(v76, v77);
          v69 = FD6DivL(v78, 4);
        }
        else
        {
          v69 = 0;
        }
        v74 = FD6DivL(v76 - 15 * v47 - v69, 3);
      }
      v73 = v74;
LABEL_103:
      v120 = *(_DWORD *)(a2 + 204);
      v122 = *(_DWORD *)(a2 + 208);
      v124 = *(_DWORD *)(a2 + 212);
      HIWORD(v119) = 0;
      v121 = v69;
      v123 = v47;
      v125 = v73;
      LODWORD(v117) = MulDivFD6Pairs(&v119);
      v120 = *(_DWORD *)(a2 + 216);
      v122 = *(_DWORD *)(a2 + 220);
      v124 = *(_DWORD *)(a2 + 224);
      v121 = v69;
      v123 = v47;
      v125 = v73;
      HIDWORD(v117) = MulDivFD6Pairs(&v119);
      v120 = *(_DWORD *)(a2 + 228);
      v122 = *(_DWORD *)(a2 + 232);
      v124 = *(_DWORD *)(a2 + 236);
      v121 = v69;
      v123 = v47;
      v125 = v73;
      v118 = MulDivFD6Pairs(&v119);
      ScaleRGB(&v117);
      v42 = v118;
      v43 = HIDWORD(v117);
      v44 = v117;
      v40 = v102;
LABEL_104:
      if ( v109 )
      {
        if ( (v98 & 0x800) != 0 )
        {
          v79 = v43;
          if ( v44 > v43 )
            v79 = v44;
          if ( v42 > v79 )
            v79 = v42;
        }
        else
        {
          v79 = 1000000;
        }
        v80 = v79 - v43;
        HIWORD(v119) = 0;
        v81 = v111;
        v95 = v80;
        v123 = v80;
        v82 = v79 - v44;
        v121 = v79 - v44;
        v120 = *v111;
        v122 = v111[1];
        v124 = v111[2];
        v125 = v79 - v42;
        v83 = MulDivFD6Pairs(&v119);
        v121 = v79 - v44;
        v44 = v79 - v83;
        v123 = v95;
        v120 = v81[3];
        v122 = v81[4];
        v124 = v81[5];
        v125 = v79 - v42;
        v43 = v79 - MulDivFD6Pairs(&v119);
        v121 = v82;
        v123 = v95;
        v125 = v79 - v42;
        v120 = v111[6];
        v122 = v111[7];
        v124 = v111[8];
        v84 = v79 - MulDivFD6Pairs(&v119);
        if ( v44 >= 0 )
        {
          if ( v44 > 1000000 )
            v44 = 1000000;
          LODWORD(v117) = v44;
        }
        else
        {
          v44 = 0;
          LODWORD(v117) = 0;
        }
        if ( v43 >= 0 )
        {
          if ( v43 > 1000000 )
            v43 = 1000000;
          HIDWORD(v117) = v43;
        }
        else
        {
          v43 = 0;
          HIDWORD(v117) = 0;
        }
        if ( v84 >= 0 )
        {
          if ( v84 > 1000000 )
            v84 = 1000000;
          v42 = v84;
          v118 = v84;
        }
        else
        {
          v42 = 0;
          v118 = 0;
        }
        v40 = v102;
      }
      v40[1] = MulFD6(v44, 255);
      *v40 = MulFD6(v43, 255);
      v85 = MulFD6(v42, 255);
      v39 = v116;
      v30 = Src;
      v34 = v92;
      v36 = v97;
      v37 = v99;
      v4 = v94;
      *(v40 - 1) = v85;
      v40 += 3;
      v38 = v110;
      v102 = v40;
      if ( !(_DWORD)v110 )
      {
        v35 = v100;
        break;
      }
    }
  }
  if ( Src )
  {
    v86 = v112;
    if ( v112 )
    {
      if ( !*(_QWORD *)(v112 + 8) )
        *(_QWORD *)(v86 + 8) = EngAllocMem(0, *(unsigned __int16 *)(v112 + 18), 0x32345448u);
      v87 = *(void **)(v86 + 8);
      if ( v87 )
      {
        v88 = *(unsigned __int16 *)(v86 + 18);
        *(_DWORD *)v86 = v104;
        memmove(v87, Src, v88);
      }
    }
    EngFreeMem(Src);
  }
  return v35;
}
