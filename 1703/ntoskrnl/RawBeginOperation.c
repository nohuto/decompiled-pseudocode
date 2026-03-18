/*
 * XREFs of RawBeginOperation @ 0x140005430
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x140421710 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x140421BE8 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x140575564 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1406E50A4 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1406E5124 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1406E53B0 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406E5454 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 200);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return result;
}
