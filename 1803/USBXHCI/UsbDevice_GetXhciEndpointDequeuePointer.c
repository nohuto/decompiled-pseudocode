/*
 * XREFs of UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C00326DC
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0012870 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C000F9B8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C003F8F8 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetXhciEndpointDequeuePointer(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 8LL);
  if ( *(_BYTE *)(v2 + 80) && (*(_BYTE *)(a1 + 608) && *(_DWORD *)(v3 + 444) == 2 || *(_DWORD *)(v3 + 444) == 1) )
    XilDeviceSlot_SendQueryEndpointContextInfoRequest((_QWORD *)(v2 + 16), a1, a2, 0LL, &v5);
  else
    XilCoreDeviceSlot_QueryEndpointContextInfo(a1, a2, 0LL, &v5);
  return v5;
}
