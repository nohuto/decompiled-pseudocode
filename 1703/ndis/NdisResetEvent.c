/*
 * XREFs of NdisResetEvent @ 0x1C00107E0
 * Callers:
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C0104E6C (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
