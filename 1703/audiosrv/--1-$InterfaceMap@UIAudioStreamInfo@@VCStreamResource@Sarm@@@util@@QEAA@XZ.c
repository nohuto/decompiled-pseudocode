/*
 * XREFs of ??1?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAA@XZ @ 0x1800C1CEC
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x18005BA2E (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$4.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x1800C1EA3 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>(
        __int64 a1)
{
  return ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll(a1);
}
