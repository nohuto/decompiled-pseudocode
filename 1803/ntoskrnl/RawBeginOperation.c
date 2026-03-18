/*
 * XREFs of RawBeginOperation @ 0x140006624
 * Callers:
 *     RawQueryInformation @ 0x1404944B0 (RawQueryInformation.c)
 *     RawQueryFsVolumeInfo @ 0x140494580 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x140494AB4 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x1405E64CC (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140780D80 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140780E00 (RawQueryFsSizeInfo.c)
 *     RawSetInformation @ 0x14078108C (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
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
