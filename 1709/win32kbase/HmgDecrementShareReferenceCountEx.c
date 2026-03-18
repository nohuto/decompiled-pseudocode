/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C003FE40
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001B3E0 (GreCreatePatternBrushInternal.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001D210 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F43C (--1SURFREF@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C003D120 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0041424 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005268C (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00565B0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     bDfbSurfacesMigrated @ 0x1C006DA10 (bDfbSurfacesMigrated.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006EC4C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C006EDB4 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C006EF24 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C007DCD0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 *     EngModifySurface @ 0x1C00897E0 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C008AC80 (EngAssociateSurface.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C009F010 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00A2590 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00DB3A0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00ED7C0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F1DE0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F8284 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(struct OBJECT *a1, _DWORD *a2)
{
  unsigned __int16 *v4; // rdi
  char v5; // al
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  GdiHandleManager *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // r10
  unsigned int v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned __int16 *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  if ( a2 )
    *a2 = 0;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v24, a1, 0, 0, 1);
  if ( !v25 )
    return 0LL;
  v4 = v24;
  if ( *((_BYTE *)v24 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v21 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v21 | (v21 >> 8) & 0xFF0000);
  }
  if ( a2 )
    *a2 = (*((_BYTE *)v4 + 15) & 8) != 0;
  v5 = *((_BYTE *)v4 + 14);
  v6 = *((_DWORD *)a1 + 2);
  if ( v5 == 5 )
  {
    TrackObjectReferenceDecrement(0LL, *((_QWORD *)a1 + 77));
  }
  else if ( v5 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)a1 + 19));
  }
  --*((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)v4 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v22 = *v4;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = v22;
    }
    else
    {
      v7 = *v4;
    }
  }
  v8 = gpHandleManager;
  v9 = *((_QWORD *)gpHandleManager + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_35;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0;
  v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
  if ( v11 )
    v7 += ((1 - v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_35:
    v13 = 0LL;
  else
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
  v14 = (unsigned __int16)*v13;
  v15 = v14 | (*v13 >> 8) & 0xFF0000u;
  if ( (unsigned int)v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v23 = (unsigned __int16)v14;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == WORD1(v15) )
        v15 = v23;
    }
    else
    {
      v15 = (unsigned __int16)v14;
    }
  }
  v16 = *((_QWORD *)v8 + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( (unsigned int)v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v15 >= v17 )
      v18 = (((unsigned int)v15 - v17) >> 16) + 1;
    else
      v18 = 0;
    v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
    if ( v18 )
      v15 = ((1 - v18) << 16) - v17 + (unsigned int)v15;
    *(_DWORD *)(*(_QWORD *)v19 + 24 * v15 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)(unsigned int)v15 >> 8))
    + 16LL * (unsigned __int8)v15,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v6;
}
