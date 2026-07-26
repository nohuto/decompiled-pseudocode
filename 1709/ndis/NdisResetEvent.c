/*
 * XREFs of NdisResetEvent @ 0x1C001B140
 * Callers:
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C010DDEC (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
