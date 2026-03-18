/*
 * XREFs of ?IsSupported@DispBrokerClient@DispBroker@@SA_NXZ @ 0x1C00A06B4
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00A03FC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

bool DispBroker::DispBrokerClient::IsSupported(void)
{
  int CurrentProcessSessionId; // ebx

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( (unsigned int)RtlGetActiveConsoleId() == CurrentProcessSessionId )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_propertyCache,
      8119317LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C017AEDC,
      0,
      3);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01743A4,
      0,
      3);
  }
  return 0;
}
