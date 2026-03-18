/*
 * XREFs of RawEndOperation @ 0x1400063FC
 * Callers:
 *     RawCompletionRoutine @ 0x140006360 (RawCompletionRoutine.c)
 *     RawQueryInformation @ 0x1404944B0 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x140494580 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x140494AB4 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x1405E64CC (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140780D80 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140780E00 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14078108C (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
