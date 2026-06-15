/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18002A77C
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x1800010F0 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&TheAudioEffectsWatcherFactory);
  qword_18018A308 = 0LL;
  xmmword_18018A310 = 0LL;
  xmmword_18018A320 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  dword_18018A330 = 10;
  return result;
}
