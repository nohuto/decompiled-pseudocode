/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0095638 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C007AE9C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00963B4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v9; // eax
  __int64 v10; // r11
  int v11; // r12d
  DC *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // ecx
  _DWORD *v17; // r12
  int v18; // ecx
  DC *v19; // rcx
  __int64 v20; // r8
  int v21; // r10d
  int v22; // edx
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // r10d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  struct REGION *v31; // rax
  __int64 v32; // r11
  __m128i v33; // xmm6
  __int64 v34; // rax
  __int32 v35; // r9d
  __int32 v36; // r10d
  int v37; // r15d
  __int64 v38; // r11
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v40; // r9
  __int64 v41; // rdx
  __m128i *v42; // rax
  __int64 v43; // rcx
  _BYTE *v44; // r8
  int v47; // eax
  int v48; // eax
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r14
  struct SURFACE *v52; // rax
  SURFACE *v53; // rcx
  char *v54; // rbx
  __int64 v55; // rdi
  int (*v56)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v57; // r10
  __int64 v58; // r11
  __int64 v59; // r9
  _BYTE *v60; // r9
  int v61; // edx
  int v62; // r8d
  __int64 v63; // r11
  int v64; // r15d
  struct REGION *v65; // rax
  __int64 v66; // r11
  int v67; // edx
  int v68; // r8d
  struct ECLIPOBJ *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rbx
  int (*v72)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r10
  __int64 v76; // r11
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  int v80; // r9d
  __int64 v81; // r10
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  __int64 v85; // rcx
  int v86; // r9d
  int v87; // r10d
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  __int64 v91; // rcx
  struct REGION *v92; // rax
  __int64 v93; // r11
  __m128i v94; // xmm6
  int v95; // edx
  int v96; // r8d
  __int64 v97; // r9
  int v98; // r10d
  struct ECLIPOBJ *v99; // rdx
  __int64 v100; // rax
  int v101; // r8d
  int v102; // ecx
  int v103; // edx
  int v104; // eax
  int v105; // eax
  int v106; // r14d
  __int64 v107; // r8
  __int64 v108; // rax
  bool v109; // cf
  __int64 v110; // rsi
  struct SURFACE *v111; // rax
  SURFACE *v112; // rcx
  char *v113; // rbx
  __int64 v114; // r9
  struct SURFACE *v115; // rax
  XDCOBJ *v116; // rcx
  __int16 v117; // r11
  struct SURFACE *v118; // rax
  struct SURFACE *v119; // rax
  XDCOBJ *v120; // rcx
  __int16 v121; // r11
  struct SURFACE *v122; // rax
  __int64 v123; // rax
  __int64 v124; // [rsp+28h] [rbp-E0h]
  __m128i *v125; // [rsp+30h] [rbp-D8h]
  _DWORD *v126; // [rsp+38h] [rbp-D0h]
  char *v127; // [rsp+40h] [rbp-C8h]
  __int64 v128; // [rsp+48h] [rbp-C0h]
  __int64 v129; // [rsp+50h] [rbp-B8h]
  int v130; // [rsp+58h] [rbp-B0h]
  int v131; // [rsp+68h] [rbp-A0h]
  __m128i v132; // [rsp+70h] [rbp-98h] BYREF
  __m128i v133; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v134[4]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v135; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v136; // [rsp+E8h] [rbp-20h]
  int v137; // [rsp+F0h] [rbp-18h]
  int v138; // [rsp+118h] [rbp+10h]
  __int64 v139; // [rsp+128h] [rbp+20h]
  _BYTE v140[4]; // [rsp+138h] [rbp+30h] BYREF
  __m128i v141; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v142; // [rsp+188h] [rbp+80h]
  int v143; // [rsp+190h] [rbp+88h]
  int v144; // [rsp+1B8h] [rbp+B0h]
  __int64 v145; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  v9 = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( !v9 )
    return 0LL;
  if ( *((_QWORD *)*a2 + 64) )
  {
    v11 = a4 & 0xD4;
    if ( !v11 || *(_QWORD *)(*(_QWORD *)a3 + 512LL) )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
      v12 = *a2;
      v13 = 1;
      v14 = (*((_BYTE *)*a2 + 40) & 1) != 0 ? 8 : 0;
      *(_DWORD *)v4 += *(_DWORD *)((char *)*a2 + v14 + 1432);
      *((_DWORD *)v4 + 2) += *(_DWORD *)((char *)v12 + v14 + 1432);
      *((_DWORD *)v4 + 1) += *(_DWORD *)((char *)v12 + v14 + 1436);
      *((_DWORD *)v4 + 3) += *(_DWORD *)((char *)v12 + v14 + 1436);
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( !v11 )
      {
        v65 = XDCOBJ::prgnEffRao(a2);
        v136 = v66;
        v137 = v66;
        v138 = 1;
        v139 = v66;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v134, v65, v4, 0);
        if ( ERECTL::bEmpty((ERECTL *)&v135) )
          return v13;
        if ( *((int *)this + 46) < 0 )
        {
          v77 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v77;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v78 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v78;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v79 = *((_DWORD *)this + 48);
          if ( v79 < 0 )
            goto LABEL_74;
          v80 = *((_DWORD *)this + 49);
          if ( v80 < 0 )
            goto LABEL_74;
          if ( v67 < 0 )
            v67 = -v67;
          v81 = *((_QWORD *)this + 10);
          if ( *(_DWORD *)(v81 + 56) - v79 < v67 )
            goto LABEL_74;
          if ( v68 < 0 )
            v68 = -v68;
          if ( *(_DWORD *)(v81 + 60) - v80 < v68 )
          {
LABEL_74:
            EngSetLastError(0x57u);
            return 0;
          }
          v82 = v135.m128i_i32[0] + v79 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = v135.m128i_i32[1] + v80 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v82;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v69 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v69]) & 0xE8) == 0
            || (v70 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v70 + 128) & 0x100) == 0 )
          {
            v132 = v135;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v69, &v132);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v71 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v72 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v72)(
                 v75,
                 0LL,
                 v73,
                 v134,
                 0LL,
                 v4,
                 0LL,
                 v76,
                 v71,
                 v74,
                 *((_DWORD *)this + 54));
      }
      v16 = *((_DWORD *)this + 44);
      v17 = (_DWORD *)((char *)this + 184);
      if ( *((_DWORD *)this + 46) < v16 )
        v16 = *v17;
      *v17 = v16;
      v18 = *((_DWORD *)this + 45);
      if ( *((_DWORD *)this + 47) < v18 )
        v18 = *((_DWORD *)this + 47);
      *((_DWORD *)this + 47) = v18;
      if ( *((_DWORD *)this + 44) > *v17 )
      {
        v83 = *((_DWORD *)this + 48);
        *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = v83;
      }
      if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
      {
        v84 = *((_DWORD *)this + 49);
        *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 51) = v84;
      }
      v19 = *a2;
      v20 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 512LL) != *((_QWORD *)*a2 + 64) )
      {
        v21 = *((_DWORD *)v19 + 9);
        v22 = 0x20000;
        if ( (v21 & 0x200) == 0 || !v15 || (v23 = 1, (*(_DWORD *)(v15 + 32) & 0x20000) == 0) )
          v23 = v10;
        if ( *((_QWORD *)v19 + 6) != *(_QWORD *)(v20 + 48)
          && (v21 & 0x4000) == 0
          && (*(_DWORD *)(v20 + 36) & 0x4000) == 0
          && !v23 )
        {
          v115 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v115 + 50) != v117 || (v118 = XDCOBJ::pSurfaceEff(v116), *((_QWORD *)v118 + 3) != v10) )
          {
            v119 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v119 + 50) != v121 )
              goto LABEL_111;
            v122 = XDCOBJ::pSurfaceEff(v120);
            if ( *((_QWORD *)v122 + 3) != v10 )
              goto LABEL_111;
          }
        }
        v24 = *((_QWORD *)this + 9);
        v25 = v10;
        v26 = v10;
        v27 = *(_QWORD *)(v24 + 48);
        if ( v27 && v24 == *(_QWORD *)(v27 + 2568) && (v22 & *(_DWORD *)(v27 + 32)) != 0 )
        {
          v25 = *(_DWORD *)(v27 + 2600);
          v26 = *(_DWORD *)(v27 + 2604);
        }
        v28 = *(_DWORD *)v4 - *(_DWORD *)(((*(_BYTE *)(v20 + 40) & 1) != 0 ? 8 : 0) + v20 + 1432) - *v17;
        *((_DWORD *)this + 44) = v28;
        v29 = *((_DWORD *)this + 39)
            - *(_DWORD *)(((*(_BYTE *)(*(_QWORD *)a3 + 40LL) & 1) != 0 ? 8 : 0) + *(_QWORD *)a3 + 1436LL)
            - *((_DWORD *)this + 47);
        v133.m128i_i32[0] = v28 + v25;
        *((_DWORD *)this + 45) = v29;
        v30 = *((_QWORD *)this + 9);
        v133.m128i_i32[1] = v26 + v29;
        v133.m128i_i32[2] = v25 + v28 + *(_DWORD *)(v30 + 56);
        v133.m128i_i32[3] = v29 + v26 + *(_DWORD *)(v30 + 60);
        ERECTL::operator*=(&v133, v4);
        v31 = XDCOBJ::prgnEffRao(a2);
        v142 = v32;
        v143 = v32;
        v144 = 1;
        v145 = v32;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v140, v31, (struct ERECTL *)&v133, 0);
        v33 = v141;
        v133 = v141;
        if ( ERECTL::bEmpty((ERECTL *)&v133) )
          return v13;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v34 = *((_QWORD *)this + 10);
        else
          v34 = 0LL;
        v35 = v141.m128i_i32[1];
        v36 = v141.m128i_i32[0];
        if ( !v34 )
          goto LABEL_26;
        v61 = *((_DWORD *)this + 48);
        if ( v61 >= 0 )
        {
          v62 = *((_DWORD *)this + 49);
          if ( v62 >= 0 )
          {
            v63 = *((_QWORD *)this + 10);
            v131 = *(_DWORD *)v4;
            if ( *(_DWORD *)(v63 + 56) - v61 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            {
              v64 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v63 + 60) - v62 >= *((_DWORD *)this + 41) - v64 )
              {
                *((_DWORD *)this + 48) = v141.m128i_i32[0] + v61 - v131;
                *((_DWORD *)this + 49) = v35 + v62 - v64;
LABEL_26:
                *v17 = v36 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v35 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v49 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v49]) & 0xE8) == 0
                    || (v123 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v123 + 128) & 0x100) == 0 )
                  {
                    v132 = v33;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v49, &v132);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v47 = *((_DWORD *)this + 44);
                  v133.m128i_i32[0] -= v47;
                  v133.m128i_i32[2] -= v47;
                  v48 = *((_DWORD *)this + 45);
                  v133.m128i_i32[1] -= v48;
                  v133.m128i_i32[3] -= v48;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v37 = *((_DWORD *)this + 54);
                if ( v37 == 52428 )
                {
                  v38 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v38 + 112) & 0x400) != 0 )
                    v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2856);
                  else
                    v39 = EngCopyBits;
                  v40 = *((_QWORD *)this + 11);
                  v41 = (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
                  v42 = &v141;
                  v43 = (v38 + 24) & -(__int64)(v38 != 0);
                  v44 = v140;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v39)(
                           v43,
                           v41,
                           v44,
                           v40,
                           v42,
                           (char *)this + 184);
                }
                v50 = *((_QWORD *)this + 12);
                v51 = *((_QWORD *)this + 11);
                v52 = BLTRECORD::pSurfMskOut(this);
                v53 = (SURFACE *)*((_QWORD *)this + 8);
                v54 = (char *)this + 192;
                v55 = ((unsigned __int64)v52 + 24) & -(__int64)(v52 != 0LL);
                v56 = SURFACE::pfnBitBlt(v53);
                v130 = v37;
                v129 = v59;
                v60 = v140;
                v128 = v50;
                v127 = v54;
                v126 = v17;
                v125 = &v141;
                v124 = v51;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __m128i *, _DWORD *, char *, __int64, __int64, int))v56)(
                         v57,
                         v58,
                         v55,
                         v60,
                         v124,
                         v125,
                         v126,
                         v127,
                         v128,
                         v129,
                         v130);
              }
            }
          }
        }
LABEL_111:
        EngSetLastError(0x57u);
        return 0;
      }
      v85 = *((_QWORD *)this + 9);
      v86 = v10;
      v87 = v10;
      v88 = *(_QWORD *)(v85 + 48);
      if ( v88 && v85 == *(_QWORD *)(v88 + 2568) && (*(_DWORD *)(v88 + 32) & 0x20000) != 0 )
      {
        v86 = *(_DWORD *)(v88 + 2600);
        v87 = *(_DWORD *)(v88 + 2604);
      }
      v89 = *(_DWORD *)v4 - *(_DWORD *)(((*(_BYTE *)(v20 + 40) & 1) != 0 ? 8 : 0) + v20 + 1432) - *v17;
      *((_DWORD *)this + 44) = v89;
      v90 = *((_DWORD *)this + 39)
          - *(_DWORD *)(((*(_BYTE *)(*(_QWORD *)a3 + 40LL) & 1) != 0 ? 8 : 0) + *(_QWORD *)a3 + 1436LL)
          - *((_DWORD *)this + 47);
      v133.m128i_i32[0] = v89 + v86;
      *((_DWORD *)this + 45) = v90;
      v91 = *((_QWORD *)this + 8);
      v133.m128i_i32[1] = v90 + v87;
      v133.m128i_i32[2] = v86 + v89 + *(_DWORD *)(v91 + 56);
      v133.m128i_i32[3] = v87 + v90 + *(_DWORD *)(v91 + 60);
      ERECTL::operator*=(&v133, v4);
      v92 = XDCOBJ::prgnEffRao(a2);
      v136 = v93;
      v137 = v93;
      v138 = 1;
      v139 = v93;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v134, v92, (struct ERECTL *)&v133, 0);
      v94 = v135;
      v133 = v135;
      if ( ERECTL::bEmpty((ERECTL *)&v133) )
        return v13;
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v95 = *((_DWORD *)this + 48);
        if ( v95 < 0 )
          goto LABEL_111;
        v96 = *((_DWORD *)this + 49);
        if ( v96 < 0 )
          goto LABEL_111;
        v97 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v97 + 56) - v95 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          goto LABEL_111;
        v98 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v97 + 60) - v96 < *((_DWORD *)this + 41) - v98 )
          goto LABEL_111;
        *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v94) + v95 - *(_DWORD *)v4;
        *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v94, 4)) + v96 - v98;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v99 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
        if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v99]) & 0xE8) == 0
          || (v100 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v100 + 128) & 0x100) == 0 )
        {
          v132 = v94;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v99, &v132);
        }
      }
      v101 = v133.m128i_i32[0];
      v102 = v133.m128i_i32[0] - *((_DWORD *)this + 44);
      v103 = v133.m128i_i32[1];
      v104 = v133.m128i_i32[1];
      *v17 = v102;
      v105 = v104 - *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v105;
      if ( v102 >= v101 )
        v133.m128i_i32[2] += v102 - v101;
      else
        v133.m128i_i32[0] = v102;
      if ( v105 >= v103 )
        v133.m128i_i32[3] += v105 - v103;
      else
        v133.m128i_i32[1] = v105;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v106 = *((_DWORD *)this + 54);
      if ( v106 == 52428 )
      {
        v107 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v107 + 112) & 0x400) != 0 )
          v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2856);
        else
          v39 = EngCopyBits;
        v41 = (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
        v108 = v107 + 24;
        v109 = v107 != 0;
        v44 = v134;
        v43 = v108 & -(__int64)v109;
        v42 = &v135;
        v40 = 0LL;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v39)(
                 v43,
                 v41,
                 v44,
                 v40,
                 v42,
                 (char *)this + 184);
      }
      v110 = *((_QWORD *)this + 12);
      v111 = BLTRECORD::pSurfMskOut(this);
      v112 = (SURFACE *)*((_QWORD *)this + 8);
      v113 = (char *)this + 192;
      v55 = ((unsigned __int64)v111 + 24) & -(__int64)(v111 != 0LL);
      v56 = SURFACE::pfnBitBlt(v112);
      v130 = v106;
      v129 = v114;
      v60 = v134;
      v128 = v110;
      v127 = v113;
      v126 = v17;
      v125 = &v135;
      v124 = 0LL;
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __m128i *, _DWORD *, char *, __int64, __int64, int))v56)(
               v57,
               v58,
               v55,
               v60,
               v124,
               v125,
               v126,
               v127,
               v128,
               v129,
               v130);
    }
  }
  return 1LL;
}
