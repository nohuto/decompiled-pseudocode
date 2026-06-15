/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x1800C1EA3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>(*(_QWORD *)(a2 + 64) + 192LL);
}
