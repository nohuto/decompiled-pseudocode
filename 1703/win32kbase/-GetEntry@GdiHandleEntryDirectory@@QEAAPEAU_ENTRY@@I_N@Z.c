/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500
 * Callers:
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgLockEx @ 0x1C00325B0 (HmgLockEx.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00332B0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     EngUnlockSurface @ 0x1C0036F00 (EngUnlockSurface.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     HmgModifyHandleType @ 0x1C0078370 (HmgModifyHandleType.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     HmgSetLock @ 0x1C007E994 (HmgSetLock.c)
 *     HmgValidHandle @ 0x1C007FB90 (HmgValidHandle.c)
 *     HmgReferenceCheckLock @ 0x1C0084130 (HmgReferenceCheckLock.c)
 *     MultiUserCleanupDCs @ 0x1C0088B3C (MultiUserCleanupDCs.c)
 *     NtGdiGetEntry @ 0x1C008D090 (NtGdiGetEntry.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // edx
  __int64 v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // r11

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v5 = 0LL;
  if ( a2 >= v4 )
  {
    v6 = ((a2 - v4) >> 16) + 1;
    if ( (a2 - v4) >> 16 != -2 )
      goto LABEL_4;
    return 0LL;
  }
  v6 = 0;
LABEL_4:
  v7 = *((_QWORD *)this + (int)v6 + 1);
  if ( v6 )
    a2 = a2 - (v6 << 16) - v4 + 0x10000;
  if ( a3 && a2 < *(_DWORD *)(v7 + 20)
    || a2 < *(_DWORD *)(v7 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) )
  {
    return (struct _ENTRY *)(*(_QWORD *)v7 + 24LL * a2);
  }
  return (struct _ENTRY *)v5;
}
