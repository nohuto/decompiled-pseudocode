/*
 * XREFs of ??1AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18005FED0
 * Callers:
 *     _dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__ @ 0x18006B550 (_dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

void __fastcall AudioEffectsWatcherFactory::~AudioEffectsWatcherFactory(AudioEffectsWatcherFactory *this)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(&qword_18018A308);
  DeleteCriticalSection(&TheAudioEffectsWatcherFactory);
}
