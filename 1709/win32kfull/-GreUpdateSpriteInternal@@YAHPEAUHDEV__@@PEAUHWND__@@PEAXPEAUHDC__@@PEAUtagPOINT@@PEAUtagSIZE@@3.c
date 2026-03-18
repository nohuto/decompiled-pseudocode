/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0026830
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C024DFF0 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C000A5F0 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00435B8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C008CCDC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008EADC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C008ED08 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008ED7C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008EDF8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008F07C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00B115C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00E3CC4 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00E4670 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C00E731C (DwmAsyncDirtySprite.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E7400 (DwmAsyncUpdateSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C011C624 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011F38C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024EAE0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 */

__int64 __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        SFMLOGICALSURFACE *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  __int64 v15; // r13
  struct tagPOINT *v16; // r10
  HDEV v17; // rbx
  struct tagSIZE *v18; // r12
  __int64 v19; // rdi
  HDC v20; // r11
  struct _POINTL *v21; // r15
  int v22; // r14d
  unsigned int v23; // esi
  struct _BLENDFUNCTION *v24; // r9
  unsigned int v25; // eax
  struct tagRECT *v26; // rcx
  int v27; // r12d
  __int64 v28; // rdx
  SFMLOGICALSURFACE *v29; // rsi
  char *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  struct tagPOINT *v34; // r9
  struct SFMLOGICALSURFACE *v35; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // rbx
  _QWORD *v37; // rsi
  struct tagRECT v38; // xmm0
  int v39; // r8d
  int *v40; // rdx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // r8d
  int v44; // eax
  __int64 v45; // rcx
  _BYTE *v46; // rax
  SFMLOGICALSURFACE *v47; // rbx
  int v48; // eax
  __int64 v49; // rsi
  struct SFMLOGICALSURFACE *v50; // rsi
  __int64 v51; // rcx
  unsigned int v52; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v55; // r13
  void *v56; // rax
  int *v57; // rax
  int v58; // ecx
  __int64 v59; // r8
  __int64 v60; // r8
  LONG y; // edx
  struct _RECTL *v62; // rax
  LONG v63; // ecx
  int v64; // eax
  __int64 v65; // rax
  int v66; // edx
  int v67; // ecx
  int v68; // ecx
  int v69; // eax
  void *v70; // rax
  bool v71; // dl
  SURFACE *v72; // rax
  int updated; // eax
  int v74; // [rsp+20h] [rbp-E0h]
  int v75; // [rsp+60h] [rbp-A0h]
  char v76; // [rsp+64h] [rbp-9Ch]
  SFMLOGICALSURFACE *v77; // [rsp+68h] [rbp-98h]
  SFMLOGICALSURFACE *v78; // [rsp+68h] [rbp-98h]
  struct SFMLOGICALSURFACE *v79; // [rsp+70h] [rbp-90h] BYREF
  int v80; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v81; // [rsp+7Ch] [rbp-84h] BYREF
  int *v82; // [rsp+80h] [rbp-80h]
  SFMLOGICALSURFACE *v83; // [rsp+88h] [rbp-78h]
  int v84; // [rsp+90h] [rbp-70h]
  unsigned int v85; // [rsp+94h] [rbp-6Ch]
  int v86; // [rsp+98h] [rbp-68h]
  struct tagRECT *v87; // [rsp+A0h] [rbp-60h]
  HDEV v88; // [rsp+A8h] [rbp-58h]
  struct tagSIZE *v89; // [rsp+B0h] [rbp-50h]
  SFMLOGICALSURFACE *v90; // [rsp+B8h] [rbp-48h]
  unsigned int v91; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v92; // [rsp+C4h] [rbp-3Ch] BYREF
  int v93; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v94; // [rsp+D0h] [rbp-30h]
  SFMLOGICALSURFACE *v95; // [rsp+D8h] [rbp-28h]
  struct tagPOINT *v96; // [rsp+E0h] [rbp-20h]
  HDC v97; // [rsp+E8h] [rbp-18h]
  struct tagPOINT *v98; // [rsp+F0h] [rbp-10h]
  HDEV v99; // [rsp+F8h] [rbp-8h] BYREF
  HWND v100; // [rsp+100h] [rbp+0h]
  struct _RECTL v101; // [rsp+108h] [rbp+8h] BYREF
  HDC v102; // [rsp+118h] [rbp+18h]
  _QWORD v103[2]; // [rsp+120h] [rbp+20h] BYREF
  HWND Buffer[2]; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v105; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v106[56]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v107; // [rsp+230h] [rbp+130h]

  v15 = 0LL;
  v16 = a5;
  v17 = a1;
  v18 = a6;
  v19 = 0LL;
  v20 = a7;
  v21 = a8;
  v22 = 1;
  v94 = (__int64)a13;
  v23 = a11 & 0x200000;
  v102 = a4;
  v24 = a10;
  v25 = a11 & 0xFFDFFFFF;
  v88 = a1;
  v26 = a12;
  v95 = a3;
  v100 = a2;
  v96 = a5;
  v89 = a6;
  v97 = a7;
  v98 = (struct tagPOINT *)a8;
  v82 = (int *)a10;
  v87 = a12;
  v75 = 0;
  v85 = a11 & 0x200000;
  v81 = 0;
  v76 = 0;
  v107 = a11 & 0xFFDFFFFF;
  if ( a14 )
  {
    if ( !g_pDwmState )
    {
LABEL_134:
      v25 = v107;
      goto LABEL_131;
    }
    v86 = 0;
    if ( !v23 )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      v86 = 1;
    }
    v99 = v17;
    v27 = 0;
    if ( !v23 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v27 = 1;
      }
    }
    if ( v23 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
    }
    if ( !g_pDwmState )
    {
LABEL_85:
      if ( v86 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
      if ( !v22 )
        return (unsigned int)v19;
      v26 = v87;
      a3 = v95;
      a2 = v100;
      v17 = v88;
      v24 = (struct _BLENDFUNCTION *)v82;
      v16 = v96;
      v20 = v97;
      v21 = (struct _POINTL *)v98;
      v18 = v89;
      goto LABEL_134;
    }
    v29 = v95;
    if ( v100 )
    {
      Buffer[0] = v100;
      v29 = 0LL;
      v30 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v30, 0LL);
      }
      v31 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v31 )
        v29 = (SFMLOGICALSURFACE *)v31[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v30, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v29
      || (LOBYTE(v28) = 15, v32 = HmgShareLockCheck(v29, v28), (v19 = v32) == 0)
      || (*(_DWORD *)(v32 + 200) & 0x10) != 0 )
    {
LABEL_82:
      if ( v19 )
        DEC_SHARE_REF_CNT(v19);
      v23 = v85;
      LODWORD(v19) = v75;
      goto LABEL_85;
    }
    v75 = 1;
    v84 = 0;
    if ( v32 != -120 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v19 + 120, 0LL);
    }
    v35 = *(struct SFMLOGICALSURFACE **)(v19 + 192);
    FirstLSurf = v35;
    v95 = *(SFMLOGICALSURFACE **)v19;
    v77 = v35;
    v79 = v35;
    v90 = 0LL;
    if ( v35 && *(_QWORD *)v35 )
    {
      LOBYTE(v33) = 18;
      v90 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v35, v33);
      v35 = FirstLSurf;
    }
    v37 = (_QWORD *)((char *)v35 + 264);
    if ( v35 != (struct SFMLOGICALSURFACE *)-264LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v37, 0LL);
      v35 = FirstLSurf;
    }
    if ( v87 )
    {
      v38 = *v87;
      v87 = &v105;
      v105 = v38;
    }
    v39 = v107;
    if ( v107 == 0x2000000 )
    {
      v80 = 33488896;
      v82 = &v80;
      v107 = 570425346;
      v71 = v89 || v96;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v19, v71);
      v39 = 570425346;
      v35 = FirstLSurf;
    }
    if ( (v39 & 0x20000000) != 0 )
    {
      v39 &= ~0x20000000u;
      v107 = v39;
    }
    else if ( (v39 & 0x40000000) != 0 || !v39 )
    {
      v39 = *(_DWORD *)(v19 + 72);
      v40 = (int *)(v19 + 76);
      v41 = *(_DWORD *)(v19 + 80);
      v82 = (int *)(v19 + 76);
      v107 = v39;
      a9 = v41;
      goto LABEL_32;
    }
    v40 = v82;
LABEL_32:
    v42 = v39 & 2;
    LODWORD(v83) = v42;
    if ( (v39 & 2) == 0 )
    {
LABEL_33:
      if ( *((_QWORD *)v35 + 24) )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v35 + 24)) + 116) & 1) == 0 )
          SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 24));
        v39 = v107;
        v35 = FirstLSurf;
        v42 = (int)v83;
      }
      *(_DWORD *)(v19 + 72) = v39;
      if ( v42 )
      {
        if ( *(_BYTE *)(v19 + 79) != *((_BYTE *)v82 + 3) )
        {
          v69 = bSpDwmCreateLogicalSurface(v88, (struct DWMSPRITE *)v19, v35, 0LL, &v79);
          v39 = v107;
          FirstLSurf = v79;
          v75 = v69;
        }
        v57 = v82;
        *(_DWORD *)(v19 + 76) = *v82;
        v58 = *v57;
        *((_DWORD *)FirstLSurf + 62) |= 0x40u;
        *((_DWORD *)FirstLSurf + 16) = v58;
      }
      if ( (v39 & 1) != 0 )
      {
        *(_DWORD *)(v19 + 80) = a9;
        if ( *((_QWORD *)v77 + 24) )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v77)
            && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v99) )
          {
            v78 = (SFMLOGICALSURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v77 + 24));
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v99) )
            {
              v68 = *((_DWORD *)v78 + 29);
              if ( (v68 & 0x20) == 0 )
              {
                *((_DWORD *)v78 + 29) = v68 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v78 + 4));
                v76 = 1;
              }
            }
            else
            {
              v72 = (SURFACE *)pProcessDfbSurfaces(v78, 1LL);
              if ( v72 )
              {
                FirstLSurf = SURFACE::GetFirstLSurf(v72);
                v79 = FirstLSurf;
              }
            }
          }
          v39 = v107;
        }
      }
      if ( v75 )
      {
        v34 = v96;
        if ( v96 )
        {
          v66 = v96->y - *(_DWORD *)(v19 + 60);
          v67 = v96->x - *(_DWORD *)(v19 + 56);
          *(_DWORD *)(v19 + 56) = v96->x;
          *(_DWORD *)(v19 + 64) += v67;
          *(_DWORD *)(v19 + 68) += v66;
          *(_DWORD *)(v19 + 60) += v66;
        }
        if ( (*((_DWORD *)FirstLSurf + 64) & 1) != 0 )
        {
          if ( v87 && *((_QWORD *)FirstLSurf + 24) )
            vSpUpdateDirtyRgn((struct DWMSPRITE *)v19, FirstLSurf, v97, v87, &v81, a15);
        }
        else if ( (v39 & 0x2000000) != 0 )
        {
          if ( v34 && v89 )
          {
            updated = bSpDwmUpdateDragRectShape(v88, (struct DWMSPRITE *)v19, FirstLSurf, v34, v89, &v81, &v79);
            FirstLSurf = v79;
            v75 = updated;
          }
        }
        else if ( v98 && v89 )
        {
          DCOBJ::DCOBJ((DCOBJ *)v103, v97);
          v75 = 0;
          if ( !v103[0] )
          {
            v43 = 0;
            goto LABEL_53;
          }
          if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v103) )
          {
            v60 = *(_QWORD *)(v59 + 512);
            y = v98->y;
            v62 = (struct _RECTL *)&v105;
            v101.left = v98->x;
            v101.right = v89->cx + v101.left;
            v63 = y + v89->cy;
            v101.top = y;
            v101.bottom = v63;
            if ( !v87 )
              v62 = 0LL;
            v64 = bSpDwmUpdateSpriteShape(
                    v88,
                    (struct DWMSPRITE *)v19,
                    FirstLSurf,
                    (struct _SURFOBJ *)(v60 + 24),
                    &v101,
                    *(struct PALETTE **)(v60 + 128),
                    &v81,
                    v62,
                    &v79);
            FirstLSurf = v79;
            v75 = v64;
          }
          XDCOBJ::vUnlockFast((XDCOBJ *)v103);
        }
        v43 = v75;
        if ( !v75 )
          goto LABEL_53;
        v44 = *((_DWORD *)FirstLSurf + 64);
        if ( (v44 & 1) != 0 && (v44 & 0x40) == 0 )
          *((_DWORD *)FirstLSurf + 64) = v44 | 0x40;
        v45 = *((_QWORD *)FirstLSurf + 24);
        if ( !v45 )
          goto LABEL_53;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v45) + 116) & 1) == 0 )
        {
          v65 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 24));
          v43 = v75;
          if ( !*(_QWORD *)(v65 + 256) )
            *((_DWORD *)FirstLSurf + 64) |= 8u;
          goto LABEL_53;
        }
      }
      v43 = v75;
LABEL_53:
      if ( *(_QWORD *)(v19 + 40) )
      {
        v46 = (_BYTE *)v94;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v106, v19 + 56);
        v46 = v106;
        v94 = (__int64)v106;
      }
      if ( v43 && !v76 && (v46 || (*((_DWORD *)FirstLSurf + 64) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 8) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v88, gpSfmState, (int)v34);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v93, &v92, &v91, 0LL, 0LL);
        v55 = *(_QWORD *)(v19 + 152);
        *(_QWORD *)(v19 + 152) = 0LL;
        v83 = *(SFMLOGICALSURFACE **)v19;
        v56 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v56, v19 + 72, v94, v93, v92, v91, *(_DWORD *)(v19 + 128), v55);
        v15 = 0LL;
      }
      if ( v37 )
      {
        ExReleasePushLockExclusiveEx(v37, 0LL);
        KeLeaveCriticalRegion();
      }
      v47 = v90;
      if ( v90 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v90 + 3);
        v48 = *((_DWORD *)v47 + 62);
        if ( (v48 & 0x80u) != 0 && (v48 & 8) != 0 && (v48 & 0x10) != 0 )
        {
          *((_DWORD *)v47 + 62) = v48 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v47, 0LL, gpSfmState);
        }
        v49 = *(_QWORD *)v47;
        if ( *(_QWORD *)v47 )
        {
          LOBYTE(v74) = 18;
          v47 = (SFMLOGICALSURFACE *)HmgRemoveObject(v49, 0LL, 0LL, 1LL, v74, 0LL);
        }
        if ( v47 )
        {
          SFMLOGICALSURFACE::DeInitialize(v47, v49, 0LL);
          FreeObject(v47, 18LL);
          EtwLogicalSurfDestroyEvent(v49, 0LL);
        }
      }
      v50 = v79;
      v51 = *((_QWORD *)v79 + 24);
      if ( v51 )
        v15 = *(_QWORD *)(v51 + 8);
      v52 = v81;
      v90 = *(SFMLOGICALSURFACE **)v19;
      if ( v51 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v51) + 116) & 1) != 0 )
        v52 &= ~1u;
      if ( (v52 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v50 + 64)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v50);
        v52 &= ~1u;
      }
      if ( v52 )
      {
        v70 = (void *)UserReferenceDwmApiPort();
        DwmAsyncDirtySprite(v70, v15);
      }
      if ( v50 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v50 + 264, 0LL);
      }
      *((_DWORD *)v50 + 64) &= ~8u;
      if ( v50 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        ExReleasePushLockExclusiveEx((char *)v50 + 264, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v19 != -120 )
      {
        ExReleasePushLockExclusiveEx(v19 + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v22 = v84;
      goto LABEL_82;
    }
    if ( v40 )
    {
      if ( (*((_BYTE *)v40 + 3) & 1) == 0 )
        goto LABEL_33;
      if ( (*((_DWORD *)v35 + 64) & 1) == 0 )
      {
        v42 = (int)v83;
        goto LABEL_33;
      }
    }
    v43 = 0;
    v75 = 0;
    FirstLSurf = v35;
    v79 = v35;
    goto LABEL_53;
  }
LABEL_131:
  if ( v23 )
    v25 |= 0x200000u;
  return GdiUpdateSprite(v17, a2, a3, v102, (struct _POINTL *)v16, v18, v20, v21, a9, v24, v25, v26);
}
