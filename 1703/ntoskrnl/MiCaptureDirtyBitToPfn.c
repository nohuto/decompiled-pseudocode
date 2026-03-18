/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140100BFC
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140164FB4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // r8
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1, 0);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
