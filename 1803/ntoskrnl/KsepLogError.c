/*
 * XREFs of KsepLogError @ 0x14024D344
 * Callers:
 *     KsepShimDbChanged @ 0x140170554 (KsepShimDbChanged.c)
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405FB58C (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1407453B0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14074573C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140745B44 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x1408A554C (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x1408A59C0 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140161AF4 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
