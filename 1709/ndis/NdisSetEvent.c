/*
 * XREFs of NdisSetEvent @ 0x1C0012C50
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
