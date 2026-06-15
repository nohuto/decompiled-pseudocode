/*
 * XREFs of ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800BF580
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800BF2D0 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::ValidateSpatialAudioSettingsCallback(PTP_CALLBACK_INSTANCE Instance, PVOID Context)
{
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( CSpatialAudioTech::s_spAtmosCheck )
    AtmosCheck::PerformLicenseCheck(CSpatialAudioTech::s_spAtmosCheck, 0);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Context + 16LL))(Context);
}
