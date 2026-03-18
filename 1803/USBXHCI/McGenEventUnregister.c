/*
 * XREFs of McGenEventUnregister @ 0x1C000FEA0
 * Callers:
 *     DriverCleanup @ 0x1C0057760 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !MS_USBXHCI_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBXHCI_ETW_PROVIDER_Context);
  MS_USBXHCI_ETW_PROVIDER_Context = 0LL;
  return result;
}
