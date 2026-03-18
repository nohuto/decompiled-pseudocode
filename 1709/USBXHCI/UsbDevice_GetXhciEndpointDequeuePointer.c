/*
 * XREFs of UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C0034BB8
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019B40 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016E14 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C0041164 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetXhciEndpointDequeuePointer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 136) + 80LL) )
    XilDeviceSlot_SendQueryEndpointContextInfoRequest((_QWORD *)(*(_QWORD *)(v2 + 136) + 16LL), a1, a2, 0LL, &v4);
  else
    XilCoreDeviceSlot_QueryEndpointContextInfo(a1, a2, 0LL, &v4);
  return v4;
}
