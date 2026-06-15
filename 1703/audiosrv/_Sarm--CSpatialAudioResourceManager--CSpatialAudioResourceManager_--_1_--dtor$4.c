/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x18005BA2E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>(*(_QWORD *)(a2 + 80) + 192LL);
}
