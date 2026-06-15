/*
 * XREFs of ??1?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAA@XZ @ 0x1800BF4F0
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x1800BF361 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$5.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x1800BF732 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>(
        __int64 a1)
{
  return ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll(a1);
}
