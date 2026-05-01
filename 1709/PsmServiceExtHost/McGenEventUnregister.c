/*
 * XREFs of McGenEventUnregister @ 0x18004ADAC
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18004A560 (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !PDC_EVENT_PROVIDER_Context )
    return 0LL;
  result = EtwEventUnregister(PDC_EVENT_PROVIDER_Context);
  PDC_EVENT_PROVIDER_Context = 0LL;
  return result;
}
