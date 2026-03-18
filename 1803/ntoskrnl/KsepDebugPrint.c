/*
 * XREFs of KsepDebugPrint @ 0x14024D0B4
 * Callers:
 *     KsepShimDbChanged @ 0x140170554 (KsepShimDbChanged.c)
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405FB58C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407453B0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14074573C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140745B44 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1408A54DC (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1408A554C (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1408A59C0 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a2, va, 1);
}
