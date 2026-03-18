/*
 * XREFs of KsepLogInfo @ 0x140161AC4
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405FB58C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407453B0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14074573C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140745B44 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1408A54DC (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1408A59C0 (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140161AF4 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
