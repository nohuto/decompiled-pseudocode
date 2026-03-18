/*
 * XREFs of GreHintSpriteShape @ 0x1C00911BC
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00225E0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 * Callees:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C000A308 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C008AAEC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C008E908 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008EBA0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008ED7C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008EDF8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0091650 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009169C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00916C8 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E7400 (DwmAsyncUpdateSprite.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r12d
  __int64 v8; // r15
  HBITMAP v9; // rbx
  DWMSPRITE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct SFMLOGICALSURFACE *v17; // r13
  HDEV v18; // rbx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  __int64 v23; // rbx
  __int64 v24; // rcx
  W32PIDLOCK *v25; // r12
  HLSURF HLSURFClone; // rax
  HDEV v27; // rdx
  HDEV v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rax
  struct PDEVOBJ *v37; // rsi
  __int64 v38; // xmm1_8
  int v39; // eax
  int v40; // xmm1_4
  __int64 v41; // rax
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  HBITMAP v44; // [rsp+78h] [rbp-88h]
  unsigned int v45; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v46; // [rsp+84h] [rbp-7Ch] BYREF
  int v47; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v48[4]; // [rsp+8Ch] [rbp-74h] BYREF
  struct PDEVOBJ *v49; // [rsp+90h] [rbp-70h]
  _QWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  DWMSPRITE *v51; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct SFMLOGICALSURFACE *v53; // [rsp+C0h] [rbp-40h] BYREF
  int v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  _BYTE v56[16]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v57; // [rsp+E8h] [rbp-18h] BYREF

  v7 = 0;
  v53 = 0LL;
  v8 = 0LL;
  v54 = 0;
  v9 = a3;
  v55 = a4;
  v44 = a3;
  v49 = a2;
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v48, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v51, (HWND)a2);
    v13 = v51;
    if ( !v51 )
    {
LABEL_17:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v48);
      goto LABEL_18;
    }
    v14 = *((_QWORD *)v51 + 24);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56, (struct SFMLOGICALSURFACE *)v14);
    v16 = *(_QWORD *)(v14 + 192);
    v7 = 1;
    if ( v16 )
    {
      v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v23) )
      {
        v25 = (W32PIDLOCK *)(v24 + 280);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v24 + 280));
        if ( *(_DWORD *)(v23 + 332) )
        {
          v37 = v49;
          *(_QWORD *)(v23 + 352) = v44;
          *(_QWORD *)(v23 + 336) = a1;
          *(_QWORD *)(v23 + 344) = v37;
          *(_OWORD *)(v23 + 360) = *(_OWORD *)a4;
          *(_OWORD *)(v23 + 376) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v23 + 392) = *(_OWORD *)(a4 + 32);
          v38 = *(_QWORD *)(a4 + 48);
          *(_DWORD *)(v23 + 420) = a6;
          v39 = *(_DWORD *)(v23 + 112);
          *(_QWORD *)(v23 + 408) = v38;
          *(_DWORD *)(v23 + 416) = a5;
          if ( (v39 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v23 + 112) = v39 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
            v13 = v51;
          }
          W32PIDLOCK::vUnlockSingleThread(v25);
          SFMLOGICALSURFACEREF_vDestructorWrap(v56);
          v7 = 1;
          goto LABEL_16;
        }
        W32PIDLOCK::vUnlockSingleThread(v25);
        v7 = 1;
      }
      v9 = v44;
    }
    if ( *(_QWORD *)(v14 + 192) || (*(_DWORD *)(v14 + 248) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, (struct SFMLOGICALSURFACE *)v14, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v53, HLSURFClone);
      v17 = v53;
      if ( v53 )
      {
        DWMSPRITE::SetLogicalSurface(v13, v27, 0LL);
        DWMSPRITE::SetLogicalSurface(v13, v28, v17);
      }
      else
      {
        if ( v9 )
        {
          v7 = 0;
LABEL_15:
          SFMLOGICALSURFACEREF_vDestructorWrap(v56);
LABEL_16:
          _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
          goto LABEL_17;
        }
        v17 = (struct SFMLOGICALSURFACE *)v14;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, a1, 0LL);
      }
    }
    else
    {
      v17 = (struct SFMLOGICALSURFACE *)v14;
    }
    if ( v9 )
    {
      LOBYTE(v15) = 5;
      v29 = HmgReferenceCheckLock(v9, v15, 0LL);
      v18 = a1;
      v8 = v29 + 24;
      SFMLOGICALSURFACE::SetShape(v17, a1, (struct _SURFOBJ *)(v29 + 24));
      *((_DWORD *)v17 + 64) |= 8u;
      v30 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v8);
      if ( (v30[29] & 0x800) != 0 )
      {
        v40 = v30[150];
        *((_DWORD *)v13 + 46) = v30[149];
        *((_DWORD *)v13 + 47) = v40;
        *((_DWORD *)v13 + 50) |= 0x20u;
      }
      else
      {
        *((_QWORD *)v13 + 23) = 0LL;
        *((_DWORD *)v13 + 50) &= ~0x20u;
      }
    }
    else
    {
      *((_DWORD *)v17 + 64) &= 0xFFFFFFF6;
      v18 = a1;
    }
    v19 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
    v20 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
    if ( v8 )
    {
      *((_DWORD *)v17 + 64) |= 1u;
      v31 = *((_QWORD *)v13 + 11);
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14) + v19;
      *((_DWORD *)v13 + 17) = v20 + *((_DWORD *)v13 + 15);
      if ( v31 )
      {
        v43 = v31;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v52);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v52);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v50);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v50);
        if ( v52[0] )
        {
          if ( v50[0] )
          {
            v57.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
            v57.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
            *(_QWORD *)&v57.left = 0LL;
            RGNOBJ::vSet((RGNOBJ *)v52, &v57);
            if ( RGNOBJ::bMerge((RGNOBJ *)v50, (struct RGNOBJ *)&v43, (struct RGNOBJ *)v52, BYTE1(gafjRgnOp)) )
            {
              if ( !RGNOBJ::bEqual((RGNOBJ *)v50, (struct RGNOBJ *)&v43) )
              {
                RGNOBJ::vSwap((RGNOBJ *)v50, (struct RGNOBJ *)&v43);
                v41 = v43;
                *((_DWORD *)v13 + 24) = -1;
                *((_QWORD *)v13 + 11) = v41;
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v50);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v52);
      }
    }
    else
    {
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14);
      *((_DWORD *)v13 + 17) = *((_DWORD *)v13 + 15);
    }
    v21 = *((_DWORD *)v17 + 64);
    if ( (v21 & 1) != 0 && (*((_DWORD *)v13 + 50) & 0x10) == 0 && (v21 & 8) != 0 )
    {
      SFMLOGICALSURFACE::StartSfmStateTracking(v17, v18, gpSfmState);
      SFMLOGICALSURFACE::GetRedirectionInfo(v17, (enum _HLSURF_REDIRECTIONSTYLE *)&v47, &v46, &v45, 0LL, 0LL);
      v32 = *((_DWORD *)v17 + 64);
      v33 = *((_QWORD *)v13 + 19);
      *((_QWORD *)v13 + 19) = 0LL;
      v36 = (void *)UserReferenceDwmApiPort(v32 & 0xC, v32 & 1, v34, v35);
      v7 = (int)DwmAsyncUpdateSprite(v36, (__int64)v13 + 72, v55, v47, v46, v45, *((_DWORD *)v13 + 32), v33) >= 0;
      *((_DWORD *)v17 + 64) &= ~8u;
    }
    goto LABEL_15;
  }
  v7 = GdiHintSpriteShape(a1, (HWND)a2, v9, 0, 0);
LABEL_18:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v53);
  return v7;
}
