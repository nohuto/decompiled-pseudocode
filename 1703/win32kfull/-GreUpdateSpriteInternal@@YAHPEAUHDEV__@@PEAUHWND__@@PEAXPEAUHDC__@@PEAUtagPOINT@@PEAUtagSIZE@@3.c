/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0
 * Callers:
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C024C560 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00267CC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00269F8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0026A6C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0026AE8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0026D6C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C009D6FC (DwmAsyncDirtySprite.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C009FD58 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00A0420 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00A1144 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00A12EC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C01136BC (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0116020 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024D064 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0258500 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 */

int __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  struct _BLENDFUNCTION *v15; // r13
  unsigned int v16; // ebx
  unsigned int v17; // edi
  HDEV v18; // r15
  int v19; // r14d
  int v20; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  PRTL_GENERIC_TABLE *v23; // rcx
  void *v24; // rdi
  char *v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  struct SFMLOGICALSURFACE *v30; // r13
  void *v31; // rax
  struct SFMLOGICALSURFACE *v32; // rbx
  _QWORD *v33; // rsi
  struct tagRECT v34; // xmm0
  int v35; // r8d
  bool v36; // dl
  int *v37; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // r10
  int updated; // r13d
  unsigned int v40; // eax
  __int64 v41; // rcx
  bool v42; // zf
  int v43; // eax
  int *v44; // rax
  int v45; // ecx
  __int64 v46; // rbx
  int v47; // ecx
  struct tagPOINT *v48; // r9
  int v49; // edx
  int v50; // ecx
  SURFACE *v51; // rax
  __int64 v52; // r9
  __int64 v53; // r9
  LONG y; // edx
  struct _RECTL *v55; // rax
  LONG v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  _BYTE *v59; // rax
  struct SFMLOGICALSURFACE *v60; // r8
  __int64 v61; // r13
  void *v62; // rax
  SFMLOGICALSURFACE *v63; // rsi
  int v64; // eax
  HLSURF v65; // rbx
  struct SFMLOGICALSURFACE *v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r13
  unsigned int v69; // ebx
  void *v70; // rax
  unsigned int v72; // eax
  int v73; // [rsp+20h] [rbp-E0h]
  struct SFMLOGICALSURFACE *v74; // [rsp+60h] [rbp-A0h] BYREF
  char v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+6Ch] [rbp-94h]
  int v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v78; // [rsp+74h] [rbp-8Ch] BYREF
  int *v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+84h] [rbp-7Ch]
  HDEV v82; // [rsp+88h] [rbp-78h]
  struct tagRECT *v83; // [rsp+90h] [rbp-70h]
  struct tagSIZE *v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  unsigned int v86; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v87; // [rsp+ACh] [rbp-54h] BYREF
  int v88; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v89; // [rsp+B4h] [rbp-4Ch]
  __int64 v90; // [rsp+B8h] [rbp-48h]
  struct tagPOINT *v91; // [rsp+C0h] [rbp-40h]
  HDC v92; // [rsp+C8h] [rbp-38h]
  struct tagPOINT *v93; // [rsp+D0h] [rbp-30h]
  void *v94; // [rsp+D8h] [rbp-28h]
  void *v95; // [rsp+E0h] [rbp-20h]
  HDEV v96; // [rsp+E8h] [rbp-18h] BYREF
  SFMLOGICALSURFACE *v97; // [rsp+F0h] [rbp-10h]
  HWND v98; // [rsp+F8h] [rbp-8h]
  struct _RECTL v99; // [rsp+100h] [rbp+0h] BYREF
  HDC v100; // [rsp+110h] [rbp+10h]
  _QWORD v101[2]; // [rsp+118h] [rbp+18h] BYREF
  HWND Buffer[2]; // [rsp+128h] [rbp+28h] BYREF
  struct tagRECT v103; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v104[56]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v105; // [rsp+230h] [rbp+130h]

  v15 = a10;
  v16 = a11 & 0x200000;
  v93 = a5;
  v17 = a11 & 0xFFDFFFFF;
  v18 = a1;
  v19 = 0;
  v84 = a6;
  v92 = a7;
  v91 = a8;
  v98 = a2;
  v83 = a12;
  v100 = a4;
  v94 = a3;
  v82 = a1;
  v79 = (int *)a10;
  v90 = (__int64)a13;
  v81 = 1;
  v89 = a11 & 0x200000;
  v78 = 0;
  v75 = 0;
  v105 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_146;
  v80 = 0;
  if ( !v16 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v80 = 1;
  }
  v96 = v18;
  v20 = 0;
  if ( !v16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v20 = 1;
    }
  }
  if ( v16 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
  }
  else
  {
    GreAcquireSemaphore(ghsemDwmState);
  }
  v23 = (PRTL_GENERIC_TABLE *)g_pDwmState;
  if ( g_pDwmState )
  {
    v24 = v94;
    if ( v98 )
    {
      Buffer[0] = v98;
      v24 = 0LL;
      v25 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25, 0LL);
        v23 = (PRTL_GENERIC_TABLE *)g_pDwmState;
      }
      v26 = RtlLookupElementGenericTable(*v23, Buffer);
      if ( v26 )
        v24 = (void *)v26[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v25, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v24 )
      goto LABEL_138;
    LOBYTE(v22) = 15;
    v27 = HmgShareLockCheck(v24, v22);
    v29 = v27;
    if ( !v27 )
      goto LABEL_138;
    if ( (*(_DWORD *)(v27 + 200) & 0x10) != 0 )
    {
LABEL_137:
      DEC_SHARE_REF_CNT(v29);
LABEL_138:
      v17 = v105;
      goto LABEL_139;
    }
    v81 = 0;
    v76 = 1;
    if ( v27 != -120 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v29 + 120, 0LL);
    }
    v30 = *(struct SFMLOGICALSURFACE **)(v29 + 192);
    v31 = *(void **)v29;
    v32 = v30;
    v74 = v30;
    v94 = v31;
    v97 = 0LL;
    if ( v30 && *(_QWORD *)v30 )
    {
      LOBYTE(v28) = 18;
      v97 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v30, v28);
    }
    v33 = (_QWORD *)((char *)v30 + 264);
    if ( v30 != (struct SFMLOGICALSURFACE *)-264LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v30 + 264, 0LL);
    }
    if ( v83 )
    {
      v34 = *v83;
      v83 = &v103;
      v103 = v34;
    }
    v35 = v105;
    if ( v105 == 0x2000000 )
    {
      v79 = &v77;
      v77 = 33488896;
      v105 = 570425346;
      v36 = v84 || v93;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v29, v36);
      v35 = 570425346;
    }
    if ( (v35 & 0x20000000) != 0 )
    {
      v35 &= ~0x20000000u;
      v105 = v35;
    }
    else if ( (v35 & 0x40000000) != 0 || !v35 )
    {
      v35 = *(_DWORD *)(v29 + 72);
      v37 = (int *)(v29 + 76);
      v40 = *(_DWORD *)(v29 + 80);
      v79 = (int *)(v29 + 76);
      v105 = v35;
      a9 = v40;
      goto LABEL_42;
    }
    v37 = v79;
LABEL_42:
    LODWORD(v85) = v35 & 2;
    if ( (v35 & 2) != 0 && (!v37 || (*((_BYTE *)v37 + 3) & 1) != 0 && (*((_DWORD *)v30 + 64) & 1) != 0) )
    {
      v74 = v30;
      FirstLSurf = v30;
      v76 = 0;
      updated = 0;
LABEL_98:
      if ( *(_QWORD *)(v29 + 40) )
      {
        v59 = (_BYTE *)v90;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v104, v29 + 56);
        v59 = v104;
        v90 = (__int64)v104;
      }
      if ( updated && !v75 && (v59 || (*((_DWORD *)FirstLSurf + 64) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 8) != 0 )
        {
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v82, gpSfmState);
          FirstLSurf = v74;
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v88, &v87, &v86, 0LL, 0LL);
        v60 = v74;
        v61 = *(_QWORD *)(v29 + 152);
        *(_QWORD *)(v29 + 152) = 0LL;
        v85 = *(_QWORD *)v60;
        v95 = *(void **)v29;
        v62 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v62, v29 + 72, v90, v88, v87, v86, *(_DWORD *)(v29 + 128), v61);
      }
      if ( v33 )
      {
        ExReleasePushLockExclusiveEx(v33, 0LL);
        KeLeaveCriticalRegion();
      }
      v63 = v97;
      if ( v97 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v97 + 3);
        v64 = *((_DWORD *)v63 + 62);
        if ( (v64 & 0x80u) != 0 && (v64 & 8) != 0 && (v64 & 0x10) != 0 )
        {
          *((_DWORD *)v63 + 62) = v64 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v63, 0LL, gpSfmState);
        }
        v65 = *(HLSURF *)v63;
        if ( *(_QWORD *)v63 )
        {
          LOBYTE(v73) = 18;
          v63 = (SFMLOGICALSURFACE *)HmgRemoveObject(v65, 0LL, 0LL, 1LL, v73, 0LL);
        }
        if ( v63 )
        {
          SFMLOGICALSURFACE::DeInitialize((HDEV *)v63, v65, 0);
          FreeObject(v63, 18LL);
          EtwLogicalSurfDestroyEvent(v65, 0LL);
        }
      }
      v66 = v74;
      v67 = *((_QWORD *)v74 + 24);
      if ( v67 )
        v68 = *(_QWORD *)(v67 + 8);
      else
        v68 = 0LL;
      v69 = v78;
      v95 = *(void **)v29;
      if ( v67 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v67) + 116) & 1) != 0 )
        v69 &= ~1u;
      if ( (v69 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v66 + 64)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v66);
        v69 &= ~1u;
      }
      if ( v69 )
      {
        v70 = (void *)UserReferenceDwmApiPort();
        DwmAsyncDirtySprite(v70, v68);
      }
      if ( v66 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v66 + 264, 0LL);
      }
      *((_DWORD *)v66 + 64) &= ~8u;
      if ( v66 != (struct SFMLOGICALSURFACE *)-264LL )
      {
        ExReleasePushLockExclusiveEx((char *)v66 + 264, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v29 != -120 )
      {
        ExReleasePushLockExclusiveEx(v29 + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v15 = (struct _BLENDFUNCTION *)v79;
      v19 = v76;
      goto LABEL_137;
    }
    v41 = *((_QWORD *)v30 + 24);
    if ( v41 )
    {
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v41) + 116) & 1) == 0 )
        SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v30 + 24));
      v35 = v105;
    }
    v42 = (_DWORD)v85 == 0;
    *(_DWORD *)(v29 + 72) = v35;
    if ( !v42 )
    {
      if ( *(_BYTE *)(v29 + 79) != *((_BYTE *)v79 + 3) )
      {
        v43 = bSpDwmCreateLogicalSurface(v82, (struct DWMSPRITE *)v29, v30, 0LL, &v74);
        v35 = v105;
        v32 = v74;
        v76 = v43;
      }
      v44 = v79;
      *(_DWORD *)(v29 + 76) = *v79;
      v45 = *v44;
      *((_DWORD *)v32 + 62) |= 0x40u;
      *((_DWORD *)v32 + 16) = v45;
    }
    if ( (v35 & 1) == 0 || (*(_DWORD *)(v29 + 80) = a9, !*((_QWORD *)v30 + 24)) )
    {
      FirstLSurf = v74;
LABEL_67:
      updated = v76;
      if ( !v76 )
        goto LABEL_98;
      v48 = v93;
      if ( v93 )
      {
        v49 = v93->y - *(_DWORD *)(v29 + 60);
        v50 = v93->x - *(_DWORD *)(v29 + 56);
        *(_DWORD *)(v29 + 56) = v93->x;
        *(_DWORD *)(v29 + 64) += v50;
        *(_DWORD *)(v29 + 68) += v49;
        *(_DWORD *)(v29 + 60) += v49;
      }
      if ( (*((_DWORD *)FirstLSurf + 64) & 1) != 0 )
      {
        if ( v83 && *((_QWORD *)FirstLSurf + 24) )
        {
          vSpUpdateDirtyRgn((struct DWMSPRITE *)v29, FirstLSurf, v92, v83, &v78, a15);
          goto LABEL_89;
        }
      }
      else
      {
        if ( (v35 & 0x2000000) == 0 )
        {
          if ( v91 && v84 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v101, v92);
            v76 = 0;
            updated = 0;
            if ( v101[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v101) )
            {
              v53 = *(_QWORD *)(v52 + 512);
              y = v91->y;
              v55 = (struct _RECTL *)&v103;
              v99.left = v91->x;
              v99.right = v84->cx + v99.left;
              v56 = y + v84->cy;
              v99.top = y;
              if ( !v83 )
                v55 = 0LL;
              v99.bottom = v56;
              updated = bSpDwmUpdateSpriteShape(
                          v82,
                          (struct DWMSPRITE *)v29,
                          v74,
                          (struct _SURFOBJ *)(v53 + 24),
                          &v99,
                          *(struct PALETTE **)(v53 + 128),
                          &v78,
                          v55,
                          &v74);
              v76 = updated;
            }
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v101);
            FirstLSurf = v74;
          }
          goto LABEL_90;
        }
        if ( v48 && v84 )
        {
          updated = bSpDwmUpdateDragRectShape(v82, (struct DWMSPRITE *)v29, FirstLSurf, v48, v84, &v78, &v74);
          v76 = updated;
LABEL_89:
          FirstLSurf = v74;
        }
      }
LABEL_90:
      if ( updated )
      {
        if ( (*((_DWORD *)FirstLSurf + 64) & 0x41) == 1 )
          *((_DWORD *)FirstLSurf + 64) |= 0x40u;
        v57 = *((_QWORD *)FirstLSurf + 24);
        if ( v57 )
        {
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v57) + 116) & 1) != 0 )
          {
            FirstLSurf = v74;
          }
          else
          {
            v58 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v74 + 24));
            FirstLSurf = v74;
            if ( !*(_QWORD *)(v58 + 256) )
              *((_DWORD *)v74 + 64) |= 8u;
          }
        }
      }
      goto LABEL_98;
    }
    if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v30)
      && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v96) )
    {
      v46 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v30 + 24));
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v96) )
      {
        v47 = *(_DWORD *)(v46 + 116);
        if ( (v47 & 0x20) == 0 )
        {
          *(_DWORD *)(v46 + 116) = v47 | 0x20;
          pConvertDfbSurfaceToDibPostNKAPC(*(HSURF *)(v46 + 32));
          v75 = 1;
        }
      }
      else
      {
        v51 = (SURFACE *)pProcessDfbSurfaces(v46, 1LL);
        if ( v51 )
        {
          FirstLSurf = SURFACE::GetFirstLSurf(v51);
          v74 = FirstLSurf;
          goto LABEL_66;
        }
      }
    }
    FirstLSurf = v74;
LABEL_66:
    v35 = v105;
    goto LABEL_67;
  }
LABEL_139:
  if ( v80 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v81 )
    return v19;
  v16 = v89;
  v18 = v82;
LABEL_146:
  v72 = v17 | 0x200000;
  if ( !v16 )
    v72 = v17;
  return GdiUpdateSprite(v18, v98, v94, v100, v93, v84, v92, v91, a9, v15, v72, v83);
}
