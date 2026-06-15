/*
 * XREFs of McGenEventRegister @ 0x14001BF18
 * Callers:
 *     wWinMain @ 0x14001BB30 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  if ( AUDIO_EVENT_PROVIDER_Context )
    return 0LL;
  else
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
}
