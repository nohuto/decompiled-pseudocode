/*
 * XREFs of KsepLogError @ 0x14020848C
 * Callers:
 *     KsepShimDbChanged @ 0x14015689C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404B3A9C (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14059873C (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140599938 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x14059D610 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1406AFC00 (KseUnregisterShim.c)
 *     KseClearPCIDBitsInitialize @ 0x1407F6210 (KseClearPCIDBitsInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1407F7210 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x1407FA3CC (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x1407FADFC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14006D98C (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
