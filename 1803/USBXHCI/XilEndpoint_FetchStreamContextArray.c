/*
 * XREFs of XilEndpoint_FetchStreamContextArray @ 0x1C0010488
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0012F60 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0013190 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1C0013C98 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C003D1D0 (ESM_NotifyingTransferRingsEndpointHalted.c)
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C003D2E0 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00107C8 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_FetchStreamContextArray(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  int SecureStreamContextArray; // eax

  v3 = 0;
  v5 = *(_QWORD *)a1 + 1312LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 610LL) )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        (__int64)"Code Path Requires Passive Level",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        904);
    SecureStreamContextArray = XilEndpoint_SendRequestToGetSecureStreamContextArray(
                                 v5,
                                 *(_QWORD *)(a1 + 40),
                                 a3,
                                 1 << (*(_DWORD *)(a1 + 12) + 1),
                                 *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( SecureStreamContextArray >= 0 )
      return 0;
    return (unsigned int)SecureStreamContextArray;
  }
  return v3;
}
