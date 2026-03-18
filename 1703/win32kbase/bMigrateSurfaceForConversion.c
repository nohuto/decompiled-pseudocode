/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C00F22E0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C002B780 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C002B7C0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C002B810 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C002C9D0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002CBB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0089028 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0089058 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     HmgQueryAltLock @ 0x1C008C2B0 (HmgQueryAltLock.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C008C57C (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, struct _BASEOBJECT *a2, int a3, int *a4)
{
  SURFACE *v4; // rsi
  unsigned int v9; // r12d
  void *v10; // rdx
  struct DC *v11; // r8
  int v12; // eax
  SURFACE *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  unsigned __int16 AltLock; // di
  unsigned __int16 v20; // ax
  int v21; // edi
  HLSURF HLSURFCloneWrap; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int16 v29; // r8
  __int16 v30; // dx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm3
  __int64 v37; // xmm2_8
  __int128 v38; // xmm4
  __int128 v39; // xmm5
  __int128 v40; // xmm6
  __int128 v41; // xmm7
  __int128 v42; // xmm0
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // xmm0_8
  __int64 v48; // rax
  int v49; // eax
  HLSURF v50; // rdx
  struct SFMLOGICALSURFACE *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rbx
  void *v54; // rdx
  struct DC *v55; // r8
  unsigned __int16 v56; // bx
  unsigned __int16 v57; // ax
  int v58; // eax
  void *v59; // rdx
  struct DC *v60; // r8
  void *v61; // rdx
  struct DC *v62; // r8
  int v64; // [rsp+48h] [rbp-69h]
  int v65; // [rsp+4Ch] [rbp-65h]
  int *v66; // [rsp+50h] [rbp-61h] BYREF
  SURFACE *v67[2]; // [rsp+58h] [rbp-59h] BYREF
  int v68; // [rsp+68h] [rbp-49h]
  SURFACE *v69[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v70; // [rsp+80h] [rbp-31h] BYREF
  int v71; // [rsp+88h] [rbp-29h]
  __int64 v72; // [rsp+90h] [rbp-21h] BYREF
  int v73; // [rsp+98h] [rbp-19h]
  __int64 v74; // [rsp+A0h] [rbp-11h] BYREF
  int v75; // [rsp+A8h] [rbp-9h]
  int v76; // [rsp+ACh] [rbp-5h]

  v4 = 0LL;
  v75 = *((_DWORD *)this + 14);
  v76 = *((_DWORD *)this + 15);
  v66 = a4;
  v74 = 0LL;
  v67[0] = 0LL;
  v9 = 1;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v67,
    (struct _SURFOBJ *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v69[0] = 0LL;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v69,
    (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
  *a4 = 0;
  v12 = *((_DWORD *)this + 28);
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v69, v10, v11);
    v69[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v67, v61, v62);
    v67[0] = 0LL;
    goto LABEL_76;
  }
  if ( *((_WORD *)this + 50) == 3 )
  {
LABEL_5:
    v13 = this;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v12 & 0x400000) != 0 )
      goto LABEL_5;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_76:
      v9 = 0;
      goto LABEL_77;
    }
  }
  v13 = a2;
LABEL_8:
  v14 = *((_QWORD *)v13 + 6);
  if ( (*(_DWORD *)(v14 + 32) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  v15 = 1024LL;
  if ( a3
    || v14
    && ((*((_DWORD *)v13 + 28) & 0x400) == 0
      ? (v16 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                 0LL,
                 &xloIdent,
                 &v74,
                 &v74))
      : (v16 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int64 *, __int64 *))(v14 + 2856))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                 0LL,
                 &xloIdent,
                 &v74,
                 &v74)),
        v16) )
  {
    if ( (*(_DWORD *)(v14 + 32) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v17 = *(_DWORD *)this;
    v68 = *((_DWORD *)this + 29) & 0x80;
    v18 = v17 & 0x800000;
    if ( !v18 || (v64 = 1, (*((_WORD *)this + 51) & 0x200) == 0) )
      v64 = 0;
    if ( !v18 || (v65 = 1, (*((_WORD *)this + 51) & 0x400) == 0) )
      v65 = 0;
    AltLock = HmgQueryAltLock(*((_QWORD *)this + 4));
    v20 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
    if ( !(unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)this + 4), AltLock, *((_QWORD *)a2 + 4), v20, 5) )
    {
      v9 = 0;
      goto LABEL_67;
    }
    v70 = 0LL;
    v21 = 0;
    v71 = 0;
    HLSURFCloneWrap = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v4 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_32;
    v21 = -__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3) )
      goto LABEL_32;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported() >= 0 )
      HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)this + 6), v4, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v70, HLSURFCloneWrap);
    if ( !v70 )
    {
      v9 = 0;
    }
    else
    {
LABEL_32:
      OBJECT::SwapShareCount(this, a2);
      v24 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 61) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v25 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v24;
      v26 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v25;
      v27 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v26;
      v28 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v27;
      v29 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v28;
      v30 = *((_WORD *)this + 7) & 0x4000;
      *((_WORD *)this + 7) = *((_WORD *)this + 7) & 0x8000 | v29 & 0x4000;
      LODWORD(v27) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v29 & 0x8000 | v30;
      LODWORD(v28) = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = v27;
      v31 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v28;
      v32 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v31;
      *((_QWORD *)a2 + 22) = v32;
      v33 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v33;
      v34 = *((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v33) = *((_DWORD *)a2 + 82);
      *((_QWORD *)a2 + 16) = v34;
      LODWORD(v34) = *((_DWORD *)this + 82);
      *((_DWORD *)this + 82) = v33;
      LODWORD(v33) = *((_DWORD *)a2 + 83);
      *((_DWORD *)a2 + 82) = v34;
      LODWORD(v34) = *((_DWORD *)this + 83);
      *((_DWORD *)this + 83) = v33;
      v35 = *((_OWORD *)a2 + 21);
      *((_DWORD *)a2 + 83) = v34;
      v36 = *((_OWORD *)this + 21);
      v37 = *((_QWORD *)this + 52);
      v38 = *((_OWORD *)this + 22);
      v39 = *((_OWORD *)this + 23);
      v40 = *((_OWORD *)this + 24);
      v41 = *((_OWORD *)this + 25);
      *((_OWORD *)this + 21) = v35;
      *((_OWORD *)this + 22) = *((_OWORD *)a2 + 22);
      *((_OWORD *)this + 23) = *((_OWORD *)a2 + 23);
      *((_OWORD *)this + 24) = *((_OWORD *)a2 + 24);
      *((_OWORD *)this + 25) = *((_OWORD *)a2 + 25);
      *((_QWORD *)this + 52) = *((_QWORD *)a2 + 52);
      v42 = *(_OWORD *)((char *)a2 + 424);
      *((_OWORD *)a2 + 21) = v36;
      *((_OWORD *)a2 + 22) = v38;
      *((_OWORD *)a2 + 23) = v39;
      *((_OWORD *)a2 + 24) = v40;
      *((_OWORD *)a2 + 25) = v41;
      *((_QWORD *)a2 + 52) = v37;
      v43 = *(_OWORD *)((char *)this + 424);
      v44 = *(_OWORD *)((char *)this + 440);
      *(_OWORD *)((char *)this + 424) = v42;
      *(_OWORD *)((char *)this + 440) = *(_OWORD *)((char *)a2 + 440);
      LODWORD(v33) = *((_DWORD *)a2 + 28);
      *(_OWORD *)((char *)a2 + 424) = v43;
      *(_OWORD *)((char *)a2 + 440) = v44;
      LODWORD(v34) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (v34 ^ v33) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v34 ^ (v34 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v34) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v34 ^ (v34 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v34 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v34) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v34 ^ (v34 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v34 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v34) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v34 ^ (v34 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v45 = *((_QWORD *)a2 + 72);
      *((_DWORD *)a2 + 29) ^= (v34 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v46 = *((_QWORD *)this + 72);
      SURFACE::vAppContainerOwner(this, v45);
      SURFACE::vAppContainerOwner(a2, v46);
      if ( (*((_DWORD *)this + 29) & 0x800) != 0 )
      {
        v47 = *(_QWORD *)((char *)this + 596);
        v48 = *(_QWORD *)((char *)this + 604);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *(_QWORD *)((char *)a2 + 596) = v47;
        *(_QWORD *)((char *)a2 + 604) = v48;
      }
      if ( v64 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v49 = *(_DWORD *)a2 & 0x800000;
        if ( v49 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v65 && v49 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v66 = 1;
      }
      if ( v4 )
      {
        v50 = *(HLSURF *)v4;
        v72 = 0LL;
        v73 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v72, v50);
        v4 = 0LL;
        if ( v21 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v13 + 6), v72, a2, v70);
        while ( 1 )
        {
          v51 = SURFACE::GetFirstLSurf(this);
          if ( !v51 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v13 + 6), v51, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v72);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v52 = HmgShareLock(*((_QWORD *)a2 + 18), 5);
        v53 = v52;
        if ( v52 )
        {
          if ( *(SURFACE **)(v52 + 24) != v4 && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
            MulReplaceRedirectionChild(
              *(_QWORD *)(v53 + 24),
              ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
              ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
          DEC_SHARE_REF_CNT((int *)v53);
        }
      }
      if ( v68 != (_DWORD)v4 )
      {
        DEC_SHARE_REF_CNT((int *)this);
        INC_SHARE_REF_CNT(a2);
      }
      if ( *((_DWORD *)this + 2) != (_DWORD)v4 )
      {
        *v66 = 1;
LABEL_65:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v70);
LABEL_67:
        if ( !v9 && v64 != (_DWORD)v4 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v58 = *(_DWORD *)this & 0x800000;
          if ( v58 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v65 != (_DWORD)v4 && v58 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_74;
      }
      v66 = (int *)HmgShareLockCheck(*((_QWORD *)this + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v67, v54, v55);
      v67[0] = v4;
      v9 = SURFREF::bDeleteSurface(&v66, 0LL);
      if ( !v9 )
        *((_QWORD *)this + 61) = v4;
      if ( v66 )
        DEC_SHARE_REF_CNT(v66);
      if ( v9 )
        goto LABEL_65;
    }
    v56 = HmgQueryAltLock(*((_QWORD *)this + 4));
    v57 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
    HmgSwapLockedHandleContents(*((_QWORD *)a2 + 4), v57, *((_QWORD *)this + 4), v56, 5);
    v4 = 0LL;
    goto LABEL_65;
  }
  v9 = 0;
LABEL_74:
  SURFREFVIEW::bUnMapImmediate(v69, (void *)v15, v11);
  v69[0] = v4;
  SURFREFVIEW::bUnMapImmediate(v67, v59, v60);
  v67[0] = v4;
LABEL_77:
  SURFREFVIEW::bUnMap(v69);
  SURFREFVIEW::bUnMap(v67);
  return v9;
}
