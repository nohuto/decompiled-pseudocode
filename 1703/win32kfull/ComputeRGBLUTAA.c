/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0033BA4
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C023E0D8 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0034108 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     Log @ 0x1C00EE1B8 (Log.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(_DWORD *a1, __int128 *a2, _DWORD *a3)
{
  _DWORD *v3; // rsi
  _BYTE *v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int16 v19; // ax
  __int128 v20; // xmm0
  int v21; // r14d
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r11d
  unsigned int v28; // eax
  int v29; // r11d
  unsigned int v30; // eax
  int v31; // r11d
  int v32; // eax
  int v33; // r10d
  __int64 v34; // r12
  int v35; // edx
  int v36; // ecx
  char v37; // r13
  __int64 result; // rax
  int v39; // ebx
  int v40; // edx
  int v41; // r13d
  char *v42; // rcx
  char *v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // r15d
  __int64 v51; // rcx
  signed int v52; // edi
  unsigned int v53; // ebx
  int v54; // r15d
  __int64 v55; // rdx
  bool v56; // zf
  unsigned int v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // eax
  int v64; // eax
  int v65; // eax
  __int32 v66; // ecx
  __int64 v67; // rbx
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rbx
  int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned __int8 *v76; // rbx
  char v77; // r13
  int v78; // r11d
  _OWORD *v79; // r8
  _WORD *v80; // r10
  int v81; // edi
  _WORD *v82; // rsi
  __int64 v83; // r14
  unsigned int v84; // ecx
  unsigned int v85; // r9d
  unsigned int v86; // kr04_4
  __int64 v87; // rcx
  _OWORD *v88; // rax
  __int128 v89; // xmm1
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // kr08_4
  char v93; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+24h] [rbp-DCh]
  int v95; // [rsp+28h] [rbp-D8h]
  _BYTE *v96; // [rsp+30h] [rbp-D0h]
  unsigned int v97; // [rsp+38h] [rbp-C8h]
  unsigned int v98; // [rsp+54h] [rbp-ACh]
  unsigned int v99; // [rsp+58h] [rbp-A8h]
  int v100; // [rsp+5Ch] [rbp-A4h]
  unsigned int v101; // [rsp+60h] [rbp-A0h]
  int v102; // [rsp+64h] [rbp-9Ch]
  char v103; // [rsp+68h] [rbp-98h]
  unsigned int v104; // [rsp+6Ch] [rbp-94h]
  int v105; // [rsp+70h] [rbp-90h]
  int v106; // [rsp+74h] [rbp-8Ch]
  __m256i v107; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v108; // [rsp+A0h] [rbp-60h]
  _DWORD *v109; // [rsp+A8h] [rbp-58h]
  char *v110; // [rsp+B0h] [rbp-50h]
  char *v111; // [rsp+B8h] [rbp-48h]
  _DWORD *v112; // [rsp+C0h] [rbp-40h]
  __int128 v113; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v114; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v115; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v116; // [rsp+F8h] [rbp-8h]
  __int128 v117; // [rsp+100h] [rbp+0h] BYREF
  __int128 v118; // [rsp+110h] [rbp+10h] BYREF
  __int128 v119; // [rsp+120h] [rbp+20h]
  __int128 v120; // [rsp+130h] [rbp+30h]
  __int128 v121; // [rsp+140h] [rbp+40h]
  __int128 v122; // [rsp+150h] [rbp+50h]
  __int128 v123; // [rsp+160h] [rbp+60h]
  __int128 v124; // [rsp+170h] [rbp+70h]
  __int128 v125; // [rsp+180h] [rbp+80h]
  __int128 v126; // [rsp+190h] [rbp+90h]
  __int128 v127; // [rsp+1A0h] [rbp+A0h]
  __int128 v128; // [rsp+1B0h] [rbp+B0h]
  __int128 v129; // [rsp+1C0h] [rbp+C0h]
  __int128 v130; // [rsp+1D0h] [rbp+D0h]
  int v131; // [rsp+1E0h] [rbp+E0h]
  int v132; // [rsp+1F0h] [rbp+F0h]
  int v133; // [rsp+1F4h] [rbp+F4h]
  int v134; // [rsp+1F8h] [rbp+F8h]
  _DWORD v135[4]; // [rsp+200h] [rbp+100h]
  _DWORD *v136; // [rsp+210h] [rbp+110h]
  _DWORD *v137; // [rsp+218h] [rbp+118h]
  _DWORD *v138; // [rsp+220h] [rbp+120h]

  v112 = a1;
  memset(&v107.m256i_i16[1], 0, 30);
  v3 = a1;
  v5 = 0LL;
  v6 = *(__int128 *)((char *)a2 + 72);
  v117 = *(__int128 *)((char *)a2 + 56);
  v7 = *(__int128 *)((char *)a2 + 88);
  v118 = v6;
  v8 = *(__int128 *)((char *)a2 + 104);
  v119 = v7;
  v9 = *(__int128 *)((char *)a2 + 120);
  v120 = v8;
  v10 = *(__int128 *)((char *)a2 + 136);
  v121 = v9;
  v11 = *(__int128 *)((char *)a2 + 152);
  v122 = v10;
  v12 = *(__int128 *)((char *)a2 + 184);
  v123 = v11;
  v124 = *(__int128 *)((char *)a2 + 168);
  v13 = *(__int128 *)((char *)a2 + 200);
  v125 = v12;
  v14 = *(__int128 *)((char *)a2 + 216);
  v126 = v13;
  v15 = *(__int128 *)((char *)a2 + 232);
  v127 = v14;
  v16 = *(__int128 *)((char *)a2 + 248);
  v128 = v15;
  v17 = *(__int128 *)((char *)a2 + 264);
  v18 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v129 = v16;
  *(_QWORD *)&v16 = *((_QWORD *)a2 + 2);
  v130 = v17;
  v131 = v18;
  v19 = 255;
  v20 = *a2;
  v21 = v117;
  v116 = v16;
  v22 = *(__int128 *)((char *)a2 + 40);
  v115 = v20;
  v23 = *(__int128 *)((char *)a2 + 24);
  v114 = v22;
  v113 = v23;
  if ( (v117 & 0x2000) == 0 )
    v19 = 0;
  HIWORD(v116) = v19;
  WORD2(v116) = v19;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v24 = DWORD1(v114);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v134 = 1000000;
  v133 = 1000000;
  v132 = 1000000;
  v135[2] = v24;
  v135[1] = v24;
  v135[0] = v24;
  v138 = 0LL;
  v137 = 0LL;
  v136 = 0LL;
  if ( (v21 & 0x40000) != 0 )
  {
    DWORD2(v113) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v113 + 1)));
    LODWORD(v114) = MulFD6(114000LL, HIDWORD(v113));
    *(_WORD *)((char *)&v114 + 9) = 256;
    HIDWORD(v113) -= DWORD2(v113) + v114;
    v5 = 0LL;
    WORD1(v113) = 0;
    BYTE1(v113) = 0;
    BYTE11(v114) = 2;
  }
  else if ( (v21 & 0x10000) != 0 )
  {
    v56 = (a1[46] & 0x4000) == 0;
    v132 = a1[117];
    v133 = a1[116];
    v134 = a1[115];
    if ( !v56 )
    {
      v136 = a1 + 131;
      v137 = a1 + 125;
      v138 = a1 + 119;
    }
  }
  v25 = HIDWORD(v114);
  if ( (v21 & 0x20000) == 0 )
    v25 = 1000000;
  HIDWORD(v114) = v25;
  v26 = ComputeChecksum((char *)&v117 + 4, v21 & 0x40321000, 12LL);
  v28 = ComputeChecksum(&v118, v26, v27);
  v30 = ComputeChecksum(&v115, v28, (unsigned int)(v29 + 12));
  v32 = ComputeChecksum(&v113, v30, (unsigned int)(v31 + 20));
  v34 = 256LL;
  v35 = *((unsigned __int16 *)v3 + 3529);
  v36 = *((unsigned __int16 *)v3 + 3528);
  v37 = v113;
  v106 = v35;
  if ( *a3 != v32 )
  {
    *a3 = v32;
    v39 = v21 & 0x1000;
    *((_WORD *)v3 + 3528) = 256;
    if ( (v21 & 0x1000) != 0 )
      v107 = *(__m256i *)&RegData[*((unsigned __int8 *)v3 + 34)][0];
    v108 = a3 + 7;
    v100 = DWORD1(v114) - 1;
    v93 = v37 & 1;
    v104 = 1000000 - v33;
    v40 = 3;
    if ( !(v37 & 1) && (v21 & 0x100000) != 0 )
      v5 = (_BYTE *)*((_QWORD *)v3 + 883);
    v41 = HIDWORD(v114);
    v42 = (char *)&v114 + 12;
    v96 = v5;
    v102 = ~(DWORD1(v114) - 1);
    v43 = (char *)&v118 + 12;
    while ( 1 )
    {
      v110 = v43 - 4;
      v111 = v42 - 1;
      v105 = v40 - 1;
      v44 = *((_DWORD *)v43 - 4);
      v98 = *((_DWORD *)v43 - 1);
      v45 = (unsigned __int8)*(v42 - 1);
      v97 = v44;
      v101 = *(&v132 + v45);
      v94 = v135[v45];
      DWORD1(v114) = v94;
      v103 = *((_BYTE *)&v113 + v45 + 1);
      v46 = *((_DWORD *)&v113 + v45 + 2);
      v109 = (&v136)[v45];
      v47 = 0;
      v95 = 0;
      v99 = v46;
      do
      {
        v48 = DivFD6((unsigned int)v47, 255LL);
        v49 = 0;
        v50 = v48;
        if ( (v21 & 2) != 0 )
        {
          v48 = RaisePower((unsigned int)v48, v97, 0LL);
          v49 = 0;
        }
        if ( (v21 & 8) != 0 )
        {
          if ( v48 <= (int)v120 )
          {
            v55 = DWORD2(v120);
LABEL_50:
            v48 = MulFD6((unsigned int)v48, v55);
          }
          else
          {
            if ( v48 < SDWORD1(v120) )
            {
              v48 -= v120;
              v55 = (unsigned int)v121;
              goto LABEL_50;
            }
            v48 = MulFD6((unsigned int)(v48 - DWORD1(v120)), HIDWORD(v120)) + 1000000;
          }
          v49 = 0;
        }
        if ( (v21 & 0x10) != 0 )
        {
          v48 = MulFD6((unsigned int)v48, HIDWORD(v118));
          v49 = 0;
        }
        if ( (v21 & 0x20) != 0 )
          v48 += v119;
        if ( (v21 & 0x100) != 0 )
        {
          v57 = Log((unsigned int)(7 * v48 + 1000000));
          v48 = DivFD6(v57, (unsigned int)LogFilterMax);
          v49 = 0;
        }
        if ( v48 < 0 )
        {
          v48 = 0;
        }
        else if ( v48 > 1000000 )
        {
          v48 = 1000000;
        }
        v51 = (unsigned int)(1000000 - v48);
        if ( (v21 & 0x200) == 0 )
          v51 = (unsigned int)v48;
        if ( v39 )
        {
          if ( (int)v51 > v107.m256i_i32[1] )
          {
            if ( (int)v51 < v107.m256i_i32[2] )
            {
              if ( (int)v51 <= 79996 )
              {
                v69 = DivFD6(v51, 9033000LL);
              }
              else
              {
                v67 = (unsigned int)DivFD6((unsigned int)(v51 + 160000), 1160000LL);
                v68 = MulFD6(v67, v67);
                v69 = MulFD6((unsigned int)v67, v68);
              }
              v70 = Log(v69);
              v65 = MulFD6(v70, v107.m256i_u32[7]);
              v66 = v107.m256i_i32[6];
            }
            else
            {
              v62 = DivFD6((unsigned int)(v51 - v107.m256i_i32[2]), (unsigned int)(1000000 - v107.m256i_i32[2]));
              v63 = RaisePower(v62, 2000000LL, 0LL);
              v64 = MulFD6(v63, (unsigned int)(1000000 - v107.m256i_i32[2]));
              v65 = MulFD6((unsigned int)(v107.m256i_i32[2] + v64), v107.m256i_u32[5]);
              v66 = v107.m256i_i32[4];
            }
            v61 = v65 + v66 + 50;
          }
          else
          {
            v58 = DivFD6(v51, v107.m256i_u32[1]);
            v59 = RaisePower((unsigned int)(1000000 - v58), 1500000LL, 0LL);
            v60 = MulFD6((unsigned int)(1000000 - v59), v107.m256i_u32[1]);
            v61 = MulFD6(v60, v107.m256i_u32[3]) + 50;
          }
          v51 = (unsigned int)(v61 / 100);
          v49 = 0;
        }
        if ( (int)v51 < 0 )
        {
          v51 = 0LL;
        }
        else if ( (int)v51 > 1000000 )
        {
          v51 = 1000000LL;
        }
        if ( (v21 & 4) != 0 )
        {
          v51 = (unsigned int)RaisePower(v51, v98, 0LL);
          v49 = 0;
        }
        if ( v5 )
        {
          *v5 = MulFD6(v51, 255LL);
          LODWORD(v51) = v50;
          v96 = v5 + 1;
          v49 = 0;
        }
        v52 = 1000000 - v51;
        if ( v93 )
          v52 = v51;
        if ( v109 )
        {
          LODWORD(v71) = -1;
          do
          {
            v71 = (unsigned int)(v71 + 1);
            v72 = v49;
            v49 = v109[v71];
          }
          while ( v52 > v49 );
          v73 = DivFD6((unsigned int)(v52 - v72), (unsigned int)(v49 - v72));
          v53 = v94 + MulFD6(v73, 4095LL) + ((_DWORD)v71 << 12);
        }
        else
        {
          v53 = v94 + MulFD6((unsigned int)v52, v99);
        }
        v54 = ((v53 & v102) << v103) | MulFD6(v100 & v53, v101);
        if ( v52 > v41 )
        {
          v74 = DivFD6((unsigned int)(v52 - v41), v104);
          v75 = RaisePower(v74, 2000000LL, 0LL);
          v54 |= (unsigned int)MulFD6(v75, 1365LL) << 21;
        }
        v5 = v96;
        v47 = v95 + 1;
        v39 = v21 & 0x1000;
        *v108++ = v54;
        v95 = v47;
      }
      while ( v47 < 256 );
      v40 = v105;
      v43 = v110;
      v42 = v111;
      if ( !v105 )
      {
        v3 = v112;
        v36 = 256;
        v21 = v117;
        v37 = v113;
        v35 = v106;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v21 & 0x300000) == 0x300000 && v36 != v35 )
  {
    v76 = (unsigned __int8 *)*((_QWORD *)v3 + 883);
    v77 = v37 & 1;
    *((_WORD *)v3 + 3528) = v35;
    *((_WORD *)v3 + 3529) = v35;
    v78 = 127;
    v79 = v76 + 768;
    v80 = v76 + 2304;
    v81 = 127;
    v82 = v76 + 2304;
    v83 = 256LL;
    v84 = (v35 * ((unsigned int)(unsigned __int8)-(v77 != 0) + 65280) + 127) / 0xFF;
    v85 = (unsigned __int8)-(v77 != 0) + 65280 - v84;
    do
    {
      v86 = v81;
      v81 += v84;
      *v82++ = v86 / 0xFF;
      --v83;
    }
    while ( v83 );
    if ( v77 )
    {
      v87 = 4LL;
      v88 = v76 + 2304;
      do
      {
        *v79 = *v88;
        v79[1] = v88[1];
        v79[2] = v88[2];
        v79[3] = v88[3];
        v79[4] = v88[4];
        v79[5] = v88[5];
        v79[6] = v88[6];
        v79 += 8;
        v89 = v88[7];
        v88 += 8;
        *(v79 - 1) = v89;
        --v87;
      }
      while ( v87 );
    }
    else
    {
      v90 = 768;
      do
      {
        v91 = *v76++;
        *(_WORD *)v79 = v80[v91];
        v79 = (_OWORD *)((char *)v79 + 2);
        --v90;
      }
      while ( v90 );
    }
    do
    {
      v92 = v78;
      result = (unsigned int)(-2139062143 * v78);
      v78 += v85;
      *v80++ = v92 / 0xFF;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
