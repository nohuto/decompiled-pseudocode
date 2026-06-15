/*
 * XREFs of ??1?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAA@XZ @ 0x1800C1CF4
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18005BA1E (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x1800C1E93 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::~InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>(
        __int64 a1)
{
  return ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll(a1);
}
