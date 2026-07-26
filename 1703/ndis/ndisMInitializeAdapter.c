/*
 * XREFs of ndisMInitializeAdapter @ 0x1C00F904C
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AB3E8 (ndisInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0019870 (ndisMergeOffloadCapsAndRegistry.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001BA60 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C001BB6C (ndisAllocatePerProcessorSlot.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001D2E0 (ndisMSetIndicatePacketHandler.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C00219F4 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0022788 (ndisAddWoLMagicPacket.c)
 *     ndisSetWakeUpTimer @ 0x1C0022E88 (ndisSetWakeUpTimer.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C002308C (ndisCheckMiniportWakeUpCapable.c)
 *     ndisCancelWaitWake @ 0x1C002375C (ndisCancelWaitWake.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0023880 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0023B5C (ndisSetMediaDisconnectTimer.c)
 *     ndisReferenceDriver @ 0x1C0023B90 (ndisReferenceDriver.c)
 *     ndisFreePerProcessorSlot @ 0x1C00254E0 (ndisFreePerProcessorSlot.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00259F8 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0025F04 (ndisDereferenceDmaAdapter.c)
 *     NdisWriteErrorLogEntry @ 0x1C0026910 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004CEFC (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D4DC (ndisDereferenceMiniportRef.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     EthCreateFilter @ 0x1C00A900C (EthCreateFilter.c)
 *     ndisMInitializeInitMode @ 0x1C00AAAF4 (ndisMInitializeInitMode.c)
 *     ndisMInvokeInitialize @ 0x1C00AABA0 (ndisMInvokeInitialize.c)
 *     ndisMSetOffloadAttributes @ 0x1C00AAC50 (ndisMSetOffloadAttributes.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AB870 (ndisReadMiniportDefaultPortAuthStates.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B893C (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B8AB0 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00B91E8 (ndisSetDeviceInterfaceState.c)
 *     ndisQueryOidList @ 0x1C00B99B0 (ndisQueryOidList.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00B9F64 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00BA71C (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00BB04C (ndisMiniportPMParametersUpdated.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00BC734 (ndisGetPciDeviceCustomProperties.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BCD98 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisQueryPowerCapabilities @ 0x1C00BCEAC (ndisQueryPowerCapabilities.c)
 *     ndisMNotifyMachineName @ 0x1C00BD424 (ndisMNotifyMachineName.c)
 *     ndisInitializeNsi @ 0x1C00BD660 (ndisInitializeNsi.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00BD6C4 (ndisCreateNdisSupportedOidList.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 *     ndisMStartInitMode @ 0x1C00BDF20 (ndisMStartInitMode.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00BE658 (ndisMRegisterBugCheckHandler.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00BF9A0 (ndisMDeregisterBugCheckHandler.c)
 *     DisableMagicPacketKeyword @ 0x1C00D4680 (DisableMagicPacketKeyword.c)
 *     NdisWriteConfiguration @ 0x1C00D9970 (NdisWriteConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00DEA74 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00E0514 (ndisQueryReenumerateSelfInterface.c)
 *     nullCreateFilter @ 0x1C00E0DEC (nullCreateFilter.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00E1D54 (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C00E1D94 (ndisMRegisterPDCTaskClient.c)
 *     ndisIovTeardownVf @ 0x1C00E654C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00E9764 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9BE0 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9D38 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14D8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00F9F78 (ndisQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FB748 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // r13
  char v9; // r12
  unsigned __int8 v10; // bl
  __int64 v11; // r8
  NTSTATUS v12; // eax
  int PciDeviceCustomProperties; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 PerProcessorSlot; // rax
  unsigned int v17; // r8d
  unsigned int i; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  ULONG_PTR v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // rcx
  KIRQL v27; // bl
  char v28; // al
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  unsigned int v37; // edx
  char v38; // al
  int v39; // r8d
  int v40; // ecx
  char v41; // bl
  unsigned __int8 v42; // al
  int v43; // eax
  int v44; // eax
  KIRQL v45; // bl
  unsigned __int8 v46; // bl
  NTSTATUS v47; // eax
  __int64 v48; // rcx
  char v49; // si
  _DEVICE_OBJECT *v50; // rcx
  NTSTATUS v51; // eax
  __int64 v52; // rcx
  char v53; // bl
  __int64 v54; // rax
  struct _NDIS_IF_BLOCK *v55; // rdx
  int updated; // ebx
  PVOID v57; // rax
  int OidList; // eax
  __int64 v59; // rcx
  char v60; // bl
  _BYTE *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r14
  enum Ndis::ReadBindingsOptions::Flags v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // r9
  PVOID v68; // rbx
  _WORD *v69; // rcx
  NTSTATUS v70; // eax
  __int64 v71; // rcx
  int v72; // esi
  KIRQL v73; // dl
  char v74; // bl
  void *v75; // rcx
  unsigned int v77; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v79; // rcx
  __int64 v80; // rax
  int ReenumerateSelfInterface; // eax
  __int64 v82; // rax
  int v83; // ebx
  NDIS_STATUS v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rdx
  ULONG_PTR v89; // rsi
  NTSTATUS v90; // eax
  char v91; // bl
  __int64 v92; // rax
  void *v93; // rcx
  __int64 v94; // rcx
  int v95; // eax
  void *v96; // rax
  char (__fastcall *v97)(__int64); // rax
  int v98; // ecx
  int v99; // eax
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // r9
  KIRQL v103; // al
  KIRQL v104; // si
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  char v106; // [rsp+40h] [rbp-C0h]
  char v107; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v108; // [rsp+42h] [rbp-BEh]
  bool v109; // [rsp+43h] [rbp-BDh]
  char v110; // [rsp+44h] [rbp-BCh]
  unsigned int v111; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v112; // [rsp+4Ch] [rbp-B4h] BYREF
  char v113; // [rsp+4Dh] [rbp-B3h]
  char v114; // [rsp+4Eh] [rbp-B2h]
  char v115; // [rsp+4Fh] [rbp-B1h]
  char v116; // [rsp+50h] [rbp-B0h]
  char v117; // [rsp+51h] [rbp-AFh]
  char v118; // [rsp+52h] [rbp-AEh]
  __int64 v119; // [rsp+58h] [rbp-A8h]
  int Status; // [rsp+60h] [rbp-A0h] BYREF
  int v121; // [rsp+64h] [rbp-9Ch] BYREF
  int v122; // [rsp+68h] [rbp-98h]
  unsigned int v123; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v124; // [rsp+70h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  __int64 v127; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v130[8]; // [rsp+A8h] [rbp-58h] BYREF
  PVOID WnodeEventItem; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING Keyword; // [rsp+B8h] [rbp-48h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v134[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v135[4]; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v138[6]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v139[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v140[20]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v141[20]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v142[20]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v143[28]; // [rsp+420h] [rbp+320h] BYREF
  _DWORD v144[6]; // [rsp+500h] [rbp+400h] BYREF
  GUID v145; // [rsp+518h] [rbp+418h] BYREF
  GUID InterfaceClassGuid; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v147[72]; // [rsp+538h] [rbp+438h] BYREF
  char v148; // [rsp+580h] [rbp+480h] BYREF

  v119 = a1;
  memset(v135, 0, sizeof(v135));
  v111 = 1;
  v8 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v121 = 1;
  v123 = 0;
  v9 = 0;
  v110 = 0;
  v145 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v116 = 0;
  v115 = 0;
  v112 = 0;
  v107 = 0;
  v106 = 0;
  v118 = 0;
  v117 = 0;
  v113 = 0;
  v109 = 0;
  LOBYTE(v122) = 0;
  v114 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qZ(0xAu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v10 = *(_BYTE *)(a1 + 24);
  v108 = v10;
  if ( !ndisReferenceDriver(a1, 2u) )
  {
    v64 = a1;
    goto LABEL_278;
  }
  v110 = 1;
  DestinationString.Buffer = (wchar_t *)&v148;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3816)) < 0 )
  {
    v64 = a1;
    v9 = 0;
    goto LABEL_278;
  }
  v12 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4232));
  PciDeviceCustomProperties = v12;
  v109 = v12 >= 0 || v12 == -1073741771;
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
  if ( v10 < 6u )
  {
    v77 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3160) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_350:
      v64 = a1;
      v9 = 0;
      goto LABEL_278;
    }
    memset(PoolWithTag, 0, v77);
    v79 = *(_QWORD **)(a2 + 3784);
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v79[16];
    *(_QWORD *)(a2 + 616) = v79[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4096) = v79[25];
    if ( v108 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v79[28];
      *(_QWORD *)(a2 + 2168) = v79[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v80 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v80;
      }
      if ( v108 >= 5u )
      {
        *(_DWORD *)(a2 + 1872) |= 0x200u;
        if ( v108 == 5 )
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
    if ( *(_QWORD *)(a1 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
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
  if ( !PerProcessorSlot )
    goto LABEL_350;
  v17 = ndisMaxNumberOfProcessors;
  v8 = 0;
  v117 = 1;
  for ( i = 0; i < v17; *(_DWORD *)(v19 + *(_QWORD *)(a2 + 3312)) = 6 )
    v19 = i++ << 12;
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 124) |= 0x100000u;
    if ( !ndisDriverTrackAlloc
      || (v21 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v21) )
    {
      ndisMiniportTrackAlloc = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 864) && !*(_QWORD *)(a2 + 4112) )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3864), (PVOID *)(a2 + 4112));
    PciDeviceCustomProperties = ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface >= 0 )
    {
      v82 = *(_QWORD *)(a2 + 4112);
      ConfigurationHandle = 0LL;
      v83 = (*(_DWORD *)(v82 + 40) >> 1) & 1;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(0xCu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v83, *(_DWORD *)(v82 + 40) & 1);
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = (void *)a2;
      ConfigObject.Flags = 0;
      v84 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v84;
      if ( v84 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xDu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v84);
      }
      else
      {
        Keyword.Buffer = L"PldrCapability";
        *(_DWORD *)&Keyword.Length = 1966108;
        ParameterValue.ParameterType = NdisParameterInteger;
        ParameterValue.ParameterData.IntegerData = v83;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xEu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, Status);
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_qD(0xBu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, ReenumerateSelfInterface);
      PciDeviceCustomProperties = 0;
    }
  }
  *(_DWORD *)(a2 + 2256) = 2;
  memset(v134, 0, sizeof(v134));
  memset(v143, 0, sizeof(v143));
  BYTE1(v143[0]) = 2;
  if ( v108 < 6u )
  {
    v24 = (*(__int64 (__fastcall **)(_BYTE *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
            v130,
            &v123,
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
    v144[1] = *(_DWORD *)(a2 + 3336);
    v144[2] = *(_DWORD *)(a2 + 3340);
    v144[3] = *(_DWORD *)(a2 + 3344);
    v144[4] = *(_DWORD *)(a2 + 3348);
    v20 = *(_QWORD *)(a2 + 944);
    v144[0] = 1311104;
    LODWORD(v134[0]) = 4194689;
    if ( v20 )
      v134[1] = v20 + 12;
    v21 = *(_DWORD *)(a2 + 3736) == 5;
    v134[2] = *(_QWORD *)(a2 + 1976);
    v134[3] = *(_QWORD *)(a2 + 4136);
    v134[6] = v144;
    v134[5] = *(_QWORD *)(a2 + 4048);
    LODWORD(v134[4]) = *(_DWORD *)(a2 + 4080);
    if ( v21 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3352));
      v22 = v134[7];
      if ( PciDeviceCustomProperties >= 0 )
        v22 = a2 + 3352;
      v134[7] = v22;
    }
    v24 = ndisMInvokeInitialize((const struct _TlgProvider_t *)a2, (__int64)v134);
    if ( *(_DWORD *)(a2 + 3736) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0xFu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v24);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
    Template_jqxqq(
      v23,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      1,
      v24);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v24 )
  {
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4088) = 2LL;
    v101 = *(_QWORD *)(a2 + 4064);
    if ( v101 && *(_DWORD *)(v101 + 1112) != 2 )
    {
      *(_DWORD *)(v101 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4664) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v111 = v24;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_345;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v74 = 1;
        v64 = a1;
LABEL_134:
        v116 = v74;
        v107 = 0;
        v9 = 0;
        v113 = 0;
        v114 = 0;
        v115 = 0;
        v118 = v74;
        v117 = v74;
        goto LABEL_135;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v102 = *(_QWORD *)(a2 + 3880);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v102, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v102, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_345:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3880),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 124) & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)(*(_QWORD *)(a2 + 3792) + 8LL), (__int64 *)(a2 + 16), 1, 0x1Fu);
    v85 = *(_QWORD *)(a2 + 16);
    if ( v85 )
      ndisDereferenceMiniportRef(v85, 0x1Fu);
  }
  else
  {
    *(_QWORD *)(a2 + 16) = a2;
  }
  if ( v108 < 6u )
  {
    v86 = *(_QWORD *)(a2 + 112);
    if ( !v86 || *(_BYTE *)(v86 + 145) || *(_BYTE *)(v86 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2072) )
    {
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a1 + 312);
      *(_QWORD *)(a2 + 2064) = *(_QWORD *)(a2 + 24);
    }
    v87 = *((_DWORD *)ndisMediumArray + v123);
    LODWORD(v143[1]) = v87;
    *(_DWORD *)(a2 + 464) = v87;
    *(_DWORD *)(a2 + 1836) = v87;
  }
  v25 = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(a2 + 2256) = 6;
  if ( v25 <= 0xD )
  {
    v26 = 8390LL;
    if ( _bittest((const int *)&v26, v25) )
    {
      if ( (unsigned __int8)byte_1C0092614 >= 4u )
        WPP_SF_q(0x10u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxq(
          v26,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          *(_DWORD *)(a2 + 464));
      goto LABEL_207;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) != 3 )
    goto LABEL_39;
  if ( v108 <= 4u )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
  {
LABEL_207:
    v111 = 32;
    v64 = a1;
LABEL_210:
    v9 = 0;
    goto LABEL_278;
  }
LABEL_39:
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721635;
  v28 = ndisSetWakeUpTimer(a2);
  v29 = (unsigned __int8)v122;
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  if ( v28 )
    v29 = 1;
  v122 = v29;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v27);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x11u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, PciDeviceCustomProperties);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v30,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        2,
        PciDeviceCustomProperties);
    v111 = 36;
    goto LABEL_209;
  }
  if ( v108 < 6u )
  {
    memset(v147, 0, 0x3CuLL);
    v143[27] = v147;
    *(_QWORD *)(a2 + 2720) = v143;
    if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v143, &v111, (char *)&v112, &v121)
      || (unsigned int)ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2720)) )
    {
      goto LABEL_332;
    }
    v88 = *(_QWORD *)(a2 + 4120);
    if ( !v88 )
    {
      v31 = v121;
      goto LABEL_46;
    }
    v32 = ndisMSetOffloadAttributes(a2, v88 + 384, (_WORD *)(v88 + 384), 0LL, 0LL);
    v31 = v121;
  }
  else
  {
    v31 = v121;
    v32 = 0;
    if ( *(_BYTE *)(a2 + 929) )
      v31 = 0;
  }
  if ( v32 )
    goto LABEL_332;
LABEL_46:
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
  {
    v33 = *(_QWORD *)(a2 + 2720);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1408LL) == 2 )
    {
      v34 = ndisCheckNetworkInterfaceDataMismatch(a2, v33);
      v35 = NdisConvertNtStatusToNdisStatus(v34);
    }
    else
    {
      v35 = ndisCheckIfTypeMismatch(a2, v33);
    }
    if ( v35 )
      goto LABEL_332;
    if ( v108 < 6u )
      ndisReadMiniportDefaultPortAuthStates(a2);
  }
  Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Status )
  {
LABEL_332:
    v9 = 0;
    v64 = v119;
    goto LABEL_135;
  }
  if ( !*(_DWORD *)(a2 + 464) && (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
    ndisMNotifyMachineName(a2);
  v36 = *(_DWORD *)(a2 + 124);
  if ( ((v36 & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 3784) + 26LL) & 1) != 0) && *(_DWORD *)(a2 + 464) <= 0x13u )
  {
    if ( v31 )
      v37 = v36 & 0xFFFFFFFE;
    else
      v37 = v36 | 1;
    *(_DWORD *)(a2 + 124) = v37;
  }
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && (unsigned int)(*(_DWORD *)(a2 + 1040) - 2) <= 2
    && (*(_DWORD *)(a2 + 3936) & 0xC) == 0 )
  {
    DisableMagicPacketKeyword((_DWORD *)a2);
  }
  NdisInitializeTimer((PNDIS_TIMER)(a2 + 1392), (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, (PVOID)a2);
  KeInitializeEvent((PRKEVENT)(a2 + 1304), NotificationEvent, 1u);
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && ndisEnforceDisconnectedStandby )
  {
    *(_DWORD *)(a2 + 3888) |= 0x10u;
  }
  ndisUpdatePMCurrentCapabilities(a2);
  if ( (*(_DWORD *)(a2 + 124) & 1) != 0 )
  {
    v38 = ndisCheckMiniportWakeUpCapable(a2);
    v39 = *(_DWORD *)(a2 + 3888);
    if ( (v39 & 8) == 0 )
    {
      v40 = *(_DWORD *)(a2 + 1108);
      *(_DWORD *)(a2 + 124) |= 0x20u;
      v41 = 0;
      if ( (unsigned int)(v40 - 2) <= 2 )
      {
        *(_DWORD *)(a2 + 1132) |= 1u;
        v41 = 1;
      }
      if ( (v39 & 0x10) == 0 && v38 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 1104) - 2) <= 2 )
          *(_DWORD *)(a2 + 124) |= 0x40u;
        if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
        {
          *(_DWORD *)(a2 + 124) |= 0x40u;
          v41 = 1;
          *(_DWORD *)(a2 + 1124) |= 2u;
          v42 = *(_BYTE *)(a2 + 32);
          if ( v42 <= 6u && (v42 != 6 || *(_BYTE *)(a2 + 33) < 0x14u) )
            goto LABEL_80;
          v43 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2);
          Status = v43;
          if ( !v43 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
            goto LABEL_80;
          WPP_SF_qD(0x12u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v43);
        }
      }
      if ( !v41 )
      {
LABEL_81:
        if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
        {
          v44 = *(_DWORD *)(a2 + 124);
          if ( (v44 & 0x40) != 0 )
          {
            if ( !*(_QWORD *)(a2 + 1296) )
            {
              *(_DWORD *)(a2 + 124) = v44 & 0xFFFFFBFF;
              Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
            }
          }
          else
          {
            ndisCancelWaitWake(a2);
          }
        }
        goto LABEL_85;
      }
LABEL_80:
      ndisMiniportPMParametersUpdated(a2);
      goto LABEL_81;
    }
  }
LABEL_85:
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721916;
  if ( *(_DWORD *)(a2 + 480) == 2 )
    ndisSetMediaDisconnectTimer(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v45);
  *(_QWORD *)(a2 + 4512) = a2;
  *(_QWORD *)(a2 + 4520) = ndisSignalD0CompleteWorkItem;
  *(_QWORD *)(a2 + 5416) = a2;
  *(_QWORD *)(a2 + 5424) = ndisDevicePowerOn;
  *(_QWORD *)(a2 + 5504) = a2;
  *(_QWORD *)(a2 + 5512) = ndisDevicePowerDown;
  *(_QWORD *)(a2 + 5456) = a2 + 5416;
  *(_QWORD *)(a2 + 5448) = ndisWorkItemHandler;
  *(_QWORD *)(a2 + 5432) = 0LL;
  *(_QWORD *)(a2 + 5536) = ndisWorkItemHandler;
  *(_QWORD *)(a2 + 5544) = a2 + 5504;
  *(_QWORD *)(a2 + 5520) = 0LL;
  if ( (*(_BYTE *)(a2 + 1064) & 6) != 0 )
    ndisSelectiveSuspendInitialize((_QWORD *)a2);
  if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
  {
    ndisAoAcInitialize((_QWORD *)a2);
    if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 && *(_QWORD *)(a2 + 4488) )
      ndisAoAcStart((struct _NDIS_MINIPORT_BLOCK *)a2);
    ndisReadModernStandyWoLMagicPacketKeywords((_DWORD *)a2);
    ndisMRegisterPDCTaskClient(a2);
    ndisMInitializePDCTaskClient((char *)a2);
  }
  if ( *(_DWORD *)(a2 + 464) )
  {
    if ( nullCreateFilter(v135) )
      goto LABEL_94;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x14u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
    v111 = 30;
    v46 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
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
    if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2720) + 88LL), *(_QWORD *)(a2 + 2720) + 126LL, v135) )
    {
LABEL_94:
      v46 = v112;
      *(_QWORD *)(v135[0] + 296LL) = a2;
      goto LABEL_95;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x13u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
    v111 = 9;
    v46 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        9LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        4,
        9);
  }
LABEL_95:
  if ( *(_DWORD *)(a2 + 1836) != 16 || v108 < 6u )
    goto LABEL_96;
  v89 = a2 + 600;
  if ( nullCreateFilter((_QWORD *)(a2 + 600)) )
  {
    *(_QWORD *)(*(_QWORD *)v89 + 296LL) = a2;
LABEL_96:
    if ( !*(_DWORD *)(a2 + 464) )
      *(_BYTE *)(a2 + 1998) = 1;
    v47 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 1u);
    v49 = v47;
    if ( v47 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_qD(0x16u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v47);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v48,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          8,
          v49);
      v111 = 31;
      v46 = 1;
    }
    else
    {
      v106 = 1;
      if ( !v46 )
      {
        if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3856));
        v50 = *(_DEVICE_OBJECT **)(a2 + 3856);
        v111 = 1;
        v51 = IoRegisterDeviceInterface(
                v50,
                &InterfaceClassGuid,
                (PUNICODE_STRING)(a2 + 3816),
                (PUNICODE_STRING)(a2 + 360));
        v53 = v51;
        if ( v51 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_qD(0x18u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v51);
          if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
            Template_jqxqq(
              v52,
              &InitializeAdapterFailed,
              (const GUID *)(a2 + 4032),
              a2 + 4032,
              *(_DWORD *)(a2 + 4080),
              *(_QWORD *)(a2 + 4048),
              10,
              v53);
          v64 = v119;
          v9 = 1;
          v111 = 35;
          goto LABEL_278;
        }
        v54 = *(_QWORD *)(a2 + 4640);
        v107 = 1;
        if ( v54 && (*(_BYTE *)(v54 + 8) & 3) == 3 )
        {
          v90 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3856), &v145, 0LL, (PUNICODE_STRING)(a2 + 4856));
          v91 = v90;
          if ( Status < 0 )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
              WPP_SF_qD(0x19u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v90);
            if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
              Template_jqxqq(
                v52,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4032),
                a2 + 4032,
                *(_DWORD *)(a2 + 4080),
                *(_QWORD *)(a2 + 4048),
                0,
                v91);
            v111 = 34;
            goto LABEL_276;
          }
          v114 = 1;
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 3848) + 48LL) &= ~0x80u;
        v11 = *(_QWORD *)(a2 + 2720);
        if ( v11 )
        {
          v55 = *(struct _NDIS_IF_BLOCK **)(a2 + 4064);
          if ( !v55 )
          {
            updated = -1073741823;
LABEL_285:
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
              WPP_SF_qD(0x1Au, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, updated);
            if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
              Template_jqxqq(
                v52,
                &InitializeAdapterFailed,
                (const GUID *)(a2 + 4032),
                a2 + 4032,
                *(_DWORD *)(a2 + 4080),
                *(_QWORD *)(a2 + 4048),
                11,
                updated);
            v111 = 32;
LABEL_276:
            v64 = v119;
            goto LABEL_277;
          }
          updated = ndisIfUpdateInterfaceOnInitialize((struct _TlgProvider_t *)a2, v55, v11);
        }
        else
        {
          updated = -1073741823;
        }
        if ( !updated )
        {
          v21 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
          v113 = 1;
          if ( !v21 )
          {
            v57 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
            *(_QWORD *)(a2 + 4600) = v57;
            if ( v57 )
              memset(v57, 0, 0x20uLL);
          }
          if ( !*(_QWORD *)(a2 + 1776) )
          {
            memset(v138, 0, 0x28uLL);
            v138[2] = a2;
            OidList = ndisQueryOidList((__int64)v138);
            v60 = OidList;
            if ( OidList )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_qD(0x1Bu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, OidList);
              if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
                Template_jqxqq(
                  v59,
                  &InitializeAdapterFailed,
                  (const GUID *)(a2 + 4032),
                  a2 + 4032,
                  *(_DWORD *)(a2 + 4080),
                  *(_QWORD *)(a2 + 4048),
                  12,
                  v60);
            }
          }
          v61 = *(_BYTE **)(a2 + 4120);
          if ( v61 )
          {
            if ( *v61 == 1 )
            {
              v61[1] = 1;
              v62 = *(_QWORD *)(a2 + 4120);
              *(_OWORD *)(v62 + 196) = *(_OWORD *)(v62 + 8);
              *(_OWORD *)(v62 + 212) = *(_OWORD *)(v62 + 24);
              *(_OWORD *)(v62 + 228) = *(_OWORD *)(v62 + 40);
              *(_OWORD *)(v62 + 244) = *(_OWORD *)(v62 + 56);
              *(_OWORD *)(v62 + 260) = *(_OWORD *)(v62 + 72);
              *(_OWORD *)(v62 + 276) = *(_OWORD *)(v62 + 88);
              *(_OWORD *)(v62 + 292) = *(_OWORD *)(v62 + 104);
              *(_OWORD *)(v62 + 308) = *(_OWORD *)(v62 + 120);
              *(_OWORD *)(v62 + 324) = *(_OWORD *)(v62 + 136);
              *(_OWORD *)(v62 + 340) = *(_OWORD *)(v62 + 152);
              *(_OWORD *)(v62 + 356) = *(_OWORD *)(v62 + 168);
              *(_QWORD *)(v62 + 372) = *(_QWORD *)(v62 + 184);
              *(_DWORD *)(v62 + 380) = *(_DWORD *)(v62 + 192);
              ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4120) + 196LL);
            }
            v63 = *(_QWORD *)(a2 + 4120);
            if ( *(_BYTE *)(v63 + 2) == 1 )
            {
              *(_BYTE *)(v63 + 3) = 1;
              v94 = *(_QWORD *)(a2 + 4120);
              *(_OWORD *)(v94 + 872) = *(_OWORD *)(v94 + 892);
              *(_DWORD *)(v94 + 888) = *(_DWORD *)(v94 + 908);
            }
          }
          v64 = v119;
          if ( (unsigned __int8)ndisQueueMiniportOnDriver(a2, v119) )
          {
            v115 = 1;
            ndisSetDeviceInterfaceState(a2, 1u);
            if ( (int)Ndis::BindRegistry::Reload((struct _NDIS_MINIPORT_BLOCK *)a2, 0LL, v65) >= 0 )
            {
              ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
              v8 = 0;
              if ( Ndis::BindState::SetBinding(
                     (Ndis::BindState *)(a2 + 5064),
                     BindingDisabled,
                     Reason_MiniportDeviceNotStarted)
                && (unsigned __int8)byte_1C0092623 >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v139);
                WPP_SF_Zq(0x1Cu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (const wchar_t *)v139[1], v139[0]);
              }
              if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5064), DatapathRunning, PauseReason_InitialPause)
                && (unsigned __int8)byte_1C0092623 >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
                WPP_SF_Zq(0x1Du, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (const wchar_t *)v140[1], v140[0]);
              }
              if ( Ndis::BindState::SetPause(
                     (Ndis::BindState *)(a2 + 5064),
                     DatapathRunning,
                     PauseReason_RemovingMiniport)
                && (unsigned __int8)byte_1C0092623 >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v141);
                WPP_SF_Zq(0x1Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (const wchar_t *)v141[1], v141[0]);
              }
              if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
                && Ndis::BindState::SetBinding(
                     (Ndis::BindState *)(a2 + 5064),
                     BindingDisabled,
                     Reason_DefaultPortNotActive)
                && (unsigned __int8)byte_1C0092623 >= 4u )
              {
                ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
                WPP_SF_Zq(0x1Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (const wchar_t *)v142[1], v142[0]);
              }
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
              Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
              ndisSetupWmiNode(
                a2,
                *(const void ***)(a2 + 3880),
                *(unsigned __int16 *)(a2 + 3832) + 2,
                (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
                &WnodeEventItem);
              v68 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v69 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                *v69 = *(_WORD *)(a2 + 3832);
                memmove(v69 + 1, *(const void **)(a2 + 3840), *(unsigned __int16 *)(a2 + 3832));
                v70 = IoWMIWriteEvent(v68);
                v72 = v70;
                if ( v70 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_qD(0x20u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v70);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
                    Template_qqq(v71, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4032), v72, 12, 0);
                  ExFreePoolWithTag(v68, 0);
                }
              }
              v124 = (_BYTE)ndisAcOnLine == 1;
              ndisNotifyMiniports(a2, v66, &v124, v67);
              *(_QWORD *)(a2 + 400) = v135[0];
              if ( v108 < 6u )
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
                    if ( *(_QWORD *)(v64 + 232) )
                      v97 = ndisMDeferredSendPacketsSG;
                    *(_QWORD *)(a2 + 632) = v97;
                    goto LABEL_129;
                  }
                  v96 = ndisMSendPacketsToMiniport;
                }
                *(_QWORD *)(a2 + 2040) = v96;
                *(_QWORD *)(a2 + 2032) = v96;
              }
              else
              {
                *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
                *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
              }
LABEL_129:
              KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
              *(_DWORD *)(a2 + 1856) = 722503;
              ndisMSetIndicatePacketHandler(a2);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v73);
              if ( ndisEnforceDisconnectedStandby )
              {
                if ( (v98 = *(_DWORD *)(a2 + 124), (v98 & 0x200000) != 0) && ndisAoAcCapable
                  || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
                {
                  v99 = *(_DWORD *)(a2 + 3888);
                  if ( (v99 & 0x10) == 0 )
                  {
                    *(_DWORD *)(a2 + 124) = v98 & 0xFFFFFFBF;
                    *(_DWORD *)(a2 + 3888) = v99 | 0x10;
                    ndisUpdateAndIndicatePMCapabilities(a2);
                  }
                }
              }
              if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
                && *(_DWORD *)(a2 + 1832) == 14 )
              {
                v21 = *(_BYTE *)(a2 + 1001) == 2;
                v127 = 0LL;
                InputBuffer = *(_QWORD *)(a2 + 3856);
                LODWORD(v127) = 4;
                BYTE4(v127) = 1;
                if ( !v21
                  || (*(_DWORD *)(a2 + 1008) & 1) == 0
                  || *(_DWORD *)(a2 + 1012) < 0x10u
                  || *(_DWORD *)(a2 + 1016) < 0x4Au
                  || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
                  || (*(_DWORD *)(a2 + 1052) & 1) == 0
                  || (v100 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v127) = 1, (_BYTE)v100 != 3) )
                {
                  BYTE5(v127) = 0;
                }
                ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
              }
              v74 = 0;
              v111 = 0;
              v110 = 0;
              v109 = 0;
              goto LABEL_134;
            }
            v111 = 39;
          }
LABEL_277:
          v9 = 1;
          goto LABEL_278;
        }
        goto LABEL_285;
      }
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x17u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v46);
    OutputBufferLength[0] = v111;
    NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
    v64 = v119;
    v9 = v106;
LABEL_135:
    if ( !v111 )
      goto LABEL_136;
    goto LABEL_278;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
    WPP_SF_q(0x15u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
  *(_QWORD *)v89 = 0LL;
  v111 = 30;
  if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
  {
    Template_jqxqq(
      30LL,
      &InitializeAdapterFailed,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      7,
      30);
LABEL_209:
    v64 = v119;
    goto LABEL_210;
  }
  v64 = v119;
  v9 = 0;
LABEL_278:
  Ndis::BindRegistry::Reload((struct _NDIS_MINIPORT_BLOCK *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v11);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  if ( v113 )
  {
    *(_DWORD *)(a2 + 4088) = 2;
    *(_DWORD *)(a2 + 4092) = 0;
    v92 = *(_QWORD *)(a2 + 4064);
    if ( *(_DWORD *)(v92 + 1112) != 2 )
    {
      *(_DWORD *)(v92 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    v93 = *(void **)(a2 + 4600);
    if ( v93 )
    {
      ExFreePoolWithTag(v93, 0);
      *(_QWORD *)(a2 + 4600) = 0LL;
    }
  }
LABEL_136:
  if ( v9 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3848), 2u);
  if ( v107 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4176), 0);
  if ( v114 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4856), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4856));
    *(_QWORD *)(a2 + 4864) = 0LL;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
    LOBYTE(v122) = -(char)v122;
    ndisMCommonHaltMiniport(a2);
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v118 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 && *(_QWORD *)(a2 + 504) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x21u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
      ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    }
    v103 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v104 = v103;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722741;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v104);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_145;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v103);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
LABEL_145:
  if ( v115 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x22u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
    ndisDeQueueMiniportOnDriver(a2, v64);
  }
  if ( v109 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v116 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v110 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x23u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
    ndisDereferenceDriver(v64, 0, 2u);
  }
  v75 = *(void **)(a2 + 2720);
  if ( v75 )
  {
    if ( v108 >= 6u )
      ExFreePoolWithTag(v75, 0);
    *(_QWORD *)(a2 + 2720) = 0LL;
  }
  if ( v117 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3312), 5403508);
    *(_QWORD *)(a2 + 3312) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x24u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, v111);
  return v111;
}
