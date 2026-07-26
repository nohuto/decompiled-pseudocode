/*
 * XREFs of ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisFDevicePnPEventNotify @ 0x1C0012570 (NdisFDevicePnPEventNotify.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001D338 (ndisGetLowerFilterWithPnpRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C006FBE0 (ndisSetBusySync.c)
 *     ndisFInvokeDevicePnPEventNotify @ 0x1C00A7DE0 (ndisFInvokeDevicePnPEventNotify.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00B88BC (ndisMInvokeDevicePnPEventNotifyHandler.c)
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
  else if ( (v3->Flags & 0x80u) == 0 )
  {
    if ( v3->SelectiveSuspend )
      ndisSetBusySync(v3, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(v3, v2);
    if ( v3->SelectiveSuspend )
      ndisClearBusy((__int64)v3, 1, 37);
  }
}
