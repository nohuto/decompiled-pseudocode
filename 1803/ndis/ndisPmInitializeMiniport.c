/*
 * XREFs of ndisPmInitializeMiniport @ 0x1C010FEDC
 * Callers:
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisMDeQueueWorkItem @ 0x1C00125CC (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001F014 (ndisMSetIndicatePacketHandler.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0022864 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qZD @ 0x1C0065FE0 (WPP_SF_qZD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00715E4 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072E10 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00B2ED8 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMInvokeInitialize @ 0x1C00C2F64 (ndisMInvokeInitialize.c)
 *     ndisMNotifyMachineName @ 0x1C00C9900 (ndisMNotifyMachineName.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00CAED4 (ndisMRegisterBugCheckHandler.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F5884 (ndisSelectiveSuspendInitialize.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int Flags; // esi
  unsigned __int8 SendFlags; // r12
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  PVOID v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v14; // edi
  KIRQL v15; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v17; // r14
  unsigned int v18; // esi
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  unsigned int v20; // esi
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v32; // eax
  _UNICODE_STRING *pAdapterInstanceName; // r9
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v34; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v38[12]; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v39[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+118h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+120h] [rbp+18h]
  _DWORD v43[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v44[224]; // [rsp+148h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v37 = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x240) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= 0xFFFFFDBF;
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  a1->Flags &= 0x7FCFFFDFu;
  Flags = a1->Flags;
  a1->PnPFlags &= ~0x10u;
  SendFlags = a1->SendFlags;
  ndisMDeQueueWorkItem((__int64)a1, 6, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 0, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 1, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 3, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 4, 0LL, 0LL);
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->State = NdisMiniportInitializing;
  memset(v39, 0, sizeof(v39));
  memset(v44, 0, sizeof(v44));
  v7 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  v8 = v7 | 0x20000002;
  a1->Flags = v8;
  if ( MajorNdisVersion >= 6u )
  {
    v43[1] = a1->DefaultPortSendControlState;
    v43[2] = a1->DefaultPortRcvControlState;
    v43[3] = a1->DefaultPortSendAuthorizationState;
    v43[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v43[0] = 1311104;
    LODWORD(v39[0]) = 4194689;
    if ( AllocatedResources )
      v39[1] = &AllocatedResources->List[0].PartialResourceList;
    v39[2] = a1->DeviceContext;
    v39[3] = a1->AddDeviceContext;
    v39[6] = v43;
    v39[5] = a1->NetLuid.Value;
    LODWORD(v39[4]) = a1->IfIndex;
    if ( (v8 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v10 = ndisMInvokeInitialize((__int64)a1, (__int64)v39);
  }
  else
  {
    v9 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v44;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v10 = ((__int64 (__fastcall *)(_BYTE *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
            v38,
            &v37,
            v9,
            15LL,
            a1,
            a1->ConfigurationHandle);
  }
  v14 = v10;
  if ( (unsigned __int8)byte_1C0099610 >= 4u )
  {
    LODWORD(BugCheckParameter4) = v10;
    WPP_SF_qZD(v12, v11, (__int64)a1, &a1->pAdapterInstanceName->Length, BugCheckParameter4);
  }
  if ( v14 )
  {
    a1->State = NdisMiniportHalted;
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_qD(0x30u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1, v14);
    if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
      McTemplateK0jqxqqq(
        v12,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v14,
        160,
        0);
  }
  else
  {
    if ( !a1->GeneralAttributes )
    {
      v14 = -1073741823;
      goto LABEL_55;
    }
    a1->State = NdisMiniportPaused;
    ndisMRegisterBugCheckHandler((char *)a1);
    v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    CurrentThread = KeGetCurrentThread();
    a1->PnPFlags &= 0xFFFDBFFB;
    v17 = v15;
    a1->MiniportThread = CurrentThread;
    LODWORD(CurrentThread) = a1->Flags & 0x20002040;
    a1->SendFlags = SendFlags;
    v18 = (unsigned int)CurrentThread | Flags & 0xDFFFDFFD;
    a1->LockDbg = 1705397;
    a1->Flags = v18;
    if ( MajorNdisVersion < 6u )
    {
      Interrupt = a1->Interrupt;
      if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
        v20 = v18 & 0xFFFFFFFE;
      else
        v20 = v18 | 1;
      a1->Flags = v20;
      a1->GeneralAttributes->MediaConnectState = 2 - ((v20 & 0x20000000) != 0);
      a1->GeneralAttributes->MediaDuplexState = MediaDuplexStateUnknown;
      a1->GeneralAttributes->MaxXmitLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->XmitLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->MaxRcvLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->RcvLinkSpeed = 0x40000000LL;
    }
    LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
    if ( (LinkStateIndicationFlags & 8) == 0 )
      a1->MiniportMediaConnectState = a1->GeneralAttributes->MediaConnectState;
    if ( (LinkStateIndicationFlags & 0x10) == 0 )
    {
      GeneralAttributes = a1->GeneralAttributes;
      a1->MiniportRcvLinkSpeed = GeneralAttributes->RcvLinkSpeed;
      a1->MiniportXmitLinkSpeed = GeneralAttributes->XmitLinkSpeed;
      a1->MiniportMediaDuplexState = GeneralAttributes->MediaDuplexState;
      a1->MiniportAutoNegotiationFlags = GeneralAttributes->AutoNegotiationFlags;
    }
    if ( (LinkStateIndicationFlags & 1) == 0 )
    {
      MediaConnectState = a1->GeneralAttributes->MediaConnectState;
      v24 = a1->Flags;
      a1->MediaConnectState = MediaConnectState;
      if ( MediaConnectState == MediaConnectStateConnected )
        v25 = v24 | 0x20000000;
      else
        v25 = v24 & 0xDFFFFFFF;
      a1->Flags = v25;
    }
    if ( (LinkStateIndicationFlags & 2) == 0 )
    {
      v26 = a1->GeneralAttributes;
      a1->RcvLinkSpeed = v26->RcvLinkSpeed;
      a1->XmitLinkSpeed = v26->XmitLinkSpeed;
    }
    if ( (LinkStateIndicationFlags & 4) == 0 )
      a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
    v27 = (unsigned __int8)ndisIfSetInterfaceState((__int64)a1, 0, v17);
    if ( (a1->Flags & 0x20000000) != 0 )
      ndisMSetIndicatePacketHandler((__int64)a1);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x31u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1);
    ndisSetWakeUpTimer((__int64)a1);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v17);
    ndisMDoOidRequest(a1, v28, v29, v30);
    ndisMNotifyMachineName((__int64)a1);
    if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x32u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1);
    if ( v27 && ndisMReferenceIfBlock((__int64)a1, 0xBu) )
    {
      IfBlock = a1->IfBlock;
      ifOperStatusFlags = 0;
      v41 = 786816LL;
      HIDWORD(v41) = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v41;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, MPIFREF_PMINIT);
    }
    ndisUpdatePMCurrentCapabilities((__int64)a1);
    v14 = 0;
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  }
  if ( v14 )
  {
LABEL_55:
    ndisMDeregisterBugCheckHandler((__int64)a1);
    if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
    {
      pAdapterInstanceName = a1->pAdapterInstanceName;
      if ( a1->Interrupt )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
      }
      if ( a1->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
      }
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        pAdapterInstanceName,
        "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
    v32 = a1->Flags;
    a1->PnPFlags |= 0x4000u;
    a1->Flags = v32 & 0x7FFFFFFE | 0x80000000;
    goto LABEL_70;
  }
  ndisLogMiniportEvent((__int64)a1, 0x37u);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1->SelectiveSuspend )
    {
      ndisSelectiveSuspendClearStop((__int64)a1, 9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendStop(a1, 7);
    }
  }
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_70:
  v34 = a1->GeneralAttributes;
  if ( v34 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v34, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x33u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1, v14);
  return v14;
}
