/*
 * XREFs of ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00D59F4
 * Callers:
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00D5A94 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00D5A3C (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00D5B24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::EnsureConnected(DispBroker::DispBrokerClient *this)
{
  int ActiveConsoleId; // ebx

  if ( DispBroker::DispBrokerClient::IsValid(this) )
    return 0LL;
  DispBroker::DispBrokerClientReference::Assign((HANDLE **)this, 0LL);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( ActiveConsoleId == (unsigned int)PsGetCurrentProcessSessionId() )
    wil_details_FeaturePropertyCache_ReportUsageToService();
  return 3221225659LL;
}
