/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140032400
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140156BE8 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
