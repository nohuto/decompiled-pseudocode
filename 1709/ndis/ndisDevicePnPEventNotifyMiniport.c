/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C00AEE3C
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisGetLowerFilterWithPnpRef @ 0x1C0003640 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     NdisFDevicePnPEventNotify @ 0x1C001FD90 (NdisFDevicePnPEventNotify.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C00713A0 (ndisSetBusySync.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00AEF48 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 *     ndisFInvokeDevicePnPEventNotify @ 0x1C00C6BE0 (ndisFInvokeDevicePnPEventNotify.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int32 a2,
        void *a3,
        unsigned int a4)
{
  _QWORD *LowerFilterWithPnpRef; // rax
  _QWORD *v9; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  struct _NET_DEVICE_PNP_EVENT NetDevicePnPEvent; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x3Cu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, (__int64)a1, a2);
  memset(&NetDevicePnPEvent, 0, sizeof(NetDevicePnPEvent));
  NetDevicePnPEvent.Header = (_NDIS_OBJECT_HEADER)3146112;
  NetDevicePnPEvent.DevicePnPEvent = a2;
  NetDevicePnPEvent.InformationBuffer = a3;
  NetDevicePnPEvent.InformationBufferLength = a4;
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)a1, 0LL);
  v9 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( *(_QWORD *)(LowerFilterWithPnpRef[2] + 272LL) )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    ndisDereferenceRef(v9 + 40);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, (_NDIS_DEVICE_PNP_EVENT)a2, a3, a4);
  }
  else if ( (a1->Flags & 0x80u) == 0 )
  {
    if ( a1->SelectiveSuspend )
      ndisSetBusySync(a1, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(a1, &NetDevicePnPEvent);
    if ( a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 37);
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x3Du, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, (__int64)a1, a2);
}
