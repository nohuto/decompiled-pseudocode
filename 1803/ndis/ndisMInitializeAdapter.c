/*
 * XREFs of ndisMInitializeAdapter @ 0x1C0105A70
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00C6B08 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0012634 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     NdisWriteErrorLogEntry @ 0x1C0013D90 (NdisWriteErrorLogEntry.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0016890 (ndisSetMediaDisconnectTimer.c)
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C001915C (ndisMergeOffloadCapsAndRegistry.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001C010 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C001C11C (ndisAllocatePerProcessorSlot.c)
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     NdisInitializeTimer @ 0x1C001DEA0 (NdisInitializeTimer.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001F014 (ndisMSetIndicatePacketHandler.c)
 *     ndisFreePerProcessorSlot @ 0x1C0021C18 (ndisFreePerProcessorSlot.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0022864 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0024054 (ndisAddWoLMagicPacket.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0024C90 (ndisCheckMiniportWakeUpCapable.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024D48 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025040 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisReferenceDriver @ 0x1C0025174 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004B788 (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D9C8 (ndisDereferenceMiniportRef.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00B2ED8 (ndisMDeregisterBugCheckHandler.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00B4FD0 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisInitializeNsi @ 0x1C00B5974 (ndisInitializeNsi.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00B6CD8 (ndisIovCreateDefaultNicSwitch.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00B7AD0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00C129C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMInitializeInitMode @ 0x1C00C2B54 (ndisMInitializeInitMode.c)
 *     ndisMInvokeInitialize @ 0x1C00C2F64 (ndisMInvokeInitialize.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C3014 (ndisMSetOffloadAttributes.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C36BC (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C3820 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00C3A04 (ndisSetDeviceInterfaceState.c)
 *     ndisQueryOidList @ 0x1C00C405C (ndisQueryOidList.c)
 *     EthCreateFilter @ 0x1C00C4F10 (EthCreateFilter.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00C529C (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00C8D88 (ndisGetPciDeviceCustomProperties.c)
 *     ndisQueryPowerCapabilities @ 0x1C00C94FC (ndisQueryPowerCapabilities.c)
 *     ndisMNotifyMachineName @ 0x1C00C9900 (ndisMNotifyMachineName.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00C9E48 (ndisCreateNdisSupportedOidList.c)
 *     ndisRequestWaitWake @ 0x1C00CA3B0 (ndisRequestWaitWake.c)
 *     ndisMStartInitMode @ 0x1C00CA514 (ndisMStartInitMode.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00CAED4 (ndisMRegisterBugCheckHandler.c)
 *     DisableMagicPacketKeyword @ 0x1C00E0AB4 (DisableMagicPacketKeyword.c)
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 *     ndisLWMInitializeHandler @ 0x1C00EA17C (ndisLWMInitializeHandler.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00EA554 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00ECD24 (ndisQueryReenumerateSelfInterface.c)
 *     nullCreateFilter @ 0x1C00ED830 (nullCreateFilter.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00EE7B8 (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C00EE7F8 (ndisMRegisterPDCTaskClient.c)
 *     ndisIovTeardownVf @ 0x1C00F279C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F5884 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5D0C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4F0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C01069CC (ndisQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v8; // rbx
  char v9; // r13
  char v10; // r12
  __int64 v11; // r8
  NTSTATUS v12; // eax
  int PciDeviceCustomProperties; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 PerProcessorSlot; // rax
  unsigned int v17; // r8d
  unsigned int i; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  bool v22; // zf
  ULONG_PTR v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 *v27; // rdx
  unsigned int v28; // edx
  int v29; // eax
  KIRQL v30; // bl
  char v31; // al
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // r8d
  unsigned int v40; // edx
  char v41; // al
  int v42; // r8d
  char v43; // bl
  int v44; // edx
  unsigned int v45; // ecx
  int v46; // ecx
  unsigned __int8 v47; // al
  int v48; // eax
  int v49; // eax
  KIRQL v50; // bl
  __int64 v51; // rcx
  unsigned __int8 v52; // si
  int v53; // eax
  NTSTATUS v54; // eax
  __int64 v55; // rcx
  char v56; // bl
  NTSTATUS v57; // eax
  char v58; // bl
  __int64 v59; // rax
  __int64 v60; // rdx
  int updated; // ebx
  PVOID v62; // rax
  int OidList; // eax
  __int64 v64; // rcx
  char v65; // bl
  _BYTE *v66; // rax
  __int64 v67; // rax
  __int64 v68; // r14
  enum Ndis::ReadBindingsOptions::Flags v69; // r8d
  __int64 v70; // rdx
  __int64 v71; // r9
  PVOID v72; // rbx
  _WORD *v73; // rcx
  NTSTATUS v74; // eax
  struct _MCGEN_TRACE_CONTEXT *v75; // rcx
  unsigned int v76; // esi
  KIRQL v77; // r8
  char v78; // si
  char v79; // r14
  char v80; // bl
  char v81; // si
  __int64 v82; // rbx
  void *v83; // rcx
  unsigned int v85; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v87; // rcx
  __int64 v88; // rax
  int ReenumerateSelfInterface; // eax
  __int64 v90; // rax
  int v91; // ebx
  NDIS_STATUS v92; // eax
  __int64 v93; // rax
  __int64 v94; // rdx
  ULONG_PTR v95; // rbx
  NTSTATUS v96; // eax
  char v97; // bl
  __int64 v98; // rcx
  int v99; // eax
  void *v100; // rax
  char (__fastcall *v101)(__int64); // rax
  int v102; // ecx
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // r9
  __int64 v107; // rax
  void *v108; // rcx
  bool v109; // cf
  void *v110; // rcx
  KIRQL v111; // al
  KIRQL v112; // si
  unsigned int Arg1[2]; // [rsp+20h] [rbp-E0h]
  char v114; // [rsp+41h] [rbp-BFh]
  char v115; // [rsp+42h] [rbp-BEh]
  unsigned __int8 v116; // [rsp+43h] [rbp-BDh]
  bool v117; // [rsp+44h] [rbp-BCh]
  char v118; // [rsp+45h] [rbp-BBh]
  unsigned int v119; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v120; // [rsp+4Ch] [rbp-B4h] BYREF
  char v121; // [rsp+4Dh] [rbp-B3h]
  char v122; // [rsp+4Eh] [rbp-B2h]
  char v123; // [rsp+4Fh] [rbp-B1h]
  int v124; // [rsp+50h] [rbp-B0h]
  char v125; // [rsp+54h] [rbp-ACh]
  int Status; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v127; // [rsp+60h] [rbp-A0h]
  int v128; // [rsp+68h] [rbp-98h] BYREF
  int v129; // [rsp+6Ch] [rbp-94h]
  unsigned int v130; // [rsp+70h] [rbp-90h] BYREF
  BOOL v131; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  __int64 v134; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v137[8]; // [rsp+A8h] [rbp-58h] BYREF
  PVOID WnodeEventItem; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING Keyword; // [rsp+B8h] [rbp-48h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v141[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v142[4]; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v145[6]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v146[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v147[20]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v148[20]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v149[20]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v150[28]; // [rsp+420h] [rbp+320h] BYREF
  _DWORD v151[6]; // [rsp+500h] [rbp+400h] BYREF
  GUID v152; // [rsp+518h] [rbp+418h] BYREF
  GUID InterfaceClassGuid; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v154[72]; // [rsp+538h] [rbp+438h] BYREF
  char v155; // [rsp+580h] [rbp+480h] BYREF

  v127 = a1;
  v8 = a1;
  memset(v142, 0, sizeof(v142));
  LOBYTE(v5) = 0;
  v119 = 1;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v128 = 1;
  v9 = 0;
  v130 = 0;
  v10 = 0;
  v118 = 0;
  v152 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v122 = 0;
  v120 = 0;
  v114 = 0;
  v124 = v5;
  v125 = 0;
  v123 = 0;
  v121 = 0;
  v117 = 0;
  LOBYTE(v129) = 0;
  v115 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qZ(0xDu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v116 = *(_BYTE *)(v8 + 24);
  if ( !ndisReferenceDriver(v8, 2u) )
    goto LABEL_360;
  v118 = 1;
  DestinationString.Buffer = (wchar_t *)&v155;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3816)) < 0 )
  {
    v10 = 0;
LABEL_360:
    v79 = 0;
    goto LABEL_361;
  }
  v12 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4232));
  PciDeviceCustomProperties = v12;
  v117 = v12 >= 0 || v12 == -1073741771;
  *(_QWORD *)(a2 + 1976) = a5;
  *(_QWORD *)(a2 + 432) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 1896) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 2144) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 2152) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 640) = EthFilterDprIndicateReceive;
  *(_QWORD *)(a2 + 664) = EthFilterDprIndicateReceiveComplete;
  *(_QWORD *)(a2 + 440) = NdisMSendComplete;
  *(_QWORD *)(a2 + 752) = NdisMSendNetBufferListsComplete;
  *(_QWORD *)(a2 + 704) = NdisMTransferDataComplete;
  *(_QWORD *)(a2 + 456) = NdisMResetComplete;
  *(_QWORD *)(a2 + 688) = NdisMIndicateStatus;
  *(_QWORD *)(a2 + 696) = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)(a2 + 448) = NdisMSendResourcesAvailable;
  *(_QWORD *)(a2 + 712) = NdisMQueryInformationComplete;
  *(_QWORD *)(a2 + 720) = NdisMSetInformationComplete;
  *(_QWORD *)(a2 + 728) = ndisMWanSendCompleteInternal;
  *(_QWORD *)(a2 + 736) = NdisMWanIndicateReceive;
  *(_QWORD *)(a2 + 744) = NdisMWanIndicateReceiveComplete;
  *(_QWORD *)(a2 + 2408) = 48LL;
  *(_QWORD *)(a2 + 2592) = 48LL;
  *(_BYTE *)(a2 + 2673) = 1;
  *(_QWORD *)(a2 + 2440) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2400) = a2;
  *(_QWORD *)(a2 + 2416) = a2;
  *(_QWORD *)(a2 + 2624) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2584) = a2;
  *(_QWORD *)(a2 + 2600) = a2;
  *(_QWORD *)(a2 + 2424) = a2;
  *(_QWORD *)(a2 + 2480) = a2;
  *(_QWORD *)(a2 + 2608) = a2;
  *(_QWORD *)(a2 + 2664) = a2;
  *(_QWORD *)(a2 + 4608) = MEMORY[0xFFFFF78000000014];
  if ( v116 < 6u )
  {
    v85 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3160) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = 0;
      v80 = 0;
      v79 = 0;
      goto LABEL_362;
    }
    memset(PoolWithTag, 0, v85);
    v87 = *(_QWORD **)(a2 + 3784);
    v8 = v127;
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v87[16];
    *(_QWORD *)(a2 + 616) = v87[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4096) = v87[25];
    if ( v116 >= 4u )
    {
      if ( *(_QWORD *)(v8 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v87[28];
      *(_QWORD *)(a2 + 2168) = v87[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(v8 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v88 = *(_QWORD *)(v8 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v88;
      }
      if ( v116 >= 5u )
      {
        *(_DWORD *)(a2 + 1872) |= 0x200u;
        if ( *(_QWORD *)(v8 + 280) )
        {
          *(_DWORD *)(a2 + 120) |= 0x20000u;
          *(_QWORD *)(v8 + 552) = ndisMCoOidRequestToRequest;
          *(_QWORD *)(a2 + 2240) = a2;
        }
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a2 + 3784);
    *(_BYTE *)(a2 + 1994) = 1;
    v15 = *(_QWORD *)(v14 + 192);
    *(_QWORD *)(a2 + 2352) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 2360) = *(_QWORD *)(a2 + 4104);
    *(_QWORD *)(a2 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a2 + 2464) = v15;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 2192) = a2;
    if ( *(_QWORD *)(v8 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  if ( !*(_DWORD *)(a2 + 3892) )
  {
    *(_DWORD *)(a2 + 3892) = 1;
    *(_DWORD *)(a2 + 3904) = 1;
  }
  ndisQueryPowerCapabilities((char *)a2);
  ndisMInitializeInitMode((char *)a2);
  *(_QWORD *)(a2 + 4104) = NdisNblTrackerRegisterComponent(0, a2, *(_QWORD *)(a2 + 3880));
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  *(_QWORD *)(a2 + 3312) = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_187;
  v17 = ndisMaxNumberOfProcessors;
  v123 = 1;
  for ( i = 0; i < v17; *(_DWORD *)(v19 + *(_QWORD *)(a2 + 3312)) = 6 )
    v19 = i++ << 12;
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
  if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 124) |= 0x100000u;
    if ( !ndisDriverTrackAlloc
      || (v22 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v22) )
    {
      ndisMiniportTrackAlloc = 0LL;
    }
  }
  v20 = ndisRssV2Initialize((char *)a2);
  if ( v20 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    {
      WPP_SF_qD(0xEu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v20);
LABEL_186:
      v10 = 0;
      v80 = 0;
LABEL_188:
      v79 = 1;
      goto LABEL_362;
    }
LABEL_187:
    v10 = 0;
    v80 = 0;
    goto LABEL_188;
  }
  v9 = 0;
  if ( *(_QWORD *)(v8 + 864) )
  {
    if ( !*(_QWORD *)(a2 + 4112) )
    {
      ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3864), (PVOID *)(a2 + 4112));
      PciDeviceCustomProperties = ReenumerateSelfInterface;
      if ( ReenumerateSelfInterface >= 0 )
      {
        v90 = *(_QWORD *)(a2 + 4112);
        ConfigurationHandle = 0LL;
        v91 = (*(_DWORD *)(v90 + 40) >> 1) & 1;
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
          WPP_SF_dd(0x10u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v91, *(_DWORD *)(v90 + 40) & 1);
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = (void *)a2;
        ConfigObject.Flags = 0;
        v92 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        Status = v92;
        if ( v92 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
            WPP_SF_d(0x11u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v92);
        }
        else
        {
          Keyword.Buffer = L"PldrCapability";
          *(_DWORD *)&Keyword.Length = 1966108;
          ParameterValue.ParameterType = NdisParameterInteger;
          ParameterValue.ParameterData.IntegerData = v91;
          NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
          if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
            WPP_SF_d(0x12u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, Status);
          NdisCloseConfiguration(ConfigurationHandle);
        }
      }
      else
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_qD(0xFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, ReenumerateSelfInterface);
        PciDeviceCustomProperties = 0;
      }
    }
    v8 = v127;
  }
  *(_DWORD *)(a2 + 2256) = 2;
  memset(v141, 0, sizeof(v141));
  memset(v150, 0, sizeof(v150));
  BYTE1(v150[0]) = 2;
  if ( v116 < 6u )
  {
    v26 = (*(__int64 (__fastcall **)(_BYTE *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(v8 + 160))(
            v137,
            &v130,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( *(_DWORD *)(a2 + 3736) == 5 )
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3352));
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v151[1] = *(_DWORD *)(a2 + 3336);
    v151[2] = *(_DWORD *)(a2 + 3340);
    v151[3] = *(_DWORD *)(a2 + 3344);
    v151[4] = *(_DWORD *)(a2 + 3348);
    v21 = *(_QWORD *)(a2 + 944);
    v151[0] = 1311104;
    LODWORD(v141[0]) = 4194689;
    if ( v21 )
      v141[1] = v21 + 12;
    v22 = *(_DWORD *)(a2 + 3736) == 5;
    v141[2] = *(_QWORD *)(a2 + 1976);
    v141[3] = *(_QWORD *)(a2 + 4136);
    v141[6] = v151;
    v141[5] = *(_QWORD *)(a2 + 4048);
    LODWORD(v141[4]) = *(_DWORD *)(a2 + 4080);
    if ( v22 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3352));
      v23 = v141[7];
      if ( PciDeviceCustomProperties >= 0 )
        v23 = a2 + 3352;
      v141[7] = v23;
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x100) != 0 )
      v24 = ndisLWMInitializeHandler((NDIS_HANDLE)a2);
    else
      v24 = ndisMInvokeInitialize(a2, (__int64)v141);
    v26 = v24;
    if ( *(_DWORD *)(a2 + 3736) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x13u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v26);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
    McTemplateK0jqxqq(
      v25,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      1,
      v26);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v26 )
  {
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4088) = 2LL;
    v105 = *(_QWORD *)(a2 + 4064);
    if ( v105 && *(_DWORD *)(v105 + 1112) != 2 )
    {
      *(_DWORD *)(v105 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4664) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v119 = v26;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_357;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v78 = 1;
LABEL_143:
        v125 = v78;
        LOBYTE(v5) = 0;
        v79 = v78;
        goto LABEL_144;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v106 = *(_QWORD *)(a2 + 3880);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v106, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v106, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_357:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3880),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v27 = (__int64 *)(a2 + 16);
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 124) & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)(*(_QWORD *)(a2 + 3792) + 8LL), v27, 1, 0x1Fu);
    v25 = *(_QWORD *)(a2 + 16);
    if ( v25 )
      ndisDereferenceMiniportRef(v25, 0x1Fu);
  }
  else
  {
    *v27 = a2;
  }
  if ( v116 < 6u )
  {
    v93 = *(_QWORD *)(a2 + 112);
    if ( !v93 || *(_BYTE *)(v93 + 145) || *(_BYTE *)(v93 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2072) )
    {
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)(v127 + 312);
      *(_QWORD *)(a2 + 2064) = *(_QWORD *)(a2 + 24);
    }
    v25 = v130;
    v28 = *((_DWORD *)ndisMediumArray + v130);
    LODWORD(v150[1]) = v28;
    *(_DWORD *)(a2 + 464) = v28;
    *(_DWORD *)(a2 + 1836) = v28;
  }
  else
  {
    v28 = *(_DWORD *)(a2 + 464);
  }
  *(_DWORD *)(a2 + 2256) = 6;
  if ( v28 <= 0xD )
  {
    v29 = 8390;
    if ( _bittest(&v29, v28) )
    {
      if ( (unsigned __int8)byte_1C0099614 >= 4u )
        WPP_SF_q(0x14u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        McTemplateK0jqxq(
          v25,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          *(_DWORD *)(a2 + 464));
      goto LABEL_225;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) != 3 )
    goto LABEL_43;
  if ( v116 <= 4u )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
  {
LABEL_225:
    v119 = 32;
    goto LABEL_186;
  }
LABEL_43:
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721715;
  v31 = ndisSetWakeUpTimer(a2);
  v32 = (unsigned __int8)v129;
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  if ( v31 )
    v32 = 1;
  v129 = v32;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v30);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x15u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, PciDeviceCustomProperties);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      McTemplateK0jqxqq(
        v33,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        2,
        PciDeviceCustomProperties);
    LOBYTE(v5) = v124;
    v119 = 36;
    goto LABEL_186;
  }
  if ( v116 < 6u )
  {
    memset(v154, 0, 0x3CuLL);
    v150[27] = v154;
    *(_QWORD *)(a2 + 2720) = v150;
    if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v150, &v119, (char *)&v120, &v128)
      || (unsigned int)ndisMSetGeneralAttributes(a2, *(_QWORD *)(a2 + 2720)) )
    {
      goto LABEL_344;
    }
    v94 = *(_QWORD *)(a2 + 4120);
    if ( !v94 )
    {
      v34 = v128;
      goto LABEL_50;
    }
    v35 = ndisMSetOffloadAttributes(a2, v94 + 384, (_WORD *)(v94 + 384), 0LL, 0LL);
    v34 = v128;
  }
  else
  {
    v34 = v128;
    v35 = 0;
    if ( *(_BYTE *)(a2 + 929) )
      v34 = 0;
  }
  if ( v35 )
    goto LABEL_344;
LABEL_50:
  v36 = *(_DWORD *)(a2 + 120);
  if ( (v36 & 0x80u) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1408LL) == 2 )
    {
      v37 = ndisCheckNetworkInterfaceDataMismatch(
              (struct _NDIS_MINIPORT_BLOCK *)a2,
              *(struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)(a2 + 2720));
      v38 = NdisConvertNtStatusToNdisStatus(v37);
    }
    else
    {
      if ( (v36 & 0x100) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v38 = ndisCheckIfTypeMismatch(a2, *(_QWORD *)(a2 + 2720));
    }
    if ( v38 )
      goto LABEL_344;
    if ( v116 < 6u )
      ndisReadMiniportDefaultPortAuthStates(a2);
  }
  Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Status )
  {
LABEL_344:
    LOBYTE(v5) = v124;
    v79 = 1;
    goto LABEL_144;
  }
  ndisMNotifyMachineName(a2);
  v39 = *(_DWORD *)(a2 + 124);
  if ( (v39 & 0x8001) != 0 || (v40 = *(_DWORD *)(a2 + 124), (*(_BYTE *)(*(_QWORD *)(a2 + 3784) + 26LL) & 1) != 0) )
  {
    v40 = *(_DWORD *)(a2 + 124);
    if ( *(_DWORD *)(a2 + 464) < 0x14u )
    {
      if ( v34 )
        v40 = v39 & 0xFFFFFFFE;
      else
        v40 = v39 | 1;
      *(_DWORD *)(a2 + 124) = v40;
    }
  }
  if ( ((v40 & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0)
    && (unsigned int)(*(_DWORD *)(a2 + 1040) - 2) <= 2
    && (*(_DWORD *)(a2 + 3936) & 0xC) == 0 )
  {
    DisableMagicPacketKeyword((_DWORD *)a2);
  }
  NdisInitializeTimer((PNDIS_TIMER)(a2 + 1392), (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, (PVOID)a2);
  KeInitializeEvent((PRKEVENT)(a2 + 1304), NotificationEvent, 1u);
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0)
    && ndisEnforceDisconnectedStandby )
  {
    *(_DWORD *)(a2 + 3888) |= 0x10u;
  }
  ndisUpdatePMCurrentCapabilities(a2);
  if ( (*(_DWORD *)(a2 + 124) & 1) != 0 )
  {
    v41 = ndisCheckMiniportWakeUpCapable(a2);
    v42 = *(_DWORD *)(a2 + 3888);
    if ( (v42 & 8) == 0 )
    {
      v43 = 0;
      v44 = *(_DWORD *)(a2 + 124) | 0x20;
      v45 = *(_DWORD *)(a2 + 1108) - 2;
      *(_DWORD *)(a2 + 124) = v44;
      if ( v45 <= 2 )
      {
        *(_DWORD *)(a2 + 1132) |= 1u;
        v43 = 1;
      }
      if ( (v42 & 0x10) == 0 && v41 )
      {
        v46 = *(_DWORD *)(a2 + 1104);
        if ( v46 == 4 || (unsigned int)(v46 - 2) <= 1 )
        {
          v44 |= 0x40u;
          *(_DWORD *)(a2 + 124) = v44;
        }
        if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
        {
          *(_DWORD *)(a2 + 1124) |= 2u;
          v47 = *(_BYTE *)(a2 + 32);
          v43 = 1;
          *(_DWORD *)(a2 + 124) = v44 | 0x40;
          if ( v47 <= 6u && (v47 != 6 || *(_BYTE *)(a2 + 33) < 0x14u) )
            goto LABEL_81;
          v48 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2);
          Status = v48;
          if ( !v48 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
            goto LABEL_81;
          WPP_SF_qD(0x16u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v48);
        }
      }
      if ( !v43 )
      {
LABEL_82:
        if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
        {
          v49 = *(_DWORD *)(a2 + 124);
          if ( (v49 & 0x40) != 0 )
          {
            if ( !*(_QWORD *)(a2 + 1296) )
            {
              *(_DWORD *)(a2 + 124) = v49 & 0xFFFFFBFF;
              Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
            }
          }
          else
          {
            ndisCancelWaitWake(a2);
          }
        }
        goto LABEL_86;
      }
LABEL_81:
      ndisMiniportPMParametersUpdated(a2);
      goto LABEL_82;
    }
  }
LABEL_86:
  v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721990;
  if ( *(_DWORD *)(a2 + 480) == 2 )
    ndisSetMediaDisconnectTimer(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v50);
  *(_QWORD *)(a2 + 4512) = a2;
  *(_QWORD *)(a2 + 4520) = ndisSignalD0CompleteWorkItem;
  *(_QWORD *)(a2 + 5440) = ndisDevicePowerOn;
  *(_QWORD *)(a2 + 5448) = a2 + 5424;
  *(_QWORD *)(a2 + 5424) = 0LL;
  *(_QWORD *)(a2 + 5480) = ndisDevicePowerDown;
  *(_QWORD *)(a2 + 5488) = a2 + 5464;
  *(_QWORD *)(a2 + 5464) = 0LL;
  if ( (*(_BYTE *)(a2 + 1064) & 6) != 0 )
    ndisSelectiveSuspendInitialize((_QWORD *)a2);
  if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0 )
  {
    ndisAoAcInitialize((_QWORD *)a2);
    ndisReadModernStandyWoLMagicPacketKeywords((_DWORD *)a2);
    ndisMRegisterPDCTaskClient(a2);
    ndisMInitializePDCTaskClient((char *)a2);
  }
  if ( *(_DWORD *)(a2 + 464) )
  {
    if ( nullCreateFilter(v142) )
      goto LABEL_95;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x18u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
    v51 = 30LL;
    v119 = 30;
    v52 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      McTemplateK0jqxqq(
        30LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        6,
        30);
  }
  else
  {
    if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2720) + 88LL), *(_QWORD *)(a2 + 2720) + 126LL, v142) )
    {
LABEL_95:
      v52 = v120;
      *(_QWORD *)(v142[0] + 296LL) = a2;
      goto LABEL_96;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x17u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
    v51 = 9LL;
    v119 = 9;
    v52 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      McTemplateK0jqxqq(
        9LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        4,
        9);
  }
LABEL_96:
  if ( *(_DWORD *)(a2 + 1836) != 16 || v116 < 6u )
  {
LABEL_97:
    if ( !*(_DWORD *)(a2 + 464) )
      *(_BYTE *)(a2 + 1998) = 1;
    v53 = *(_DWORD *)(a2 + 120);
    if ( (v53 & 0x100) == 0 )
    {
      v54 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 1u);
      v56 = v54;
      if ( v54 < 0 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_qD(0x1Au, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v54);
        if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
          McTemplateK0jqxqq(
            v55,
            &InitializeAdapterFailed,
            (const GUID *)(a2 + 4032),
            a2 + 4032,
            *(_DWORD *)(a2 + 4080),
            *(_QWORD *)(a2 + 4048),
            8,
            v56);
        v119 = 31;
        v52 = 1;
LABEL_279:
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_qD(0x1Bu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v52);
        Arg1[0] = v119;
        NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)Arg1);
        LOBYTE(v5) = v124;
        v79 = 1;
LABEL_144:
        v80 = 0;
        v122 = 0;
        v10 = 0;
        v114 = 0;
        v123 = v79;
        v121 = 0;
        if ( !v119 )
          goto LABEL_145;
        goto LABEL_362;
      }
      v53 = *(_DWORD *)(a2 + 120);
      v51 = (unsigned __int8)v124;
      if ( (v53 & 0x80u) == 0 )
        v51 = 1LL;
      v124 = v51;
    }
    if ( !v52 )
    {
      v119 = 1;
      if ( (v53 & 0x100) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3856));
        v57 = IoRegisterDeviceInterface(
                *(PDEVICE_OBJECT *)(a2 + 3856),
                &InterfaceClassGuid,
                (PUNICODE_STRING)(a2 + 3816),
                (PUNICODE_STRING)(a2 + 360));
        v58 = v57;
        if ( v57 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_qD(0x1Cu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v57);
          if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
            McTemplateK0jqxqq(
              v51,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4032),
              a2 + 4032,
              *(_DWORD *)(a2 + 4080),
              *(_QWORD *)(a2 + 4048),
              10,
              v58);
          v119 = 35;
          goto LABEL_272;
        }
        v59 = *(_QWORD *)(a2 + 4640);
        v114 = 1;
        if ( v59 && (*(_BYTE *)(v59 + 8) & 3) == 3 )
        {
          v96 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3856), &v152, 0LL, (PUNICODE_STRING)(a2 + 4856));
          v97 = v96;
          if ( Status < 0 )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
              WPP_SF_qD(0x1Du, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v96);
            if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
              McTemplateK0jqxqq(
                v51,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4032),
                a2 + 4032,
                *(_DWORD *)(a2 + 4080),
                *(_QWORD *)(a2 + 4048),
                0,
                v97);
            v80 = 1;
            v10 = 0;
            LOBYTE(v5) = v124;
            v79 = 1;
            v119 = 34;
            goto LABEL_362;
          }
          v115 = 1;
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 3848) + 48LL) &= ~0x80u;
      }
      v11 = *(_QWORD *)(a2 + 2720);
      if ( v11 )
      {
        v60 = *(_QWORD *)(a2 + 4064);
        if ( !v60 )
        {
          updated = -1073741823;
          goto LABEL_295;
        }
        updated = ndisIfUpdateInterfaceOnInitialize(a2, v60, v11);
      }
      else
      {
        updated = -1073741823;
      }
      if ( !updated )
      {
        v22 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
        v121 = 1;
        if ( !v22 )
        {
          v62 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
          *(_QWORD *)(a2 + 4600) = v62;
          if ( v62 )
            memset(v62, 0, 0x20uLL);
        }
        if ( !*(_QWORD *)(a2 + 1776) )
        {
          memset(v145, 0, 0x28uLL);
          v145[2] = a2;
          OidList = ndisQueryOidList((__int64)v145);
          v65 = OidList;
          if ( OidList )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
              WPP_SF_qD(0x1Fu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, OidList);
            if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
              McTemplateK0jqxqq(
                v64,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4032),
                a2 + 4032,
                *(_DWORD *)(a2 + 4080),
                *(_QWORD *)(a2 + 4048),
                12,
                v65);
          }
        }
        v66 = *(_BYTE **)(a2 + 4120);
        if ( v66 )
        {
          if ( *v66 == 1 )
          {
            v66[1] = 1;
            v67 = *(_QWORD *)(a2 + 4120);
            *(_OWORD *)(v67 + 196) = *(_OWORD *)(v67 + 8);
            *(_OWORD *)(v67 + 212) = *(_OWORD *)(v67 + 24);
            *(_OWORD *)(v67 + 228) = *(_OWORD *)(v67 + 40);
            *(_OWORD *)(v67 + 244) = *(_OWORD *)(v67 + 56);
            *(_OWORD *)(v67 + 260) = *(_OWORD *)(v67 + 72);
            *(_OWORD *)(v67 + 276) = *(_OWORD *)(v67 + 88);
            *(_OWORD *)(v67 + 292) = *(_OWORD *)(v67 + 104);
            *(_OWORD *)(v67 + 308) = *(_OWORD *)(v67 + 120);
            *(_OWORD *)(v67 + 324) = *(_OWORD *)(v67 + 136);
            *(_OWORD *)(v67 + 340) = *(_OWORD *)(v67 + 152);
            *(_OWORD *)(v67 + 356) = *(_OWORD *)(v67 + 168);
            *(_QWORD *)(v67 + 372) = *(_QWORD *)(v67 + 184);
            *(_DWORD *)(v67 + 380) = *(_DWORD *)(v67 + 192);
            ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4120) + 196LL);
            v66 = *(_BYTE **)(a2 + 4120);
          }
          if ( v66[2] == 1 )
          {
            v66[3] = 1;
            v98 = *(_QWORD *)(a2 + 4120);
            *(_OWORD *)(v98 + 872) = *(_OWORD *)(v98 + 892);
            *(_DWORD *)(v98 + 888) = *(_DWORD *)(v98 + 908);
          }
        }
        v68 = v127;
        if ( (unsigned __int8)ndisQueueMiniportOnDriver(a2, v127) )
        {
          v122 = 1;
          ndisSetDeviceInterfaceState(a2, 1u);
          if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v69) >= 0 )
          {
            ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
            v9 = 0;
            if ( Ndis::BindState::SetBinding(
                   (Ndis::BindState *)(a2 + 5064),
                   BindingDisabled,
                   Reason_MiniportDeviceNotStarted)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v146);
              WPP_SF_Zq(0x20u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (const wchar_t *)v146[1], v146[0]);
            }
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5064), DatapathRunning, PauseReason_InitialPause)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v147);
              WPP_SF_Zq(0x21u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (const wchar_t *)v147[1], v147[0]);
            }
            if ( Ndis::BindState::SetPause(
                   (Ndis::BindState *)(a2 + 5064),
                   DatapathRunning,
                   PauseReason_RemovingMiniport)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v148);
              WPP_SF_Zq(0x22u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (const wchar_t *)v148[1], v148[0]);
            }
            if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
              && Ndis::BindState::SetBinding(
                   (Ndis::BindState *)(a2 + 5064),
                   BindingDisabled,
                   Reason_DefaultPortNotActive)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v149);
              WPP_SF_Zq(0x23u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (const wchar_t *)v149[1], v149[0]);
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
            Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
            if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0 )
            {
              ndisSetupWmiNode(
                a2,
                *(const void ***)(a2 + 3880),
                *(unsigned __int16 *)(a2 + 3832) + 2,
                (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
                &WnodeEventItem);
              v72 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v73 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                *v73 = *(_WORD *)(a2 + 3832);
                memmove(v73 + 1, *(const void **)(a2 + 3840), *(unsigned __int16 *)(a2 + 3832));
                v74 = IoWMIWriteEvent(v72);
                v76 = v74;
                if ( v74 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_qD(0x24u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v74);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
                    McTemplateK0qqq(v75, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4032), v76, 0x64Eu, 0);
                  ExFreePoolWithTag(v72, 0);
                }
              }
              v131 = (_BYTE)ndisAcOnLine == 1;
              ndisNotifyMiniports(a2, v70, &v131, v71);
            }
            *(_QWORD *)(a2 + 400) = v142[0];
            if ( v116 < 6u )
            {
              *(_QWORD *)(a2 + 624) = ndisMSendPackets;
              v99 = *(_DWORD *)(a2 + 120);
              if ( (v99 & 0x40000) != 0 )
              {
                v100 = ndisMSendPacketsXToMiniport;
              }
              else
              {
                if ( (v99 & 0x40) != 0 )
                {
                  *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
                  *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
                  v101 = ndisMDeferredSendPacketsSG;
                  if ( !*(_QWORD *)(v68 + 232) )
                    v101 = ndisMDeferredSendSG;
                  *(_QWORD *)(a2 + 632) = v101;
                  goto LABEL_138;
                }
                v100 = ndisMSendPacketsToMiniport;
              }
              *(_QWORD *)(a2 + 2040) = v100;
              *(_QWORD *)(a2 + 2032) = v100;
            }
            else
            {
              *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
              *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
            }
LABEL_138:
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
            *(_DWORD *)(a2 + 1856) = 722569;
            ndisMSetIndicatePacketHandler(a2);
            *(_QWORD *)(a2 + 520) = 0LL;
            *(_DWORD *)(a2 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v77);
            if ( ndisEnforceDisconnectedStandby )
            {
              if ( (v102 = *(_DWORD *)(a2 + 124), (v102 & 0x200000) != 0) && ndisAoAcCapable
                || (*(_DWORD *)(a2 + 2692) & 0x200) != 0 )
              {
                v103 = *(_DWORD *)(a2 + 3888);
                if ( (v103 & 0x10) == 0 )
                {
                  *(_DWORD *)(a2 + 124) = v102 & 0xFFFFFFBF;
                  *(_DWORD *)(a2 + 3888) = v103 | 0x10;
                  ndisUpdateAndIndicatePMCapabilities(a2);
                }
              }
            }
            if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0)
              && *(_DWORD *)(a2 + 1832) == 14 )
            {
              v22 = *(_BYTE *)(a2 + 1001) == 2;
              v134 = 0LL;
              InputBuffer = *(_QWORD *)(a2 + 3856);
              LODWORD(v134) = 4;
              BYTE4(v134) = 1;
              if ( !v22
                || (*(_DWORD *)(a2 + 1008) & 1) == 0
                || *(_DWORD *)(a2 + 1012) < 0x10u
                || *(_DWORD *)(a2 + 1016) < 0x4Au
                || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
                || (*(_DWORD *)(a2 + 1052) & 1) == 0
                || (v104 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v134) = 1, (_BYTE)v104 != 3) )
              {
                BYTE5(v134) = 0;
              }
              ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
            }
            v119 = 0;
            v78 = 0;
            v118 = 0;
            v117 = 0;
            goto LABEL_143;
          }
          v119 = 39;
        }
LABEL_302:
        LOBYTE(v5) = v124;
        v10 = v115;
        v80 = v114;
        v79 = 1;
        goto LABEL_362;
      }
LABEL_295:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x1Eu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, updated);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        McTemplateK0jqxqq(
          v51,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          11,
          updated);
      v119 = 32;
      goto LABEL_302;
    }
    goto LABEL_279;
  }
  v95 = a2 + 600;
  if ( nullCreateFilter((_QWORD *)(a2 + 600)) )
  {
    *(_QWORD *)(*(_QWORD *)v95 + 296LL) = a2;
    goto LABEL_97;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
    WPP_SF_q(0x19u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
  *(_QWORD *)v95 = 0LL;
  v119 = 30;
  if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
    McTemplateK0jqxqq(
      30LL,
      &InitializeAdapterFailed,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      7,
      30);
LABEL_272:
  LOBYTE(v5) = v124;
  v10 = 0;
  v79 = 1;
LABEL_361:
  v80 = 0;
LABEL_362:
  Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v11);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  if ( v121 )
  {
    *(_QWORD *)(a2 + 4088) = 2LL;
    v107 = *(_QWORD *)(a2 + 4064);
    if ( *(_DWORD *)(v107 + 1112) != 2 )
    {
      *(_DWORD *)(v107 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    v108 = *(void **)(a2 + 4600);
    if ( v108 )
    {
      ExFreePoolWithTag(v108, 0);
      *(_QWORD *)(a2 + 4600) = 0LL;
    }
  }
LABEL_145:
  if ( (_BYTE)v5 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 2u);
    LOBYTE(v5) = 0;
  }
  v81 = v80;
  if ( v80 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4176), 0);
    v81 = 0;
  }
  if ( v10 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4856), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4856));
    v80 = v114;
    *(_QWORD *)(a2 + 4864) = 0LL;
    v10 = 0;
  }
  if ( v9 )
  {
    ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
    v109 = (_BYTE)v129 != 0;
    LOBYTE(v129) = -(char)v129;
    ndisMCommonHaltMiniport(
      a2,
      (v80 != 0 ? 4 : 0) | (v81 != 0 ? 0x40 : 0) | (v109 ? 8 : 0) | ((_BYTE)v5 != 0 ? 130 : 128) | (v10 != 0 ? 0x100 : 0));
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v125 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
    {
      v110 = *(void **)(a2 + 504);
      if ( v110 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        {
          WPP_SF_q(0x25u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
          v110 = *(void **)(a2 + 504);
        }
        ndisDereferenceDmaAdapter(v110);
      }
    }
    v111 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v112 = v111;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722807;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v112);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_154;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v111);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
LABEL_154:
  if ( v122 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x26u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
    v82 = v127;
    ndisDeQueueMiniportOnDriver(a2, v127);
  }
  else
  {
    v82 = v127;
  }
  if ( v117 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v79 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v118 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x27u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
    ndisDereferenceDriver(v82, 0);
  }
  v83 = *(void **)(a2 + 2720);
  if ( v83 )
  {
    if ( v116 >= 6u )
      ExFreePoolWithTag(v83, 0);
    *(_QWORD *)(a2 + 2720) = 0LL;
  }
  if ( v123 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3312), 0x527374uLL);
    *(_QWORD *)(a2 + 3312) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x28u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v119);
  return v119;
}
