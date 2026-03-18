/*
 * XREFs of KsepLogInfo @ 0x14006D95C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404B3A9C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1404B45D8 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14059873C (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140599938 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x14059D610 (KseRegisterShimEx.c)
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 *     KseUnregisterShim @ 0x1406AFC00 (KseUnregisterShim.c)
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1407FA3CC (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1407FAD8C (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14006D98C (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
