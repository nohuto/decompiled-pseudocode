/*
 * XREFs of McGenEventRegister @ 0x14001B024
 * Callers:
 *     WinMain @ 0x14001AC3C (WinMain.c)
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
