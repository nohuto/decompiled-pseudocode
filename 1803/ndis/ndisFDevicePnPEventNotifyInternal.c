/*
 * XREFs of ndisFDevicePnPEventNotifyInternal @ 0x1C00B0CE0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisFDevicePnPEventNotify @ 0x1C000FBC0 (NdisFDevicePnPEventNotify.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001F064 (ndisGetLowerFilterWithPnpRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C0070730 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0071C00 (ndisSetBusySync.c)
 *     ndisFInvokeDevicePnPEventNotify @ 0x1C00B0DA0 (ndisFInvokeDevicePnPEventNotify.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00C3634 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter)
{
  __int64 v1; // rdx
  struct _NET_DEVICE_PNP_EVENT *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  _QWORD *LowerFilterWithPnpRef; // rax
  _QWORD *v5; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax

  v1 = Parameter[1];
  v2 = (struct _NET_DEVICE_PNP_EVENT *)Parameter[3];
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(v1 + 32);
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)v3, v1);
  v5 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( *(_QWORD *)(LowerFilterWithPnpRef[2] + 272LL) )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, v2);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, v2);
    ndisDereferenceRef(v5 + 40, 5u);
  }
  else if ( v3->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = v3->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        v3->MiniportAdapterContext,
        v2->DevicePnPEvent,
        v2->InformationBuffer,
        v2->InformationBufferLength);
  }
  else if ( (v3->Flags & 0x80u) == 0 && SLOBYTE(v3->DriverHandle->Flags) >= 0 )
  {
    if ( v3->SelectiveSuspend )
      ndisSetBusySync(v3, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(v3, v2);
    if ( v3->SelectiveSuspend )
      ndisClearBusy((__int64)v3, 1, 37);
  }
}
