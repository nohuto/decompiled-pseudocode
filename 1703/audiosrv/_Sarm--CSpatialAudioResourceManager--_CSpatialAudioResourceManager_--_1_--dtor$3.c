/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x1800C1E93
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::~InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>(*(_QWORD *)(a2 + 64) + 112LL);
}
