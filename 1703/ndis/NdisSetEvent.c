/*
 * XREFs of NdisSetEvent @ 0x1C00107C0
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AB254 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
