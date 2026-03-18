/*
 * XREFs of GreHintSpriteShape @ 0x1C0023878
 * Callers:
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0023D64 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002571C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00265B8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0026890 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0026A6C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0026AE8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00A046C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r12d
  __int64 v8; // r15
  HBITMAP v9; // rbx
  DWMSPRITE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rcx
  struct SFMLOGICALSURFACE *v18; // r13
  HDEV v19; // rbx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  __int64 v24; // rbx
  __int64 v25; // rcx
  W32PIDLOCK *v26; // r12
  HLSURF HLSURFClone; // rax
  HDEV v28; // rdx
  HDEV v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  void *v34; // rax
  struct PDEVOBJ *v35; // rsi
  __int64 v36; // xmm1_8
  int v37; // eax
  __int64 v38; // rax
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  HBITMAP v41; // [rsp+78h] [rbp-88h]
  unsigned int v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[4]; // [rsp+8Ch] [rbp-74h] BYREF
  struct PDEVOBJ *v46; // [rsp+90h] [rbp-70h]
  _QWORD v47[2]; // [rsp+98h] [rbp-68h] BYREF
  DWMSPRITE *v48; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct SFMLOGICALSURFACE *v50; // [rsp+C0h] [rbp-40h] BYREF
  int v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  _BYTE v53[16]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v54; // [rsp+E8h] [rbp-18h] BYREF

  v7 = 0;
  v50 = 0LL;
  v8 = 0LL;
  v51 = 0;
  v9 = a3;
  v52 = a4;
  v41 = a3;
  v46 = a2;
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v45, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v48, (HWND)a2);
    v13 = v48;
    if ( !v48 )
    {
LABEL_17:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v45);
      goto LABEL_18;
    }
    v14 = *((_QWORD *)v48 + 24);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v53, (struct SFMLOGICALSURFACE *)v14);
    v17 = *(_QWORD *)(v14 + 192);
    v7 = 1;
    if ( v17 )
    {
      v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v24) )
      {
        v26 = (W32PIDLOCK *)(v25 + 280);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v25 + 280));
        if ( *(_DWORD *)(v24 + 332) )
        {
          v35 = v46;
          *(_QWORD *)(v24 + 352) = v41;
          *(_QWORD *)(v24 + 336) = a1;
          *(_QWORD *)(v24 + 344) = v35;
          *(_OWORD *)(v24 + 360) = *(_OWORD *)a4;
          *(_OWORD *)(v24 + 376) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v24 + 392) = *(_OWORD *)(a4 + 32);
          v36 = *(_QWORD *)(a4 + 48);
          *(_DWORD *)(v24 + 420) = a6;
          v37 = *(_DWORD *)(v24 + 112);
          *(_QWORD *)(v24 + 408) = v36;
          *(_DWORD *)(v24 + 416) = a5;
          if ( (v37 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v24 + 112) = v37 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
            v13 = v48;
          }
          W32PIDLOCK::vUnlockSingleThread(v26);
          SFMLOGICALSURFACEREF_vDestructorWrap(v53);
          v7 = 1;
          goto LABEL_16;
        }
        W32PIDLOCK::vUnlockSingleThread(v26);
        v7 = 1;
      }
      v9 = v41;
    }
    if ( *(_QWORD *)(v14 + 192) || (*(_DWORD *)(v14 + 248) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, (struct SFMLOGICALSURFACE *)v14, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v50, HLSURFClone);
      v18 = v50;
      if ( v50 )
      {
        DWMSPRITE::SetLogicalSurface(v13, v28, 0LL);
        DWMSPRITE::SetLogicalSurface(v13, v29, v18);
      }
      else
      {
        if ( v9 )
        {
          v7 = 0;
LABEL_15:
          SFMLOGICALSURFACEREF_vDestructorWrap(v53);
LABEL_16:
          _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
          goto LABEL_17;
        }
        v18 = (struct SFMLOGICALSURFACE *)v14;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, a1, 0LL);
      }
    }
    else
    {
      v18 = (struct SFMLOGICALSURFACE *)v14;
    }
    if ( v9 )
    {
      LOBYTE(v15) = 5;
      v30 = HmgReferenceCheckLock(v9, v15, 0LL);
      v19 = a1;
      v8 = v30 + 24;
      SFMLOGICALSURFACE::SetShape(v18, a1, (struct _SURFOBJ *)(v30 + 24));
      *((_DWORD *)v18 + 64) |= 8u;
      v31 = SURFOBJ_TO_SURFACE_NOT_NULL(v8);
      if ( (*(_DWORD *)(v31 + 116) & 0x800) != 0 )
      {
        *((_QWORD *)v13 + 23) = *(_QWORD *)(v31 + 596);
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
      *((_DWORD *)v18 + 64) &= 0xFFFFFFF6;
      v19 = a1;
    }
    v20 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
    v21 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
    if ( v8 )
    {
      *((_DWORD *)v18 + 64) |= 1u;
      v32 = *((_QWORD *)v13 + 11);
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14) + v20;
      *((_DWORD *)v13 + 17) = v21 + *((_DWORD *)v13 + 15);
      if ( v32 )
      {
        v40 = v32;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v49);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v49);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v47);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v47);
        if ( v49[0] )
        {
          if ( v47[0] )
          {
            v54.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
            v54.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
            *(_QWORD *)&v54.left = 0LL;
            RGNOBJ::vSet((RGNOBJ *)v49, &v54);
            if ( RGNOBJ::bMerge((RGNOBJ *)v47, (struct RGNOBJ *)&v40, (struct RGNOBJ *)v49, BYTE1(gafjRgnOp)) )
            {
              if ( !RGNOBJ::bEqual((RGNOBJ *)v47, (struct RGNOBJ *)&v40) )
              {
                RGNOBJ::vSwap((RGNOBJ *)v47, (struct RGNOBJ *)&v40);
                v38 = v40;
                *((_DWORD *)v13 + 24) = -1;
                *((_QWORD *)v13 + 11) = v38;
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v47);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v49);
      }
    }
    else
    {
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14);
      *((_DWORD *)v13 + 17) = *((_DWORD *)v13 + 15);
    }
    v22 = *((_DWORD *)v18 + 64);
    if ( (v22 & 1) != 0 && (*((_DWORD *)v13 + 50) & 0x10) == 0 && (v22 & 8) != 0 )
    {
      SFMLOGICALSURFACE::StartSfmStateTracking(v18, v19, gpSfmState, v16);
      SFMLOGICALSURFACE::GetRedirectionInfo(v18, (enum _HLSURF_REDIRECTIONSTYLE *)&v44, &v43, &v42, 0LL, 0LL);
      v33 = *((_QWORD *)v13 + 19);
      *((_QWORD *)v13 + 19) = 0LL;
      v34 = (void *)UserReferenceDwmApiPort();
      v7 = (int)DwmAsyncUpdateSprite(v34, (__int64)v13 + 72, v52, v44, v43, v42, *((_DWORD *)v13 + 32), v33) >= 0;
      *((_DWORD *)v18 + 64) &= ~8u;
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
  SFMLOGICALSURFACEREF_vDestructorWrap(&v50);
  return v7;
}
