/*
 * XREFs of HmgDecrementShareReferenceCount @ 0x1C002F950
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     GreMarkUndeletableDC @ 0x1C0028EA0 (GreMarkUndeletableDC.c)
 *     GreIsRendering @ 0x1C002A1F0 (GreIsRendering.c)
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     EngUnlockSurface @ 0x1C0036F00 (EngUnlockSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0038A90 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     GreSetBitmapOwner @ 0x1C00432D0 (GreSetBitmapOwner.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C005A3A8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     GreMarkDCUnreadable @ 0x1C006362C (GreMarkDCUnreadable.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0077FC8 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0078460 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C007D0A0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0080794 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     EngModifySurface @ 0x1C00827B0 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00838F0 (EngAssociateSurface.c)
 *     GreMarkDeletableDC @ 0x1C0092250 (GreMarkDeletableDC.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00E80E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F745C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCount(__int64 a1)
{
  signed int v2; // ebp
  unsigned int v3; // esi
  GdiHandleManager *v4; // rbx
  int v5; // r14d
  unsigned int v6; // eax
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  struct _ENTRY *Entry; // rbx
  char v10; // al
  unsigned int v11; // esi
  GdiHandleManager *v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  signed int v16; // edx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r10
  unsigned int v25; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  struct _ENTRY *v30; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+2Ch] [rbp-2Ch]
  char v33; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v30 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v33);
  v4 = gpHandleManager;
  v5 = 1;
  v31 = 1;
  v6 = GdiHandleManager::DecodeIndex(gpHandleManager, v3);
  if ( !GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v4 + 2), v6, 0) )
  {
    v5 = 0;
    v31 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_32;
  }
  v7 = gpHandleManager;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, v3);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v7 + 2), v8, 0);
  v30 = Entry;
  _m_prefetchw((char *)Entry + 8);
  v32 = *((_DWORD *)Entry + 2);
  if ( (*((_BYTE *)Entry + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    v5 = v31;
    if ( !v31 )
      return 0LL;
    Entry = v30;
  }
  if ( !Entry )
  {
LABEL_32:
    if ( v5 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    return 0LL;
  }
  if ( *((_BYTE *)Entry + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v25 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v25 | (v25 >> 8) & 0xFF0000);
  }
  v10 = *((_BYTE *)Entry + 14);
  v11 = *(_DWORD *)(a1 + 8);
  if ( v10 == 5 )
  {
    v26 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(a1 + 616);
    v27 = 0;
  }
  else
  {
    if ( v10 != 16 )
      goto LABEL_7;
    v26 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(a1 + 152);
    v27 = 2;
  }
  TrackObjectReferenceDecrement(v27, v26);
LABEL_7:
  --*(_DWORD *)(a1 + 8);
  v12 = gpHandleManager;
  v13 = *(_DWORD *)Entry & 0xFFFFFF;
  if ( v13 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v28 = *(unsigned __int16 *)Entry;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v13,
                                  1)
           + 13) == HIWORD(v13) )
        v13 = v28;
    }
    else
    {
      v13 = *(unsigned __int16 *)Entry;
    }
  }
  v14 = *((_QWORD *)v12 + 2);
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v13 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    goto LABEL_44;
  if ( v13 >= v15 )
  {
    v16 = ((v13 - v15) >> 16) + 1;
    if ( (v13 - v15) >> 16 == -2 )
    {
LABEL_44:
      v18 = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
  if ( v16 )
    v13 = v13 - (v16 << 16) - v15 + 0x10000;
  if ( v13 >= *(_DWORD *)(v17 + 20) )
    goto LABEL_44;
  v18 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                   + 16LL * (unsigned __int8)v13
                   + 8);
LABEL_17:
  v19 = (unsigned __int16)*v18;
  v20 = v19 | (*v18 >> 8) & 0xFF0000u;
  if ( (unsigned int)v20 >= 0x10000 )
  {
    if ( *(_DWORD *)v12 > 0x10000u )
    {
      v29 = (unsigned __int16)v19;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v12 + 2),
                                  (unsigned __int16)v19,
                                  1)
           + 13) == WORD1(v20) )
        v20 = v29;
    }
    else
    {
      v20 = (unsigned __int16)v19;
    }
    if ( (unsigned int)v20 >= 0x10000 && *(_DWORD *)v12 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v12 + 2), (unsigned __int16)v20, 1);
  }
  v21 = *((_QWORD *)v12 + 2);
  v22 = *(_DWORD *)(v21 + 2056);
  if ( (unsigned int)v20 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v20 < v22 || (v2 = (((unsigned int)v20 - v22) >> 16) + 1, ((unsigned int)v20 - v22) >> 16 != -2) )
    {
      v23 = *(_QWORD *)(v21 + 8LL * v2 + 8);
      if ( v2 )
        v20 = (_DWORD)v20 - (v2 << 16) - v22 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v23 + 24 * v20 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)(unsigned int)v20 >> 8))
      + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
  return v11;
}
