/*
 * XREFs of PopSetupFullScrenVideoNotification @ 0x1405A8610
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14045BC80 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupFullScrenVideoNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK,
           1,
           0,
           (__int64)PopWnfFullscreenVideoCallback,
           0LL);
}
