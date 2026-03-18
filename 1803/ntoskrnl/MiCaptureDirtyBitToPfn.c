/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140124940
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1401830BC (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
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
    {
      result = MiCapturePageFileInfoInline(v4, 1, 0);
      v1 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v1 | 0x10;
  }
  return result;
}
