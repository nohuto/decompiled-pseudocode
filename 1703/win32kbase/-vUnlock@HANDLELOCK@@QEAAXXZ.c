/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0
 * Callers:
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgLockEx @ 0x1C00325B0 (HmgLockEx.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgReplaceObject @ 0x1C003EC10 (HmgReplaceObject.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     GreSetSolidBrushLight @ 0x1C0077340 (GreSetSolidBrushLight.c)
 *     HmgLockAndModifyHandleType @ 0x1C0078300 (HmgLockAndModifyHandleType.c)
 *     HmgLockAllOwners @ 0x1C007B9E0 (HmgLockAllOwners.c)
 *     HmgMarkLazyDelete @ 0x1C007C340 (HmgMarkLazyDelete.c)
 *     HmgMarkDeletable @ 0x1C007E370 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C0083340 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0083B50 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0083CAC (HmgShareLockIgnoreStockBit.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00A0158 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0033780 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rax
  unsigned int v5; // r9d
  signed int v6; // edx
  struct OBJECT *EntryObject; // rax
  unsigned int v8; // esi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  signed int v11; // ecx
  __int64 v12; // rdx

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    goto LABEL_15;
  if ( v3 >= v5 )
  {
    v6 = ((v3 - v5) >> 16) + 1;
    if ( (v3 - v5) >> 16 != -2 )
      goto LABEL_4;
LABEL_15:
    EntryObject = 0LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_4:
  if ( v6 )
    v3 = v3 - (v6 << 16) - v5 + 0x10000;
  EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v4 + 8LL * v6 + 8), v3);
LABEL_7:
  v8 = GdiHandleManager::DecodeIndex(
         v2,
         (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(v2, v8);
  v9 = *((_QWORD *)v2 + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v8 < v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
  {
    if ( v8 >= v10 )
    {
      v11 = ((v8 - v10) >> 16) + 1;
      if ( (v8 - v10) >> 16 == -2 )
        goto LABEL_13;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
    if ( v11 )
      v8 = v8 - (v11 << 16) - v10 + 0x10000;
    *(_DWORD *)(*(_QWORD *)v12 + 24LL * v8 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8)) + 16LL * (unsigned __int8)v8,
      0LL);
    KeLeaveCriticalRegion();
  }
LABEL_13:
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
