/*
 * XREFs of ndisFDevicePnPEventNotifyInternal @ 0x1C00C6B30
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisGetLowerFilterWithPnpRef @ 0x1C0003640 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     NdisFDevicePnPEventNotify @ 0x1C001FD90 (NdisFDevicePnPEventNotify.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C00713A0 (ndisSetBusySync.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00AEF48 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 *     ndisFInvokeDevicePnPEventNotify @ 0x1C00C6BE0 (ndisFInvokeDevicePnPEventNotify.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  _QWORD *LowerFilterWithPnpRef; // rax
  _QWORD *v5; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax

  v1 = Parameter[1];
  v2 = Parameter[3];
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(v1 + 32);
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)v3, v1);
  v5 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( *(_QWORD *)(LowerFilterWithPnpRef[2] + 272LL) )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, v2);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, (PNET_DEVICE_PNP_EVENT)v2);
    ndisDereferenceRef(v5 + 40);
  }
  else if ( v3->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = v3->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        v3->MiniportAdapterContext,
        *(_NDIS_DEVICE_PNP_EVENT *)(v2 + 8),
        *(void **)(v2 + 16),
        *(_DWORD *)(v2 + 24));
  }
  else if ( (v3->Flags & 0x80u) == 0 )
  {
    if ( v3->SelectiveSuspend )
      ndisSetBusySync(v3, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler((__int64)v3, v2);
    if ( v3->SelectiveSuspend )
      ndisClearBusy((__int64)v3, 1, 37);
  }
}
