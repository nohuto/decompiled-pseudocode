/*
 * XREFs of ndisPmInitializeMiniport @ 0x1C0104FCC
 * Callers:
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001D2E0 (ndisMSetIndicatePacketHandler.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C00219F4 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     ndisSetWakeUpTimer @ 0x1C0022E88 (ndisSetWakeUpTimer.c)
 *     ndisMDeQueueWorkItem @ 0x1C0025998 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0025F04 (ndisDereferenceDmaAdapter.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qZD @ 0x1C0064E7C (WPP_SF_qZD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070CC8 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInvokeInitialize @ 0x1C00AABA0 (ndisMInvokeInitialize.c)
 *     ndisMNotifyMachineName @ 0x1C00BD424 (ndisMNotifyMachineName.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00BE658 (ndisMRegisterBugCheckHandler.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00BF9A0 (ndisMDeregisterBugCheckHandler.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00E9764 (ndisSelectiveSuspendInitialize.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _TlgProvider_t *a1)
{
  _NDIS_M_DRIVER_BLOCK *ProviderMetadataPtr; // rdi
  _NDIS_SG_DMA_BLOCK *AnnotationFunc; // rcx
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int v5; // esi
  unsigned __int8 RegHandle; // r12
  unsigned int v7; // eax
  PVOID v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _CM_RESOURCE_LIST *CallbackContext; // rax
  unsigned int v13; // edi
  KIRQL v14; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v16; // r14
  unsigned int v17; // esi
  _NDIS_MINIPORT_INTERRUPT *v18; // rax
  unsigned int v19; // esi
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v20; // rax
  unsigned __int8 KeywordAll; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v22; // rcx
  _NET_IF_MEDIA_CONNECT_STATE v23; // ecx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v24; // rcx
  int v25; // edi
  _NDIS_IF_BLOCK *v26; // rcx
  unsigned int v27; // eax
  _UNICODE_STRING *EnableCallback; // r9
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

  ProviderMetadataPtr = (_NDIS_M_DRIVER_BLOCK *)a1[59].ProviderMetadataPtr;
  v32 = 0;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a1);
  AnnotationFunc = (_NDIS_SG_DMA_BLOCK *)a1[7].AnnotationFunc;
  if ( AnnotationFunc && AnnotationFunc->DmaAdapterRefCount == 1 && ((__int64)a1[1].AnnotationFunc & 0x240) != 0 )
  {
    AnnotationFunc->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1[7].AnnotationFunc);
    LODWORD(a1[1].AnnotationFunc) &= 0xFFFFFDBF;
  }
  MajorNdisVersion = ProviderMetadataPtr->MajorNdisVersion;
  LODWORD(a1[1].AnnotationFunc) &= 0x7FCFFFDFu;
  v5 = (unsigned int)a1[1].AnnotationFunc;
  HIDWORD(a1[1].AnnotationFunc) &= ~0x10u;
  RegHandle = a1[14].RegHandle;
  ndisMDeQueueWorkItem((__int64)a1, 6, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 0, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 1, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 3, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 4, 0LL, 0LL);
  a1[2].ProviderMetadataPtr = (const unsigned __int16 *)&a1[2];
  *(_QWORD *)&a1[2].LevelPlus1 = a1 + 2;
  HIDWORD(a1[60].CallbackContext) = 1;
  LODWORD(a1[35].KeywordAny) = 2;
  memset(v34, 0, sizeof(v34));
  memset(v39, 0, sizeof(v39));
  v7 = (__int64)a1[1].AnnotationFunc & 0xFFFFFFFE;
  LOBYTE(a1[1].KeywordAll) = 0;
  LODWORD(a1[1].AnnotationFunc) = v7 | 0x20000002;
  if ( MajorNdisVersion >= 6u )
  {
    v38[1] = a1[52].ProviderMetadataPtr;
    v38[2] = HIDWORD(a1[52].ProviderMetadataPtr);
    v38[3] = a1[52].KeywordAny;
    v38[4] = HIDWORD(a1[52].KeywordAny);
    CallbackContext = (_CM_RESOURCE_LIST *)a1[14].CallbackContext;
    v38[0] = 1311104;
    LODWORD(v34[0]) = 4194689;
    if ( CallbackContext )
      v34[1] = &CallbackContext->List[0].PartialResourceList;
    v34[2] = a1[30].AnnotationFunc;
    v34[3] = a1[64].EnableCallback;
    v34[6] = v38;
    v34[5] = a1[63].KeywordAny;
    LODWORD(v34[4]) = a1[63].CallbackContext;
    v9 = ndisMInvokeInitialize(a1, (__int64)v34);
  }
  else
  {
    v8 = ndisMediumArray;
    a1[42].RegHandle = (unsigned __int64)v39;
    *(_DWORD *)(a1[63].RegHandle + 1220) = 1;
    v9 = ((__int64 (__fastcall *)(_BYTE *, int *, PVOID, __int64, struct _TlgProvider_t *, void (__fastcall *)()))ProviderMetadataPtr->MiniportDriverCharacteristics.PauseHandler)(
           v33,
           &v32,
           v8,
           15LL,
           a1,
           a1[62].AnnotationFunc);
  }
  v13 = v9;
  if ( (unsigned __int8)byte_1C0092610 >= 4u )
  {
    LODWORD(BugCheckParameter4) = v9;
    WPP_SF_qZD(v11, v10, (__int64)a1, (const wchar_t *)a1[60].EnableCallback, BugCheckParameter4);
  }
  if ( v13 )
  {
    LODWORD(a1[35].KeywordAny) = 1;
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_qD(0x30u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a1, v13);
    if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
      Template_jqxqqq(
        v11,
        &MiniportInitializeHandlerFailed,
        (const GUID *)&a1[63],
        (unsigned __int64)&a1[63],
        (char)a1[63].CallbackContext,
        a1[63].KeywordAny,
        v13,
        156,
        0);
  }
  else
  {
    if ( !a1[42].RegHandle )
    {
      v13 = -1073741823;
      goto LABEL_57;
    }
    LODWORD(a1[35].KeywordAny) = 6;
    ndisMRegisterBugCheckHandler((char *)a1);
    v14 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
    CurrentThread = KeGetCurrentThread();
    HIDWORD(a1[1].AnnotationFunc) &= 0xFFFDBFFB;
    v16 = v14;
    a1[8].ProviderMetadataPtr = (const unsigned __int16 *)CurrentThread;
    LODWORD(CurrentThread) = (__int64)a1[1].AnnotationFunc & 0x20002040;
    LOBYTE(a1[14].RegHandle) = RegHandle;
    v17 = (unsigned int)CurrentThread | v5 & 0xDFFFDFFD;
    a1[29].LevelPlus1 = 1705393;
    LODWORD(a1[1].AnnotationFunc) = v17;
    if ( MajorNdisVersion < 6u )
    {
      v18 = (_NDIS_MINIPORT_INTERRUPT *)a1[1].CallbackContext;
      if ( !v18 || v18->IsrRequested || v18->SharedInterrupt )
        v19 = v17 & 0xFFFFFFFE;
      else
        v19 = v17 | 1;
      v20 = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)a1[42].RegHandle;
      LODWORD(a1[1].AnnotationFunc) = v19;
      if ( (v19 & 0x20000000) != 0 )
        v20->MediaConnectState = MediaConnectStateConnected;
      else
        v20->MediaConnectState = MediaConnectStateDisconnected;
      *(_DWORD *)(a1[42].RegHandle + 60) = 0;
      *(_QWORD *)(a1[42].RegHandle + 24) = 0x40000000LL;
      *(_QWORD *)(a1[42].RegHandle + 32) = 0x40000000LL;
      *(_QWORD *)(a1[42].RegHandle + 40) = 0x40000000LL;
      *(_QWORD *)(a1[42].RegHandle + 48) = 0x40000000LL;
    }
    KeywordAll = a1[1].KeywordAll;
    if ( (KeywordAll & 8) == 0 )
      LODWORD(a1[5].KeywordAll) = *(_DWORD *)(a1[42].RegHandle + 56);
    if ( (KeywordAll & 0x10) == 0 )
    {
      v22 = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)a1[42].RegHandle;
      a1[43].KeywordAll = v22->RcvLinkSpeed;
      a1[43].KeywordAny = v22->XmitLinkSpeed;
      HIDWORD(a1[5].KeywordAll) = v22->MediaDuplexState;
      LODWORD(a1[12].CallbackContext) = v22->AutoNegotiationFlags;
    }
    if ( (KeywordAll & 1) == 0 )
    {
      v23 = *(_DWORD *)(a1[42].RegHandle + 56);
      LODWORD(a1[7].RegHandle) = v23;
      if ( v23 == MediaConnectStateConnected )
        LODWORD(a1[1].AnnotationFunc) |= 0x20000000u;
      else
        LODWORD(a1[1].AnnotationFunc) &= ~0x20000000u;
    }
    if ( (KeywordAll & 2) == 0 )
    {
      v24 = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)a1[42].RegHandle;
      a1[12].RegHandle = v24->RcvLinkSpeed;
      a1[12].KeywordAll = v24->XmitLinkSpeed;
    }
    if ( (KeywordAll & 4) == 0 )
      LODWORD(a1[7].EnableCallback) = *(_DWORD *)(a1[42].RegHandle + 60);
    v25 = (unsigned __int8)ndisIfSetInterfaceState(a1, 0, v16);
    if ( ((__int64)a1[1].AnnotationFunc & 0x20000000) != 0 )
      ndisMSetIndicatePacketHandler((__int64)a1);
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x31u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a1);
    ndisSetWakeUpTimer((__int64)a1);
    a1[8].ProviderMetadataPtr = 0LL;
    a1[29].LevelPlus1 = 0;
    KeReleaseSpinLock(&a1[1].RegHandle, v16);
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)a1);
    if ( !LODWORD(a1[7].KeywordAny) )
      ndisMNotifyMachineName((__int64)a1);
    if ( IoWMIRegistrationControl((PDEVICE_OBJECT)a1[60].ProviderMetadataPtr, 1u) < 0
      && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
    {
      WPP_SF_q(0x32u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a1);
    }
    if ( v25 && ndisMReferenceIfBlock((__int64)a1, 0xBu) )
    {
      v26 = (_NDIS_IF_BLOCK *)a1[63].RegHandle;
      ifOperStatusFlags = 0;
      v36 = 786816LL;
      HIDWORD(v36) = v26->ifOperStatus;
      ifOperStatusFlags = v26->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v36;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, 0xBu);
    }
    ndisUpdatePMCurrentCapabilities((__int64)a1);
    v13 = 0;
    a1[24].AnnotationFunc = (void (__fastcall *)())MEMORY[0xFFFFF78000000320];
  }
  if ( v13 )
  {
LABEL_57:
    ndisMDeregisterBugCheckHandler((__int64)a1);
    if ( !a1[8].CallbackContext )
    {
      if ( a1[1].CallbackContext )
        goto LABEL_62;
      if ( !a1[12].KeywordAny )
      {
        v27 = (unsigned int)a1[1].AnnotationFunc;
        HIDWORD(a1[1].AnnotationFunc) |= 0x4000u;
        LODWORD(a1[1].AnnotationFunc) = v27 & 0x7FFFFFFE | 0x80000000;
        goto LABEL_72;
      }
    }
    if ( !a1[1].CallbackContext )
    {
      EnableCallback = (_UNICODE_STRING *)a1[60].EnableCallback;
      if ( a1[12].KeywordAny )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          EnableCallback,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, a1[12].KeywordAny, 0LL);
      }
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        EnableCallback,
        "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1[8].CallbackContext, 0LL);
    }
LABEL_62:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1[60].EnableCallback,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1[1].CallbackContext, 0LL);
  }
  ndisLogMiniportEvent((__int64)a1, 0x37u);
  if ( ((__int64)a1[16].EnableCallback & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( *(_QWORD *)&a1[70].LevelPlus1 )
    {
      ndisSelectiveSuspendClearStop((__int64)a1, 9);
      if ( *(_QWORD *)&a1[70].LevelPlus1 )
        ndisSelectiveSuspendStop((struct _NDIS_MINIPORT_BLOCK *)a1, 7);
    }
  }
  if ( a1[70].ProviderMetadataPtr )
    ndisAoAcPmInitTempRef((struct _NDIS_MINIPORT_BLOCK *)a1);
LABEL_72:
  v29 = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)a1[42].RegHandle;
  if ( v29 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v29, 0);
    a1[42].RegHandle = 0LL;
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(0x33u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a1, v13);
  return v13;
}
