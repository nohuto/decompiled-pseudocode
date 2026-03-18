/*
 * XREFs of PopSetupAudioEventNotification @ 0x1405A864C
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14045BC80 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange((int)&v1, (int)&WNF_SEB_AUDIO_ACTIVITY, 1, 0, (__int64)PopWnfAudioCallback, 0LL);
}
