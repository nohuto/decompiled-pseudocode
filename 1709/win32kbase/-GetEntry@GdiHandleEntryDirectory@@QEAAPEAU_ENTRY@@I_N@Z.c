/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690
 * Callers:
 *     HmgModifyHandleType @ 0x1C001ECE0 (HmgModifyHandleType.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0048CA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C004E4E0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C004ED70 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0051670 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00555D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C0061E84 (HmgSetLock.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 *     GreGetObjectOwner @ 0x1C0073C80 (GreGetObjectOwner.c)
 *     HmgValidHandle @ 0x1C0084E20 (HmgValidHandle.c)
 *     HmgReferenceCheckLock @ 0x1C008B390 (HmgReferenceCheckLock.c)
 *     MultiUserCleanupDCs @ 0x1C008C0D0 (MultiUserCleanupDCs.c)
 *     NtGdiGetEntry @ 0x1C0098700 (NtGdiGetEntry.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E8A0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct GdiHandleEntryTable *v5; // r9
  __int64 v6; // r10
  struct GdiHandleEntryTable *v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( !GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v8, &v9) )
    return 0LL;
  v5 = v8;
  v6 = v9;
  if ( a3 && v9 < *((_DWORD *)v8 + 5) || GdiHandleEntryTable::GetEntryObject(v8, v9) )
    return (struct _ENTRY *)(*(_QWORD *)v5 + 24 * v6);
  return (struct _ENTRY *)v3;
}
