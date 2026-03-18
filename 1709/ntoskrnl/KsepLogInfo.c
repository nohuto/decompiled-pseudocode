/*
 * XREFs of KsepLogInfo @ 0x1400FA05C
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14054439C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1405C5620 (KsepResolveApplicableShimsForDriver.c)
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 *     KsepApplyShimsToDriver @ 0x1405ECA70 (KsepApplyShimsToDriver.c)
 *     KseUnregisterShim @ 0x1406DB230 (KseUnregisterShim.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x14083F4A4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x14083F6E8 (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400FA08C (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
