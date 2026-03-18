/*
 * XREFs of KsepDebugPrint @ 0x140208448
 * Callers:
 *     KsepShimDbChanged @ 0x14015689C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404B3A9C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1404B45D8 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14059873C (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140599938 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x14059D610 (KseRegisterShimEx.c)
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 *     KseUnregisterShim @ 0x1406AFC00 (KseUnregisterShim.c)
 *     KseClearPCIDBitsInitialize @ 0x1407F6210 (KseClearPCIDBitsInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1407F7210 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1407FA3CC (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1407FAD8C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407FADFC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(File, 0x65u, 0, a2, va, 1);
}
