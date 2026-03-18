/*
 * XREFs of DpiFdoStartAdapter @ 0x1C0111538
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01CDF24 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0010B98 (DxgkDiagCalcDuration1us.c)
 *     DpiHybridInternalPanelOverride @ 0x1C0010C5C (DpiHybridInternalPanelOverride.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DxgkQueryRequiredDmaQueueEntry @ 0x1C00A6F2C (DxgkQueryRequiredDmaQueueEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C010E2F4 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C010FC78 (DpiQueryMiniportInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C0110238 (DpiGetDevicePropertyString.c)
 *     DxgkAddAdapter @ 0x1C0111404 (DxgkAddAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0111468 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01134D0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01148F0 (DpiOpenPnpRegistryKey.c)
 *     DpiDxgkDdiStartDevice @ 0x1C01149A8 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoConnectInterrupt @ 0x1C0114A5C (DpiFdoConnectInterrupt.c)
 *     MonitorInitializeAdapterDone @ 0x1C011739C (MonitorInitializeAdapterDone.c)
 *     DpiFdoEnumChildDevices @ 0x1C011F74C (DpiFdoEnumChildDevices.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0123284 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C016F5D4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0174E60 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C0198730 (LPMDisplayRegisterInternalDisplay.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01C2DEC (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01C2FB4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01C3060 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01C5208 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01C5B20 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C01C7454 (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStopDevice @ 0x1C01CF8CC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  char *v7; // rdi
  void *v8; // r12
  char *DeviceExtension; // r14
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  _DWORD *v22; // rbx
  int started; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _BYTE *v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  char v41; // al
  bool v42; // al
  __int64 v43; // r8
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  BOOLEAN v57; // dl
  NTSTATUS v58; // eax
  int v59; // eax
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  struct _DXGK_DIAG_HEADER *v64; // rcx
  __int64 v66; // rcx
  __int64 v67; // r8
  bool v68; // cf
  bool v69; // zf
  __int64 (__fastcall *v70)(_QWORD, _QWORD, __int64); // rax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int DevicePropertyString; // eax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  int Caps; // eax
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  NTSTATUS v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  struct _DEVICE_OBJECT *v101; // rcx
  int v102; // eax
  __int64 v103; // rdx
  unsigned int v104; // r12d
  __int64 v105; // rcx
  DXGADAPTER *v106; // rcx
  unsigned __int64 v107; // rax
  ULONGLONG v108; // rax
  __int64 v109; // rcx
  __int64 (__fastcall *v110)(__int64, _QWORD); // rax
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r12
  __int64 v115; // rax
  __int64 (__fastcall *v116)(_QWORD, char *); // rax
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r12
  __int64 v121; // rax
  unsigned int v122; // eax
  unsigned __int64 v123; // [rsp+20h] [rbp-4B8h]
  unsigned __int64 v124; // [rsp+20h] [rbp-4B8h]
  char v125; // [rsp+30h] [rbp-4A8h]
  char v126; // [rsp+31h] [rbp-4A7h]
  char v127; // [rsp+32h] [rbp-4A6h]
  char v128; // [rsp+33h] [rbp-4A5h]
  char v129; // [rsp+34h] [rbp-4A4h]
  char *PoolWithTag; // [rsp+38h] [rbp-4A0h]
  int v132; // [rsp+44h] [rbp-494h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v133; // [rsp+48h] [rbp-490h]
  PVOID P; // [rsp+50h] [rbp-488h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-480h] BYREF
  __int64 v136; // [rsp+60h] [rbp-478h] BYREF
  __int64 v137; // [rsp+68h] [rbp-470h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-468h] BYREF
  bool *v139; // [rsp+78h] [rbp-460h]
  __int64 v140; // [rsp+80h] [rbp-458h]
  char v141[4]; // [rsp+88h] [rbp-450h] BYREF
  int v142; // [rsp+8Ch] [rbp-44Ch]
  _QWORD v143[4]; // [rsp+90h] [rbp-448h] BYREF
  int v144; // [rsp+B0h] [rbp-428h] BYREF
  int v145; // [rsp+B4h] [rbp-424h]
  struct _DEVICE_OBJECT *v146; // [rsp+B8h] [rbp-420h]
  __int64 (__usercall *v147)@<rax>(int@<ecx>, PVOID, ULONG); // [rsp+C0h] [rbp-418h]
  void *v148; // [rsp+C8h] [rbp-410h]
  __int64 (__fastcall *v149)(__int64, unsigned int *); // [rsp+D0h] [rbp-408h]
  void *v150; // [rsp+D8h] [rbp-400h]
  BOOLEAN (__fastcall *v151)(__int64); // [rsp+E0h] [rbp-3F8h]
  __int64 (__fastcall *v152)(); // [rsp+E8h] [rbp-3F0h]
  __int64 (__fastcall *v153)(__int64, __int64, void *, ULONG, ULONG, ULONG *); // [rsp+F0h] [rbp-3E8h]
  __int64 (__fastcall *v154)(__int64, KSYNCHRONIZE_ROUTINE *, void *, unsigned int, BOOLEAN *); // [rsp+F8h] [rbp-3E0h]
  __int64 (__fastcall *v155)(); // [rsp+100h] [rbp-3D8h]
  __int64 (__fastcall *v156)(__int64, __int64, void *, ULONG, ULONG, ULONG *); // [rsp+108h] [rbp-3D0h]
  __int64 (__fastcall *v157)(); // [rsp+110h] [rbp-3C8h]
  __int64 (__fastcall *v158)(); // [rsp+118h] [rbp-3C0h]
  __int64 (__fastcall *v159)(); // [rsp+120h] [rbp-3B8h]
  __int64 (__fastcall *v160)(); // [rsp+128h] [rbp-3B0h]
  void (__fastcall *v161)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *); // [rsp+130h] [rbp-3A8h]
  void (__fastcall *v162)(__int64); // [rsp+138h] [rbp-3A0h]
  __int64 (__fastcall *v163)(__int64, __int64, _QWORD *, __int64); // [rsp+140h] [rbp-398h]
  __int64 (__fastcall *v164)(); // [rsp+148h] [rbp-390h]
  __int64 (__fastcall *v165)(); // [rsp+150h] [rbp-388h]
  __int64 (__fastcall *v166)(int, int, int, __int64); // [rsp+158h] [rbp-380h]
  __int64 (__fastcall *v167)(PDEVICE_OBJECT); // [rsp+160h] [rbp-378h]
  __int64 (__fastcall *v168)(__int64); // [rsp+168h] [rbp-370h]
  __int64 (__fastcall *v169)(__int64, __int64); // [rsp+170h] [rbp-368h]
  void *v170; // [rsp+178h] [rbp-360h]
  void (__fastcall *v171)(__int64, int); // [rsp+180h] [rbp-358h]
  __int64 (__fastcall *v172)(); // [rsp+188h] [rbp-350h]
  __int64 (__fastcall *v173)(__int64, __int64, __int64, __int64, __int64, __int64, __int64); // [rsp+190h] [rbp-348h]
  void (__fastcall *v174)(__int64, int, __int64); // [rsp+198h] [rbp-340h]
  void (__fastcall *v175)(__int64, int, __int64); // [rsp+1A0h] [rbp-338h]
  void (__fastcall *v176)(__int64, int); // [rsp+1A8h] [rbp-330h]
  void (__fastcall *v177)(__int64, int, unsigned int); // [rsp+1B0h] [rbp-328h]
  __int64 (__fastcall *v178)(); // [rsp+1B8h] [rbp-320h]
  __int64 (__fastcall *v179)(); // [rsp+1C0h] [rbp-318h]
  __int64 (__fastcall *v180)(__int64, __int64); // [rsp+1C8h] [rbp-310h]
  ULONG_PTR (__fastcall *v181)(unsigned int *, struct _EX_RUNDOWN_REF **); // [rsp+1D0h] [rbp-308h]
  void (__fastcall *v182)(__int64); // [rsp+1D8h] [rbp-300h]
  void (__fastcall *v183)(__int64, int); // [rsp+1E0h] [rbp-2F8h]
  void (__fastcall *v184)(__int64, int); // [rsp+1E8h] [rbp-2F0h]
  void (__fastcall *v185)(__int64, unsigned int); // [rsp+1F0h] [rbp-2E8h]
  __int64 (__fastcall *v186)(PDEVICE_OBJECT, __int64); // [rsp+200h] [rbp-2D8h]
  __int64 (__fastcall *v187)(__int64, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *); // [rsp+208h] [rbp-2D0h]
  __int64 (__fastcall *v188)(); // [rsp+210h] [rbp-2C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+220h] [rbp-2B8h] BYREF
  __int64 v190; // [rsp+230h] [rbp-2A8h] BYREF
  int v191; // [rsp+238h] [rbp-2A0h]
  const wchar_t *v192; // [rsp+240h] [rbp-298h]
  int *v193; // [rsp+248h] [rbp-290h]
  int v194; // [rsp+250h] [rbp-288h]
  int *v195; // [rsp+258h] [rbp-280h]
  int v196; // [rsp+260h] [rbp-278h]
  __int64 v197; // [rsp+268h] [rbp-270h]
  int v198; // [rsp+270h] [rbp-268h]
  _BYTE v199[40]; // [rsp+278h] [rbp-260h] BYREF
  _OWORD v200[2]; // [rsp+2A0h] [rbp-238h] BYREF
  _QWORD v201[8]; // [rsp+2C0h] [rbp-218h] BYREF
  _QWORD v202[10]; // [rsp+300h] [rbp-1D8h] BYREF
  _DWORD v203[8]; // [rsp+350h] [rbp-188h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+370h] [rbp-168h] BYREF

  v133 = a4;
  memset(v200, 0, 28);
  v7 = 0LL;
  v8 = 0LL;
  v139 = a3;
  v129 = 0;
  DeviceExtension = (char *)a1->DeviceExtension;
  v128 = 0;
  v127 = 0;
  v126 = 0;
  v10 = *((_QWORD *)DeviceExtension + 5);
  v140 = v10;
  v125 = 0;
  PoolWithTag = 0LL;
  v136 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  if ( DeviceExtension[483] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v7 = DeviceExtension;
    DpiQueryMiniportInterface(
      *((_QWORD *)DeviceExtension + 3),
      (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
      96,
      1,
      v123,
      (__int64)(DeviceExtension + 1000));
    if ( a6 )
    {
      v70 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
      if ( v70 )
      {
        v71 = v70(*((_QWORD *)DeviceExtension + 126), a5, a6);
        v13 = v71;
        if ( v71 < 0 )
          goto LABEL_98;
      }
    }
    *((_DWORD *)DeviceExtension + 946) = 0;
  }
  v11 = DpiFdoConnectInterrupt(a1);
  LODWORD(v13) = v11;
  if ( v11 == -1073741275 )
  {
    v14 = WdLogNewEntry5_WdEvent(v12);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdEvent(v14);
  }
  else
  {
    if ( v11 < 0 )
      goto LABEL_65;
    v129 = 1;
  }
  if ( DeviceExtension[1136] == 1 )
  {
    if ( DeviceExtension[1140] == 1
      && a2
      && byte_1C006F9D5
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v66, &EventProfilerEnter, v67, 8006);
      memset(v203, 0, sizeof(v203));
      v203[0] = 18;
      x86BiosCall(16LL, v203);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v74, &EventProfilerExit, v75, 8006);
    }
    if ( v7 )
    {
      if ( byte_1C006F9D5 )
      {
        v68 = *(_DWORD *)(v10 + 28) < 0x300Eu;
        v69 = *(_DWORD *)(v10 + 28) == 12302;
      }
      else
      {
        v68 = *(_DWORD *)(v10 + 28) < 0x2005u;
        v69 = *(_DWORD *)(v10 + 28) == 8197;
      }
      v7[3712] ^= (v7[3712] ^ (4 * (!v68 && !v69))) & 4;
    }
  }
  while ( 1 )
  {
    LODWORD(v13) = ExUuidCreate((UUID *)(DeviceExtension + 2520));
    if ( (int)v13 >= 0 )
      break;
    if ( (_DWORD)v13 != -1073741267 )
    {
      v73 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v73 + 24) = (int)v13;
LABEL_102:
      WdLogEvent5_WdError(v73);
      goto LABEL_65;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 317);
  v13 = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
  {
    v76 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v76 + 24) = v13;
    WdLogEvent5_WdError(v76);
    goto LABEL_64;
  }
  v20 = *(_DWORD *)(v10 + 28);
  v21 = 16387;
  if ( v20 > 0x4003 )
  {
    v144 = 360;
    v145 = 28682;
    goto LABEL_14;
  }
  if ( v20 <= 0x300E )
  {
    v21 = 8197;
    if ( v20 > 0x2005 )
    {
      v144 = 256;
      v145 = 12302;
      goto LABEL_14;
    }
    v144 = 184;
  }
  else
  {
    v144 = 264;
  }
  v145 = v21;
LABEL_14:
  v146 = a1;
  v147 = DpEvalAcpiMethod;
  v148 = &DpGetDeviceInformation;
  v149 = DpIndicateChildStatus;
  v150 = &DpMapMemory;
  v151 = DpQueueDpc;
  v152 = DpQueryServices;
  v153 = DpReadDeviceSpace;
  v154 = DpSynchronizeExecution;
  v155 = DpUnmapMemory;
  v156 = DpWriteDeviceSpace;
  v157 = DpIsDevicePresent;
  v158 = DxgGetHandleDataCB;
  v159 = DxgGetHandleParentCB;
  v160 = DxgEnumHandleChildrenCB;
  v161 = DxgNotifyInterruptCB;
  v162 = DxgNotifyDpcCB;
  v163 = DxgMiniportQueryVidPnInterfaceCB;
  v164 = DxgMiniportQueryMonitorInterfaceCB;
  v165 = DxgGetCaptureAddressCB;
  v166 = DxgLogEtwEventCb;
  v167 = DpExcludeAdapterAccess;
  v168 = DxgCreateContextAllocationCB;
  v169 = DxgDestroyContextAllocationCB;
  v170 = &DxgSetPowerComponentActiveCB;
  v171 = DxgSetPowerComponentIdleCB;
  v173 = DxgkPowerRuntimeControlRequestCB;
  v174 = DxgkSetPowerComponentLatencyCB;
  v175 = DxgkSetPowerComponentResidencyCB;
  v176 = DxgkCompleteFStateTransitionCB;
  v177 = DxgkCompletePStateTransitionCB;
  v172 = DpAcquirePostDisplayOwnership;
  v178 = DxgkMapContextAllocationCB;
  v179 = DxgkUpdateContextAllocationCB;
  v180 = DxgkReserveGpuVirtualAddressRangeCB;
  v181 = DxgkAcquireHandleDataCB;
  v182 = DxgkReleaseHandleDataCB;
  v183 = DxgkHardwareContentProtectionTeardownCB;
  v184 = DxgkMultiPlaneOverlayDisabledCB;
  v185 = DxgkMitigatedRangeUpdateCB;
  v186 = DpIndicateConnectorChange;
  v187 = DxgkUnblockUEFIFrameBufferRangesCB;
  v188 = DpAcquirePostDisplayOwnership2;
  LODWORD(v200[0]) = DxgkQueryRequiredDmaQueueEntry();
  v22 = DeviceExtension + 2548;
  *(_OWORD *)((char *)v200 + 4) = *(_OWORD *)(DeviceExtension + 2520);
  *(_QWORD *)((char *)&v200[1] + 4) = *((_QWORD *)DeviceExtension + 317);
  qword_1C006FCB8 = (__int64)KeGetCurrentThread();
  qword_1C006FCC0 = (__int64)a1;
  started = DpiDxgkDdiStartDevice(
              v10,
              *((_QWORD *)DeviceExtension + 6),
              (unsigned int)v200,
              (unsigned int)&v144,
              (__int64)(DeviceExtension + 2548),
              (__int64)(DeviceExtension + 2544));
  v8 = 0LL;
  v13 = started;
  qword_1C006FCC0 = 0LL;
  qword_1C006FCB8 = 0LL;
  if ( started < 0 )
  {
    v77 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v77 + 24) = *(_QWORD *)(v10 + 152);
    *(_QWORD *)(v77 + 32) = v13;
    WdLogEvent5_WdError(v77);
    if ( (_DWORD)v13 != -1071775735 )
    {
      if ( (_DWORD)v13 == -1071774944 && DeviceExtension[1136] )
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79, v78, v80);
        v82[3] = 275LL;
        v82[4] = 26LL;
        v82[5] = v10;
        v82[6] = (unsigned __int8)byte_1C006F9D5;
        v82[7] = 0LL;
        WdLogEvent5_WdCriticalError(v82);
      }
      goto LABEL_65;
    }
    P = 0LL;
    if ( !DeviceExtension[1136] )
      goto LABEL_65;
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             &P,
                             &v137);
    v88 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_65;
    }
    goto LABEL_126;
  }
  if ( DeviceExtension[1136] )
  {
    memset(&dword_1C006FC10, 0, 0x20uLL);
    dword_1C006FC28 = -1;
    memset(&xmmword_1C006FC30, 0, 0x80uLL);
    dword_1C006FCB0 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 638) && *v22 > 1u )
  {
    v83 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v83 + 24) = (unsigned int)*v22;
    WdLogEvent5_WdWarning(v83);
    *v22 = 1;
  }
  v128 = 1;
  if ( !v7 )
    goto LABEL_58;
  if ( !*((_DWORD *)v7 + 636) || (LODWORD(v13) = DpiFdoEnumChildDevices(a1), (int)v13 >= 0) )
  {
    v28 = *((_DWORD *)v7 + 637);
    if ( !v28 )
      goto LABEL_26;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v28, 0x74727044u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v13) = -1073741670;
      v84 = WdLogNewEntry5_WdLowResource(v29);
      *(_QWORD *)(v84 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v84);
      goto LABEL_65;
    }
    v30 = 0LL;
    if ( !*((_DWORD *)v7 + 637) )
      goto LABEL_26;
    while ( 1 )
    {
      v31 = DMgrAcquireGdiViewId(&PoolWithTag[4 * v30]);
      v13 = v31;
      if ( v31 < 0 )
        break;
      v30 = (unsigned int)(v30 + 1);
      if ( (unsigned int)v30 >= *((_DWORD *)v7 + 637) )
        goto LABEL_26;
    }
    *((_DWORD *)v7 + 637) = v30;
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
    v85[3] = (unsigned int)v30;
    v85[4] = a1;
    v85[5] = v13;
    WdLogEvent5_WdError(v85);
    if ( (_DWORD)v30 )
    {
LABEL_26:
      v34 = v7 + 3712;
      v35 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(v7 + 3712), v133, v27);
      v13 = v35;
      if ( v35 < 0 )
        goto LABEL_98;
      v40 = *((_QWORD *)v7 + 463);
      if ( v40 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24));
      }
      else
      {
        v86 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v86 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v86);
      }
      v127 = 1;
      LOBYTE(v37) = v7[3713] ^ (v7[3713] ^ (2 * v7[3713])) & 8;
      v7[3713] = v37;
      if ( (v37 & 4) != 0 && (!*(_QWORD *)(v10 + 1128) || !*(_QWORD *)(v10 + 1136)) )
      {
        v87 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v87 + 24) = v13;
        WdLogEvent5_WdError(v87);
        v7[3713] &= ~8u;
      }
      v41 = v7[3713];
      if ( (v41 & 8) == 0 && !*(_QWORD *)(v10 + 208) )
      {
        v88 = -1073741735LL;
        goto LABEL_125;
      }
      if ( !qword_1C006F9E8
        && ((v41 & 1) != 0 || DpiHybridInternalPanelOverride() && (*v34 & 0x20) != 0 && v7[1136] && (*v34 & 0x40) == 0) )
      {
        qword_1C006F9E8 = (__int64)a1;
      }
      if ( (*v34 & 0x40) != 0 )
      {
        v37 = qword_1C006F9E0;
        if ( !qword_1C006F9E0 || (struct _DEVICE_OBJECT *)qword_1C006F9E0 == a1 )
        {
          qword_1C006F9E0 = (__int64)a1;
          HIBYTE(word_1C006F9DC) = (v7[3713] & 2) != 0;
        }
        else
        {
          *v34 &= ~0x40u;
        }
      }
      if ( qword_1C006F9E8 && qword_1C006F9E0 && !(_BYTE)word_1C006F9DC )
      {
        LOBYTE(word_1C006F9DC) = 1;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v37, v36, v38, v39) + 537) = 1;
      }
      v42 = (*v34 & 1) != 0 || (_BYTE)word_1C006F9DC && (*v34 & 0x40) != 0;
      v37 = (__int64)v139;
      *v139 = v42;
      if ( v7[1136] && (*v34 & 1) == 0 )
      {
        v88 = -1071775740LL;
LABEL_125:
        LODWORD(v13) = v88;
LABEL_126:
        v72 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v72 + 24) = v88;
        goto LABEL_100;
      }
      if ( *((_DWORD *)v7 + 830) )
      {
        v43 = *((_QWORD *)v7 + 6);
        v44 = *((_QWORD *)v7 + 5);
        v143[1] = 0LL;
        v143[2] = 0LL;
        v143[0] = 67108861LL;
        v45 = DpiDxgkDdiDisplayDetectControl(v7, v44, v43, v143);
        v13 = v45;
        if ( v45 < 0 )
        {
          v72 = WdLogNewEntry5_WdError(v47, v46);
          *(_QWORD *)(v72 + 24) = *(_QWORD *)(v10 + 1128);
          *(_QWORD *)(v72 + 32) = v13;
          goto LABEL_100;
        }
      }
      LODWORD(v13) = DpiFdoCreateRelatedObjects(a1, *((unsigned int *)v7 + 637), v8, v133);
      if ( (int)v13 < 0 )
        goto LABEL_65;
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v8 = 0LL;
        PoolWithTag = 0LL;
      }
      if ( (*v34 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
      {
        MonitorInitializeAdapterDone(*((DXGADAPTER **)v7 + 463), v133);
        DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      }
      v126 = 1;
      if ( *((_DWORD *)v7 + 766) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v7, v48, v7 + 3056);
        v91 = Caps;
        if ( Caps < 0 )
        {
          v92 = WdLogNewEntry5_WdEvent(v90);
          *(_QWORD *)(v92 + 24) = v91;
          WdLogEvent5_WdEvent(v92);
          *((_DWORD *)v7 + 766) = -1;
          memset(v7 + 2992, 0, 0x40uLL);
        }
      }
      v49 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &Handle);
      v51 = v49;
      if ( v49 < 0 )
      {
        v93 = WdLogNewEntry5_WdEvent(v50);
        *(_QWORD *)(v93 + 24) = v51;
        WdLogEvent5_WdEvent(v93);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          v53 = WdLogNewEntry5_WdEvent(v52);
          *(_QWORD *)(v53 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v53);
        }
        ZwClose(Handle);
      }
      v56 = *((_QWORD *)v7 + 570);
      if ( v56 )
      {
        if ( *(_QWORD *)(v56 + 48) && *(_BYTE *)v56 )
        {
          *(_BYTE *)v56 = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            v94 = *((_QWORD *)v7 + 570);
            LODWORD(v124) = *(unsigned __int8 *)(v94 + 2);
            Template_xq(*(unsigned __int8 *)(v94 + 2), &EventDpiFdoThermalActiveCooling, v55, a1, v124);
          }
          v95 = *((_QWORD *)v7 + 570);
          LOBYTE(v54) = *(_BYTE *)(v95 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v95 + 48))(*(_QWORD *)(v95 + 16), v54);
        }
        v96 = *((_QWORD *)v7 + 570);
        if ( *(_QWORD *)(v96 + 56) && *(_BYTE *)(v96 + 1) )
        {
          *(_BYTE *)(v96 + 1) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v124) = *(_DWORD *)(*((_QWORD *)v7 + 570) + 4LL);
            Template_xq((unsigned int)v124, &EventDpiFdoThermalPassiveCooling, v55, a1, v124);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v7 + 570) + 56LL))(
            *(_QWORD *)(*((_QWORD *)v7 + 570) + 16LL),
            *(unsigned int *)(*((_QWORD *)v7 + 570) + 4LL));
        }
      }
      if ( !v7[1139] || (v57 = 0, !v7[480]) )
        v57 = 1;
      v58 = IoSetDeviceInterfaceState((PUNICODE_STRING)v7 + 163, v57);
      v13 = v58;
      if ( v58 < 0 )
      {
LABEL_98:
        v72 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v72 + 24) = v13;
LABEL_100:
        v73 = v72;
        goto LABEL_102;
      }
      v125 = 1;
      LODWORD(v13) = DpiFdoInitializeGpuVirtualization((__int64)a1);
      if ( (int)v13 < 0 )
        goto LABEL_65;
LABEL_58:
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v59 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v59;
      *((_DWORD *)DeviceExtension + 59) = 2;
      if ( v7 )
      {
        if ( v7[481] )
        {
          DXGADAPTER::StartRuntimePowerManagement(*((DXGADAPTER **)v7 + 463));
          if ( v7[5096] )
          {
            v97 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v7 + 5080), 1u);
            v13 = v97;
            if ( v97 < 0 )
            {
              v100 = WdLogNewEntry5_WdError(v99, v98);
              *(_QWORD *)(v100 + 24) = v13;
              WdLogEvent5_WdError(v100);
              goto LABEL_63;
            }
          }
        }
        if ( !v7[480] && *((_DWORD *)v7 + 831) != -1 )
          LPMDisplayRegisterInternalDisplay(*((_QWORD *)v7 + 463));
        DpiBrightnessStartDevice(a1);
      }
      DxgkMiracastQueryMiracastSupportInternal(0LL);
LABEL_63:
      v125 = v127;
      v126 = v127;
LABEL_64:
      v8 = PoolWithTag;
    }
  }
LABEL_65:
  v60 = 0;
  if ( v7 )
    v60 = ((unsigned __int8)v7[3712] >> 1) & 0x21 | (2
                                                   * (v7[3712] & 1 | (2
                                                                    * (v7[480] & 1 | (2
                                                                                    * (v7[1136] & 1 | (2 * (v7[2556] & 1 | (4 * (v7[3712] & 0x84 | v7[3713] & 1 | (2 * (v7[3712] & 0x38 | (*((_DWORD *)v7 + 126) != 0 ? 4 : 0) | v7[1143] & 1))))))))))));
  if ( (int)v13 < 0 )
  {
    v101 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v101);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v102 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v102;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v7 )
    {
      if ( v125 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)v7 + 163, 0);
      DpiFdoCleanupGpuVirtualization(v7);
      if ( v126 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v133);
      v103 = 0LL;
      if ( v8 )
      {
        v104 = 0;
        if ( *((_DWORD *)v7 + 637) )
        {
          do
          {
            LOBYTE(v103) = 1;
            DMgrReleaseGdiViewId(*(unsigned int *)&PoolWithTag[4 * v104++], v103);
          }
          while ( v104 < *((_DWORD *)v7 + 637) );
          v10 = v140;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        v103 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C006F9E0 == a1 )
      {
        word_1C006F9DC = 0;
        qword_1C006F9E0 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C006F9E8 == a1 )
      {
        LOBYTE(word_1C006F9DC) = 0;
        qword_1C006F9E8 = 0LL;
      }
      if ( v127 == 1 )
      {
        v105 = *((_QWORD *)DeviceExtension + 61);
        if ( v105 )
        {
          PoFxUnregisterDevice(v105, 0LL);
          v103 = 0LL;
          *(_QWORD *)(*((_QWORD *)v7 + 463) + 2328LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v106 = (DXGADAPTER *)*((_QWORD *)v7 + 463);
        if ( v106 )
          DXGADAPTER::Stop(v106, 0, 0);
        DxgkReleaseAdapterFdoReference(*((_QWORD *)v7 + 463), v103);
        *((_QWORD *)v7 + 463) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1, v103);
    }
    if ( v128 == 1 && v10 && (!DeviceExtension[1136] || (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1) < 0) )
    {
      if ( v7 )
        v7[3712] &= ~4u;
      DpiDxgkDdiStopDevice(v10, *((_QWORD *)DeviceExtension + 6));
    }
    if ( v129 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    if ( v10 )
      v107 = *(_QWORD *)(v10 + 152);
    else
      v107 = 0LL;
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)v13, v60, v107);
  }
  if ( DeviceExtension[1139] )
  {
    if ( DeviceExtension[1136] )
    {
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.wProductType = 1;
      v108 = VerSetConditionMask(0LL, 0x80u, 1u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 0x80u, v108) >= 0 )
      {
        v132 = 0;
        v192 = L"BasicDisplayUserNotified";
        v190 = 0LL;
        v191 = 288;
        v193 = &v132;
        v195 = &v132;
        v194 = 67108868;
        v196 = 4;
        v197 = 0LL;
        v198 = 0;
        memset(v199, 0, sizeof(v199));
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v190, 0LL, 0LL);
        if ( !v132 )
          WdDiagNotifyUser(0LL, 8LL, 0LL, 0LL);
      }
    }
  }
  if ( v7 )
  {
    if ( DeviceExtension[1143] )
    {
      v109 = *((_QWORD *)v7 + 126);
      if ( v109 )
      {
        v110 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)v7 + 133);
        if ( v110 )
        {
          v111 = v110(v109, (unsigned int)v13);
          v114 = v111;
          if ( v111 < 0 )
          {
            v115 = WdLogNewEntry5_WdError(v113, v112);
            *(_QWORD *)(v115 + 24) = *((_QWORD *)v7 + 133);
            *(_QWORD *)(v115 + 32) = v114;
            WdLogEvent5_WdError(v115);
          }
        }
        v116 = (__int64 (__fastcall *)(_QWORD, char *))*((_QWORD *)v7 + 135);
        if ( v116 )
        {
          v117 = v116(*((_QWORD *)v7 + 126), v141);
          v120 = v117;
          if ( v117 < 0 )
          {
            v121 = WdLogNewEntry5_WdError(v119, v118);
            *(_QWORD *)(v121 + 24) = *((_QWORD *)v7 + 135);
            *(_QWORD *)(v121 + 32) = v120;
            WdLogEvent5_WdError(v121);
          }
          else
          {
            *((_DWORD *)v7 + 286) = v142;
          }
        }
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)v7 + 19), PowerRelations);
      }
    }
  }
  if ( DeviceExtension[483] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    memset(v202, 0, sizeof(v202));
    v202[0] = 0x500000001ALL;
    memset(&v202[1], 0, 36);
    v202[7] = *((_QWORD *)DeviceExtension + 317);
    LODWORD(v202[6]) = v13;
    HIDWORD(v202[6]) = (unsigned int)a1 & 0xFFFF00;
    LODWORD(v202[8]) = DxgkDiagCalcDuration1us(&v136);
    v64 = (struct _DXGK_DIAG_HEADER *)v202;
    HIDWORD(v202[8]) = *((_DWORD *)v7 + 930);
    LODWORD(v202[9]) = v60;
  }
  else
  {
    memset(v201, 0, sizeof(v201));
    v122 = DxgkDiagCalcDuration1us(&v136);
    v201[0] = 0x4000000006LL;
    memset(&v201[1], 0, 36);
    v64 = (struct _DXGK_DIAG_HEADER *)v201;
    HIDWORD(v201[6]) = (unsigned int)a1 & 0xFFFF00;
    LODWORD(v201[6]) = 35;
    v201[7] = __PAIR64__(v13, v122);
  }
  DxgkWriteDiagEntry(v64, v61, v62, v63);
  return (unsigned int)v13;
}
