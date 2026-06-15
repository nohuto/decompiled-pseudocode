/*
 * XREFs of _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x1800010F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180032084 (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__TheAudioEffectsWatcherFactory__(AudioEffectsWatcherFactory *a1)
{
  AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__);
}
