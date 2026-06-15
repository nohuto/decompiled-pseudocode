/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180038A40
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x1800010E0 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection(&TheAudioEffectsWatcherFactory);
  dword_18012C110 = 10;
  qword_18012C0E8 = 0LL;
  qword_18012C0F0 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  qword_18012C0F8 = 0LL;
  xmmword_18012C100 = 0LL;
  return result;
}
