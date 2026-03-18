/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferLA @ 0x1C0030F4C
 * Callers:
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C000FC44 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x1C003FC28 (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // zf
  __int64 v3; // rcx

  v1 = a1 + 560;
  v2 = *(_BYTE *)(a1 + 609) == 0;
  v3 = a1 + 568;
  if ( v2 )
    v3 = v1;
  return XilCoreUsbDevice_GetDeviceContextBufferLA(v3);
}
