/*
 * XREFs of McGenEventRegister @ 0x180038A20
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  if ( PDC_EVENT_PROVIDER_Context )
    return 0LL;
  else
    return EtwEventRegister(
             &PDC_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &PDC_EVENT_PROVIDER_Context,
             &PDC_EVENT_PROVIDER_Context);
}
