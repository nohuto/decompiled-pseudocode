/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x18005B634
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$13 @ 0x180039428 (_CAudioStream--_CAudioStream_--_1_--dtor$13.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$13 @ 0x180039542 (_CAudioStream--CAudioStream_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
