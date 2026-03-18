/*
 * XREFs of RawBeginOperation @ 0x1400FA380
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x140546F40 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x140547214 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x1405DE444 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14071D550 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14071D5D0 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14071D85C (RawQueryInformation.c)
 *     RawSetInformation @ 0x14071D900 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
