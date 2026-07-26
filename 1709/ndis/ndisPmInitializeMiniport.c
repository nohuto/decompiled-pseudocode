/*
 * XREFs of ndisPmInitializeMiniport @ 0x1C010DF4C
 * Callers:
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMDeQueueWorkItem @ 0x1C0001920 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     ndisSetWakeUpTimer @ 0x1C0002968 (ndisSetWakeUpTimer.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0002ACC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C00035E8 (ndisMSetIndicatePacketHandler.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qZD @ 0x1C00654C0 (WPP_SF_qZD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072594 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00AB9AC (ndisMDeregisterBugCheckHandler.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AD2A8 (ndisMRegisterBugCheckHandler.c)
 *     ndisMNotifyMachineName @ 0x1C00AD5EC (ndisMNotifyMachineName.c)
 *     ndisMInvokeInitialize @ 0x1C00C0270 (ndisMInvokeInitialize.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F2CD0 (ndisSelectiveSuspendInitialize.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int Flags; // esi
  unsigned __int8 SendFlags; // r12
  unsigned int v7; // eax
  PVOID v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v13; // edi
  KIRQL v14; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v16; // r14
  unsigned int v17; // esi
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  unsigned int v19; // esi
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v22; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v24; // rcx
  int v25; // edi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v27; // eax
  _UNICODE_STRING *pAdapterInstanceName; // r9
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v29; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v33[12]; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v34[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+118h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+120h] [rbp+18h]
  _DWORD v38[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v39[224]; // [rsp+148h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v32 = 0;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)a1);
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
  memset(v34, 0, sizeof(v34));
  memset(v39, 0, sizeof(v39));
  v7 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  a1->Flags = v7 | 0x20000002;
  if ( MajorNdisVersion >= 6u )
  {
    v38[1] = a1->DefaultPortSendControlState;
    v38[2] = a1->DefaultPortRcvControlState;
    v38[3] = a1->DefaultPortSendAuthorizationState;
    v38[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v38[0] = 1311104;
    LODWORD(v34[0]) = 4194689;
    if ( AllocatedResources )
      v34[1] = &AllocatedResources->List[0].PartialResourceList;
    v34[2] = a1->DeviceContext;
    v34[3] = a1->AddDeviceContext;
    v34[6] = v38;
    v34[5] = a1->NetLuid.Value;
    LODWORD(v34[4]) = a1->IfIndex;
    v9 = ndisMInvokeInitialize((__int64)a1, (__int64)v34);
  }
  else
  {
    v8 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v39;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v9 = ((__int64 (__fastcall *)(_BYTE *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
           v33,
           &v32,
           v8,
           15LL,
           a1,
           a1->ConfigurationHandle);
  }
  v13 = v9;
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
  {
    LODWORD(BugCheckParameter4) = v9;
    WPP_SF_qZD(v11, v10, (__int64)a1, &a1->pAdapterInstanceName->Length, BugCheckParameter4);
  }
  if ( v13 )
  {
    a1->State = NdisMiniportHalted;
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_qD(0x30u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)a1, v13);
    if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
      McTemplateK0jqxqqq(
        v11,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v13,
        148,
        0);
  }
  else
  {
    if ( !a1->GeneralAttributes )
    {
      v13 = -1073741823;
      goto LABEL_57;
    }
    a1->State = NdisMiniportPaused;
    ndisMRegisterBugCheckHandler((char *)a1);
    v14 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    CurrentThread = KeGetCurrentThread();
    a1->PnPFlags &= 0xFFFDBFFB;
    v16 = v14;
    a1->MiniportThread = CurrentThread;
    LODWORD(CurrentThread) = a1->Flags & 0x20002040;
    a1->SendFlags = SendFlags;
    v17 = (unsigned int)CurrentThread | Flags & 0xDFFFDFFD;
    a1->LockDbg = 1705385;
    a1->Flags = v17;
    if ( MajorNdisVersion < 6u )
    {
      Interrupt = a1->Interrupt;
      if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
        v19 = v17 & 0xFFFFFFFE;
      else
        v19 = v17 | 1;
      GeneralAttributes = a1->GeneralAttributes;
      a1->Flags = v19;
      if ( (v19 & 0x20000000) != 0 )
        GeneralAttributes->MediaConnectState = MediaConnectStateConnected;
      else
        GeneralAttributes->MediaConnectState = MediaConnectStateDisconnected;
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
      v22 = a1->GeneralAttributes;
      a1->MiniportRcvLinkSpeed = v22->RcvLinkSpeed;
      a1->MiniportXmitLinkSpeed = v22->XmitLinkSpeed;
      a1->MiniportMediaDuplexState = v22->MediaDuplexState;
      a1->MiniportAutoNegotiationFlags = v22->AutoNegotiationFlags;
    }
    if ( (LinkStateIndicationFlags & 1) == 0 )
    {
      MediaConnectState = a1->GeneralAttributes->MediaConnectState;
      a1->MediaConnectState = MediaConnectState;
      if ( MediaConnectState == MediaConnectStateConnected )
        a1->Flags |= 0x20000000u;
      else
        a1->Flags &= ~0x20000000u;
    }
    if ( (LinkStateIndicationFlags & 2) == 0 )
    {
      v24 = a1->GeneralAttributes;
      a1->RcvLinkSpeed = v24->RcvLinkSpeed;
      a1->XmitLinkSpeed = v24->XmitLinkSpeed;
    }
    if ( (LinkStateIndicationFlags & 4) == 0 )
      a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
    v25 = (unsigned __int8)ndisIfSetInterfaceState(a1, 0, v16);
    if ( (a1->Flags & 0x20000000) != 0 )
      ndisMSetIndicatePacketHandler((__int64)a1);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x31u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)a1);
    ndisSetWakeUpTimer((__int64)a1);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v16);
    ndisMDoOidRequest(a1);
    if ( a1->MediaType == NdisMedium802_3 )
      ndisMNotifyMachineName((__int64)a1);
    if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x32u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)a1);
    if ( v25 && ndisMReferenceIfBlock((__int64)a1, 0xBu) )
    {
      IfBlock = a1->IfBlock;
      ifOperStatusFlags = 0;
      v36 = 786816LL;
      HIDWORD(v36) = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v36;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, MPIFREF_PMINIT);
    }
    ndisUpdatePMCurrentCapabilities((__int64)a1);
    v13 = 0;
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  }
  if ( v13 )
  {
LABEL_57:
    ndisMDeregisterBugCheckHandler((__int64)a1);
    if ( !a1->TimerQueue )
    {
      if ( a1->Interrupt )
        goto LABEL_62;
      if ( !a1->InterruptEx )
      {
        v27 = a1->Flags;
        a1->PnPFlags |= 0x4000u;
        a1->Flags = v27 & 0x7FFFFFFE | 0x80000000;
        goto LABEL_72;
      }
    }
    if ( !a1->Interrupt )
    {
      pAdapterInstanceName = a1->pAdapterInstanceName;
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
LABEL_62:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
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
LABEL_72:
  v29 = a1->GeneralAttributes;
  if ( v29 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v29, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(0x33u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)a1, v13);
  return v13;
}
