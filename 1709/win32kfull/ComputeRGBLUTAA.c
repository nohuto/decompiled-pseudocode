/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0078BBC
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0079748 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C023FA08 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0079110 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     Log @ 0x1C007B120 (Log.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(_DWORD *a1, __int128 *a2, _DWORD *a3)
{
  _DWORD *v3; // rsi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int16 v18; // ax
  __int128 v19; // xmm0
  int v20; // r14d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int v27; // eax
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r11d
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r10d
  __int64 v35; // r12
  int v36; // edx
  int v37; // ecx
  char v38; // r13
  __int64 result; // rax
  int v40; // ebx
  int v41; // ecx
  int v42; // esi
  char v43; // al
  _BYTE *v44; // r14
  char *v45; // rdx
  char *v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  int v49; // r15d
  unsigned int v50; // ecx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // edx
  int v56; // edi
  __int64 v57; // rcx
  signed int v58; // edi
  unsigned int v59; // ebx
  int v60; // r15d
  __int64 v61; // rdx
  bool v62; // zf
  unsigned int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // eax
  int v72; // eax
  int v73; // eax
  __int32 v74; // ecx
  __int64 v75; // rbx
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // rbx
  __int64 v82; // r8
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  unsigned __int8 *v86; // rbx
  char v87; // r13
  int v88; // r11d
  _OWORD *v89; // r8
  _WORD *v90; // r10
  int v91; // edi
  _WORD *v92; // rsi
  __int64 v93; // r14
  unsigned int v94; // ecx
  unsigned int v95; // r9d
  unsigned int v96; // kr00_4
  __int64 v97; // rcx
  _OWORD *v98; // rax
  __int128 v99; // xmm1
  int v100; // edx
  __int64 v101; // rax
  unsigned int v102; // kr04_4
  int v103; // [rsp+24h] [rbp-DCh]
  int v104; // [rsp+28h] [rbp-D8h]
  _BYTE *v105; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+38h] [rbp-C8h]
  int v108; // [rsp+3Ch] [rbp-C4h]
  int v109; // [rsp+40h] [rbp-C0h]
  int v110; // [rsp+44h] [rbp-BCh]
  int v111; // [rsp+48h] [rbp-B8h]
  int v112; // [rsp+4Ch] [rbp-B4h]
  int v113; // [rsp+50h] [rbp-B0h]
  unsigned int v114; // [rsp+54h] [rbp-ACh]
  unsigned int v115; // [rsp+58h] [rbp-A8h]
  int v116; // [rsp+5Ch] [rbp-A4h]
  unsigned int v117; // [rsp+60h] [rbp-A0h]
  int v118; // [rsp+64h] [rbp-9Ch]
  char v119; // [rsp+68h] [rbp-98h]
  unsigned int v120; // [rsp+6Ch] [rbp-94h]
  int v121; // [rsp+70h] [rbp-90h]
  int v122; // [rsp+74h] [rbp-8Ch]
  int v123; // [rsp+78h] [rbp-88h]
  __m256i v124; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v125; // [rsp+A0h] [rbp-60h]
  _DWORD *v126; // [rsp+A8h] [rbp-58h]
  char *v127; // [rsp+B0h] [rbp-50h]
  char *v128; // [rsp+B8h] [rbp-48h]
  _DWORD *v129; // [rsp+C0h] [rbp-40h]
  __int128 v130; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v131; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v132; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v133; // [rsp+F8h] [rbp-8h]
  __int128 v134; // [rsp+100h] [rbp+0h] BYREF
  __int128 v135; // [rsp+110h] [rbp+10h] BYREF
  __int128 v136; // [rsp+120h] [rbp+20h]
  __int128 v137; // [rsp+130h] [rbp+30h]
  __int128 v138; // [rsp+140h] [rbp+40h]
  __int128 v139; // [rsp+150h] [rbp+50h]
  __int128 v140; // [rsp+160h] [rbp+60h]
  __int128 v141; // [rsp+170h] [rbp+70h]
  __int128 v142; // [rsp+180h] [rbp+80h]
  __int128 v143; // [rsp+190h] [rbp+90h]
  __int128 v144; // [rsp+1A0h] [rbp+A0h]
  __int128 v145; // [rsp+1B0h] [rbp+B0h]
  __int128 v146; // [rsp+1C0h] [rbp+C0h]
  __int128 v147; // [rsp+1D0h] [rbp+D0h]
  int v148; // [rsp+1E0h] [rbp+E0h]
  int v149; // [rsp+1F0h] [rbp+F0h]
  int v150; // [rsp+1F4h] [rbp+F4h]
  int v151; // [rsp+1F8h] [rbp+F8h]
  _DWORD v152[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v153; // [rsp+210h] [rbp+110h]
  _DWORD *v154; // [rsp+218h] [rbp+118h]
  _DWORD *v155; // [rsp+220h] [rbp+120h]

  v129 = a1;
  memset(&v124.m256i_i16[1], 0, 30);
  v3 = a1;
  v5 = *(__int128 *)((char *)a2 + 72);
  v134 = *(__int128 *)((char *)a2 + 56);
  v6 = *(__int128 *)((char *)a2 + 88);
  v135 = v5;
  v7 = *(__int128 *)((char *)a2 + 104);
  v136 = v6;
  v8 = *(__int128 *)((char *)a2 + 120);
  v137 = v7;
  v9 = *(__int128 *)((char *)a2 + 136);
  v138 = v8;
  v10 = *(__int128 *)((char *)a2 + 152);
  v139 = v9;
  v11 = *(__int128 *)((char *)a2 + 184);
  v140 = v10;
  v141 = *(__int128 *)((char *)a2 + 168);
  v12 = *(__int128 *)((char *)a2 + 200);
  v142 = v11;
  v13 = *(__int128 *)((char *)a2 + 216);
  v143 = v12;
  v14 = *(__int128 *)((char *)a2 + 232);
  v144 = v13;
  v15 = *(__int128 *)((char *)a2 + 248);
  v145 = v14;
  v16 = *(__int128 *)((char *)a2 + 264);
  v17 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v146 = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a2 + 2);
  v147 = v16;
  v148 = v17;
  v18 = 255;
  v19 = *a2;
  v20 = v134;
  v133 = v15;
  v21 = *(__int128 *)((char *)a2 + 40);
  v132 = v19;
  v22 = *(__int128 *)((char *)a2 + 24);
  v131 = v21;
  v130 = v22;
  if ( (v134 & 0x2000) == 0 )
    v18 = 0;
  HIWORD(v133) = v18;
  WORD2(v133) = v18;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v23 = DWORD1(v131);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v151 = 1000000;
  v150 = 1000000;
  v149 = 1000000;
  v152[2] = v23;
  v152[1] = v23;
  v152[0] = v23;
  v155 = 0LL;
  v154 = 0LL;
  v153 = 0LL;
  if ( (v20 & 0x40000) != 0 )
  {
    DWORD2(v130) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v130 + 1)));
    LODWORD(v131) = MulFD6(114000LL, HIDWORD(v130));
    *(_WORD *)((char *)&v131 + 9) = 256;
    HIDWORD(v130) -= DWORD2(v130) + v131;
    WORD1(v130) = 0;
    BYTE1(v130) = 0;
    BYTE11(v131) = 2;
  }
  else if ( (v20 & 0x10000) != 0 )
  {
    v62 = (a1[46] & 0x4000) == 0;
    v149 = a1[117];
    v150 = a1[116];
    v151 = a1[115];
    if ( !v62 )
    {
      v153 = a1 + 131;
      v154 = a1 + 125;
      v155 = a1 + 119;
    }
  }
  v24 = HIDWORD(v131);
  if ( (v20 & 0x20000) == 0 )
    v24 = 1000000;
  HIDWORD(v131) = v24;
  v25 = ComputeChecksum((char *)&v134 + 4, v20 & 0x40321000, 12LL);
  v27 = ComputeChecksum(&v135, v25, v26);
  v29 = ComputeChecksum(&v132, v27, (unsigned int)(v28 + 12));
  v31 = ComputeChecksum(&v130, v29, (unsigned int)(v30 + 20));
  v35 = 256LL;
  v36 = *((unsigned __int16 *)v3 + 3529);
  v37 = *((unsigned __int16 *)v3 + 3528);
  v38 = v130;
  v123 = v36;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v40 = v20 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    v104 = v40;
    if ( (v20 & 0x1000) != 0 )
      v124 = *(__m256i *)&RegData[*((unsigned __int8 *)v3 + 34)][0];
    v125 = a3 + 7;
    v116 = DWORD1(v131) - 1;
    v41 = 3;
    v120 = 1000000 - v34;
    if ( (v20 & 0x100000) == 0 || (v38 & 1) != 0 )
      v105 = 0LL;
    else
      v105 = (_BYTE *)*((_QWORD *)v3 + 883);
    v42 = HIDWORD(v131);
    v122 = v20 & 2;
    v108 = v20 & 8;
    v109 = v20 & 0x10;
    v110 = v20 & 0x20;
    v111 = v20 & 0x100;
    v112 = v20 & 0x200;
    v43 = v20;
    v44 = v105;
    v113 = v43 & 4;
    v45 = (char *)&v131 + 12;
    v118 = ~(DWORD1(v131) - 1);
    v46 = (char *)&v135 + 12;
    while ( 1 )
    {
      v106 = v41 - 1;
      v127 = v46 - 4;
      v128 = v45 - 1;
      v47 = *((_DWORD *)v46 - 4);
      v114 = *((_DWORD *)v46 - 1);
      v48 = (unsigned __int8)*(v45 - 1);
      v107 = v47;
      v49 = v152[v48];
      v117 = *(&v149 + v48);
      DWORD1(v131) = v49;
      v119 = *((_BYTE *)&v130 + v48 + 1);
      v50 = *((_DWORD *)&v130 + v48 + 2);
      v126 = (&v153)[v48];
      v51 = 0;
      v103 = 0;
      v121 = v49;
      v115 = v50;
      do
      {
        v52 = DivFD6(v51, 255LL, v32, v33);
        v55 = 0;
        v56 = v52;
        if ( v122 )
        {
          v52 = RaisePower((unsigned int)v52, v107, 0LL);
          v55 = 0;
        }
        if ( v108 )
        {
          if ( v52 <= (int)v137 )
          {
            v61 = DWORD2(v137);
LABEL_50:
            v52 = MulFD6((unsigned int)v52, v61);
          }
          else
          {
            if ( v52 < SDWORD1(v137) )
            {
              v52 -= v137;
              v61 = (unsigned int)v138;
              goto LABEL_50;
            }
            v52 = MulFD6((unsigned int)(v52 - DWORD1(v137)), HIDWORD(v137)) + 1000000;
          }
          v55 = 0;
        }
        if ( v109 )
        {
          v52 = MulFD6((unsigned int)v52, HIDWORD(v135));
          v55 = 0;
        }
        if ( v110 )
          v52 += v136;
        if ( v111 )
        {
          v63 = Log((unsigned int)(7 * v52 + 1000000), 0LL, v53);
          v52 = DivFD6(v63, (unsigned int)LogFilterMax, v64, v65);
          v55 = 0;
        }
        if ( v52 < 0 )
        {
          v52 = 0;
        }
        else if ( v52 > 1000000 )
        {
          v52 = 1000000;
        }
        v57 = (unsigned int)(1000000 - v52);
        if ( !v112 )
          v57 = (unsigned int)v52;
        if ( v40 )
        {
          if ( (int)v57 > v124.m256i_i32[1] )
          {
            if ( (int)v57 < v124.m256i_i32[2] )
            {
              if ( (int)v57 <= 79996 )
              {
                v77 = DivFD6(v57, 9033000LL, 1000000LL, v54);
              }
              else
              {
                v75 = (unsigned int)DivFD6((unsigned int)(v57 + 160000), 1160000LL, 1000000LL, v54);
                v76 = MulFD6(v75, v75);
                v77 = MulFD6((unsigned int)v75, v76);
              }
              v80 = Log(v77, v78, v79);
              v73 = MulFD6(v80, v124.m256i_u32[7]);
              v74 = v124.m256i_i32[6];
            }
            else
            {
              v70 = DivFD6(
                      (unsigned int)(v57 - v124.m256i_i32[2]),
                      (unsigned int)(1000000 - v124.m256i_i32[2]),
                      1000000LL,
                      v54);
              v71 = RaisePower(v70, 2000000LL, 0LL);
              v72 = MulFD6(v71, (unsigned int)(1000000 - v124.m256i_i32[2]));
              v73 = MulFD6((unsigned int)(v124.m256i_i32[2] + v72), v124.m256i_u32[5]);
              v74 = v124.m256i_i32[4];
            }
            v69 = v73 + v74 + 50;
          }
          else
          {
            v66 = DivFD6(v57, v124.m256i_u32[1], 1000000LL, v54);
            v67 = RaisePower((unsigned int)(1000000 - v66), 1500000LL, 0LL);
            v68 = MulFD6((unsigned int)(1000000 - v67), v124.m256i_u32[1]);
            v69 = MulFD6(v68, v124.m256i_u32[3]) + 50;
          }
          v57 = (unsigned int)(v69 / 100);
          v55 = 0;
        }
        if ( (int)v57 < 0 )
        {
          v57 = 0LL;
        }
        else if ( (int)v57 > 1000000 )
        {
          v57 = 1000000LL;
        }
        if ( v113 )
        {
          v57 = (unsigned int)RaisePower(v57, v114, 0LL);
          v55 = 0;
        }
        if ( v44 )
        {
          *v44 = MulFD6(v57, 255LL);
          LODWORD(v57) = v56;
          ++v44;
          v55 = 0;
        }
        v58 = 1000000 - v57;
        if ( (v38 & 1) != 0 )
          v58 = v57;
        if ( v126 )
        {
          LODWORD(v81) = -1;
          do
          {
            v81 = (unsigned int)(v81 + 1);
            v82 = v55;
            v55 = v126[v81];
          }
          while ( v58 > (int)v55 );
          v83 = DivFD6((unsigned int)(v58 - v82), v55 - (unsigned int)v82, v82, v54);
          v59 = v49 + MulFD6(v83, 4095LL) + ((_DWORD)v81 << 12);
        }
        else
        {
          v59 = v49 + MulFD6((unsigned int)v58, v115);
        }
        v60 = ((v59 & v118) << v119) | MulFD6(v116 & v59, v117);
        if ( v58 > v42 )
        {
          v84 = DivFD6((unsigned int)(v58 - v42), v120, v32, v33);
          v85 = RaisePower(v84, 2000000LL, 0LL);
          v60 |= (unsigned int)MulFD6(v85, 1365LL) << 21;
        }
        v40 = v104;
        v51 = ++v103;
        *v125 = v60;
        v49 = v121;
        ++v125;
      }
      while ( v103 < 256 );
      v41 = v106;
      v46 = v127;
      v45 = v128;
      if ( !v106 )
      {
        v3 = v129;
        v37 = 256;
        v20 = v134;
        v38 = v130;
        v36 = v123;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v20 & 0x300000) == 0x300000 && v37 != v36 )
  {
    v86 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v87 = v38 & 1;
    *((_WORD *)v3 + 3528) = v36;
    *((_WORD *)v3 + 3529) = v36;
    v88 = 127;
    v89 = v86 + 768;
    v90 = v86 + 2304;
    v91 = 127;
    v92 = v86 + 2304;
    v93 = 256LL;
    v94 = (v36 * ((unsigned int)(unsigned __int8)-(v87 != 0) + 65280) + 127) / 0xFF;
    v95 = (unsigned __int8)-(v87 != 0) + 65280 - v94;
    do
    {
      v96 = v91;
      v91 += v94;
      *v92++ = v96 / 0xFF;
      --v93;
    }
    while ( v93 );
    if ( v87 )
    {
      v97 = 4LL;
      v98 = v86 + 2304;
      do
      {
        *v89 = *v98;
        v89[1] = v98[1];
        v89[2] = v98[2];
        v89[3] = v98[3];
        v89[4] = v98[4];
        v89[5] = v98[5];
        v89[6] = v98[6];
        v89 += 8;
        v99 = v98[7];
        v98 += 8;
        *(v89 - 1) = v99;
        --v97;
      }
      while ( v97 );
    }
    else
    {
      v100 = 768;
      do
      {
        v101 = *v86++;
        *(_WORD *)v89 = v90[v101];
        v89 = (_OWORD *)((char *)v89 + 2);
        --v100;
      }
      while ( v100 );
    }
    do
    {
      v102 = v88;
      result = (unsigned int)(-2139062143 * v88);
      v88 += v95;
      *v90++ = v102 / 0xFF;
      --v35;
    }
    while ( v35 );
  }
  return result;
}
