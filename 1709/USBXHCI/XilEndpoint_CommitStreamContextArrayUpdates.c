/*
 * XREFs of XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0017504
 * Callers:
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0017D2C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_CommitStreamContextArrayUpdates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  int v6; // eax

  v3 = 0;
  v5 = *(_QWORD *)a1 + 1312LL;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1336LL) )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        (__int64)"Code Path Requires Passive Level",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        767);
    v6 = XilEndpoint_SendRequestToSetSecureStreamContextArray(
           v5,
           *(_QWORD *)(a1 + 40),
           a3,
           1 << (*(_DWORD *)(a1 + 12) + 1),
           *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( v6 >= 0 )
      return 0;
    return (unsigned int)v6;
  }
  return v3;
}
