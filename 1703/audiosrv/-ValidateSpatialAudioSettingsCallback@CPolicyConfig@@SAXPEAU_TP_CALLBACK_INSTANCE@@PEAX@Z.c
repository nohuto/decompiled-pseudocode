/*
 * XREFs of ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18004B870
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18009F330 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::ValidateSpatialAudioSettingsCallback(PTP_CALLBACK_INSTANCE Instance, PVOID Context)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CSpatialAudioTech::s_atmosLock, (__int64)&lpCriticalSection);
  if ( CSpatialAudioTech::s_spAtmosCheck )
    AtmosCheck::PerformLicenseCheck(CSpatialAudioTech::s_spAtmosCheck, 0);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Context + 16LL))(Context);
}
