/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C006D210
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F43C (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C001F590 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C001F610 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001F640 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001FE64 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0020360 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C004CDC0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C004D890 (DEC_SHARE_REF_CNT.c)
 *     HmgQueryAltLock @ 0x1C006E540 (HmgQueryAltLock.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C008FA40 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C008FA70 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00930CC (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EFD50 (HmgSwapLockedHandleContents.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct OBJECT *a2, int a3, struct OBJECT *a4)
{
  SURFACE *v4; // rsi
  unsigned int v9; // r12d
  void *v10; // rdx
  struct DC *v11; // r8
  int v12; // eax
  struct OBJECT *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rsi
  int AltLock; // eax
  __int64 v21; // rbx
  int v22; // edi
  int v23; // eax
  int locked; // eax
  int v25; // edi
  HLSURF HLSURFCloneWrap; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // r8
  __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int128 v40; // xmm3
  __int64 v41; // xmm2_8
  __int128 v42; // xmm4
  __int128 v43; // xmm5
  __int128 v44; // xmm6
  __int128 v45; // xmm7
  __int128 v46; // xmm0
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  __int64 v51; // rdx
  int v52; // xmm0_4
  int v53; // xmm1_4
  __int64 v54; // rax
  int v55; // eax
  HLSURF v56; // rdx
  struct SFMLOGICALSURFACE *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rbx
  void *v60; // rdx
  struct DC *v61; // r8
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rdi
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  void *v68; // rdx
  struct DC *v69; // r8
  void *v70; // rdx
  struct DC *v71; // r8
  int v73; // [rsp+48h] [rbp-69h]
  int v74; // [rsp+4Ch] [rbp-65h]
  struct OBJECT *v75; // [rsp+50h] [rbp-61h] BYREF
  SURFACE *v76[2]; // [rsp+58h] [rbp-59h] BYREF
  int v77; // [rsp+68h] [rbp-49h]
  SURFACE *v78[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v79; // [rsp+80h] [rbp-31h] BYREF
  int v80; // [rsp+88h] [rbp-29h]
  __int64 v81; // [rsp+90h] [rbp-21h] BYREF
  int v82; // [rsp+98h] [rbp-19h]
  __int64 v83; // [rsp+A0h] [rbp-11h] BYREF
  int v84; // [rsp+A8h] [rbp-9h]
  int v85; // [rsp+ACh] [rbp-5h]

  v4 = 0LL;
  v84 = *((_DWORD *)a1 + 14);
  v85 = *((_DWORD *)a1 + 15);
  v75 = a4;
  v83 = 0LL;
  v76[0] = 0LL;
  v9 = 1;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v76,
    (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
  v78[0] = 0LL;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v78,
    (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
  *(_DWORD *)a4 = 0;
  v12 = *((_DWORD *)a1 + 28);
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v78, v10, v11);
    v78[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v76, v70, v71);
    v76[0] = 0LL;
    goto LABEL_74;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_5:
    v13 = a1;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v12 & 0x400000) != 0 )
      goto LABEL_5;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_74:
      v9 = 0;
      goto LABEL_75;
    }
  }
  v13 = a2;
LABEL_8:
  v14 = *((_QWORD *)v13 + 6);
  if ( (*(_DWORD *)(v14 + 32) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  v15 = 1024LL;
  if ( a3
    || v14
    && ((*((_DWORD *)v13 + 28) & 0x400) == 0
      ? (v16 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
                 0LL,
                 &xloIdent,
                 &v83,
                 &v83))
      : (v16 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int64 *, __int64 *))(v14 + 2856))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
                 0LL,
                 &xloIdent,
                 &v83,
                 &v83)),
        v16) )
  {
    if ( (*(_DWORD *)(v14 + 32) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v17 = *(_DWORD *)a1;
    v77 = *((_DWORD *)a1 + 29) & 0x80;
    v18 = v17 & 0x800000;
    if ( !v18 || (v73 = 1, (*((_WORD *)a1 + 51) & 0x200) == 0) )
      v73 = 0;
    if ( !v18 || (v74 = 1, (*((_WORD *)a1 + 51) & 0x400) == 0) )
      v74 = 0;
    v19 = *((_QWORD *)a1 + 4);
    AltLock = HmgQueryAltLock(v19);
    v21 = *((_QWORD *)a2 + 4);
    v22 = AltLock;
    v23 = HmgQueryAltLock(v21);
    locked = HmgSwapLockedHandleContents(v19, v22, v21, v23, 5);
    v4 = 0LL;
    if ( !locked )
    {
      v9 = 0;
      goto LABEL_65;
    }
    v79 = 0LL;
    v25 = 0;
    v80 = 0;
    HLSURFCloneWrap = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v4 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_32;
    v25 = -__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3) )
      goto LABEL_32;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported() >= 0 )
      HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v4, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v79, HLSURFCloneWrap);
    if ( !v79 )
    {
      v9 = 0;
    }
    else
    {
LABEL_32:
      OBJECT::SwapShareCount(a1, a2);
      v28 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 61) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v29 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v28;
      v30 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v29;
      v31 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v30;
      v32 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v31;
      v33 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v32;
      v34 = *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v33 & 0x4000;
      LODWORD(v31) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v33 & 0x8000 | v34;
      LODWORD(v32) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v31;
      v35 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v32;
      v36 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v35;
      *((_QWORD *)a2 + 22) = v36;
      v37 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v37;
      v38 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v37) = *((_DWORD *)a2 + 82);
      *((_QWORD *)a2 + 16) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 82);
      *((_DWORD *)a1 + 82) = v37;
      LODWORD(v37) = *((_DWORD *)a2 + 83);
      *((_DWORD *)a2 + 82) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 83);
      *((_DWORD *)a1 + 83) = v37;
      v39 = *((_OWORD *)a2 + 21);
      *((_DWORD *)a2 + 83) = v38;
      v40 = *((_OWORD *)a1 + 21);
      v41 = *((_QWORD *)a1 + 52);
      v42 = *((_OWORD *)a1 + 22);
      v43 = *((_OWORD *)a1 + 23);
      v44 = *((_OWORD *)a1 + 24);
      v45 = *((_OWORD *)a1 + 25);
      *((_OWORD *)a1 + 21) = v39;
      *((_OWORD *)a1 + 22) = *((_OWORD *)a2 + 22);
      *((_OWORD *)a1 + 23) = *((_OWORD *)a2 + 23);
      *((_OWORD *)a1 + 24) = *((_OWORD *)a2 + 24);
      *((_OWORD *)a1 + 25) = *((_OWORD *)a2 + 25);
      *((_QWORD *)a1 + 52) = *((_QWORD *)a2 + 52);
      v46 = *(_OWORD *)((char *)a2 + 424);
      *((_OWORD *)a2 + 21) = v40;
      *((_OWORD *)a2 + 22) = v42;
      *((_OWORD *)a2 + 23) = v43;
      *((_OWORD *)a2 + 24) = v44;
      *((_OWORD *)a2 + 25) = v45;
      *((_QWORD *)a2 + 52) = v41;
      v47 = *(_OWORD *)((char *)a1 + 424);
      v48 = *(_OWORD *)((char *)a1 + 440);
      *(_OWORD *)((char *)a1 + 424) = v46;
      *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
      LODWORD(v37) = *((_DWORD *)a2 + 28);
      *(_OWORD *)((char *)a2 + 424) = v47;
      *(_OWORD *)((char *)a2 + 440) = v48;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (v38 ^ v37) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v38 ^ (v38 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (v38 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v38 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v38 ^ (v38 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v38 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (v38 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v49 = *((_QWORD *)a2 + 72);
      *((_DWORD *)a2 + 29) ^= (v38 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v50 = *((_QWORD *)a1 + 72);
      SURFACE::vAppContainerOwner(a1, v49);
      SURFACE::vAppContainerOwner(a2, v50);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v52 = *((_DWORD *)a1 + 149);
        v53 = *((_DWORD *)a1 + 150);
        v54 = *(_QWORD *)((char *)a1 + 604);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 149) = v52;
        *((_DWORD *)a2 + 150) = v53;
        *(_QWORD *)((char *)a2 + 604) = v54;
      }
      if ( v73 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v55 = *(_DWORD *)a2 & 0x800000;
        if ( v55 )
        {
          v51 = 512LL;
          *((_WORD *)a2 + 51) |= 0x200u;
        }
        if ( v74 && v55 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *(_DWORD *)v75 = 1;
      }
      if ( v4 )
      {
        v56 = *(HLSURF *)v4;
        v81 = 0LL;
        v82 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v81, v56);
        v4 = 0LL;
        if ( v25 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v13 + 6), v81, a2, v79);
        while ( 1 )
        {
          v57 = SURFACE::GetFirstLSurf(a1);
          if ( !v57 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v13 + 6), v57, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v81);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        LOBYTE(v51) = 5;
        v58 = HmgShareLock(*((_QWORD *)a2 + 18), v51);
        v59 = v58;
        if ( v58 )
        {
          if ( *(SURFACE **)(v58 + 24) != v4 && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
            MulReplaceRedirectionChild(
              *(_QWORD *)(v59 + 24),
              ((unsigned __int64)a1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
              ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
          DEC_SHARE_REF_CNT((struct OBJECT *)v59);
        }
      }
      if ( v77 != (_DWORD)v4 )
      {
        DEC_SHARE_REF_CNT(a1);
        INC_SHARE_REF_CNT(a2);
      }
      if ( *((_DWORD *)a1 + 2) != (_DWORD)v4 )
      {
        *(_DWORD *)v75 = 1;
LABEL_63:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v79);
LABEL_65:
        if ( !v9 && v73 != (_DWORD)v4 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v67 = *(_DWORD *)a1 & 0x800000;
          if ( v67 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v74 != (_DWORD)v4 && v67 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_72;
      }
      v75 = (struct OBJECT *)HmgShareLockCheck(*((struct HOBJ__ **)a1 + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v76, v60, v61);
      v76[0] = v4;
      v9 = SURFREF::bDeleteSurface(&v75, 0LL);
      if ( !v9 )
        *((_QWORD *)a1 + 61) = v4;
      SURFREF::~SURFREF(&v75);
      if ( v9 )
        goto LABEL_63;
    }
    v62 = *((_QWORD *)a1 + 4);
    v63 = HmgQueryAltLock(v62);
    v64 = *((_QWORD *)a2 + 4);
    v65 = v63;
    v66 = HmgQueryAltLock(v64);
    HmgSwapLockedHandleContents(v64, v66, v62, v65, 5);
    v4 = 0LL;
    goto LABEL_63;
  }
  v9 = 0;
LABEL_72:
  SURFREFVIEW::bUnMapImmediate(v78, (void *)v15, v11);
  v78[0] = v4;
  SURFREFVIEW::bUnMapImmediate(v76, v68, v69);
  v76[0] = v4;
LABEL_75:
  SURFREFVIEW::bUnMap(v78);
  SURFREFVIEW::bUnMap(v76);
  return v9;
}
