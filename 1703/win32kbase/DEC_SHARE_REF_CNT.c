/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0032240
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     bDfbSurfacesMigrated @ 0x1C0077D90 (bDfbSurfacesMigrated.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00A0220 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(int *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  signed int v4; // ebx
  __int64 v5; // rdi
  char v6; // al
  unsigned int v7; // ebp
  GdiHandleManager *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  signed int v13; // edx
  __int64 v14; // rax
  _DWORD *v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  int v25; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = *a1;
  v4 = 0;
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v25 )
    return 0LL;
  v5 = v24;
  if ( !v24 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    return 0LL;
  }
  if ( *(_BYTE *)(v24 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v23 = (unsigned __int16)*a1 | ((unsigned int)*a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v23 | (v23 >> 8) & 0xFF0000);
  }
  v6 = *(_BYTE *)(v5 + 14);
  v7 = a1[2];
  if ( v6 == 5 )
  {
    v21 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 77);
    v22 = 0;
  }
  else
  {
    if ( v6 != 16 )
      goto LABEL_6;
    v21 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 19);
    v22 = 2;
  }
  TrackObjectReferenceDecrement(v22, v21);
LABEL_6:
  --a1[2];
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v5 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 < v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    if ( v9 >= v12 )
    {
      v13 = ((v9 - v12) >> 16) + 1;
      if ( (v9 - v12) >> 16 == -2 )
        goto LABEL_28;
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)(v10 + 8LL * v13 + 8);
    if ( v13 )
      v11 = (_DWORD)v11 - (v13 << 16) - v12 + 0x10000;
    if ( (unsigned int)v11 < *(_DWORD *)(v14 + 20) )
    {
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
      goto LABEL_13;
    }
  }
LABEL_28:
  v15 = 0LL;
LABEL_13:
  v16 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(v8, v16);
  v17 = *((_QWORD *)v8 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v16 < v18 || (v4 = ((v16 - v18) >> 16) + 1, (v16 - v18) >> 16 != -2) )
    {
      v19 = *(_QWORD *)(v17 + 8LL * v4 + 8);
      if ( v4 )
        v16 = v16 - (v4 << 16) - v18 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
  return v7;
}
