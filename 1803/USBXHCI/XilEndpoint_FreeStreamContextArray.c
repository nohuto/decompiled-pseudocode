/*
 * XREFs of XilEndpoint_FreeStreamContextArray @ 0x1C0010534
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C00111D8 (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00116F0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0011900 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0011E30 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00106FC (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 */

void __fastcall XilEndpoint_FreeStreamContextArray(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  _DWORD *v4; // rdx

  v2 = *a1 + 1312LL;
  v3 = *(_QWORD *)(*(_QWORD *)*a1 + 120LL);
  if ( *(_BYTE *)(*a1 + 1336LL) )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        (__int64)"Code Path Requires Passive Level",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        650);
    if ( a1[5] )
    {
      XilEndpoint_SendRequestToFreeSecureStreamContextArray(v2);
      a1[5] = 0LL;
    }
  }
  v4 = (_DWORD *)a1[4];
  if ( v4 )
  {
    CommonBuffer_ReleaseBuffer(v3, v4);
    a1[4] = 0LL;
  }
}
