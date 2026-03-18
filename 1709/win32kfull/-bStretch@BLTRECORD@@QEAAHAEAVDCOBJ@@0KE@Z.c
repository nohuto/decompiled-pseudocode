/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001BC9C
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C001BA20 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C001BB88 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C001BBC0 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C001C78C (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026C5FC (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
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
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  struct REGION *v29; // rax
  struct ECLIPOBJ *v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rdx
  _DWORD *v33; // rax
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  char *v35; // r8
  bool v36; // cc
  struct ERECTL *v37; // rbx
  __int64 v38; // r8
  __int64 v39; // rbx
  int v40; // r13d
  struct SURFACE *v42; // rax
  int v43; // edx
  BLTRECORD *v44; // rcx
  int *v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // r11d
  unsigned int v48; // r14d
  __int64 v49; // rcx
  int v50; // eax
  XDCOBJ *v51; // rcx
  XDCOBJ *v52; // r10
  XDCOBJ *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // ecx
  int v57; // r9d
  int v59; // [rsp+74h] [rbp-8Ch]
  __int128 v60; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v61[4]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v62[4]; // [rsp+94h] [rbp-6Ch] BYREF
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
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v51) + 3))
      && (*((_WORD *)XDCOBJ::pSurfaceEff(v52) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v53) + 3)) )
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
        || (v54 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) > *(_DWORD *)(v54 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v54 + 60) )
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
      if ( (unsigned int)(v24 + 1) <= 2 )
      {
        v43 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v43 + 1) <= 2 )
        {
          LODWORD(v11) = BLTRECORD::bBitBlt(this, a2, v22, v23, v24, v43);
          return (unsigned int)v11;
        }
      }
    }
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 512LL) || !*(_QWORD *)(*(_QWORD *)v22 + 512LL) )
    {
      LODWORD(v11) = 1;
      return (unsigned int)v11;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate(a2, v5);
    v25 = *(_QWORD *)a2;
    v26 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL;
    *(_DWORD *)v5 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v26 + 1432);
    *((_DWORD *)v5 + 2) += *(_DWORD *)(v25 + 8 * v26 + 1432);
    *((_DWORD *)v5 + 1) += *(_DWORD *)(v25 + 8 * v26 + 1436);
    *((_DWORD *)v5 + 3) += *(_DWORD *)(v25 + 8 * v26 + 1436);
    v27 = *(_QWORD *)v22;
    if ( (*(_DWORD *)(*(_QWORD *)v22 + 40LL) & 1) != 0 )
      v28 = (_DWORD *)(v27 + 1440);
    else
      v28 = (_DWORD *)(v27 + 1432);
    *v21 += *v28;
    v21[2] += *v28;
    v21[1] += v28[1];
    v21[3] += v28[1];
    v29 = XDCOBJ::prgnEffRao(a2);
    v63 = 0LL;
    v64 = 0;
    v65 = 1;
    v66 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v61, v29, v5, 0);
    if ( ERECTL::bEmpty((ERECTL *)v62) )
      return v12;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((a4 & 0xE8) == 0 || (v55 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v55 + 128) & 0x100) == 0) )
    {
      v60 = v62[0];
      XDCOBJ::vAccumulateTight(a2, v30, (struct ERECTL *)&v60);
    }
    v31 = *((_QWORD *)this + 8);
    v32 = *((_QWORD *)this + 9);
    v33 = *(_DWORD **)(v32 + 48);
    if ( (*(_DWORD *)(v31 + 112) & 0x2000) != 0 )
      v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v14 + 3256);
    else
      v34 = EngStretchBltROP;
    if ( v59 )
    {
      v37 = (BLTRECORD *)((char *)this + 152);
LABEL_36:
      BLTRECORD::vMirror(this, v37);
      v38 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v39 = *(_QWORD *)a2;
      v40 = *((_DWORD *)this + 54);
      if ( *(__int16 *)(*(_QWORD *)a2 + 242LL) >= 0 )
        v38 = *(_QWORD *)a2 + 240LL;
      if ( v40 != 52428 )
      {
        v42 = BLTRECORD::pSurfMskOut(this);
        if ( v42 )
          v11 = (char *)v42 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, _QWORD, int))v34)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL),
               v11,
               v61,
               *((_QWORD *)this + 11),
               v38,
               v39 + 1592,
               (char *)this + 152,
               (char *)this + 176,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v40);
    }
    if ( a5 == 4 && (*(_BYTE *)(v14 + 1840) & 0x10) == 0 )
      v34 = EngStretchBltROP;
    if ( *(_WORD *)(v32 + 100) == 1 && v33 && (v33[8] & 0x20000) != 0 )
    {
      v56 = v33[650];
      v35 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v56 )
        goto LABEL_87;
      v57 = v33[651];
      if ( *((_DWORD *)this + 45) < v57 || *((_DWORD *)this + 46) > *(_DWORD *)(v32 + 56) + v56 )
        goto LABEL_87;
      v36 = *((_DWORD *)this + 47) <= v57 + *(_DWORD *)(v32 + 60);
    }
    else
    {
      v35 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v32 + 56) )
        goto LABEL_87;
      v36 = *((_DWORD *)this + 47) <= *(_DWORD *)(v32 + 60);
    }
    if ( v36 )
    {
LABEL_35:
      v37 = (BLTRECORD *)((char *)this + 152);
      if ( v31 == v32 && (unsigned int)bIntersect(v35, (char *)this + 152) )
        v34 = EngStretchBltROP;
      goto LABEL_36;
    }
LABEL_87:
    v34 = EngStretchBltROP;
    goto LABEL_35;
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
  v48 = 0;
  if ( BLTRECORD::pSurfMskOut(v44) )
  {
    if ( *v45 < 0
      || *(int *)(v46 + 196) < 0
      || (v49 = *(_QWORD *)(v46 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v49 + 56))
      || *((_DWORD *)this + 51) > *(_DWORD *)(v49 + 60) )
    {
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  *(_QWORD *)&v60 = 0LL;
  BYTE8(v60) = 0;
  HIDWORD(v60) = 0;
  if ( (v47 & 0x10000) == 0 )
    goto LABEL_63;
  if ( (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v60, a5) )
  {
    v47 = a4;
LABEL_63:
    v50 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v50;
    v48 = BLTRECORD::bBitBlt(this, a2, a2, v47);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  return v48;
}
