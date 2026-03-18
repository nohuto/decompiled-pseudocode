/*
 * XREFs of ComputeBGRMappingTable @ 0x1C023D020
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C023E0D8 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     FD6DivL @ 0x1C00EE288 (FD6DivL.c)
 *     MulDivFD6Pairs @ 0x1C01038FC (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C023CF30 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C023DDDC (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, _BYTE *a4)
{
  int v4; // r10d
  int v5; // r12d
  unsigned __int8 v6; // al
  char v7; // cl
  _QWORD *v9; // xmm1_8
  unsigned __int8 v10; // r15
  int v11; // r13d
  char v12; // r8
  __int64 *v13; // rdi
  unsigned int v14; // edx
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // r13d
  char v22; // r8
  int v23; // ecx
  __int16 v24; // bx
  __int16 v25; // r15
  int v26; // edi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  char *v33; // rax
  char *v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r8d
  unsigned int v39; // r14d
  int v40; // r9d
  int v41; // r11d
  int v42; // ecx
  int v43; // r14d
  _DWORD *v44; // rdx
  __int64 v45; // rax
  int v46; // r15d
  int v47; // eax
  int v48; // r9d
  int v49; // r13d
  int v50; // edi
  int v51; // ebx
  int v52; // edx
  int v53; // r14d
  int v54; // r15d
  int v55; // edx
  int v56; // ecx
  int v57; // r14d
  int v58; // eax
  int v59; // ebx
  int v60; // r14d
  int v61; // r15d
  int v62; // eax
  int v63; // eax
  int v64; // ebx
  int v65; // r14d
  int v66; // eax
  int v67; // r14d
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // edx
  int v72; // r14d
  int v73; // eax
  int v74; // eax
  int v75; // edx
  int v76; // ebx
  int v77; // eax
  int v78; // edx
  int v79; // ebx
  int v80; // edx
  int v81; // eax
  int v82; // r13d
  int v83; // ecx
  _DWORD *v84; // r14
  int v85; // ebx
  int v86; // eax
  int v87; // r13d
  char v88; // al
  _BYTE *v89; // r13
  char v90; // al
  __int64 v91; // rbx
  void *v92; // rcx
  size_t v93; // r8
  unsigned __int8 v94; // [rsp+20h] [rbp-E0h]
  char v95; // [rsp+21h] [rbp-DFh]
  int v96; // [rsp+24h] [rbp-DCh]
  int v97; // [rsp+24h] [rbp-DCh]
  int v98; // [rsp+28h] [rbp-D8h]
  int v99; // [rsp+2Ch] [rbp-D4h]
  int v100; // [rsp+2Ch] [rbp-D4h]
  int v101; // [rsp+30h] [rbp-D0h]
  int v102; // [rsp+30h] [rbp-D0h]
  int v103; // [rsp+34h] [rbp-CCh]
  int v104; // [rsp+38h] [rbp-C8h]
  char *Src; // [rsp+40h] [rbp-C0h]
  int v106; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v107; // [rsp+50h] [rbp-B0h]
  _QWORD *v108; // [rsp+60h] [rbp-A0h]
  __int64 *v109; // [rsp+68h] [rbp-98h]
  _DWORD *v110; // [rsp+70h] [rbp-90h]
  _DWORD *v111; // [rsp+78h] [rbp-88h]
  _DWORD *v112; // [rsp+80h] [rbp-80h]
  _BYTE *v113; // [rsp+88h] [rbp-78h]
  int v114; // [rsp+90h] [rbp-70h]
  _DWORD *v115; // [rsp+98h] [rbp-68h]
  __int64 v116; // [rsp+A0h] [rbp-60h]
  char *v117; // [rsp+A8h] [rbp-58h]
  char *v118; // [rsp+B0h] [rbp-50h]
  __int64 v119; // [rsp+B8h] [rbp-48h]
  _DWORD *v120; // [rsp+C0h] [rbp-40h]
  __int64 v121; // [rsp+C8h] [rbp-38h] BYREF
  int v122; // [rsp+D0h] [rbp-30h]
  int v123; // [rsp+D8h] [rbp-28h] BYREF
  int v124; // [rsp+E0h] [rbp-20h]
  int v125; // [rsp+E4h] [rbp-1Ch]
  int v126; // [rsp+E8h] [rbp-18h]
  int v127; // [rsp+ECh] [rbp-14h]
  int v128; // [rsp+F0h] [rbp-10h]
  int v129; // [rsp+F4h] [rbp-Ch]
  int v130; // [rsp+F8h] [rbp-8h] BYREF
  int v131; // [rsp+FCh] [rbp-4h]
  int v132; // [rsp+100h] [rbp+0h]
  int v133; // [rsp+104h] [rbp+4h]
  int v134; // [rsp+108h] [rbp+8h]
  int v135; // [rsp+10Ch] [rbp+Ch]
  int v136; // [rsp+110h] [rbp+10h] BYREF
  int v137; // [rsp+114h] [rbp+14h]
  int v138; // [rsp+118h] [rbp+18h]
  int v139; // [rsp+11Ch] [rbp+1Ch]
  int v140; // [rsp+120h] [rbp+20h]
  int v141; // [rsp+124h] [rbp+24h]

  v4 = 0;
  v113 = a4;
  v5 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v6 = 0;
  v117 = 0LL;
  v7 = 0;
  v115 = 0LL;
  v112 = 0LL;
  Src = 0LL;
  v118 = 0LL;
  v106 = 0;
  v121 = 0LL;
  v122 = 0;
  v98 = 0;
  if ( a3 )
  {
    v9 = (_QWORD *)*((_QWORD *)a3 + 2);
    v107 = *a3;
    v10 = BYTE2(v107);
    v11 = DWORD1(v107);
    v6 = BYTE3(v107);
    v12 = BYTE1(v107);
    v7 = v107;
    v108 = v9;
    v13 = v9;
    v94 = BYTE2(v107);
    v104 = DWORD2(v107);
  }
  else
  {
    v12 = 0;
    v94 = 0;
    v10 = 0;
    v104 = 0x8000;
    v11 = 255;
    v13 = &v121;
  }
  v109 = v13;
  v96 = v11;
  if ( v7 )
    return 4294967267LL;
  v14 = *(_DWORD *)(a2 + 56);
  v103 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v13 )
    return 4294967278LL;
  v116 = 0LL;
  v16 = 0LL;
  if ( v12 )
  {
    if ( v6 > 5u )
      return 4294967273LL;
    v17 = SrcOrderTable[v6];
    v18 = v17 >> 8;
    if ( BYTE1(v17) >= 3u )
      return 4294967273LL;
    v14 = HIWORD(v17);
    if ( BYTE2(v17) >= 3u )
      return 4294967273LL;
    v19 = HIBYTE(v17);
    if ( (unsigned __int8)v19 >= 3u )
      return 4294967273LL;
    v110 = (_DWORD *)&v121 + (unsigned __int8)v18;
    v20 = (unsigned __int8)v14;
    LOWORD(v14) = v103;
    v111 = (_DWORD *)&v121 + v20;
    v112 = (_DWORD *)&v121 + (unsigned __int8)v19;
  }
  if ( v12 )
  {
    switch ( v12 )
    {
      case 1:
        LOBYTE(v21) = 1;
        break;
      case 2:
        LOBYTE(v21) = 2;
        break;
      case 4:
        LOBYTE(v21) = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 304);
    v10 = 0;
    v116 = v16;
    LOBYTE(v21) = 0;
    v94 = 0;
    v96 = 31;
  }
  v114 = v14 & 0x400;
  if ( (v14 & 0x400) != 0 )
    v115 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v22 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v95 = v22;
  if ( !v22 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v14 & 0x80C0) != 0 )
  {
    v23 = 1000000;
    v24 = 1;
    v25 = v22 == 0;
    v101 = 1000000;
    if ( (v14 & 0x40) != 0 )
      v26 = *(_DWORD *)(a2 + 92);
    else
      v26 = 1000000;
    v27 = v26;
    v99 = v26;
    if ( (v14 & 0x80u) != 0 )
    {
      if ( v22 == 1 )
      {
        v28 = 500 * v26;
        v26 *= 200;
        v99 = v28;
      }
      v25 = 1;
      v29 = MulFD6(v26, -*(_DWORD *)(a2 + 96));
      v30 = *(_DWORD *)(a2 + 96);
      v134 = v29;
      v31 = MulFD6(v99, v30);
      v23 = *(_DWORD *)(a2 + 100);
      v24 = 2;
      v140 = v31;
      v27 = v99;
      v101 = v23;
      v131 = 500000000;
      v137 = 200000000;
    }
    v132 = MulFD6(v27, v23);
    v32 = MulFD6(v26, v101);
    v13 = v109;
    v4 = 0;
    HIWORD(v130) = v25;
    HIWORD(v136) = v25;
    v10 = v94;
    v138 = v32;
    LOWORD(v130) = v24;
    LOWORD(v136) = v24;
  }
  if ( !v16 )
  {
    v34 = 0LL;
    goto LABEL_42;
  }
  v33 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v16 + 18), 0x31355448u);
  v4 = 0;
  Src = v33;
  v34 = v33;
  if ( !v33 )
  {
LABEL_42:
    v38 = v96;
    goto LABEL_43;
  }
  v35 = *(unsigned __int16 *)(v16 + 16);
  v36 = CacheRGBToXYZ(v16, v33, (__int64)&v106, a2);
  v37 = v35 + 1;
  v116 = v36;
  v34 = Src;
  v4 = 0;
  v38 = 0;
  v118 = &Src[12 * v37];
  v117 = &v118[12 * v37];
LABEL_43:
  v39 = v104;
  v123 = 3;
  v40 = 0;
  if ( v38 == 1000000 )
    v38 = 0;
  v102 = 0;
  v97 = v38;
  v41 = 0;
  *(_QWORD *)&v107 = 0LL;
  v42 = v104;
  if ( v104 )
  {
    v43 = HIDWORD(v121);
    v44 = (_DWORD *)v13 + 1;
    v45 = v10;
    v46 = v121;
    v119 = v45;
    v21 = (unsigned __int8)v21;
    LODWORD(v109) = (unsigned __int8)v21;
    ++v113;
    while ( 1 )
    {
      v100 = v42 - 1;
      if ( v21 )
      {
        switch ( v21 )
        {
          case 1:
            *v110 = *((unsigned __int8 *)v44 - 4);
            *v111 = *((unsigned __int8 *)v44 - 3);
            v47 = *((unsigned __int8 *)v44 - 2);
            break;
          case 2:
            *v110 = *((__int16 *)v44 - 2);
            *v111 = *((__int16 *)v44 - 1);
            v47 = *(__int16 *)v44;
            break;
          case 3:
            *v110 = *(v44 - 1);
            *v111 = *v44;
            v47 = v44[1];
            break;
          default:
            goto LABEL_61;
        }
        *v112 = v47;
        v5 = v122;
      }
      else
      {
        v121 = v107;
        v5 = v40;
        v122 = v40;
        LODWORD(v107) = v4 + 1;
        if ( v4 + 1 >= 32 )
        {
          LODWORD(v107) = 0;
          DWORD1(v107) = v41 + 1;
          if ( v41 + 1 >= 32 )
          {
            v48 = v40 + 1;
            DWORD1(v107) = 0;
            if ( v48 >= 32 )
              v48 = 0;
            v102 = v48;
          }
        }
      }
      v43 = HIDWORD(v121);
      v46 = v121;
LABEL_61:
      v120 = (_DWORD *)((char *)v44 + v119);
      if ( v38 )
      {
        v46 = DivFD6(v46, v38);
        LODWORD(v121) = v46;
        v43 = DivFD6(v43, v97);
        HIDWORD(v121) = v43;
        v5 = DivFD6(v5, v97);
        v122 = v5;
      }
      if ( (v103 & 0x80C0) == 0 )
        goto LABEL_106;
      if ( v34 )
      {
        v49 = *(_DWORD *)&v34[12 * v46] + *(_DWORD *)&v118[12 * v43] + *(_DWORD *)&v117[12 * v5];
        v50 = *(_DWORD *)&v117[12 * v5 + 4] + *(_DWORD *)&v118[12 * v43 + 4] + *(_DWORD *)&v34[12 * v46 + 4];
        v51 = *(_DWORD *)&v117[12 * v5 + 8] + *(_DWORD *)&v118[12 * v43 + 8] + *(_DWORD *)&v34[12 * v46 + 8];
      }
      else
      {
        v124 = *(_DWORD *)(a2 + 124);
        v126 = *(_DWORD *)(a2 + 128);
        v128 = *(_DWORD *)(a2 + 132);
        HIWORD(v123) = 0;
        v125 = v46;
        v127 = v43;
        v129 = v5;
        v49 = MulDivFD6Pairs(&v123);
        v125 = v46;
        v124 = *(_DWORD *)(a2 + 136);
        v126 = *(_DWORD *)(a2 + 140);
        v128 = *(_DWORD *)(a2 + 144);
        v127 = v43;
        v129 = v5;
        v50 = MulDivFD6Pairs(&v123);
        v124 = *(_DWORD *)(a2 + 148);
        v126 = *(_DWORD *)(a2 + 152);
        v128 = *(_DWORD *)(a2 + 156);
        v125 = v46;
        v127 = v43;
        v129 = v5;
        v51 = MulDivFD6Pairs(&v123);
      }
      if ( v95 )
      {
        v52 = *(_DWORD *)(a2 + 160);
        if ( v52 != 1000000 )
          v49 = DivFD6(v49, v52);
        if ( v49 < 8856 )
          v53 = MulFD6(v49, 7787000) + 137931;
        else
          v53 = RaisePower(v49, 3, 3);
        if ( v50 < 8856 )
          v54 = MulFD6(v50, 7787000) + 137931;
        else
          v54 = RaisePower(v50, 3, 3);
        v55 = *(_DWORD *)(a2 + 168);
        v98 = v54;
        if ( v55 != 1000000 )
          v51 = DivFD6(v51, v55);
        if ( v51 < 8856 )
          v56 = MulFD6(v51, 7787000) + 137931;
        else
          v56 = RaisePower(v51, 3, 3);
        v57 = v53 - v54;
        v58 = v54 - v56;
      }
      else
      {
        v59 = v49 + 2 * (v50 + v51 + 4 * v50) + v50 + v51 + 4 * v50;
        v60 = DivFD6(4 * v49, v59) - *(_DWORD *)(a2 + 184);
        v61 = DivFD6(9 * v50, v59) - *(_DWORD *)(a2 + 188);
        if ( v50 <= 8856 )
        {
          v63 = MulFD6(v50, 9033000);
        }
        else
        {
          v62 = RaisePower(v50, 3, 3);
          v63 = MulFD6(v62, 1160000) - 160000;
        }
        v64 = 13 * v63;
        v57 = MulFD6(13 * v63, v60);
        v58 = MulFD6(v64, v61);
        v54 = v98;
        v131 = v64;
        v137 = v64;
      }
      v141 = v57;
      v133 = v57;
      v139 = v58;
      v135 = v58;
      v65 = MulDivFD6Pairs(&v130);
      v66 = MulDivFD6Pairs(&v136);
      if ( v95 )
      {
        v67 = v54 + v65;
        v68 = v54 - v66;
        if ( v67 <= 206893 )
        {
          v70 = DivFD6(v67 - 137931, 7787000);
        }
        else
        {
          v69 = MulFD6(v67, v67);
          v70 = MulFD6(v67, v69);
        }
        v71 = *(_DWORD *)(a2 + 240);
        v72 = v70;
        if ( v71 != 1000000 )
          v72 = MulFD6(v70, v71);
        if ( v68 <= 206893 )
        {
          v74 = DivFD6(v68 - 137931, 7787000);
        }
        else
        {
          v73 = MulFD6(v68, v68);
          v74 = MulFD6(v68, v73);
        }
        v75 = *(_DWORD *)(a2 + 248);
        v76 = v74;
        if ( v75 == 1000000 )
          goto LABEL_105;
        v77 = MulFD6(v74, v75);
      }
      else
      {
        v78 = v66 + *(_DWORD *)(a2 + 268);
        if ( v78 < 0 || (v79 = DivFD6(9 * v50, v78), v79 < 0) )
          v79 = 2147000000;
        v80 = v65 + *(_DWORD *)(a2 + 264);
        if ( v80 >= 0 )
        {
          v81 = MulFD6(v79, v80);
          v72 = FD6DivL(v81, 4);
        }
        else
        {
          v72 = 0;
        }
        v77 = FD6DivL(v79 - 15 * v50 - v72, 3);
      }
      v76 = v77;
LABEL_105:
      v124 = *(_DWORD *)(a2 + 204);
      v126 = *(_DWORD *)(a2 + 208);
      v128 = *(_DWORD *)(a2 + 212);
      HIWORD(v123) = 0;
      v125 = v72;
      v127 = v50;
      v129 = v76;
      LODWORD(v121) = MulDivFD6Pairs(&v123);
      v124 = *(_DWORD *)(a2 + 216);
      v126 = *(_DWORD *)(a2 + 220);
      v128 = *(_DWORD *)(a2 + 224);
      v125 = v72;
      v127 = v50;
      v129 = v76;
      HIDWORD(v121) = MulDivFD6Pairs(&v123);
      v124 = *(_DWORD *)(a2 + 228);
      v126 = *(_DWORD *)(a2 + 232);
      v128 = *(_DWORD *)(a2 + 236);
      v125 = v72;
      v127 = v50;
      v129 = v76;
      v122 = MulDivFD6Pairs(&v123);
      ScaleRGB(&v121);
      v5 = v122;
      v43 = HIDWORD(v121);
      v46 = v121;
LABEL_106:
      if ( v114 )
      {
        if ( (v103 & 0x800) != 0 )
        {
          v82 = v43;
          if ( v46 > v43 )
            v82 = v46;
          if ( v5 > v82 )
            v82 = v5;
        }
        else
        {
          v82 = 1000000;
        }
        v83 = v82 - v43;
        HIWORD(v123) = 0;
        v84 = v115;
        v98 = v83;
        v127 = v83;
        v85 = v82 - v46;
        v125 = v82 - v46;
        v124 = *v115;
        v126 = v115[1];
        v128 = v115[2];
        v129 = v82 - v5;
        v86 = MulDivFD6Pairs(&v123);
        v125 = v82 - v46;
        v46 = v82 - v86;
        v127 = v98;
        v124 = v84[3];
        v126 = v84[4];
        v128 = v84[5];
        v129 = v82 - v5;
        v43 = v82 - MulDivFD6Pairs(&v123);
        v125 = v85;
        v127 = v98;
        v129 = v82 - v5;
        v124 = v115[6];
        v126 = v115[7];
        v128 = v115[8];
        v87 = v82 - MulDivFD6Pairs(&v123);
        if ( v46 >= 0 )
        {
          if ( v46 > 1000000 )
            v46 = 1000000;
          LODWORD(v121) = v46;
        }
        else
        {
          v46 = 0;
          LODWORD(v121) = 0;
        }
        if ( v43 >= 0 )
        {
          if ( v43 > 1000000 )
            v43 = 1000000;
          HIDWORD(v121) = v43;
        }
        else
        {
          v43 = 0;
          HIDWORD(v121) = 0;
        }
        if ( v87 >= 0 )
        {
          if ( v87 > 1000000 )
            v87 = 1000000;
          v5 = v87;
          v122 = v87;
        }
        else
        {
          v5 = 0;
          v122 = 0;
        }
      }
      v88 = MulFD6(v46, 255);
      v89 = v113;
      v113[1] = v88;
      *v89 = MulFD6(v43, 255);
      v90 = MulFD6(v5, 255);
      v42 = v100;
      v44 = v120;
      v34 = Src;
      v38 = v97;
      v40 = v102;
      v4 = v107;
      v41 = DWORD1(v107);
      *(v89 - 1) = v90;
      v113 = v89 + 3;
      v21 = (int)v109;
      if ( !v100 )
      {
        v39 = v104;
        break;
      }
    }
  }
  if ( Src )
  {
    v91 = v116;
    if ( v116 )
    {
      if ( !*(_QWORD *)(v116 + 8) )
        *(_QWORD *)(v91 + 8) = EngAllocMem(0, *(unsigned __int16 *)(v116 + 18), 0x32345448u);
      v92 = *(void **)(v91 + 8);
      if ( v92 )
      {
        v93 = *(unsigned __int16 *)(v91 + 18);
        *(_DWORD *)v91 = v106;
        memmove(v92, Src, v93);
      }
    }
    EngFreeMem(Src);
  }
  return v39;
}
