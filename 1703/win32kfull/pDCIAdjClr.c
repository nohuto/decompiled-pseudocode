/*
 * XREFs of pDCIAdjClr @ 0x1C0034290
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C0032F6C (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C00F4124 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C023CA38 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C0034BB8 (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     Log @ 0x1C00EE1B8 (Log.c)
 *     ComputeColorSpaceXForm @ 0x1C010356C (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C010F738 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C023DC90 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C023DEA8 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, _QWORD *a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  int v12; // r12d
  __int16 v13; // dx
  __int16 v14; // r8
  __int16 v15; // r14
  int v16; // ebx
  __int64 v17; // xmm1_8
  __int16 v18; // cx
  __int8 v19; // r8d^2
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // ecx
  __int16 v36; // cx
  int v37; // r9d
  __int16 v38; // cx
  char v39; // si
  __int64 v40; // rdx
  __int8 v41; // cl
  char v42; // al
  unsigned int v43; // ebx
  __m128i v44; // xmm2
  int v45; // ebx
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // r8
  int v51; // edx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  int v65; // eax
  int v67; // ebx
  char v68; // r15
  unsigned __int64 v69; // r15
  unsigned __int16 epi16; // ax
  unsigned int v71; // ebx
  unsigned int v72; // r12d
  int v73; // r15d
  __int64 v74; // xmm1_8
  __int128 v75; // xmm0
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  int v88; // eax
  unsigned int *v89; // r8
  unsigned int i; // ecx
  unsigned int v91; // eax
  int v92; // ebx
  char v93; // cl
  char v94; // dl
  char v95; // cl
  char v96; // r8
  unsigned __int8 v97; // r9
  __int64 v98; // r10
  char *v99; // rcx
  char v100; // al
  int v101; // eax
  char v102; // al
  __int16 v103; // [rsp+30h] [rbp-D0h]
  int v104; // [rsp+30h] [rbp-D0h]
  __int128 v105; // [rsp+38h] [rbp-C8h]
  __int128 v106; // [rsp+48h] [rbp-B8h]
  char *v107; // [rsp+58h] [rbp-A8h]
  __int64 v108; // [rsp+60h] [rbp-A0h]
  __int128 v109; // [rsp+70h] [rbp-90h] BYREF
  __int128 v110; // [rsp+80h] [rbp-80h]
  __int128 v111; // [rsp+90h] [rbp-70h] BYREF
  __m256i v112; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v113; // [rsp+C0h] [rbp-40h]
  __int128 v114; // [rsp+D0h] [rbp-30h]
  __int128 v115; // [rsp+E0h] [rbp-20h]
  __int128 v116; // [rsp+F0h] [rbp-10h]
  __int128 v117; // [rsp+100h] [rbp+0h] BYREF
  __int128 v118; // [rsp+110h] [rbp+10h]
  __int128 v119; // [rsp+120h] [rbp+20h]
  __int128 v120; // [rsp+130h] [rbp+30h]
  __int128 v121; // [rsp+140h] [rbp+40h]
  int v122; // [rsp+150h] [rbp+50h]
  __int128 v123; // [rsp+160h] [rbp+60h] BYREF
  __int64 v124; // [rsp+170h] [rbp+70h]
  __int128 v125; // [rsp+178h] [rbp+78h]
  __int64 v126; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v89 = (unsigned int *)&unk_1C03295E4;
      for ( i = 1; i < 0x100; ++i )
      {
        v91 = (i - 16777217) / i;
        *v89++ = v91;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v107 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v107;
      if ( v107 )
      {
        v12 = *(_DWORD *)(v11 + 184);
        v13 = a5 | 8;
        DWORD1(v105) = a6;
        v103 = v12;
        if ( (v12 & 0x80u) == 0 )
          v13 = a5;
        if ( HIBYTE(a6) == 1 || (v14 = v13, HIBYTE(a6) == 0xFE) && (v14 = v13, (v12 & 0x300) == 0x300) )
          v14 = v13 | 0x41;
        v15 = v14 & 0xFFEF;
        v108 = (v14 & 0x10) != 0 ? 3956LL : 856LL;
        if ( (v14 & 8) == 0 )
          v15 = v14;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v16 = 24;
        v17 = a2[1].m128i_i64[0];
        v18 = _mm_cvtsi128_si32(*a2);
        v123 = (__int128)*a2;
        v124 = v17;
        if ( v18 != 24 || (v19 = BYTE2(v123), (WORD1(v123) & 0xFFFC) != 0) )
        {
          v123 = DefaultCA;
          v19 = BYTE2(DefaultCA);
          v124 = 0LL;
        }
        v20 = *(_QWORD *)(v11 + 212);
        v125 = *(_OWORD *)(v11 + 196);
        v21 = *(_OWORD *)(v11 + 220);
        v126 = v20;
        v22 = *(_OWORD *)(v11 + 236);
        WORD1(v123) = v19 & 3;
        v109 = v21;
        v23 = *(_OWORD *)(v11 + 252);
        v110 = v22;
        v24 = *(_OWORD *)(v11 + 268);
        v111 = v23;
        v25 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v112.m256i_i8 = v24;
        v26 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v112.m256i_u64[2] = v25;
        v27 = *(_OWORD *)(v11 + 316);
        v113 = v26;
        v28 = *(_OWORD *)(v11 + 332);
        v114 = v27;
        v29 = *(_OWORD *)(v11 + 348);
        v115 = v28;
        v30 = *(_OWORD *)(v11 + 364);
        v116 = v29;
        v31 = *(_OWORD *)(v11 + 380);
        v117 = v30;
        v32 = *(_OWORD *)(v11 + 396);
        v118 = v31;
        v33 = *(_OWORD *)(v11 + 412);
        v119 = v32;
        v34 = *(_OWORD *)(v11 + 428);
        v35 = *(_DWORD *)(v11 + 444);
        v120 = v33;
        v121 = v34;
        v122 = v35;
        if ( WORD2(v123) > 8u )
          WORD2(v123) = 0;
        if ( WORD3(v123) < 0x540u )
        {
          WORD3(v123) = 1344;
        }
        else if ( WORD3(v123) > 0xFDE8u )
        {
          WORD3(v123) = -536;
        }
        if ( WORD4(v123) < 0x540u )
        {
          WORD4(v123) = 1344;
        }
        else if ( WORD4(v123) > 0xFDE8u )
        {
          WORD4(v123) = -536;
        }
        if ( WORD5(v123) < 0x540u )
        {
          WORD5(v123) = 1344;
        }
        else if ( WORD5(v123) > 0xFDE8u )
        {
          WORD5(v123) = -536;
        }
        if ( WORD6(v123) > 0xFA0u )
          WORD6(v123) = 4000;
        v36 = 6000;
        if ( HIWORD(v123) < 0x1770u || (v36 = 10000, HIWORD(v123) > 0x2710u) )
          HIWORD(v123) = v36;
        v37 = 100;
        if ( (__int16)v124 < -100 )
        {
          LOWORD(v124) = -100;
        }
        else if ( (__int16)v124 > 100 )
        {
          LOWORD(v124) = 100;
        }
        if ( SWORD1(v124) < -100 )
        {
          WORD1(v124) = -100;
        }
        else if ( SWORD1(v124) > 100 )
        {
          WORD1(v124) = 100;
        }
        v38 = WORD2(v124);
        if ( SWORD2(v124) < -100 )
        {
          v38 = -100;
          WORD2(v124) = -100;
        }
        else if ( SWORD2(v124) > 100 )
        {
          v38 = 100;
          WORD2(v124) = 100;
        }
        if ( SHIWORD(v124) < -100 )
        {
          HIWORD(v124) = -100;
        }
        else if ( SHIWORD(v124) > 100 )
        {
          HIWORD(v124) = 100;
        }
        if ( (v15 & 1) != 0 || v38 == -100 )
          HIDWORD(v124) = 65436;
        v39 = 2;
        if ( (v15 & 2) != 0 )
          WORD1(v123) = v19 & 2 | 1;
        LOBYTE(v37) = HIBYTE(a6);
        LOWORD(v123) = v15 & 0x8059;
        if ( !(unsigned int)AdjustSrcDevGamma(v11, (unsigned int)&v109, (unsigned int)&v123, v37, v15) )
        {
          v40 = 0LL;
          while ( 1 )
          {
            v41 = *((_BYTE *)&v123 + v40);
            --v16;
            v42 = *((_BYTE *)&v125 + v40++);
            if ( v41 != v42 )
              break;
            if ( !v16 )
            {
              v43 = v109;
              v44 = (__m128i)v123;
              goto LABEL_53;
            }
          }
        }
        v67 = v109 & 0x1007;
        LODWORD(v109) = v67;
        if ( (v15 & 0x40) != 0 )
        {
          v67 |= 0x2000u;
          LODWORD(v109) = v67;
        }
        v44 = (__m128i)v123;
        v68 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v123, 2));
        if ( (v68 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000LL);
          v67 |= 0x100u;
          LODWORD(v109) = v67;
        }
        if ( (v68 & 1) != 0 )
        {
          v67 |= 0x200u;
          LODWORD(v109) = v67;
        }
        v69 = (-(__int64)((v109 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v44) ^ (unsigned __int16)v125) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            (-(__int64)((v109 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72,
            (char *)&v117 + 4,
            0xFFFFFFFFLL);
          v44 = (__m128i)v123;
          v67 = v109;
        }
        epi16 = _mm_extract_epi16(v44, 2);
        if ( epi16 != WORD2(v125) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v112.m256i_u64[2] + 4, epi16);
          v44 = (__m128i)v123;
          v67 = v109;
        }
        if ( (v67 & 0x2000) != 0 || (unsigned int)CompareMemory(v69, v11 + 36, 36LL) )
          v71 = v67 & 0xFFFF7FFF;
        else
          v71 = v67 | 0x8000;
        v72 = 100 * (unsigned __int16)_mm_extract_epi16(v44, 6);
        v73 = 100 * (unsigned __int16)_mm_extract_epi16(v44, 7);
        v112.m256i_i64[0] = __PAIR64__(v73, v72);
        if ( v72 || v73 != 1000000 )
        {
          v43 = v71 | 8;
          LODWORD(v109) = v43;
          v112.m256i_i32[2] = DivFD6(0LL, v72);
          v112.m256i_i32[3] = DivFD6(0LL, (unsigned int)(1000000 - v73));
          v112.m256i_i32[4] = DivFD6(1000000LL, v73 - v72);
        }
        else
        {
          v43 = v71 & 0xFFFFFFF7;
          *(__int64 *)((char *)v112.m256i_i64 + 4) = 1000000LL;
          LODWORD(v109) = v43;
          v112.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v112.m256i_i64[1] + 4) = 0LL;
        }
        if ( (_WORD)v124 )
        {
          v43 |= 0x10u;
          HIDWORD(v110) = RaisePower(1015000LL, (unsigned int)(__int16)v124, 2LL);
          LODWORD(v109) = v43;
        }
        if ( WORD1(v124) )
        {
          v43 |= 0x20u;
          LODWORD(v109) = v43;
          LODWORD(v111) = 3750 * SWORD1(v124);
        }
        if ( (v43 & 0x2000) != 0 )
        {
          LOWORD(v12) = v103;
        }
        else
        {
          DWORD1(v111) = 10000 * (SWORD2(v124) + 100);
          if ( DWORD1(v111) != 1000000 )
          {
            v43 |= 0x40u;
            LODWORD(v109) = v43;
          }
          if ( HIWORD(v124) )
          {
            TintAngle((unsigned int)SHIWORD(v124), v40, (char *)&v111 + 8, (char *)&v111 + 12);
            v43 = v109 | 0x80;
            LODWORD(v109) = v109 | 0x80;
          }
          LOWORD(v12) = v103;
          if ( (v103 & 4) != 0 && (v43 & 0x1001) == 0x1000 )
          {
            v43 |= 0x400u;
            LODWORD(v109) = v43;
            if ( (v103 & 1) != 0 )
            {
              v43 |= 0x800u;
              LODWORD(v109) = v43;
            }
          }
        }
        v74 = v124;
        v75 = v109;
        *(__m128i *)(v11 + 196) = v44;
        *(_OWORD *)(v11 + 220) = v75;
        v76 = v111;
        *(_QWORD *)(v11 + 212) = v74;
        *(_OWORD *)(v11 + 236) = v110;
        v77 = *(_OWORD *)v112.m256i_i8;
        *(_OWORD *)(v11 + 252) = v76;
        v78 = *(_OWORD *)&v112.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v77;
        v79 = v113;
        *(_OWORD *)(v11 + 284) = v78;
        v80 = v114;
        *(_OWORD *)(v11 + 300) = v79;
        v81 = v115;
        *(_OWORD *)(v11 + 316) = v80;
        v82 = v116;
        *(_OWORD *)(v11 + 332) = v81;
        v83 = v117;
        *(_OWORD *)(v11 + 348) = v82;
        v84 = v118;
        *(_OWORD *)(v11 + 364) = v83;
        v85 = v119;
        *(_OWORD *)(v11 + 380) = v84;
        v86 = v120;
        *(_OWORD *)(v11 + 396) = v85;
        v87 = v121;
        v88 = v122;
        *(_OWORD *)(v11 + 412) = v86;
        *(_OWORD *)(v11 + 428) = v87;
        *(_DWORD *)(v11 + 444) = v88;
LABEL_53:
        v45 = v43 & 0x3DB4BFFF;
        LODWORD(v109) = v45;
        if ( (v45 & 0x97FE) == 0 )
        {
          v45 |= 0x80000000;
          LODWORD(v109) = v45;
        }
        if ( (v45 & 0x84C0) == 0 || (v45 & 0x2000) != 0 )
        {
          v45 |= 0x40000000u;
          LODWORD(v109) = v45;
        }
        if ( (v12 & 0x1000) != 0 || (v15 & 0x20) != 0 )
        {
          v45 |= 0x80000u;
          LODWORD(v109) = v45;
        }
        if ( (v15 & 0x80u) == 0 )
        {
LABEL_60:
          if ( (v15 & 4) != 0 )
          {
            v45 |= 0x4000u;
            LODWORD(v109) = v45;
          }
          HIDWORD(v106) = 1000000;
          v125 = 0uLL;
          v126 = 0LL;
          LODWORD(v105) = 67372032;
          BYTE4(v105) = 3;
          if ( (v45 & 0x2000) != 0 )
          {
            v45 |= 0x40000u;
            LOBYTE(v105) = 1;
            LODWORD(v109) = v45;
            v46 = 0xFFFF;
            DWORD1(v106) = 0;
          }
          else
          {
            DWORD1(v106) = 4096;
            v46 = 4095;
          }
          DWORD2(v105) = v46;
          HIDWORD(v105) = v46;
          LODWORD(v106) = v46;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v105) = 0;
              goto LABEL_68;
            case 2u:
LABEL_138:
              *(_QWORD *)&v125 = 0x20000000100000LL;
              BYTE3(v105) = 6;
              *((_QWORD *)&v125 + 1) = 0x1000000400000LL;
              v126 = 0x4000000020000LL;
              *(_WORD *)((char *)&v105 + 1) = 1284;
              DWORD1(v106) = 0;
              goto LABEL_68;
            case 5u:
            case 6u:
              WORD1(v105) = 0;
              *((_QWORD *)&v105 + 1) = 0xFF000000FFLL;
              *(_QWORD *)&v106 = 255LL;
              BYTE1(v105) = 0;
              *(_QWORD *)&v125 = 0x100000000LL;
              DWORD2(v125) = 2;
              goto LABEL_68;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v102 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v102 = 0;
                BYTE6(v105) = v102;
              }
              LODWORD(v106) = 126975;
              *((_QWORD *)&v105 + 1) = 0x3EFFF0001EFFFLL;
              v126 = -1LL;
              *(_QWORD *)&v125 = 0x7E00000001F0000LL;
              *((_QWORD *)&v125 + 1) = -134217728LL;
              *(_WORD *)((char *)&v105 + 1) = 2308;
              BYTE3(v105) = 15;
              goto LABEL_68;
            case 0xFDu:
              *(_QWORD *)&v125 = 0x3E00000001F0000LL;
              LODWORD(v106) = 126975;
              *((_QWORD *)&v105 + 1) = 0x1EFFF0001EFFFLL;
              v126 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v125 + 1) = 0x7FFF7FFF7C000000LL;
              *(_WORD *)((char *)&v105 + 1) = 2308;
              BYTE3(v105) = 14;
              goto LABEL_68;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) == 255 )
            {
              BYTE6(v105) = 4;
              LODWORD(v109) = v45 | 0x4000;
              goto LABEL_138;
            }
LABEL_68:
            *(__m128i *)v107 = v44;
            v47 = DstOrderTable[BYTE6(v105)];
            *(_OWORD *)(v107 + 24) = v105;
            v48 = BYTE1(v47);
            DWORD2(v106) = v47;
            v49 = *((_DWORD *)&v125 + BYTE1(v47));
            *(_OWORD *)(v107 + 40) = v106;
            *((_QWORD *)v107 + 2) = v124;
            *(_DWORD *)(v108 + v11 + 12) = v49;
            v50 = BYTE2(v47);
            v47 >>= 24;
            *(_DWORD *)(v108 + v11 + 8) = *((_DWORD *)&v125 + v50);
            v51 = *((_DWORD *)&v125 + (unsigned __int8)v47);
            *(_DWORD *)(v108 + v11 + 24) = *((_DWORD *)&v125 + v48 + 3);
            *(_DWORD *)(v108 + v11 + 20) = *((_DWORD *)&v125 + v50 + 3);
            *(_DWORD *)(v108 + v11 + 4) = v51;
            v52 = v109;
            v53 = v110;
            *(_DWORD *)(v108 + v11 + 16) = *((_DWORD *)&v125 + v47 + 3);
            *(_OWORD *)(v107 + 56) = v52;
            v54 = v111;
            *(_OWORD *)(v107 + 72) = v53;
            v55 = *(_OWORD *)v112.m256i_i8;
            *(_OWORD *)(v107 + 88) = v54;
            v56 = *(_OWORD *)&v112.m256i_u64[2];
            *(_OWORD *)(v107 + 104) = v55;
            v57 = v113;
            *(_OWORD *)(v107 + 120) = v56;
            v58 = v114;
            *(_OWORD *)(v107 + 136) = v57;
            v59 = v115;
            *(_OWORD *)(v107 + 152) = v58;
            *(_OWORD *)(v107 + 168) = v59;
            v60 = v117;
            *(_OWORD *)(v107 + 184) = v116;
            v61 = v118;
            *(_OWORD *)(v107 + 200) = v60;
            v62 = v119;
            *(_OWORD *)(v107 + 216) = v61;
            v63 = v120;
            *(_OWORD *)(v107 + 232) = v62;
            v64 = v121;
            v65 = v122;
            *(_OWORD *)(v107 + 248) = v63;
            *(_OWORD *)(v107 + 264) = v64;
            *((_DWORD *)v107 + 70) = v65;
            *((_QWORD *)v107 + 36) = v11 + 32;
            *((_QWORD *)v107 + 37) = v11 + 808;
            *((_QWORD *)v107 + 38) = v11 + 832;
            return v11;
          }
          if ( (v12 & 0x100) == 0 )
          {
            *(_QWORD *)&v125 = 0x38000000070000LL;
            LODWORD(v106) = 20479;
            *((_QWORD *)&v105 + 1) = 0x4FFF00004FFFLL;
            BYTE3(v105) = 10;
            LODWORD(v109) = v45 & 0xFFFEFFFF;
            DWORD2(v125) = 29360128;
            *(_WORD *)((char *)&v105 + 1) = 1796;
            BYTE6(v105) = 4;
            goto LABEL_68;
          }
          v92 = v45 | 0x10000;
          LOBYTE(v104) = 0;
          LODWORD(v109) = v92;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v12 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v12 & 0x2000) != 0 )
          {
            LOWORD(v104) = -254;
            v93 = -1;
          }
          else
          {
            v39 = 0;
            v93 = 0;
            BYTE1(v104) = 0;
          }
          HIBYTE(v104) = v93;
          BYTE2(v104) = v93 ^ *(_BYTE *)(v11 + 452);
          if ( (v12 & 0x200) != 0 )
          {
            WORD3(v105) = -1280;
            *(_QWORD *)((char *)&v125 + 4) = 0xFF000000FF0000LL;
            LODWORD(v125) = 16711680;
LABEL_163:
            HIDWORD(v126) = v104;
            LODWORD(v126) = v104;
            HIDWORD(v125) = v104;
            goto LABEL_68;
          }
          v94 = 10;
          v95 = *(_BYTE *)(v11 + 453);
          v96 = 7;
          *(_WORD *)((char *)&v105 + 1) = 1796;
          DWORD2(v105) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          BYTE3(v105) = 10;
          HIDWORD(v105) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v106) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v125) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v125) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v125) = *(unsigned __int16 *)(v11 + 454);
          if ( (unsigned __int8)(v95 - 4) > 1u )
          {
            WORD1(v105) = 2310;
            v97 = -6;
            BYTE7(v105) = -6;
            v96 = 6;
            v94 = 9;
            if ( (v12 & 0x2000) == 0 )
            {
LABEL_155:
              v101 = *(_DWORD *)(v11 + 472);
              if ( v101 )
              {
                LODWORD(v109) = v92 | 0x20000;
                HIDWORD(v106) = v101;
                BYTE1(v105) = 0;
                BYTE2(v105) = v96 - 4;
                BYTE3(v105) = v94 - 4;
                switch ( v97 )
                {
                  case 0xF8u:
                    BYTE7(v105) = -11;
                    break;
                  case 0xF9u:
                    BYTE7(v105) = -10;
                    break;
                  case 0xFAu:
                    BYTE7(v105) = -9;
                    break;
                }
              }
              BYTE6(v105) = 0;
              goto LABEL_163;
            }
            v92 |= 0x2000000u;
            BYTE2(v104) = *(_BYTE *)(v11 + 803);
            v100 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v95 == 4 )
            {
              v97 = -7;
              v98 = 292LL;
            }
            else
            {
              v97 = -8;
              v39 |= 1u;
              v98 = 365LL;
            }
            v92 |= 0x400000u;
            BYTE7(v105) = v97;
            LOBYTE(v104) = v39 & 3;
            v99 = (char *)*(&p8BPPXlate + (v39 & 3));
            BYTE2(v104) = v99[v98];
            v100 = *v99;
          }
          HIBYTE(v104) = v100;
          LODWORD(v109) = v92;
          goto LABEL_155;
        }
        v45 |= 0x100000u;
        LODWORD(v109) = v45;
        if ( (v15 & 0x100) != 0 )
        {
          v45 |= 0x200000u;
        }
        else
        {
          if ( (v15 & 0x200) != 0 )
          {
            v45 |= 0x800000u;
            LODWORD(v109) = v45;
          }
          if ( (v15 & 0x400) == 0 )
            goto LABEL_60;
          v45 |= 0x1000000u;
        }
        LODWORD(v109) = v45;
        goto LABEL_60;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
