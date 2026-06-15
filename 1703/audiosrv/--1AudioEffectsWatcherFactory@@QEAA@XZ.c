/*
 * XREFs of ??1AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180048598
 * Callers:
 *     _dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__ @ 0x18005C7E0 (_dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x18007BAA8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

void __fastcall AudioEffectsWatcherFactory::~AudioEffectsWatcherFactory(AudioEffectsWatcherFactory *this)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(&qword_18012C0E8);
  DeleteCriticalSection(&TheAudioEffectsWatcherFactory);
}
