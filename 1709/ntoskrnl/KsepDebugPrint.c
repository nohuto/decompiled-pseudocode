/*
 * XREFs of KsepDebugPrint @ 0x14020EE64
 * Callers:
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14054439C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1405C5620 (KsepResolveApplicableShimsForDriver.c)
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 *     KsepApplyShimsToDriver @ 0x1405ECA70 (KsepApplyShimsToDriver.c)
 *     KseUnregisterShim @ 0x1406DB230 (KseUnregisterShim.c)
 *     KseClearPCIDBitsInitialize @ 0x140827180 (KseClearPCIDBitsInitialize.c)
 *     KseKasperskyInitialize @ 0x1408271F4 (KseKasperskyInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x14083EFA4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x14083F164 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x14083F4A4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x14083F6E8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x14083F758 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a2, va, 1);
}
