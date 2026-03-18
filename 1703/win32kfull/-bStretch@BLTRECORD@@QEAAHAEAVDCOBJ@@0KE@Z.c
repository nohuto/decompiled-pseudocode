/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0095638 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00957A0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00957D8 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00963B4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026FEBC (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct ERECTL *v5; // r15
  _QWORD *v8; // rcx
  __int64 v9; // r10
  char v10; // r9
  char *v11; // r14
  unsigned int v12; // r13d
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // r9d
  int *v16; // r12
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // r9
  struct DCOBJ *v22; // r10
  unsigned int v23; // r11d
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  struct REGION *v30; // rax
  struct ECLIPOBJ *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  _DWORD *v35; // rax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  char *v37; // r8
  bool v38; // cc
  struct ERECTL *v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rbx
  int v42; // r13d
  struct SURFACE *v44; // rax
  BLTRECORD *v45; // rcx
  int *v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r11d
  unsigned int v49; // r14d
  __int64 v50; // rcx
  int v51; // eax
  XDCOBJ *v52; // rcx
  XDCOBJ *v53; // r10
  XDCOBJ *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // ecx
  int v59; // [rsp+74h] [rbp-8Ch]
  __m128i v60; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v61[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v62[4]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E8h] [rbp-18h]
  int v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+120h] [rbp+20h]

  v5 = (BLTRECORD *)((char *)this + 152);
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) != 0 )
  {
    v11 = 0LL;
    v12 = 1;
    v13 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v14 = *(_QWORD *)(v8[8] + 48LL);
    if ( (v13 & 0x200) == 0 || !v14 || (v15 = 1, (*(_DWORD *)(v14 + 32) & 0x20000) == 0) )
      v15 = 0;
    v59 = v15;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(*(_QWORD *)v9 + 48LL)
      && (v13 & 0x4000) == 0
      && (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) == 0
      && !v15
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v52) + 3))
      && (*((_WORD *)XDCOBJ::pSurfaceEff(v53) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v54) + 3)) )
    {
      goto LABEL_77;
    }
    v16 = (int *)((char *)this + 192);
    v17 = *((_DWORD *)this + 48);
    v18 = *((_DWORD *)this + 50);
    if ( v17 > v18 )
    {
      *v16 = v18 + 1;
      *((_DWORD *)this + 50) = v17 + 1;
    }
    v19 = *((_DWORD *)this + 49);
    v20 = *((_DWORD *)this + 51);
    if ( v19 > v20 )
    {
      *((_DWORD *)this + 49) = v20 + 1;
      *((_DWORD *)this + 51) = v19 + 1;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      if ( *v16 < 0
        || *((int *)this + 49) < 0
        || (v55 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) > *(_DWORD *)(v55 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v55 + 60) )
      {
LABEL_77:
        EngSetLastError(0x57u);
        return (unsigned int)v11;
      }
    }
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v24 = *v21 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
      v25 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
      if ( (unsigned int)(v24 + 1) <= 2 && (unsigned int)(v25 + 1) <= 2 )
      {
        LODWORD(v11) = BLTRECORD::bBitBlt(this, a2, v22, v23, v24, v25);
        return (unsigned int)v11;
      }
    }
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 512LL) || !*(_QWORD *)(*(_QWORD *)v22 + 512LL) )
    {
      LODWORD(v11) = 1;
      return (unsigned int)v11;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate(a2, v5);
    v26 = *(_QWORD *)a2;
    v27 = (*(_BYTE *)(*(_QWORD *)a2 + 40LL) & 1) != 0 ? 8 : 0;
    *(_DWORD *)v5 += *(_DWORD *)(v27 + *(_QWORD *)a2 + 1432);
    *((_DWORD *)v5 + 2) += *(_DWORD *)(v27 + v26 + 1432);
    *((_DWORD *)v5 + 1) += *(_DWORD *)(v27 + v26 + 1436);
    *((_DWORD *)v5 + 3) += *(_DWORD *)(v27 + v26 + 1436);
    v28 = *(_QWORD *)v22;
    if ( (*(_DWORD *)(*(_QWORD *)v22 + 40LL) & 1) != 0 )
      v29 = (_DWORD *)(v28 + 1440);
    else
      v29 = (_DWORD *)(v28 + 1432);
    *v21 += *v29;
    v21[2] += *v29;
    v21[1] += v29[1];
    v21[3] += v29[1];
    v30 = XDCOBJ::prgnEffRao((DC **)a2);
    v63 = 0LL;
    v64 = 0;
    v65 = 1;
    v66 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v61, v30, v5, 0);
    if ( ERECTL::bEmpty((ERECTL *)v62) )
      return v12;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((a4 & 0xE8) == 0 || (v56 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v56 + 128) & 0x100) == 0) )
    {
      v60 = v62[0];
      XDCOBJ::vAccumulateTight(a2, v31, &v60);
    }
    v33 = *((_QWORD *)this + 8);
    v34 = *((_QWORD *)this + 9);
    v35 = *(_DWORD **)(v34 + 48);
    if ( (*(_DWORD *)(v33 + 112) & 0x2000) != 0 )
      v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v14 + 3256);
    else
      v36 = EngStretchBltROP;
    if ( v59 )
    {
      v39 = (BLTRECORD *)((char *)this + 152);
LABEL_36:
      BLTRECORD::vMirror(this, v39);
      v40 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v41 = *(_QWORD *)a2;
      if ( *(__int16 *)(*(_QWORD *)a2 + 242LL) >= 0 )
        v40 = v41 + 240;
      v42 = *((_DWORD *)this + 54);
      if ( v42 != 52428 )
      {
        v44 = BLTRECORD::pSurfMskOut(this);
        if ( v44 )
          v11 = (char *)v44 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, _QWORD, int))v36)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
               v11,
               v61,
               *((_QWORD *)this + 11),
               v40,
               v41 + 1592,
               (char *)this + 152,
               (char *)this + 176,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v42);
    }
    if ( a5 == 4 && (*(_BYTE *)(v14 + 1840) & 0x10) == 0 )
      v36 = EngStretchBltROP;
    if ( *(_WORD *)(v34 + 100) == 1 && v35 && (v35[8] & 0x20000) != 0 )
    {
      v57 = v35[650];
      v37 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v57 )
        goto LABEL_87;
      v32 = (unsigned int)v35[651];
      if ( *((_DWORD *)this + 45) < (int)v32 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) + v57 )
        goto LABEL_87;
      v38 = *((_DWORD *)this + 47) <= (int)v32 + *(_DWORD *)(v34 + 60);
    }
    else
    {
      v37 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) )
        goto LABEL_87;
      v38 = *((_DWORD *)this + 47) <= *(_DWORD *)(v34 + 60);
    }
    if ( v38 )
    {
LABEL_35:
      v39 = (BLTRECORD *)((char *)this + 152);
      if ( v33 == v34 && (unsigned int)bIntersect(v37, (char *)this + 152, v37, v32) )
        v36 = EngStretchBltROP;
      goto LABEL_36;
    }
LABEL_87:
    v36 = EngStretchBltROP;
    goto LABEL_35;
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
  v49 = 0;
  if ( BLTRECORD::pSurfMskOut(v45) )
  {
    if ( *v46 < 0
      || *(int *)(v47 + 196) < 0
      || (v50 = *(_QWORD *)(v47 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v50 + 56))
      || *((_DWORD *)this + 51) > *(_DWORD *)(v50 + 60) )
    {
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v60.m128i_i64[0] = 0LL;
  v60.m128i_i8[8] = 0;
  v60.m128i_i32[3] = 0;
  if ( (v48 & 0x10000) == 0 )
    goto LABEL_63;
  if ( (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v60, a5) )
  {
    v48 = a4;
LABEL_63:
    v51 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v51;
    v49 = BLTRECORD::bBitBlt(this, a2, a2, v48);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  return v49;
}
