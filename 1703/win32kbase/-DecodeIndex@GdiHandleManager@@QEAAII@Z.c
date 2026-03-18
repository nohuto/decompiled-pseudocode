/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280
 * Callers:
 *     GreSetupDCAttributes @ 0x1C002BFCC (GreSetupDCAttributes.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0031144 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     HmgLockEx @ 0x1C00325B0 (HmgLockEx.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0032E3C (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C003338C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EngUnlockSurface @ 0x1C0036F00 (EngUnlockSurface.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     HmgQueryLock @ 0x1C00422D8 (HmgQueryLock.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     HmgModifyHandleType @ 0x1C0078370 (HmgModifyHandleType.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     HmgLockAllOwners @ 0x1C007B9E0 (HmgLockAllOwners.c)
 *     HmgMarkLazyDelete @ 0x1C007C340 (HmgMarkLazyDelete.c)
 *     HmgPrefetchAllObjt @ 0x1C007C440 (HmgPrefetchAllObjt.c)
 *     HmgSetLock @ 0x1C007E994 (HmgSetLock.c)
 *     HmgValidHandle @ 0x1C007FB90 (HmgValidHandle.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0083CAC (HmgShareLockIgnoreStockBit.c)
 *     HmgReferenceCheckLock @ 0x1C0084130 (HmgReferenceCheckLock.c)
 *     MultiUserCleanupDCs @ 0x1C0088B3C (MultiUserCleanupDCs.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0088BE4 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgQueryAltLock @ 0x1C008C2B0 (HmgQueryAltLock.c)
 *     NtGdiGetEntry @ 0x1C008D090 (NtGdiGetEntry.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0090C98 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi

  v2 = a2;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)this <= 0x10000u )
      return (unsigned __int16)a2;
    v4 = (unsigned __int16)a2;
    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2) )
      return v4;
  }
  return v2;
}
