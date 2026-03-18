/*
 * XREFs of UsbDevice_GetEndpointState @ 0x1C0034B64
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019B40 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4A0 (Endpoint_OnResetEndpointResetCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0033860 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016E14 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C0041164 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 136) + 80LL) )
    XilDeviceSlot_SendQueryEndpointContextInfoRequest((_QWORD *)(*(_QWORD *)(v2 + 136) + 16LL), a1, a2, &v4, 0LL);
  else
    XilCoreDeviceSlot_QueryEndpointContextInfo(a1, a2, &v4, 0LL);
  return v4;
}
