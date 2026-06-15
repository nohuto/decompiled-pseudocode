/*
 * XREFs of McGenEventRegister @ 0x1400012A8
 * Callers:
 *     wWinMain @ 0x140001340 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  if ( Microsoft_Windows_AudioHandle )
    return 0LL;
  else
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &Microsoft_Windows_AudioHandle);
}
