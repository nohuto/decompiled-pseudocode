/*
 * XREFs of HmgShareLockCheck @ 0x1C004D5B0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001B3E0 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 *     bDfbSurfacesMigrated @ 0x1C006DA10 (bDfbSurfacesMigrated.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00A2590 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00ED7C0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheck(struct HOBJ__ *a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rbp
  _DWORD *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // r8
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v11; // rdx
  unsigned int v12; // edi
  GdiHandleManager *v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r9
  _DWORD *v18; // rdx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // r10
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // edi
  unsigned __int16 *v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+38h] [rbp-40h]

  v3 = WORD1(a1);
  v4 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v29, a1, 1, 0, 0);
  if ( v30 )
  {
    v5 = v29;
    if ( *((_BYTE *)v29 + 14) == a2 && v29[6] == v3 )
    {
      v6 = *(_DWORD *)v29 & 0xFFFFFF;
      if ( v6 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v26 = *v29;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v26,
                                      1)
               + 13) == HIWORD(v6) )
            v6 = v26;
        }
        else
        {
          v6 = *v29;
        }
      }
      v7 = *((_QWORD *)gpHandleManager + 2);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( v6 < v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      {
        if ( v6 >= v8 )
          v9 = ((v6 - v8) >> 16) + 1;
        else
          v9 = 0;
        v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
        if ( v9 )
          v6 += ((1 - v9) << 16) - v8;
        if ( v6 < *(_DWORD *)(v10 + 20) )
          v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                         + 16LL * (unsigned __int8)v6
                         + 8);
      }
      ++*(_DWORD *)(v4 + 8);
      if ( a2 == 5 )
      {
        v11 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 616);
        if ( v11 && qword_1C018DF68 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C018DF68,
            v11,
            1);
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(
          2u,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 152));
      }
    }
    v12 = *v5 & 0xFFFFFF;
    if ( v12 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v27 = *(unsigned __int16 *)v5;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v27,
                                    1)
             + 13) == HIWORD(v12) )
          v12 = v27;
      }
      else
      {
        v12 = *(unsigned __int16 *)v5;
      }
    }
    v13 = gpHandleManager;
    v14 = *((_QWORD *)gpHandleManager + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v12 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_41;
    if ( v12 >= v15 )
      v16 = ((v12 - v15) >> 16) + 1;
    else
      v16 = 0;
    v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
    if ( v16 )
      v12 += ((1 - v16) << 16) - v15;
    if ( v12 >= *(_DWORD *)(v17 + 20) )
LABEL_41:
      v18 = 0LL;
    else
      v18 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                       + 16LL * (unsigned __int8)v12
                       + 8);
    v19 = (unsigned __int16)*v18;
    v20 = v19 | (*v18 >> 8) & 0xFF0000u;
    if ( (unsigned int)v20 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v28 = (unsigned __int16)v19;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v19,
                                    1)
             + 13) == WORD1(v20) )
          v20 = v28;
      }
      else
      {
        v20 = (unsigned __int16)v19;
      }
    }
    v21 = *((_QWORD *)v13 + 2);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( (unsigned int)v20 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v20 >= v22 )
        v23 = (((unsigned int)v20 - v22) >> 16) + 1;
      else
        v23 = 0;
      v24 = *(_QWORD *)(v21 + 8LL * v23 + 8);
      if ( v23 )
        v20 = ((1 - v23) << 16) - v22 + (unsigned int)v20;
      *(_DWORD *)(*(_QWORD *)v24 + 24 * v20 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)(unsigned int)v20 >> 8))
      + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v4;
}
