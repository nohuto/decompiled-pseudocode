/*
 * XREFs of DpiFdoStartAdapter @ 0x1C01F913C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0209958 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pt @ 0x1C0027C94 (McTemplateK0pt.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C003AB6C (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C003ADA8 (NotifyUserMSBDAIfApplicable.c)
 *     SendBDDDiagTelemetry @ 0x1C003AEC0 (SendBDDDiagTelemetry.c)
 *     DxgkDiagCalcDuration1us @ 0x1C003B9C8 (DxgkDiagCalcDuration1us.c)
 *     DpiHybridInternalPanelOverride @ 0x1C003C508 (DpiHybridInternalPanelOverride.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C014F97C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C015C964 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DxgkAddAdapter @ 0x1C01A18E8 (DxgkAddAdapter.c)
 *     DxgkQueryRequiredDmaQueueEntry @ 0x1C01A1EAC (DxgkQueryRequiredDmaQueueEntry.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C01A8060 (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01EFBD0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01F0410 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01F1F0C (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoConnectInterrupt @ 0x1C01F2108 (DpiFdoConnectInterrupt.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01F2788 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoEnumChildDevices @ 0x1C01F415C (DpiFdoEnumChildDevices.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7750 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C01F81A0 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01F88F0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01FB2A0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiGetDevicePropertyString @ 0x1C01FDC14 (DpiGetDevicePropertyString.c)
 *     DpiQueryMiniportInterface @ 0x1C01FE2B8 (DpiQueryMiniportInterface.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C01FEF2C (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C30 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiDxgkDdiStartDevice @ 0x1C020ADD8 (DpiDxgkDdiStartDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C020AED8 (DpiDxgkDdiStopDevice.c)
 *     MonitorInitializeAdapterDone @ 0x1C022E4F0 (MonitorInitializeAdapterDone.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rdi
  char *v7; // r12
  char v8; // bl
  char *DeviceExtension; // r14
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 started; // rsi
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD, _QWORD, __int64); // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  bool v27; // cf
  bool v28; // zf
  __int64 v29; // rcx
  NTSTATUS LocallyUniqueId; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rbx
  __int64 v38; // rax
  unsigned int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  int DevicePropertyString; // eax
  bool *v47; // rcx
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _DWORD *v51; // rbx
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rbx
  int v56; // eax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _BYTE *v59; // rbx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  bool v64; // zf
  bool v65; // al
  __int64 v66; // r8
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rcx
  int RelatedObjects; // eax
  __int64 v71; // rdx
  int Caps; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  BOOLEAN v90; // dl
  NTSTATUS v91; // eax
  int v92; // eax
  int v93; // eax
  NTSTATUS v94; // eax
  __int64 v95; // rcx
  __int64 v96; // rax
  struct _ERESOURCE *v97; // rdx
  unsigned int v98; // ebx
  struct _DEVICE_OBJECT *v99; // rcx
  int v100; // eax
  __int64 v101; // rdx
  unsigned int i; // r13d
  __int64 v103; // rcx
  DXGADAPTER *v104; // rcx
  _DWORD *v105; // rax
  _DWORD *v106; // r12
  __int64 v107; // rcx
  unsigned int v108; // eax
  PVOID v109; // rcx
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  __int64 (__fastcall *v112)(__int64, _QWORD); // rax
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // r12
  __int64 v116; // rax
  __int64 (__fastcall *v117)(_QWORD, char *); // rax
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // r12
  __int64 v121; // rax
  _DWORD *v122; // rax
  _DWORD *v123; // r12
  __int64 v124; // rcx
  __int64 v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rbx
  int v128; // eax
  unsigned __int64 v130; // [rsp+20h] [rbp-128h]
  __int64 v131; // [rsp+30h] [rbp-118h]
  __int64 v132; // [rsp+38h] [rbp-110h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v133; // [rsp+40h] [rbp-108h]
  PVOID P; // [rsp+48h] [rbp-100h] BYREF
  bool *v135; // [rsp+50h] [rbp-F8h]
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v137; // [rsp+60h] [rbp-E8h] BYREF
  int v138; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v139; // [rsp+70h] [rbp-D8h]
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v141; // [rsp+80h] [rbp-C8h]
  char v142[4]; // [rsp+88h] [rbp-C0h] BYREF
  int v143; // [rsp+8Ch] [rbp-BCh]
  _QWORD v144[3]; // [rsp+90h] [rbp-B8h] BYREF
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+A8h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-90h] BYREF
  _DWORD v147[8]; // [rsp+C8h] [rbp-80h] BYREF
  _DWORD v148[8]; // [rsp+E8h] [rbp-60h] BYREF

  memset(v147, 0, 28);
  v6 = 0LL;
  v7 = 0LL;
  v8 = a2;
  BYTE4(v131) = 0;
  BYTE3(v131) = 0;
  BYTE2(v131) = 0;
  LOWORD(v131) = 0;
  v133 = a4;
  v135 = a3;
  BYTE5(v131) = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v137 = MEMORY[0xFFFFF78000000320];
  v28 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v141 = v11;
  if ( v28 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v6 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                96,
                1) >= 0 )
    {
      if ( a6 )
      {
        v17 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v17 )
        {
          v18 = v17(*((_QWORD *)DeviceExtension + 126), a5, a6);
          started = v18;
          if ( v18 < 0 )
          {
            v20 = WdLogNewEntry5_WdError(v19);
            v21 = *((_QWORD *)DeviceExtension + 131);
LABEL_12:
            *(_QWORD *)(v20 + 24) = v21;
            *(_QWORD *)(v20 + 32) = started;
            goto LABEL_13;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x60uLL);
    }
    *((_DWORD *)DeviceExtension + 952) = 0;
    v8 = BYTE5(v131);
  }
  v12 = DpiFdoConnectInterrupt(a1);
  started = v12;
  if ( v12 == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdEvent(v14, v13);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdEvent(v16);
  }
  else
  {
    if ( v12 < 0 )
      goto LABEL_15;
    BYTE4(v131) = 1;
  }
  if ( DeviceExtension[1136] == 1 )
  {
    if ( DeviceExtension[1140] == 1 && v8 && byte_1C007A755 && !DpiFdoIsCompatibleWithHighResolutionBoot((__int64)a1) )
    {
      v139 = 0LL;
      v138 = 8006;
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerEnter, v23, 8006);
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v138, 8006);
      memset(v148, 0, sizeof(v148));
      v148[0] = 18;
      x86BiosCall(16LL, v148);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v138);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v138);
    }
    if ( v6 )
    {
      v26 = *(_DWORD *)(v11 + 28);
      if ( byte_1C007A755 )
      {
        v27 = v26 < 0x300E;
        v28 = v26 == 12302;
      }
      else
      {
        v27 = v26 < 0x2005;
        v28 = v26 == 8197;
      }
      *(_BYTE *)(v6 + 3736) = (4 * (!v27 && !v28)) | *(_BYTE *)(v6 + 3736) & 0xFB;
    }
  }
  while ( 1 )
  {
    LODWORD(started) = ExUuidCreate((UUID *)(DeviceExtension + 2520));
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v20 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v20 + 24) = (int)started;
      goto LABEL_13;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 317);
  started = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_15;
  if ( v6 )
  {
    v31 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v6);
    v33 = v31;
    if ( v31 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = v33;
      WdLogEvent5_WdError(v34);
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1C8uLL, 0x74727044u);
  v37 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_42:
    LODWORD(started) = -1073741670;
    v38 = WdLogNewEntry5_WdLowResource(v36);
    *(_QWORD *)(v38 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v38);
    goto LABEL_169;
  }
  memset(PoolWithTag, 0, 0x1C8uLL);
  v39 = *(_DWORD *)(v11 + 28);
  v40 = 16387;
  if ( v39 > 0x4003 )
  {
    *v37 = 456;
    v37[1] = 36870;
    goto LABEL_52;
  }
  if ( v39 <= 0x300E )
  {
    v40 = 8197;
    if ( v39 > 0x2005 )
    {
      *v37 = 256;
      v37[1] = 12302;
      goto LABEL_52;
    }
    *v37 = 184;
  }
  else
  {
    *v37 = 264;
  }
  v37[1] = v40;
LABEL_52:
  *((_QWORD *)v37 + 1) = a1;
  *((_QWORD *)v37 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)v37 + 3) = DpGetDeviceInformation;
  *((_QWORD *)v37 + 4) = DpIndicateChildStatus;
  *((_QWORD *)v37 + 5) = DpMapMemory;
  *((_QWORD *)v37 + 6) = DpQueueDpc;
  *((_QWORD *)v37 + 7) = DpQueryServices;
  *((_QWORD *)v37 + 8) = DpReadDeviceSpace;
  *((_QWORD *)v37 + 9) = DpSynchronizeExecution;
  *((_QWORD *)v37 + 10) = DpUnmapMemory;
  *((_QWORD *)v37 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)v37 + 12) = DpIsDevicePresent;
  *((_QWORD *)v37 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)v37 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)v37 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)v37 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)v37 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)v37 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)v37 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)v37 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)v37 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)v37 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)v37 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)v37 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)v37 + 25) = DxgSetPowerComponentActiveCB;
  *((_QWORD *)v37 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)v37 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)v37 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)v37 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)v37 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)v37 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)v37 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)v37 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)v37 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)v37 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)v37 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)v37 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)v37 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)v37 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)v37 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)v37 + 42) = DpIndicateConnectorChange;
  *((_QWORD *)v37 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)v37 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)v37 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)v37 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)v37 + 47) = DxgkFreeContiguousMemoryCB;
  *((_QWORD *)v37 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)v37 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)v37 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)v37 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)v37 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)v37 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)v37 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)v37 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)v37 + 56) = DpReportDiagnostic;
  *((_QWORD *)v37 + 41) = DxgkInvalidateHwContextCB;
  v147[0] = DxgkQueryRequiredDmaQueueEntry();
  *(_OWORD *)&v147[1] = *(_OWORD *)(DeviceExtension + 2520);
  *(_QWORD *)&v147[5] = *((_QWORD *)DeviceExtension + 317);
  qword_1C007AA90 = (__int64)KeGetCurrentThread();
  v130 = (unsigned __int64)(DeviceExtension + 2548);
  qword_1C007AA98 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(v11, *((_QWORD *)DeviceExtension + 6), v147, v37);
  ExFreePoolWithTag(v37, 0x74727044u);
  qword_1C007AA98 = 0LL;
  qword_1C007AA90 = 0LL;
  if ( (int)started < 0 )
  {
    v44 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v44 + 24) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(v44 + 32) = started;
    WdLogEvent5_WdError(v44);
    if ( (_DWORD)started != -1071775735 )
    {
      if ( (_DWORD)started == -1071774944 && DeviceExtension[1136] )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45);
        v49[3] = 275LL;
        v49[4] = 26LL;
        v49[5] = v11;
        v50 = (unsigned __int8)byte_1C007A755;
        v49[7] = 0LL;
        v49[6] = v50;
        WdLogEvent5_WdCriticalError(v49);
      }
      goto LABEL_169;
    }
    P = 0LL;
    if ( !DeviceExtension[1136] )
      goto LABEL_169;
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             (__int64)&v132);
    v48 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_169;
    }
    goto LABEL_56;
  }
  if ( DeviceExtension[1136] )
  {
    memset(&dword_1C007A9E8, 0, 0x20uLL);
    dword_1C007AA00 = -1;
    memset(&xmmword_1C007AA08, 0, 0x80uLL);
    dword_1C007AA88 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 638) )
  {
    v51 = DeviceExtension + 2548;
    if ( *((_DWORD *)DeviceExtension + 637) > 1u )
    {
      v52 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v52 + 24) = (unsigned int)*v51;
      WdLogEvent5_WdWarning(v52);
      *v51 = 1;
    }
  }
  BYTE3(v131) = 1;
  if ( !v6 )
    goto LABEL_158;
  if ( *(_DWORD *)(v6 + 2544) )
  {
    v53 = DpiFdoEnumChildDevices((__int64)a1);
    started = v53;
    if ( v53 < 0 )
      goto LABEL_15;
  }
  v54 = *(_DWORD *)(v6 + 2548);
  if ( !v54 )
    goto LABEL_77;
  v7 = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v54, 0x74727044u);
  if ( !v7 )
    goto LABEL_42;
  v55 = 0LL;
  if ( !*(_DWORD *)(v6 + 2548) )
    goto LABEL_77;
  while ( 1 )
  {
    v56 = DMgrAcquireGdiViewId(&v7[4 * v55]);
    started = v56;
    if ( v56 < 0 )
      break;
    v55 = (unsigned int)(v55 + 1);
    if ( (unsigned int)v55 >= *(_DWORD *)(v6 + 2548) )
      goto LABEL_77;
  }
  *(_DWORD *)(v6 + 2548) = v55;
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v57);
  v58[3] = (unsigned int)v55;
  v58[4] = a1;
  v58[5] = started;
  WdLogEvent5_WdError(v58);
  if ( (_DWORD)v55 )
  {
LABEL_77:
    v59 = (_BYTE *)(v6 + 3736);
    v60 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(v6 + 3736), v133);
    started = v60;
    if ( v60 >= 0 )
    {
      v61 = *(_QWORD *)(v6 + 3728);
      if ( v61 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v61 + 24));
      }
      else
      {
        v62 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v62 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v62);
      }
      BYTE2(v131) = 1;
      LOBYTE(v14) = *(_BYTE *)(v6 + 3737) ^ (*(_BYTE *)(v6 + 3737) ^ (2 * *(_BYTE *)(v6 + 3737))) & 8;
      *(_BYTE *)(v6 + 3737) = v14;
      if ( (v14 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
      {
        v63 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v63 + 24) = started;
        WdLogEvent5_WdError(v63);
        *(_BYTE *)(v6 + 3737) &= ~8u;
        LOBYTE(v14) = *(_BYTE *)(v6 + 3737);
      }
      if ( (v14 & 8) == 0 && !*(_QWORD *)(v11 + 208) )
      {
        started = -1073741735LL;
        goto LABEL_15;
      }
      if ( qword_1C007A768 )
      {
        if ( *(_BYTE *)(v6 + 2556) && (v14 & 1) != 0 )
        {
          v64 = (_BYTE)word_1C007A75C == 0;
LABEL_97:
          if ( !v64 )
            goto LABEL_99;
          goto LABEL_98;
        }
      }
      else
      {
        if ( (v14 & 1) != 0 )
        {
LABEL_98:
          qword_1C007A768 = (__int64)a1;
          goto LABEL_99;
        }
        if ( DpiHybridInternalPanelOverride() && (*v59 & 0x20) != 0 && *(_BYTE *)(v6 + 1136) )
        {
          v64 = (*v59 & 0x40) == 0;
          goto LABEL_97;
        }
      }
LABEL_99:
      if ( (*v59 & 0x40) != 0 )
      {
        v14 = qword_1C007A760;
        if ( qword_1C007A760 && (struct _DEVICE_OBJECT *)qword_1C007A760 != a1 )
        {
          if ( !*(_BYTE *)(v6 + 2556) || (_BYTE)word_1C007A75C )
          {
            *v59 &= ~0x40u;
            goto LABEL_106;
          }
          *(_BYTE *)(*(_QWORD *)(qword_1C007A760 + 64) + 3736LL) &= ~0x40u;
        }
        qword_1C007A760 = (__int64)a1;
        HIBYTE(word_1C007A75C) = (*(_BYTE *)(v6 + 3737) & 2) != 0;
      }
LABEL_106:
      if ( !qword_1C007A768 || !qword_1C007A760 || (_BYTE)word_1C007A75C )
        goto LABEL_112;
      LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(qword_1C007A768 + 64) + 2556LL);
      if ( *(_BYTE *)(*(_QWORD *)(qword_1C007A760 + 64) + 2556LL) )
      {
        if ( !(_BYTE)v14 )
          goto LABEL_111;
      }
      else if ( (_BYTE)v14 )
      {
LABEL_111:
        LOBYTE(word_1C007A75C) = 0;
        goto LABEL_112;
      }
      LOBYTE(word_1C007A75C) = 1;
      *((_BYTE *)DXGGLOBAL::GetGlobal(v14) + 545) = 1;
LABEL_112:
      v65 = (*v59 & 1) != 0 || (_BYTE)word_1C007A75C && (*v59 & 0x40) != 0;
      v47 = v135;
      *v135 = v65;
      if ( *(_BYTE *)(v6 + 1136) && (*v59 & 1) == 0 )
      {
        v48 = -1071775740LL;
        LODWORD(started) = -1071775740;
LABEL_56:
        v20 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v20 + 24) = v48;
LABEL_13:
        WdLogEvent5_WdError(v20);
        goto LABEL_169;
      }
      if ( *(_DWORD *)(v6 + 3344) )
      {
        v66 = *(_QWORD *)(v6 + 48);
        v67 = *(_QWORD *)(v6 + 40);
        v144[0] = 67108861LL;
        v144[1] = 0LL;
        v144[2] = 0LL;
        v68 = DpiDxgkDdiDisplayDetectControl(v6, v67, v66, v144, v130, DeviceExtension + 2544, v131, v132);
        started = v68;
        if ( v68 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v69);
          v21 = *(_QWORD *)(v11 + 1128);
          goto LABEL_12;
        }
      }
      RelatedObjects = DpiFdoCreateRelatedObjects((__int64)a1, *(_DWORD *)(v6 + 2548), (__int64)v7, (__int64)v133);
      started = RelatedObjects;
      if ( RelatedObjects < 0 )
        goto LABEL_15;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = 0LL;
      if ( (*v59 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
      {
        MonitorInitializeAdapterDone(*(DXGADAPTER **)(v6 + 3728), v133);
        DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      }
      BYTE1(v131) = 1;
      if ( *(_DWORD *)(v6 + 3088) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v6, v71, v6 + 3080);
        v75 = Caps;
        if ( Caps < 0 )
        {
          v76 = WdLogNewEntry5_WdEvent(v74, v73);
          *(_QWORD *)(v76 + 24) = v75;
          WdLogEvent5_WdEvent(v76);
          *(_DWORD *)(v6 + 3088) = -1;
          memset((void *)(v6 + 3016), 0, 0x40uLL);
        }
      }
      v77 = DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, &Handle);
      v80 = v77;
      if ( v77 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v6 + 4712) < 0 )
        {
          v86 = WdLogNewEntry5_WdEvent(v85, v84);
          *(_QWORD *)(v86 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v86);
        }
        ZwClose(Handle);
      }
      else
      {
        v81 = WdLogNewEntry5_WdEvent(v79, v78);
        *(_QWORD *)(v81 + 24) = v80;
        WdLogEvent5_WdEvent(v81);
      }
      v87 = *(_QWORD *)(v6 + 4728);
      if ( v87 )
      {
        v88 = *(_QWORD *)(v6 + 4728);
        if ( *(_QWORD *)(v87 + 48) && *(_BYTE *)v87 )
        {
          *(_BYTE *)v87 = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v130) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 4728) + 2LL);
            McTemplateK0pt(&DxgkControlGuid_Context, &EventDpiFdoThermalActiveCooling, v83, a1, v130);
          }
          v89 = *(_QWORD *)(v6 + 4728);
          LOBYTE(v82) = *(_BYTE *)(v89 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v89 + 48))(*(_QWORD *)(v89 + 16), v82);
          v88 = *(_QWORD *)(v6 + 4728);
        }
        if ( *(_QWORD *)(v88 + 56) && *(_BYTE *)(v88 + 1) )
        {
          *(_BYTE *)(v88 + 1) = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v130) = *(_DWORD *)(*(_QWORD *)(v6 + 4728) + 4LL);
            McTemplateK0xq((unsigned int)v130, &EventDpiFdoThermalPassiveCooling, v83, a1, v130);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v6 + 4728) + 56LL))(
            *(_QWORD *)(*(_QWORD *)(v6 + 4728) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v6 + 4728) + 4LL));
        }
      }
      if ( !*(_BYTE *)(v6 + 1139) || (v90 = 0, !*(_BYTE *)(v6 + 480)) )
        v90 = 1;
      v91 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 2608), v90);
      started = v91;
      if ( v91 < 0 )
        goto LABEL_15;
      LOBYTE(v131) = 1;
      v92 = DpiFdoInitializeGpuVirtualization((__int64)a1);
      started = v92;
      if ( v92 < 0 )
        goto LABEL_15;
LABEL_158:
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v93 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v93;
      *((_DWORD *)DeviceExtension + 59) = 2;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 481) )
        {
          DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v6 + 3728));
          if ( *(_BYTE *)(v6 + 5296) )
          {
            v94 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 5280), 1u);
            started = v94;
            if ( v94 < 0 )
            {
              v96 = WdLogNewEntry5_WdError(v95);
              *(_QWORD *)(v96 + 24) = started;
              WdLogEvent5_WdError(v96);
LABEL_168:
              LOBYTE(v131) = BYTE2(v131);
              BYTE1(v131) = BYTE2(v131);
              goto LABEL_169;
            }
          }
        }
        if ( !*(_BYTE *)(v6 + 480) )
        {
          v97 = (struct _ERESOURCE *)*(unsigned int *)(v6 + 3348);
          if ( (_DWORD)v97 != -1 )
            LPMDisplayRegisterInternalDisplay(*(struct _FILE_OBJECT **)(v6 + 3728), v97);
        }
        DpiBrightnessStartDevice(a1);
      }
      DxgkMiracastQueryMiracastSupportInternal(0LL);
      goto LABEL_168;
    }
LABEL_15:
    v20 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v20 + 24) = started;
    goto LABEL_13;
  }
LABEL_169:
  v98 = 0;
  if ( v6 )
    v98 = (*(unsigned __int8 *)(v6 + 3736) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v6 + 3736) & 1 | (2
                                                                                       * (*(_BYTE *)(v6 + 480) & 1 | (2 * (*(_BYTE *)(v6 + 1136) & 1 | (2 * (*(_BYTE *)(v6 + 2556) & 1 | (4 * (*(_BYTE *)(v6 + 3736) & 0x84 | *(_BYTE *)(v6 + 3737) & 1 | (2 * (*(_BYTE *)(v6 + 3736) & 0x38 | (*(_DWORD *)(v6 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v6 + 1143) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v99 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v99);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v100 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v100;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v6 )
    {
      if ( (_BYTE)v131 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 2608), 0);
      DpiFdoCleanupGpuVirtualization(v6);
      if ( BYTE1(v131) == 1 )
        DpiFdoDestroyRelatedObjects((__int64)a1, (__int64)v133);
      v101 = 0LL;
      if ( v7 )
      {
        for ( i = 0; i < *(_DWORD *)(v6 + 2548); ++i )
        {
          LOBYTE(v101) = 1;
          DMgrReleaseGdiViewId(*(unsigned int *)&v7[4 * i], v101);
        }
        ExFreePoolWithTag(v7, 0);
        v11 = v141;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C007A760 == a1 )
      {
        word_1C007A75C = 0;
        qword_1C007A760 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C007A768 == a1 )
      {
        LOBYTE(word_1C007A75C) = 0;
        qword_1C007A768 = 0LL;
      }
      if ( BYTE2(v131) == 1 )
      {
        v103 = *((_QWORD *)DeviceExtension + 61);
        if ( v103 )
        {
          PoFxUnregisterDevice(v103);
          *(_QWORD *)(*(_QWORD *)(v6 + 3728) + 2504LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v104 = *(DXGADAPTER **)(v6 + 3728);
        if ( v104 )
        {
          DXGADAPTER::Stop(v104, 0LL, 0);
          v104 = *(DXGADAPTER **)(v6 + 3728);
        }
        DxgkReleaseAdapterFdoReference(v104);
        *(_QWORD *)(v6 + 3728) = 0LL;
      }
      DpiFdoRemoveChildDescriptors((__int64)a1);
    }
    if ( BYTE3(v131) == 1 && v11 )
    {
      if ( !DeviceExtension[1136] )
        goto LABEL_200;
      LODWORD(v132) = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v105 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v106 = v105;
      if ( v105 )
      {
        memset(v105, 0, 0x48uLL);
        v107 = *((_QWORD *)DeviceExtension + 317);
        *v106 = 30;
        v106[10] = 0;
        *((_QWORD *)v106 + 4) = 0LL;
        v106[1] = 72;
        *((_QWORD *)v106 + 1) = 0LL;
        *((_QWORD *)v106 + 2) = 0LL;
        *((_QWORD *)v106 + 3) = 0LL;
        v108 = v132;
        *((_QWORD *)v106 + 8) = v107;
        v106[12] = 98;
        v106[13] = 1;
        *((_QWORD *)v106 + 7) = v108;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v106);
        ExFreePoolWithTag(v106, 0x74727044u);
      }
      if ( (int)v132 < 0 )
      {
LABEL_200:
        if ( v6 )
          *(_BYTE *)(v6 + 3736) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( BYTE4(v131) == 1 )
    {
      v109 = a1->DeviceExtension;
      Parameters.Version = *((_DWORD *)v109 + 306);
      Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v109 + 154);
      *((_QWORD *)v109 + 154) = 0LL;
      IoDisconnectInterruptEx(&Parameters);
    }
    if ( v11 )
      v110 = *(_QWORD *)(v11 + 152);
    else
      v110 = 0LL;
    DxgCreateLiveDumpWithWdLogs(0x193u, 2052LL, (int)started, v98, v110);
  }
  if ( DeviceExtension[1139] && DeviceExtension[1136] )
    NotifyUserMSBDAIfApplicable();
  if ( v6 )
  {
    if ( DeviceExtension[1143] )
    {
      v111 = *(_QWORD *)(v6 + 1008);
      if ( v111 )
      {
        v112 = *(__int64 (__fastcall **)(__int64, _QWORD))(v6 + 1064);
        if ( v112 )
        {
          v113 = v112(v111, (unsigned int)started);
          v115 = v113;
          if ( v113 < 0 )
          {
            v116 = WdLogNewEntry5_WdError(v114);
            *(_QWORD *)(v116 + 24) = *(_QWORD *)(v6 + 1064);
            *(_QWORD *)(v116 + 32) = v115;
            WdLogEvent5_WdError(v116);
          }
        }
        v117 = *(__int64 (__fastcall **)(_QWORD, char *))(v6 + 1080);
        if ( v117 )
        {
          v118 = v117(*(_QWORD *)(v6 + 1008), v142);
          v120 = v118;
          if ( v118 < 0 )
          {
            v121 = WdLogNewEntry5_WdError(v119);
            *(_QWORD *)(v121 + 24) = *(_QWORD *)(v6 + 1080);
            *(_QWORD *)(v121 + 32) = v120;
            WdLogEvent5_WdError(v121);
          }
          else
          {
            *(_DWORD *)(v6 + 1144) = v143;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), PowerRelations);
      }
    }
    v122 = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v123 = v122;
    if ( v122 )
    {
      memset(v122, 0, 0x50uLL);
      *v123 = 26;
      v123[1] = 80;
      v123[10] = 0;
      *((_QWORD *)v123 + 4) = 0LL;
      *((_QWORD *)v123 + 1) = 0LL;
      *((_QWORD *)v123 + 2) = 0LL;
      *((_QWORD *)v123 + 3) = 0LL;
      v123[12] = started;
      v123[13] = (unsigned int)a1 & 0xFFFF00;
      *((_QWORD *)v123 + 7) = *((_QWORD *)DeviceExtension + 317);
      v123[16] = DxgkDiagCalcDuration1us(&v137);
      v123[17] = *(_DWORD *)(v6 + 3744);
      v123[18] = v98;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v123);
      ExFreePoolWithTag(v123, 0x74727044u);
    }
    if ( DeviceExtension[1136] )
    {
      if ( qword_1C007A9E0 )
      {
        v124 = *(_QWORD *)(qword_1C007A9E0 + 64);
        if ( v124 )
        {
          v125 = *(_QWORD *)(v124 + 40);
          if ( v125 )
          {
            if ( *(_QWORD *)(v125 + 408) )
              SendBDDDiagTelemetry(v124);
          }
        }
      }
    }
  }
  else
  {
    v126 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v127 = v126;
    if ( v126 )
    {
      memset(v126, 0, 0x40uLL);
      v128 = DxgkDiagCalcDuration1us(&v137);
      *v127 = 6;
      v127[1] = 64;
      v127[10] = 0;
      *((_QWORD *)v127 + 4) = 0LL;
      *((_QWORD *)v127 + 1) = 0LL;
      *((_QWORD *)v127 + 2) = 0LL;
      *((_QWORD *)v127 + 3) = 0LL;
      v127[12] = 35;
      v127[13] = (unsigned int)a1 & 0xFFFF00;
      v127[14] = v128;
      v127[15] = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v127);
      ExFreePoolWithTag(v127, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
