/*
 * XREFs of NdisResetEvent @ 0x1C0008CE0
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00EECC0 (ndisWdfNotifySystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
