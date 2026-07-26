/*
 * XREFs of ndisMInitializeAdapter @ 0x1C00FF8D8
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00C0828 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0001988 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     ndisReferenceDriver @ 0x1C0002828 (ndisReferenceDriver.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisSetWakeUpTimer @ 0x1C0002968 (ndisSetWakeUpTimer.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0002AA0 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0002ACC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C0002D64 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisAddWoLMagicPacket @ 0x1C0002DD0 (ndisAddWoLMagicPacket.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C00035E8 (ndisMSetIndicatePacketHandler.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisSetupWmiNode @ 0x1C0005800 (ndisSetupWmiNode.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C000857C (ndisMergeOffloadCapsAndRegistry.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C0010208 (ndisAllocatePerProcessorSlot.c)
 *     NdisInitializeTimer @ 0x1C0011550 (NdisInitializeTimer.c)
 *     ndisMSetGeneralAttributes @ 0x1C00115A0 (ndisMSetGeneralAttributes.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001D764 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFreePerProcessorSlot @ 0x1C001E500 (ndisFreePerProcessorSlot.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001EADC (ndisSetMediaDisconnectTimer.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     NdisWriteErrorLogEntry @ 0x1C0023DE0 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0 (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D044 (ndisDereferenceMiniportRef.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00AB9AC (ndisMDeregisterBugCheckHandler.c)
 *     ndisQueryPowerCapabilities @ 0x1C00ACBC0 (ndisQueryPowerCapabilities.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00ACE0C (ndisGetPciDeviceCustomProperties.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00AD180 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AD2A8 (ndisMRegisterBugCheckHandler.c)
 *     ndisMStartInitMode @ 0x1C00AD2D4 (ndisMStartInitMode.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00AD338 (ndisCreateNdisSupportedOidList.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisMNotifyMachineName @ 0x1C00AD5EC (ndisMNotifyMachineName.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ADFCC (ndisMiniportPMParametersUpdated.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     EthCreateFilter @ 0x1C00AE108 (EthCreateFilter.c)
 *     ndisQueryOidList @ 0x1C00AE87C (ndisQueryOidList.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00AEDDC (ndisSetDeviceInterfaceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00AEFC8 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AF070 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AF1A4 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B0330 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     NdisWriteConfiguration @ 0x1C00B0A40 (NdisWriteConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMInitializeInitMode @ 0x1C00BFDFC (ndisMInitializeInitMode.c)
 *     ndisMInvokeInitialize @ 0x1C00C0270 (ndisMInvokeInitialize.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C0320 (ndisMSetOffloadAttributes.c)
 *     ndisInitializeNsi @ 0x1C00C8994 (ndisInitializeNsi.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     DisableMagicPacketKeyword @ 0x1C00DEE70 (DisableMagicPacketKeyword.c)
 *     ndisGetMiniportInfo @ 0x1C00E7CCC (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00E8A0C (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00EA3B4 (ndisQueryReenumerateSelfInterface.c)
 *     nullCreateFilter @ 0x1C00EAC8C (nullCreateFilter.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00EBC04 (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C00EBC44 (ndisMRegisterPDCTaskClient.c)
 *     ndisIovTeardownVf @ 0x1C00EFB7C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F2CD0 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F3158 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FF048 (ndisDeQueueMiniportOnDriver.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00FF834 (ndisQueueMiniportOnDriver.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // r13
  char v9; // si
  char v10; // r12
  unsigned __int8 v11; // bl
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int PciDeviceCustomProperties; // esi
  unsigned int v15; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 PerProcessorSlot; // rax
  unsigned int v22; // r8d
  unsigned int i; // edx
  __int64 v24; // rcx
  bool v25; // zf
  int v26; // eax
  __int64 v27; // r14
  char v28; // bl
  int ReenumerateSelfInterface; // eax
  __int64 v30; // rax
  int v31; // ebx
  NDIS_STATUS v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rax
  ULONG_PTR v37; // rax
  __int64 v38; // rax
  int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rcx
  KIRQL v42; // bl
  char v43; // al
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // ebx
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v49; // rdx
  int v50; // eax
  int v51; // eax
  int v52; // edx
  unsigned int v53; // edx
  char v54; // al
  int v55; // r8d
  int v56; // ecx
  char v57; // bl
  unsigned __int8 v58; // al
  int v59; // eax
  int v60; // eax
  KIRQL v61; // bl
  unsigned __int8 v62; // bl
  ULONG_PTR v63; // rsi
  NTSTATUS v64; // eax
  __int64 v65; // rcx
  char v66; // si
  _DEVICE_OBJECT *v67; // rcx
  NTSTATUS v68; // eax
  __int64 v69; // rcx
  char v70; // bl
  __int64 v71; // rax
  NTSTATUS v72; // eax
  char v73; // bl
  __int64 v74; // rax
  void *v75; // rcx
  char v76; // r15
  struct _NDIS_IF_BLOCK *v77; // rdx
  int updated; // ebx
  PVOID v79; // rax
  int OidList; // eax
  __int64 v81; // rcx
  char v82; // bl
  _BYTE *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  enum Ndis::ReadBindingsOptions::Flags v87; // r8d
  __int64 v88; // rdx
  __int64 v89; // r9
  PVOID v90; // rbx
  _WORD *v91; // rcx
  NTSTATUS v92; // eax
  struct _MCGEN_TRACE_CONTEXT *v93; // rcx
  unsigned int v94; // esi
  int v95; // eax
  void *v96; // rax
  char (__fastcall *v97)(__int64); // rax
  KIRQL v98; // dl
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  char v102; // al
  __int64 v103; // rax
  __int64 v104; // r9
  char v105; // si
  bool v106; // cf
  KIRQL v107; // al
  KIRQL v108; // si
  void *v109; // rcx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-E0h]
  char v112; // [rsp+40h] [rbp-C0h]
  char v113; // [rsp+42h] [rbp-BEh]
  unsigned __int8 v114; // [rsp+43h] [rbp-BDh]
  bool v115; // [rsp+44h] [rbp-BCh]
  char v116; // [rsp+45h] [rbp-BBh]
  char v117; // [rsp+46h] [rbp-BAh]
  unsigned int v118; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v119; // [rsp+4Ch] [rbp-B4h] BYREF
  char v120; // [rsp+4Dh] [rbp-B3h]
  char v121; // [rsp+4Eh] [rbp-B2h]
  char v122; // [rsp+4Fh] [rbp-B1h]
  char v123; // [rsp+50h] [rbp-B0h]
  __int64 v124; // [rsp+58h] [rbp-A8h]
  int Status; // [rsp+60h] [rbp-A0h] BYREF
  int v126; // [rsp+64h] [rbp-9Ch] BYREF
  int v127; // [rsp+68h] [rbp-98h]
  unsigned int v128; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v129; // [rsp+70h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  char v135[8]; // [rsp+A8h] [rbp-58h] BYREF
  PVOID WnodeEventItem; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING Keyword; // [rsp+B8h] [rbp-48h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v139[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v140[4]; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v143[6]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v144[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v145[20]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v146[20]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v147[20]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v148[28]; // [rsp+420h] [rbp+320h] BYREF
  _DWORD v149[6]; // [rsp+500h] [rbp+400h] BYREF
  GUID v150; // [rsp+518h] [rbp+418h] BYREF
  GUID InterfaceClassGuid; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v152[72]; // [rsp+538h] [rbp+438h] BYREF
  char v153; // [rsp+580h] [rbp+480h] BYREF

  v124 = a1;
  memset(v140, 0, sizeof(v140));
  v118 = 1;
  v8 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v126 = 1;
  v9 = 0;
  v128 = 0;
  v10 = 0;
  v117 = 0;
  v150 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v116 = 0;
  v121 = 0;
  v119 = 0;
  v112 = 0;
  v113 = 0;
  v123 = 0;
  v122 = 0;
  v120 = 0;
  v115 = 0;
  LOBYTE(v127) = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qZ(0xAu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v11 = *(_BYTE *)(a1 + 24);
  v114 = v11;
  if ( !(unsigned __int8)ndisReferenceDriver(a1) )
  {
    v27 = a1;
    goto LABEL_219;
  }
  v117 = 1;
  DestinationString.Buffer = (wchar_t *)&v153;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3816)) < 0 )
  {
    v27 = a1;
    v10 = 0;
    v28 = 0;
    goto LABEL_220;
  }
  v13 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4232));
  PciDeviceCustomProperties = v13;
  v115 = v13 >= 0 || v13 == -1073741771;
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
  if ( v11 >= 6u )
  {
    v19 = *(_QWORD *)(a2 + 3784);
    *(_BYTE *)(a2 + 1994) = 1;
    v20 = *(_QWORD *)(v19 + 192);
    *(_QWORD *)(a2 + 2352) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 2360) = *(_QWORD *)(a2 + 4104);
    *(_QWORD *)(a2 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a2 + 2464) = v20;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 2192) = a2;
    if ( *(_QWORD *)(a1 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  else
  {
    v15 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3160) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_327;
    memset(PoolWithTag, 0, v15);
    v17 = *(_QWORD **)(a2 + 3784);
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v17[16];
    *(_QWORD *)(a2 + 616) = v17[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4096) = v17[25];
    if ( v114 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v17[28];
      *(_QWORD *)(a2 + 2168) = v17[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v18 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v18;
      }
      if ( v114 >= 5u )
      {
        *(_DWORD *)(a2 + 1872) |= 0x200u;
        if ( v114 == 5 )
        {
          if ( *(_QWORD *)(a1 + 280) )
          {
            *(_DWORD *)(a2 + 120) |= 0x20000u;
            *(_QWORD *)(a1 + 552) = ndisMCoOidRequestToRequest;
            *(_QWORD *)(a2 + 2240) = a2;
          }
        }
      }
    }
  }
  ndisReferenceMiniportNoCheck(a2);
  v116 = 1;
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
  if ( PerProcessorSlot )
  {
    v22 = ndisMaxNumberOfProcessors;
    v122 = 1;
    for ( i = 0; i < v22; *(_DWORD *)(v24 + *(_QWORD *)(a2 + 3312)) = 6 )
      v24 = i++ << 12;
    *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
    if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
    {
      *(_DWORD *)(a2 + 124) |= 0x100000u;
      if ( !ndisDriverTrackAlloc
        || (v25 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v25) )
      {
        ndisMiniportTrackAlloc = 0LL;
      }
    }
    v26 = ndisRssV2Initialize((struct _KEVENT *)a2);
    if ( v26 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        WPP_SF_qD(0xBu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v26);
LABEL_35:
        v27 = a1;
LABEL_36:
        v10 = 0;
        v28 = 0;
        v9 = 0;
        goto LABEL_220;
      }
      goto LABEL_327;
    }
    v8 = 0;
    if ( *(_QWORD *)(a1 + 864) && !*(_QWORD *)(a2 + 4112) )
    {
      ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3864), (PVOID *)(a2 + 4112));
      PciDeviceCustomProperties = ReenumerateSelfInterface;
      if ( ReenumerateSelfInterface >= 0 )
      {
        v30 = *(_QWORD *)(a2 + 4112);
        ConfigurationHandle = 0LL;
        v31 = (*(_DWORD *)(v30 + 40) >> 1) & 1;
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
          WPP_SF_dd(0xDu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v31, *(_DWORD *)(v30 + 40) & 1);
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = (void *)a2;
        ConfigObject.Flags = 0;
        v32 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        Status = v32;
        if ( v32 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
            WPP_SF_d(0xEu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v32);
        }
        else
        {
          Keyword.Buffer = L"PldrCapability";
          *(_DWORD *)&Keyword.Length = 1966108;
          ParameterValue.ParameterType = NdisParameterInteger;
          ParameterValue.ParameterData.IntegerData = v31;
          NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
          if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
            WPP_SF_d(0xFu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, Status);
          NdisCloseConfiguration(ConfigurationHandle);
        }
      }
      else
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_qD(0xCu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, ReenumerateSelfInterface);
        PciDeviceCustomProperties = 0;
      }
    }
    *(_DWORD *)(a2 + 2256) = 2;
    memset(v139, 0, sizeof(v139));
    memset(v148, 0, sizeof(v148));
    BYTE1(v148[0]) = 2;
    if ( v114 >= 6u )
    {
      ndisReadMiniportDefaultPortAuthStates(a2);
      v149[1] = *(_DWORD *)(a2 + 3336);
      v149[2] = *(_DWORD *)(a2 + 3340);
      v149[3] = *(_DWORD *)(a2 + 3344);
      v149[4] = *(_DWORD *)(a2 + 3348);
      v36 = *(_QWORD *)(a2 + 944);
      v149[0] = 1311104;
      LODWORD(v139[0]) = 4194689;
      if ( v36 )
        v139[1] = v36 + 12;
      v25 = *(_DWORD *)(a2 + 3736) == 5;
      v139[2] = *(_QWORD *)(a2 + 1976);
      v139[3] = *(_QWORD *)(a2 + 4136);
      v139[6] = v149;
      v139[5] = *(_QWORD *)(a2 + 4048);
      LODWORD(v139[4]) = *(_DWORD *)(a2 + 4080);
      if ( v25 )
      {
        PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3352));
        v37 = v139[7];
        if ( PciDeviceCustomProperties >= 0 )
          v37 = a2 + 3352;
        v139[7] = v37;
      }
      v34 = ndisMInvokeInitialize(a2, (__int64)v139);
      if ( *(_DWORD *)(a2 + 3736) == 5 )
        ndisMReadPciPropertiesFromConfigSpace((char *)a2);
    }
    else
    {
      v34 = (*(__int64 (__fastcall **)(char *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
              v135,
              &v128,
              ndisMediumArray,
              15LL,
              a2,
              a3);
      if ( *(_DWORD *)(a2 + 3736) == 5 )
        PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3352));
    }
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_qD(0x10u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v34);
    if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
      McTemplateK0jqxqq(
        v33,
        &InitializeAdapterInfo,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        1,
        v34);
    *(_DWORD *)(a2 + 120) &= ~2u;
    if ( !v34 )
    {
      v8 = 1;
      if ( (*(_DWORD *)(a2 + 124) & 0x8000000) != 0 )
      {
        ndisReferenceMiniportByName((PCUNICODE_STRING)(*(_QWORD *)(a2 + 3792) + 8LL));
        v35 = *(_QWORD *)(a2 + 16);
        if ( v35 )
          ndisDereferenceMiniportRef(v35, 0x1Fu);
      }
      else
      {
        *(_QWORD *)(a2 + 16) = a2;
      }
      if ( v114 < 6u )
      {
        v38 = *(_QWORD *)(a2 + 112);
        if ( !v38 || *(_BYTE *)(v38 + 145) || *(_BYTE *)(v38 + 144) )
        {
          *(_DWORD *)(a2 + 120) &= ~1u;
        }
        else
        {
          LODWORD(v12) = 1;
          *(_DWORD *)(a2 + 120) |= 1u;
        }
        if ( !*(_QWORD *)(a2 + 2072) )
        {
          *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a1 + 312);
          *(_QWORD *)(a2 + 2064) = *(_QWORD *)(a2 + 24);
        }
        v39 = *((_DWORD *)ndisMediumArray + v128);
        LODWORD(v148[1]) = v39;
        *(_DWORD *)(a2 + 464) = v39;
        *(_DWORD *)(a2 + 1836) = v39;
      }
      v40 = *(_DWORD *)(a2 + 464);
      *(_DWORD *)(a2 + 2256) = 6;
      if ( v40 <= 0xD )
      {
        v41 = 8390LL;
        if ( _bittest((const int *)&v41, v40) )
        {
          if ( (unsigned __int8)byte_1C0098754 >= 4u )
            WPP_SF_q(0x11u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
            McTemplateK0jqxq(
              v41,
              &UnsupportedMiniportMediaType,
              (const GUID *)(a2 + 4032),
              a2 + 4032,
              *(_DWORD *)(a2 + 4080),
              *(_QWORD *)(a2 + 4048),
              *(_DWORD *)(a2 + 464));
          goto LABEL_90;
        }
      }
      ndisMRegisterBugCheckHandler((char *)a2);
      if ( *(_DWORD *)(a2 + 464) == 3 )
      {
        if ( v114 <= 4u )
        {
          if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
            *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
        }
        else if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
        {
LABEL_90:
          v118 = 32;
          goto LABEL_35;
        }
      }
      v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a2 + 1856) = 721648;
      v43 = ndisSetWakeUpTimer(a2);
      v44 = (unsigned __int8)v127;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      if ( v43 )
        v44 = 1;
      v127 = v44;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v42);
      ndisMStartInitMode(a2);
      if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_qD(0x12u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, PciDeviceCustomProperties);
        if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
          McTemplateK0jqxqq(
            v45,
            &InitializeAdapterFailed,
            (const GUID *)(a2 + 4032),
            a2 + 4032,
            *(_DWORD *)(a2 + 4080),
            *(_QWORD *)(a2 + 4048),
            2,
            PciDeviceCustomProperties);
        v118 = 36;
        goto LABEL_101;
      }
      if ( v114 >= 6u )
      {
        v48 = v126;
        v47 = 0;
        if ( *(_BYTE *)(a2 + 929) )
          v48 = 0;
      }
      else
      {
        memset(v152, 0, 0x3CuLL);
        v148[27] = v152;
        *(_QWORD *)(a2 + 2720) = v148;
        if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v148, &v118, (char *)&v119, &v126)
          || (unsigned int)ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2720)) )
        {
          goto LABEL_306;
        }
        v46 = *(_QWORD *)(a2 + 4120);
        if ( !v46 )
        {
          v48 = v126;
LABEL_111:
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
          {
            v49 = *(struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)(a2 + 2720);
            if ( *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1408LL) == 2 )
            {
              v50 = ndisCheckNetworkInterfaceDataMismatch((struct _NDIS_MINIPORT_BLOCK *)a2, v49);
              v51 = NdisConvertNtStatusToNdisStatus(v50);
            }
            else
            {
              v51 = ndisCheckIfTypeMismatch(a2, (__int64)v49);
            }
            if ( v51 )
              goto LABEL_306;
            if ( v114 < 6u )
              ndisReadMiniportDefaultPortAuthStates(a2);
          }
          Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
          if ( !Status )
          {
            if ( !*(_DWORD *)(a2 + 464) && (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
              ndisMNotifyMachineName(a2);
            v52 = *(_DWORD *)(a2 + 124);
            if ( ((v52 & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 3784) + 26LL) & 1) != 0)
              && *(_DWORD *)(a2 + 464) <= 0x13u )
            {
              if ( v48 )
                v53 = v52 & 0xFFFFFFFE;
              else
                v53 = v52 | 1;
              *(_DWORD *)(a2 + 124) = v53;
            }
            if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0)
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
            if ( (*(_DWORD *)(a2 + 124) & 1) == 0
              || (v54 = ndisCheckMiniportWakeUpCapable(a2), v55 = *(_DWORD *)(a2 + 3888), (v55 & 8) != 0) )
            {
LABEL_162:
              v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
              *(_DWORD *)(a2 + 1856) = 721928;
              if ( *(_DWORD *)(a2 + 480) == 2 )
                ndisSetMediaDisconnectTimer(a2);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v61);
              *(_QWORD *)(a2 + 4512) = a2;
              *(_QWORD *)(a2 + 4520) = ndisSignalD0CompleteWorkItem;
              *(_QWORD *)(a2 + 5432) = ndisDevicePowerOn;
              *(_QWORD *)(a2 + 5440) = a2 + 5416;
              *(_QWORD *)(a2 + 5416) = 0LL;
              *(_QWORD *)(a2 + 5472) = ndisDevicePowerDown;
              *(_QWORD *)(a2 + 5480) = a2 + 5456;
              *(_QWORD *)(a2 + 5456) = 0LL;
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
                if ( !nullCreateFilter(v140) )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                    WPP_SF_q(0x15u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
                  v118 = 30;
                  v62 = 1;
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
                  goto LABEL_182;
                }
              }
              else if ( !EthCreateFilter(
                           *(_DWORD *)(*(_QWORD *)(a2 + 2720) + 88LL),
                           *(_QWORD *)(a2 + 2720) + 126LL,
                           v140) )
              {
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                  WPP_SF_q(0x14u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
                v118 = 9;
                v62 = 1;
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
LABEL_182:
                if ( *(_DWORD *)(a2 + 1836) == 16 && v114 >= 6u )
                {
                  v63 = a2 + 600;
                  if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
                  {
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                      WPP_SF_q(0x16u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
                    *(_QWORD *)v63 = 0LL;
                    v118 = 30;
                    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) == 0 )
                    {
                      v27 = v124;
                      v10 = 0;
                      v28 = 0;
                      v9 = 0;
                      goto LABEL_220;
                    }
                    McTemplateK0jqxqq(
                      30LL,
                      &InitializeAdapterFailed,
                      (const GUID *)(a2 + 4032),
                      a2 + 4032,
                      *(_DWORD *)(a2 + 4080),
                      *(_QWORD *)(a2 + 4048),
                      7,
                      30);
LABEL_101:
                    v27 = v124;
                    goto LABEL_36;
                  }
                  *(_QWORD *)(*(_QWORD *)v63 + 296LL) = a2;
                }
                if ( !*(_DWORD *)(a2 + 464) )
                  *(_BYTE *)(a2 + 1998) = 1;
                v64 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 1u);
                v66 = v64;
                if ( v64 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                    WPP_SF_qD(0x17u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v64);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                    McTemplateK0jqxqq(
                      v65,
                      &InitializeAdapterFailed,
                      (const GUID *)(a2 + 4032),
                      a2 + 4032,
                      *(_DWORD *)(a2 + 4080),
                      *(_QWORD *)(a2 + 4048),
                      8,
                      v66);
                  v9 = 0;
                  v62 = 1;
                  v118 = 31;
                  goto LABEL_199;
                }
                v113 = 1;
                v9 = 1;
                if ( v62 )
                {
LABEL_199:
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
                    WPP_SF_qD(0x18u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v62);
                  Arg1[0] = v118;
                  NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)Arg1);
                  v27 = v124;
LABEL_317:
                  v28 = 0;
                  v112 = 0;
                  v122 = v116;
                  v10 = 0;
                  v120 = 0;
                  v121 = 0;
                  if ( !v118 )
                    goto LABEL_225;
                  goto LABEL_220;
                }
                if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
                  IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3856));
                v67 = *(_DEVICE_OBJECT **)(a2 + 3856);
                v118 = 1;
                v68 = IoRegisterDeviceInterface(
                        v67,
                        &InterfaceClassGuid,
                        (PUNICODE_STRING)(a2 + 3816),
                        (PUNICODE_STRING)(a2 + 360));
                v10 = 0;
                v70 = v68;
                if ( v68 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_qD(0x19u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v68);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                    McTemplateK0jqxqq(
                      v69,
                      &InitializeAdapterFailed,
                      (const GUID *)(a2 + 4032),
                      a2 + 4032,
                      *(_DWORD *)(a2 + 4080),
                      *(_QWORD *)(a2 + 4048),
                      10,
                      v70);
                  v27 = v124;
                  v28 = 0;
                  v118 = 35;
                  goto LABEL_220;
                }
                v71 = *(_QWORD *)(a2 + 4640);
                v112 = 1;
                if ( v71 && (*(_BYTE *)(v71 + 8) & 3) == 3 )
                {
                  v72 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(a2 + 3856),
                          &v150,
                          0LL,
                          (PUNICODE_STRING)(a2 + 4856));
                  v73 = v72;
                  if ( Status < 0 )
                  {
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                      WPP_SF_qD(0x1Au, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v72);
                    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                      McTemplateK0jqxqq(
                        v69,
                        &InitializeAdapterFailed,
                        (const GUID *)(a2 + 4032),
                        a2 + 4032,
                        *(_DWORD *)(a2 + 4080),
                        *(_QWORD *)(a2 + 4048),
                        0,
                        v73);
                    v118 = 34;
LABEL_218:
                    v27 = v124;
LABEL_219:
                    v28 = v112;
                    goto LABEL_220;
                  }
                  v10 = 1;
                }
                *(_DWORD *)(*(_QWORD *)(a2 + 3848) + 48LL) &= ~0x80u;
                v12 = *(_QWORD *)(a2 + 2720);
                if ( v12 )
                {
                  v77 = *(struct _NDIS_IF_BLOCK **)(a2 + 4064);
                  if ( !v77 )
                  {
                    updated = -1073741823;
LABEL_234:
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                      WPP_SF_qD(0x1Bu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, updated);
                    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                      McTemplateK0jqxqq(
                        v69,
                        &InitializeAdapterFailed,
                        (const GUID *)(a2 + 4032),
                        a2 + 4032,
                        *(_DWORD *)(a2 + 4080),
                        *(_QWORD *)(a2 + 4048),
                        11,
                        updated);
                    v118 = 32;
                    goto LABEL_218;
                  }
                  updated = ndisIfUpdateInterfaceOnInitialize((struct _NDIS_MINIPORT_BLOCK *)a2, v77, v12);
                }
                else
                {
                  updated = -1073741823;
                }
                if ( updated )
                  goto LABEL_234;
                v25 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
                v120 = 1;
                if ( !v25 )
                {
                  v79 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
                  *(_QWORD *)(a2 + 4600) = v79;
                  if ( v79 )
                    memset(v79, 0, 0x20uLL);
                }
                if ( !*(_QWORD *)(a2 + 1776) )
                {
                  memset(v143, 0, 0x28uLL);
                  v143[2] = a2;
                  OidList = ndisQueryOidList((__int64)v143);
                  v82 = OidList;
                  if ( OidList )
                  {
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                      WPP_SF_qD(0x1Cu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, OidList);
                    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                      McTemplateK0jqxqq(
                        v81,
                        &InitializeAdapterFailed,
                        (const GUID *)(a2 + 4032),
                        a2 + 4032,
                        *(_DWORD *)(a2 + 4080),
                        *(_QWORD *)(a2 + 4048),
                        12,
                        v82);
                  }
                }
                v83 = *(_BYTE **)(a2 + 4120);
                if ( v83 )
                {
                  if ( *v83 == 1 )
                  {
                    v83[1] = 1;
                    v84 = *(_QWORD *)(a2 + 4120);
                    *(_OWORD *)(v84 + 196) = *(_OWORD *)(v84 + 8);
                    *(_OWORD *)(v84 + 212) = *(_OWORD *)(v84 + 24);
                    *(_OWORD *)(v84 + 228) = *(_OWORD *)(v84 + 40);
                    *(_OWORD *)(v84 + 244) = *(_OWORD *)(v84 + 56);
                    *(_OWORD *)(v84 + 260) = *(_OWORD *)(v84 + 72);
                    *(_OWORD *)(v84 + 276) = *(_OWORD *)(v84 + 88);
                    *(_OWORD *)(v84 + 292) = *(_OWORD *)(v84 + 104);
                    *(_OWORD *)(v84 + 308) = *(_OWORD *)(v84 + 120);
                    *(_OWORD *)(v84 + 324) = *(_OWORD *)(v84 + 136);
                    *(_OWORD *)(v84 + 340) = *(_OWORD *)(v84 + 152);
                    *(_OWORD *)(v84 + 356) = *(_OWORD *)(v84 + 168);
                    *(_QWORD *)(v84 + 372) = *(_QWORD *)(v84 + 184);
                    *(_DWORD *)(v84 + 380) = *(_DWORD *)(v84 + 192);
                    ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4120) + 196LL);
                  }
                  v85 = *(_QWORD *)(a2 + 4120);
                  if ( *(_BYTE *)(v85 + 2) == 1 )
                  {
                    *(_BYTE *)(v85 + 3) = 1;
                    v86 = *(_QWORD *)(a2 + 4120);
                    *(_OWORD *)(v86 + 872) = *(_OWORD *)(v86 + 892);
                    *(_DWORD *)(v86 + 888) = *(_DWORD *)(v86 + 908);
                  }
                }
                v27 = v124;
                if ( !ndisQueueMiniportOnDriver(a2, v124) )
                  goto LABEL_219;
                v121 = 1;
                ndisSetDeviceInterfaceState(a2, 1u);
                if ( (int)Ndis::BindRegistry::Reload((_NDIS_MINIPORT_BLOCK *)a2, 0LL, v87) < 0 )
                {
                  v118 = 39;
                  goto LABEL_219;
                }
                ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
                v8 = 0;
                if ( Ndis::BindState::SetBinding(
                       (Ndis::BindState *)(a2 + 5064),
                       BindingDisabled,
                       Reason_MiniportDeviceNotStarted)
                  && (unsigned __int8)byte_1C0098763 >= 4u )
                {
                  ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v144);
                  WPP_SF_Zq(0x1Du, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (const wchar_t *)v144[1], v144[0]);
                }
                if ( Ndis::BindState::SetPause(
                       (Ndis::BindState *)(a2 + 5064),
                       DatapathRunning,
                       PauseReason_InitialPause)
                  && (unsigned __int8)byte_1C0098763 >= 4u )
                {
                  ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v145);
                  WPP_SF_Zq(0x1Eu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (const wchar_t *)v145[1], v145[0]);
                }
                if ( Ndis::BindState::SetPause(
                       (Ndis::BindState *)(a2 + 5064),
                       DatapathRunning,
                       PauseReason_RemovingMiniport)
                  && (unsigned __int8)byte_1C0098763 >= 4u )
                {
                  ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v146);
                  WPP_SF_Zq(0x1Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (const wchar_t *)v146[1], v146[0]);
                }
                if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
                  && Ndis::BindState::SetBinding(
                       (Ndis::BindState *)(a2 + 5064),
                       BindingDisabled,
                       Reason_DefaultPortNotActive)
                  && (unsigned __int8)byte_1C0098763 >= 4u )
                {
                  ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v147);
                  WPP_SF_Zq(0x20u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (const wchar_t *)v147[1], v147[0]);
                }
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
                Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
                ndisSetupWmiNode(
                  a2,
                  *(const void ***)(a2 + 3880),
                  *(unsigned __int16 *)(a2 + 3832) + 2,
                  (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
                  &WnodeEventItem);
                v90 = WnodeEventItem;
                if ( WnodeEventItem )
                {
                  v91 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                  *v91 = *(_WORD *)(a2 + 3832);
                  memmove(v91 + 1, *(const void **)(a2 + 3840), *(unsigned __int16 *)(a2 + 3832));
                  v92 = IoWMIWriteEvent(v90);
                  v94 = v92;
                  if ( v92 < 0 )
                  {
                    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                      WPP_SF_qD(0x21u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v92);
                    if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
                      McTemplateK0qqq(v93, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4032), v94, 0x602u, 0);
                    ExFreePoolWithTag(v90, 0);
                  }
                }
                v129 = (_BYTE)ndisAcOnLine == 1;
                ndisNotifyMiniports(a2, v88, &v129, v89);
                *(_QWORD *)(a2 + 400) = v140[0];
                if ( v114 >= 6u )
                {
                  *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
                  *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
                }
                else
                {
                  *(_QWORD *)(a2 + 624) = ndisMSendPackets;
                  v95 = *(_DWORD *)(a2 + 120);
                  if ( (v95 & 0x40000) != 0 )
                  {
                    v96 = ndisMSendPacketsXToMiniport;
                  }
                  else
                  {
                    if ( (v95 & 0x40) != 0 )
                    {
                      *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
                      *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
                      v97 = ndisMDeferredSendSG;
                      if ( *(_QWORD *)(v27 + 232) )
                        v97 = ndisMDeferredSendPacketsSG;
                      *(_QWORD *)(a2 + 632) = v97;
                      goto LABEL_286;
                    }
                    v96 = ndisMSendPacketsToMiniport;
                  }
                  *(_QWORD *)(a2 + 2040) = v96;
                  *(_QWORD *)(a2 + 2032) = v96;
                }
LABEL_286:
                KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
                *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
                *(_DWORD *)(a2 + 1856) = 722493;
                ndisMSetIndicatePacketHandler(a2);
                *(_QWORD *)(a2 + 520) = 0LL;
                *(_DWORD *)(a2 + 1856) = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v98);
                if ( ndisEnforceDisconnectedStandby )
                {
                  if ( (v99 = *(_DWORD *)(a2 + 124), (v99 & 0x200000) != 0) && ndisAoAcCapable
                    || (*(_DWORD *)(a2 + 2692) & 0x200) != 0 )
                  {
                    v100 = *(_DWORD *)(a2 + 3888);
                    if ( (v100 & 0x10) == 0 )
                    {
                      *(_DWORD *)(a2 + 124) = v99 & 0xFFFFFFBF;
                      *(_DWORD *)(a2 + 3888) = v100 | 0x10;
                      ndisUpdateAndIndicatePMCapabilities(a2);
                    }
                  }
                }
                if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2692) & 0x200) != 0)
                  && *(_DWORD *)(a2 + 1832) == 14 )
                {
                  v25 = *(_BYTE *)(a2 + 1001) == 2;
                  v132 = 0LL;
                  InputBuffer = *(_QWORD *)(a2 + 3856);
                  LODWORD(v132) = 4;
                  BYTE4(v132) = 1;
                  if ( !v25
                    || (*(_DWORD *)(a2 + 1008) & 1) == 0
                    || *(_DWORD *)(a2 + 1012) < 0x10u
                    || *(_DWORD *)(a2 + 1016) < 0x4Au
                    || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
                    || (*(_DWORD *)(a2 + 1052) & 1) == 0
                    || (v101 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v132) = 1, (_BYTE)v101 != 3) )
                  {
                    BYTE5(v132) = 0;
                  }
                  ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
                }
                v102 = 0;
                v118 = 0;
                v117 = 0;
                v115 = 0;
                goto LABEL_316;
              }
              v62 = v119;
              *(_QWORD *)(v140[0] + 296LL) = a2;
              goto LABEL_182;
            }
            v56 = *(_DWORD *)(a2 + 1108);
            *(_DWORD *)(a2 + 124) |= 0x20u;
            v57 = 0;
            if ( (unsigned int)(v56 - 2) <= 2 )
            {
              *(_DWORD *)(a2 + 1132) |= 1u;
              v57 = 1;
            }
            if ( (v55 & 0x10) == 0 && v54 )
            {
              if ( (unsigned int)(*(_DWORD *)(a2 + 1104) - 2) <= 2 )
                *(_DWORD *)(a2 + 124) |= 0x40u;
              if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
              {
                *(_DWORD *)(a2 + 124) |= 0x40u;
                v57 = 1;
                *(_DWORD *)(a2 + 1124) |= 2u;
                v58 = *(_BYTE *)(a2 + 32);
                if ( v58 <= 6u && (v58 != 6 || *(_BYTE *)(a2 + 33) < 0x14u)
                  || (v59 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2), (Status = v59) == 0)
                  || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                {
LABEL_156:
                  ndisMiniportPMParametersUpdated(a2);
LABEL_157:
                  if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
                  {
                    v60 = *(_DWORD *)(a2 + 124);
                    if ( (v60 & 0x40) != 0 )
                    {
                      if ( !*(_QWORD *)(a2 + 1296) )
                      {
                        *(_DWORD *)(a2 + 124) = v60 & 0xFFFFFBFF;
                        Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                      }
                    }
                    else
                    {
                      ndisCancelWaitWake(a2);
                    }
                  }
                  goto LABEL_162;
                }
                WPP_SF_qD(0x13u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v59);
              }
            }
            if ( !v57 )
              goto LABEL_157;
            goto LABEL_156;
          }
LABEL_306:
          v27 = v124;
          v9 = 0;
          goto LABEL_317;
        }
        v47 = ndisMSetOffloadAttributes(a2, v46 + 384, (_WORD *)(v46 + 384), 0LL, 0LL);
        v48 = v126;
      }
      if ( v47 )
        goto LABEL_306;
      goto LABEL_111;
    }
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4088) = 2LL;
    v103 = *(_QWORD *)(a2 + 4064);
    if ( v103 && *(_DWORD *)(v103 + 1112) != 2 )
    {
      *(_DWORD *)(v103 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4664) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v118 = v34;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_320;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v102 = 1;
        v27 = a1;
LABEL_316:
        v116 = v102;
        v9 = 0;
        v113 = 0;
        v123 = v102;
        goto LABEL_317;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v104 = *(_QWORD *)(a2 + 3880);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v104, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v104, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_320:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3880),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
LABEL_327:
  v27 = a1;
  v10 = 0;
  v28 = 0;
  v9 = 0;
LABEL_220:
  Ndis::BindRegistry::Reload((_NDIS_MINIPORT_BLOCK *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v12);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  if ( v120 )
  {
    *(_QWORD *)(a2 + 4088) = 2LL;
    v74 = *(_QWORD *)(a2 + 4064);
    if ( *(_DWORD *)(v74 + 1112) != 2 )
    {
      *(_DWORD *)(v74 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    v75 = *(void **)(a2 + 4600);
    if ( v75 )
    {
      ExFreePoolWithTag(v75, 0);
      *(_QWORD *)(a2 + 4600) = 0LL;
    }
  }
LABEL_225:
  if ( v9 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 2u);
    v76 = 0;
  }
  else
  {
    v76 = v113;
  }
  v105 = v28;
  if ( v28 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4176), 0);
    v105 = 0;
  }
  if ( v10 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4856), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4856));
    v28 = v112;
    *(_QWORD *)(a2 + 4864) = 0LL;
    v10 = 0;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch((NDIS_HANDLE)a2);
    v106 = (_BYTE)v127 != 0;
    LOBYTE(v127) = -(char)v127;
    ndisMCommonHaltMiniport(
      a2,
      (v28 != 0 ? 4 : 0) | (v105 != 0 ? 0x40 : 0) | (v106 ? 8 : 0) | (v76 != 0 ? 130 : 128) | (v10 != 0 ? 0x100 : 0));
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v123 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 && *(_QWORD *)(a2 + 504) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x22u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
      ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    }
    v107 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v108 = v107;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722731;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v108);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_346;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v107);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
LABEL_346:
  if ( v121 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x23u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
    ndisDeQueueMiniportOnDriver(a2, v27);
  }
  if ( v115 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v116 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v117 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x24u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
    ndisDereferenceDriver(v27, 0);
  }
  v109 = *(void **)(a2 + 2720);
  if ( v109 )
  {
    if ( v114 >= 6u )
      ExFreePoolWithTag(v109, 0);
    *(_QWORD *)(a2 + 2720) = 0LL;
  }
  if ( v122 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3312), 5403508);
    *(_QWORD *)(a2 + 3312) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x25u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v118);
  return v118;
}
