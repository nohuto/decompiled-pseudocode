/*
 * XREFs of ndisReferenceDriver @ 0x1C0025174
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceDriver(__int64 a1, unsigned __int8 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 392), a2, &v3);
}
