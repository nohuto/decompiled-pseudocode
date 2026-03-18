/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0026880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00271A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     EngUnlockSurface @ 0x1C0028470 (EngUnlockSurface.c)
 *     HmgLock @ 0x1C0028790 (HmgLock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0029460 (HmgPentryFromPobj.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002AE8C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C002B244 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002B2E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgShareLock @ 0x1C002B3A0 (HmgShareLock.c)
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C002B7B0 (HmgNextOwned.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002B8EC (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002B970 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002BE30 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CD30 (INC_SHARE_REF_CNT.c)
 *     EngLockSurface @ 0x1C002D1A0 (EngLockSurface.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgPrefetchAllObjt @ 0x1C005B3C0 (HmgPrefetchAllObjt.c)
 *     HmgMarkLazyDelete @ 0x1C005D190 (HmgMarkLazyDelete.c)
 *     HmgLockAllOwners @ 0x1C005E6E0 (HmgLockAllOwners.c)
 *     HmgValidHandle @ 0x1C00642F0 (HmgValidHandle.c)
 *     HmgModifyHandleType @ 0x1C0065050 (HmgModifyHandleType.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00660D0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0067BCC (HmgShareLockIgnoreStockBit.c)
 *     HmgReferenceCheckLock @ 0x1C0067D00 (HmgReferenceCheckLock.c)
 *     HmgSetLock @ 0x1C00684D0 (HmgSetLock.c)
 *     HmgQueryAltLock @ 0x1C006AF70 (HmgQueryAltLock.c)
 *     NtGdiGetEntry @ 0x1C006D750 (NtGdiGetEntry.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00C406C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00C418C (MultiUserCleanupDCs.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00DAC78 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( a2 < 0x10000 )
    return a2;
  if ( *(_DWORD *)this <= 0x10000u )
    return (unsigned __int16)a2;
  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2) )
    return (unsigned __int16)v2;
  return v2;
}
