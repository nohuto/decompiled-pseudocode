/*
 * XREFs of ?IsSupported@DispBrokerClient@DispBroker@@SA_NXZ @ 0x1C00DC104
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00DBECC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00671C8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
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
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C016C8BC);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01608E8);
  }
  return 0;
}
