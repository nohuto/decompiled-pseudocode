/*
 * XREFs of KsepLogError @ 0x14020EFB4
 * Callers:
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x14054439C (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1405C5620 (KsepResolveApplicableShimsForDriver.c)
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 *     KsepApplyShimsToDriver @ 0x1405ECA70 (KsepApplyShimsToDriver.c)
 *     KseUnregisterShim @ 0x1406DB230 (KseUnregisterShim.c)
 *     KseClearPCIDBitsInitialize @ 0x140827180 (KseClearPCIDBitsInitialize.c)
 *     KseKasperskyInitialize @ 0x1408271F4 (KseKasperskyInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x14083EFA4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x14083F164 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x14083F4A4 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x14083F758 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400FA08C (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
