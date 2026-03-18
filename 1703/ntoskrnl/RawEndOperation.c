/*
 * XREFs of RawEndOperation @ 0x140005378
 * Callers:
 *     RawCompletionRoutine @ 0x1400052E0 (RawCompletionRoutine.c)
 *     RawQueryFsVolumeInfo @ 0x140421710 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x140421BE8 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x140575564 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1406E50A4 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1406E5124 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1406E53B0 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406E5454 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
