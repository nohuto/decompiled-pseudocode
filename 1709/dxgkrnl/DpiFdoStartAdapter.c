/*
 * XREFs of DpiFdoStartAdapter @ 0x1C0117FA8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01E8334 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0012764 (DxgkDiagCalcDuration1us.c)
 *     DpiHybridInternalPanelOverride @ 0x1C00127C0 (DpiHybridInternalPanelOverride.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C0012860 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0pt @ 0x1C0020B24 (McTemplateK0pt.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkQueryRequiredDmaQueueEntry @ 0x1C00FAD74 (DxgkQueryRequiredDmaQueueEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0110B90 (DpiOpenPnpRegistryKey.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0114654 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C011477C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C0116190 (DpiQueryMiniportInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C0116770 (DpiGetDevicePropertyString.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0117E80 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011917C (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkAddAdapter @ 0x1C01194CC (DxgkAddAdapter.c)
 *     DpiDxgkDdiStartDevice @ 0x1C011AA38 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoConnectInterrupt @ 0x1C011AB00 (DpiFdoConnectInterrupt.c)
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 *     MonitorInitializeAdapterDone @ 0x1C0122BE0 (MonitorInitializeAdapterDone.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0123A64 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0172DB4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0178784 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C01AE590 (LPMDisplayRegisterInternalDisplay.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01DC4D8 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01DC780 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01DED10 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C01DF6BC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C01E157C (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStopDevice @ 0x1C01E9BEC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  char v6; // bl
  char *v8; // rsi
  char *DeviceExtension; // r15
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  NTSTATUS LocallyUniqueId; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  _DWORD *v27; // rbx
  int started; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID v32; // rdi
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  _BYTE *v40; // rbx
  int v41; // eax
  __int64 v42; // rax
  char v43; // al
  bool v44; // al
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rcx
  int RelatedObjects; // eax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  BOOLEAN v65; // dl
  NTSTATUS v66; // eax
  int v67; // eax
  int v68; // eax
  unsigned int v69; // ebx
  ULONGLONG v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  bool v74; // cf
  bool v75; // zf
  __int64 v76; // rdi
  __int64 v77; // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rbx
  __int64 v80; // rcx
  const GUID *v81; // r9
  __int64 (__fastcall *v82)(_QWORD, _QWORD, __int64); // rax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  int DevicePropertyString; // eax
  __int64 v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rbx
  int Caps; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  NTSTATUS v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rax
  struct _DEVICE_OBJECT *v118; // rcx
  int v119; // eax
  __int64 v120; // rdx
  PVOID v121; // rcx
  unsigned int v122; // edi
  DXGADAPTER *v123; // rcx
  int v124; // edi
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  __int64 (__fastcall *v127)(__int64, _QWORD); // rax
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 (__fastcall *v132)(_QWORD, char *); // rax
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rdi
  __int64 v136; // rax
  unsigned int v137; // eax
  __int64 cData; // [rsp+20h] [rbp-628h]
  UINT32 cDataa[2]; // [rsp+20h] [rbp-628h]
  char v140; // [rsp+31h] [rbp-617h]
  char v141; // [rsp+32h] [rbp-616h]
  char v142; // [rsp+33h] [rbp-615h]
  char v143; // [rsp+34h] [rbp-614h]
  char v145; // [rsp+36h] [rbp-612h] BYREF
  char v146; // [rsp+37h] [rbp-611h] BYREF
  char v147; // [rsp+38h] [rbp-610h] BYREF
  char v148; // [rsp+39h] [rbp-60Fh] BYREF
  char v149; // [rsp+3Ah] [rbp-60Eh] BYREF
  int v150; // [rsp+3Ch] [rbp-60Ch] BYREF
  PVOID PoolWithTag; // [rsp+40h] [rbp-608h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v152; // [rsp+48h] [rbp-600h]
  int v153; // [rsp+50h] [rbp-5F8h] BYREF
  int v154; // [rsp+54h] [rbp-5F4h] BYREF
  PVOID P; // [rsp+58h] [rbp-5F0h] BYREF
  __int64 v156; // [rsp+60h] [rbp-5E8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-5E0h] BYREF
  __int64 v158; // [rsp+70h] [rbp-5D8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-5D0h] BYREF
  bool *v160; // [rsp+80h] [rbp-5C8h]
  __int64 v161; // [rsp+88h] [rbp-5C0h]
  char v162[4]; // [rsp+90h] [rbp-5B8h] BYREF
  int v163; // [rsp+94h] [rbp-5B4h]
  _QWORD v164[3]; // [rsp+98h] [rbp-5B0h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-598h] BYREF
  int v166; // [rsp+B8h] [rbp-590h]
  PVOID v167; // [rsp+C0h] [rbp-588h]
  int v168; // [rsp+C8h] [rbp-580h]
  __int64 v169; // [rsp+D0h] [rbp-578h]
  int v170; // [rsp+E0h] [rbp-568h] BYREF
  int v171; // [rsp+E4h] [rbp-564h]
  struct _DEVICE_OBJECT *v172; // [rsp+E8h] [rbp-560h]
  __int64 (__usercall *v173)@<rax>(int@<ecx>, PVOID, ULONG); // [rsp+F0h] [rbp-558h]
  void *v174; // [rsp+F8h] [rbp-550h]
  __int64 (__fastcall *v175)(__int64, int *); // [rsp+100h] [rbp-548h]
  void *v176; // [rsp+108h] [rbp-540h]
  BOOLEAN (__fastcall *v177)(__int64); // [rsp+110h] [rbp-538h]
  __int64 (__fastcall *v178)(); // [rsp+118h] [rbp-530h]
  __int64 (__fastcall *v179)(__int64, __int64, void *, ULONG, ULONG, ULONG *); // [rsp+120h] [rbp-528h]
  __int64 (__fastcall *v180)(__int64, KSYNCHRONIZE_ROUTINE *, void *, unsigned int, BOOLEAN *); // [rsp+128h] [rbp-520h]
  __int64 (__fastcall *v181)(); // [rsp+130h] [rbp-518h]
  __int64 (__fastcall *v182)(__int64, __int64, void *, ULONG, ULONG, ULONG *); // [rsp+138h] [rbp-510h]
  __int64 (__fastcall *v183)(); // [rsp+140h] [rbp-508h]
  __int64 (__fastcall *v184)(); // [rsp+148h] [rbp-500h]
  __int64 (__fastcall *v185)(); // [rsp+150h] [rbp-4F8h]
  __int64 (__fastcall *v186)(); // [rsp+158h] [rbp-4F0h]
  void (__fastcall *v187)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *); // [rsp+160h] [rbp-4E8h]
  void (__fastcall *v188)(__int64); // [rsp+168h] [rbp-4E0h]
  __int64 (__fastcall *v189)(struct D3DKMDT_HVIDPN__ *const, __int64, const struct _DXGK_VIDPN_INTERFACE **); // [rsp+170h] [rbp-4D8h]
  __int64 (__fastcall *v190)(); // [rsp+178h] [rbp-4D0h]
  __int64 (__fastcall *v191)(); // [rsp+180h] [rbp-4C8h]
  __int64 (__fastcall *v192)(int, int, int, __int64); // [rsp+188h] [rbp-4C0h]
  __int64 (__fastcall *v193)(PDEVICE_OBJECT); // [rsp+190h] [rbp-4B8h]
  __int64 (__fastcall *v194)(__int64); // [rsp+198h] [rbp-4B0h]
  __int64 (__fastcall *v195)(__int64, __int64); // [rsp+1A0h] [rbp-4A8h]
  void *v196; // [rsp+1A8h] [rbp-4A0h]
  void (__fastcall *v197)(__int64, int); // [rsp+1B0h] [rbp-498h]
  __int64 (__fastcall *v198)(); // [rsp+1B8h] [rbp-490h]
  __int64 (__fastcall *v199)(__int64, __int64, __int64, __int64, __int64, __int64, __int64); // [rsp+1C0h] [rbp-488h]
  void (__fastcall *v200)(__int64, int, __int64); // [rsp+1C8h] [rbp-480h]
  void (__fastcall *v201)(__int64, int, __int64); // [rsp+1D0h] [rbp-478h]
  void (__fastcall *v202)(__int64, int); // [rsp+1D8h] [rbp-470h]
  void (__fastcall *v203)(__int64, int, unsigned int); // [rsp+1E0h] [rbp-468h]
  __int64 (__fastcall *v204)(); // [rsp+1E8h] [rbp-460h]
  __int64 (__fastcall *v205)(); // [rsp+1F0h] [rbp-458h]
  __int64 (__fastcall *v206)(__int64, __int64); // [rsp+1F8h] [rbp-450h]
  ULONG_PTR (__fastcall *v207)(unsigned int *, struct _EX_RUNDOWN_REF **); // [rsp+200h] [rbp-448h]
  void (__fastcall *v208)(__int64); // [rsp+208h] [rbp-440h]
  void (__fastcall *v209)(__int64, int); // [rsp+210h] [rbp-438h]
  void (__fastcall *v210)(__int64, int); // [rsp+218h] [rbp-430h]
  void (__fastcall *v211)(__int64, unsigned int); // [rsp+220h] [rbp-428h]
  __int64 (__fastcall *v212)(PDEVICE_OBJECT); // [rsp+230h] [rbp-418h]
  __int64 (__fastcall *v213)(__int64, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *); // [rsp+238h] [rbp-410h]
  __int64 (__fastcall *v214)(); // [rsp+240h] [rbp-408h]
  __int64 (__fastcall *v215)(); // [rsp+248h] [rbp-400h]
  struct _UNICODE_STRING DestinationString; // [rsp+250h] [rbp-3F8h] BYREF
  __int64 v217; // [rsp+260h] [rbp-3E8h] BYREF
  int v218; // [rsp+268h] [rbp-3E0h]
  const wchar_t *v219; // [rsp+270h] [rbp-3D8h]
  int *v220; // [rsp+278h] [rbp-3D0h]
  int v221; // [rsp+280h] [rbp-3C8h]
  int *v222; // [rsp+288h] [rbp-3C0h]
  int v223; // [rsp+290h] [rbp-3B8h]
  __int64 v224; // [rsp+298h] [rbp-3B0h]
  int v225; // [rsp+2A0h] [rbp-3A8h]
  _BYTE v226[40]; // [rsp+2A8h] [rbp-3A0h] BYREF
  _OWORD v227[2]; // [rsp+2D0h] [rbp-378h] BYREF
  _QWORD v228[8]; // [rsp+2F0h] [rbp-358h] BYREF
  _QWORD v229[10]; // [rsp+330h] [rbp-318h] BYREF
  _QWORD v230[10]; // [rsp+380h] [rbp-2C8h] BYREF
  GUID ActivityId; // [rsp+3D0h] [rbp-278h] BYREF
  _DWORD v232[8]; // [rsp+3E0h] [rbp-268h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+400h] [rbp-248h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+520h] [rbp-128h] BYREF
  char *v235; // [rsp+540h] [rbp-108h]
  __int64 v236; // [rsp+548h] [rbp-100h]
  _QWORD *v237; // [rsp+550h] [rbp-F8h]
  __int64 v238; // [rsp+558h] [rbp-F0h]
  char *v239; // [rsp+560h] [rbp-E8h]
  _QWORD v240[19]; // [rsp+568h] [rbp-E0h] BYREF

  memset(v227, 0, 28);
  v6 = a2;
  v8 = 0LL;
  v152 = a4;
  v160 = a3;
  v143 = 0;
  DeviceExtension = (char *)a1->DeviceExtension;
  v142 = 0;
  v141 = 0;
  v10 = *((_QWORD *)DeviceExtension + 5);
  v161 = v10;
  v140 = 0;
  PoolWithTag = 0LL;
  v156 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  if ( DeviceExtension[483] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                96,
                1,
                cData,
                (__int64)(DeviceExtension + 1000)) >= 0 )
    {
      if ( a6 )
      {
        v82 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v82 )
        {
          v83 = v82(*((_QWORD *)DeviceExtension + 126), a5, a6);
          v16 = v83;
          if ( v83 < 0 )
          {
            v85 = WdLogNewEntry5_WdError(v84);
            v86 = *((_QWORD *)DeviceExtension + 131);
            goto LABEL_117;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x60uLL);
    }
    v6 = a2;
    *((_DWORD *)DeviceExtension + 952) = 0;
  }
  v11 = DpiFdoConnectInterrupt(a1);
  v16 = v11;
  if ( v11 == -1073741275 )
  {
    v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    if ( v11 < 0 )
    {
LABEL_122:
      v85 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v85 + 24) = v16;
LABEL_119:
      WdLogEvent5_WdError(v85);
LABEL_120:
      LOBYTE(v32) = 0;
      goto LABEL_69;
    }
    v143 = 1;
  }
  if ( DeviceExtension[1136] == 1 )
  {
    if ( DeviceExtension[1140] == 1
      && v6
      && byte_1C0060855
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v72, &EventProfilerEnter, v73, 8006);
      memset(v232, 0, sizeof(v232));
      v232[0] = 18;
      x86BiosCall(16LL, v232);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v87, &EventProfilerExit, v88, 8006);
    }
    if ( v8 )
    {
      if ( byte_1C0060855 )
      {
        v74 = *(_DWORD *)(v10 + 28) < 0x300Eu;
        v75 = *(_DWORD *)(v10 + 28) == 12302;
      }
      else
      {
        v74 = *(_DWORD *)(v10 + 28) < 0x2005u;
        v75 = *(_DWORD *)(v10 + 28) == 8197;
      }
      v8[3736] = (4 * (!v74 && !v75)) | v8[3736] & 0xFB;
    }
  }
  while ( 1 )
  {
    LODWORD(v16) = ExUuidCreate((UUID *)(DeviceExtension + 2520));
    if ( (int)v16 >= 0 )
      break;
    if ( (_DWORD)v16 != -1073741267 )
    {
      v85 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v85 + 24) = (int)v16;
      goto LABEL_119;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v19 = (__int64 *)(DeviceExtension + 2536);
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 317);
  v16 = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_122;
  if ( v8 )
  {
    v21 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v8);
    v23 = v21;
    if ( v21 < 0 )
    {
      v89 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v89 + 24) = v23;
      WdLogEvent5_WdError(v89);
    }
    v19 = (__int64 *)(DeviceExtension + 2536);
  }
  v24 = *(_DWORD *)(v10 + 28);
  v25 = 16387;
  if ( v24 > 0x4003 )
  {
    v170 = 368;
    v171 = 32769;
    goto LABEL_19;
  }
  if ( v24 <= 0x300E )
  {
    v25 = 8197;
    if ( v24 > 0x2005 )
    {
      v170 = 256;
      v171 = 12302;
      goto LABEL_19;
    }
    v170 = 184;
  }
  else
  {
    v170 = 264;
  }
  v171 = v25;
LABEL_19:
  v172 = a1;
  v173 = DpEvalAcpiMethod;
  v174 = &DpGetDeviceInformation;
  v175 = DpIndicateChildStatus;
  v176 = &DpMapMemory;
  v177 = DpQueueDpc;
  v178 = DpQueryServices;
  v179 = DpReadDeviceSpace;
  v180 = DpSynchronizeExecution;
  v181 = DpUnmapMemory;
  v182 = DpWriteDeviceSpace;
  v183 = DpIsDevicePresent;
  v184 = DxgGetHandleDataCB;
  v185 = DxgGetHandleParentCB;
  v186 = DxgEnumHandleChildrenCB;
  v187 = DxgNotifyInterruptCB;
  v188 = DxgNotifyDpcCB;
  v189 = DxgMiniportQueryVidPnInterfaceCB;
  v190 = DxgMiniportQueryMonitorInterfaceCB;
  v191 = DxgGetCaptureAddressCB;
  v192 = DxgLogEtwEventCb;
  v193 = DpExcludeAdapterAccess;
  v194 = DxgCreateContextAllocationCB;
  v195 = DxgDestroyContextAllocationCB;
  v196 = &DxgSetPowerComponentActiveCB;
  v197 = DxgSetPowerComponentIdleCB;
  v199 = DxgkPowerRuntimeControlRequestCB;
  v200 = DxgkSetPowerComponentLatencyCB;
  v201 = DxgkSetPowerComponentResidencyCB;
  v202 = DxgkCompleteFStateTransitionCB;
  v203 = DxgkCompletePStateTransitionCB;
  v198 = DpAcquirePostDisplayOwnership;
  v204 = DxgkMapContextAllocationCB;
  v205 = DxgkUpdateContextAllocationCB;
  v206 = DxgkReserveGpuVirtualAddressRangeCB;
  v207 = DxgkAcquireHandleDataCB;
  v208 = DxgkReleaseHandleDataCB;
  v209 = DxgkHardwareContentProtectionTeardownCB;
  v210 = DxgkMultiPlaneOverlayDisabledCB;
  v211 = DxgkMitigatedRangeUpdateCB;
  v212 = DpIndicateConnectorChange;
  v213 = DxgkUnblockUEFIFrameBufferRangesCB;
  v214 = DpAcquirePostDisplayOwnership2;
  v215 = DxgkSetProtectedSessionStatusCB;
  LODWORD(v227[0]) = DxgkQueryRequiredDmaQueueEntry();
  *(_OWORD *)((char *)v227 + 4) = *(_OWORD *)(DeviceExtension + 2520);
  v26 = *v19;
  v27 = DeviceExtension + 2548;
  *(_QWORD *)((char *)&v227[1] + 4) = v26;
  qword_1C0060B38 = (__int64)KeGetCurrentThread();
  qword_1C0060B40 = (__int64)a1;
  started = DpiDxgkDdiStartDevice(
              v10,
              *((_QWORD *)DeviceExtension + 6),
              v227,
              &v170,
              DeviceExtension + 2548,
              DeviceExtension + 2544);
  v32 = 0LL;
  v16 = started;
  qword_1C0060B40 = 0LL;
  qword_1C0060B38 = 0LL;
  if ( started >= 0 )
  {
    if ( DeviceExtension[1136] )
    {
      memset(&dword_1C0060A90, 0, 0x20uLL);
      dword_1C0060AA8 = -1;
      memset(&xmmword_1C0060AB0, 0, 0x80uLL);
      dword_1C0060B30 = 3;
    }
    if ( !*((_DWORD *)DeviceExtension + 638) && *v27 > 1u )
    {
      v99 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v99 + 24) = (unsigned int)*v27;
      WdLogEvent5_WdWarning(v99);
      *v27 = 1;
    }
    v142 = 1;
    if ( !v8 )
      goto LABEL_63;
    if ( *((_DWORD *)v8 + 636) )
    {
      v33 = DpiFdoEnumChildDevices(a1);
      v16 = v33;
      if ( v33 < 0 )
        goto LABEL_142;
    }
    v35 = *((_DWORD *)v8 + 637);
    if ( v35 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v35, 0x74727044u);
      v32 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v16) = -1073741670;
        v100 = WdLogNewEntry5_WdLowResource(v36);
        *(_QWORD *)(v100 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v100);
        goto LABEL_120;
      }
      v37 = 0LL;
      if ( *((_DWORD *)v8 + 637) )
      {
        while ( 1 )
        {
          v38 = DMgrAcquireGdiViewId((char *)PoolWithTag + 4 * v37);
          v16 = v38;
          if ( v38 < 0 )
            break;
          v37 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v37 >= *((_DWORD *)v8 + 637) )
            goto LABEL_31;
        }
        *((_DWORD *)v8 + 637) = v37;
        v101 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v101[3] = (unsigned int)v37;
        v101[4] = a1;
        v101[5] = v16;
        WdLogEvent5_WdError(v101);
        if ( !(_DWORD)v37 )
          goto LABEL_120;
      }
    }
LABEL_31:
    v40 = v8 + 3736;
    v41 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(v8 + 3736), v152);
    v16 = v41;
    if ( v41 < 0 )
      goto LABEL_122;
    v42 = *((_QWORD *)v8 + 466);
    if ( v42 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24));
    }
    else
    {
      v102 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v102 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v102);
    }
    v141 = 1;
    LOBYTE(v13) = v8[3737] ^ (v8[3737] ^ (2 * v8[3737])) & 8;
    v8[3737] = v13;
    if ( (v13 & 4) != 0 && (!*(_QWORD *)(v10 + 1128) || !*(_QWORD *)(v10 + 1136)) )
    {
      v103 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v103 + 24) = v16;
      WdLogEvent5_WdError(v103);
      v8[3737] &= ~8u;
    }
    v43 = v8[3737];
    if ( (v43 & 8) == 0 && !*(_QWORD *)(v10 + 208) )
    {
      v104 = -1073741735LL;
      goto LABEL_159;
    }
    if ( !qword_1C0060868
      && ((v43 & 1) != 0 || DpiHybridInternalPanelOverride() && (*v40 & 0x20) != 0 && v8[1136] && (*v40 & 0x40) == 0) )
    {
      qword_1C0060868 = (__int64)a1;
    }
    if ( (*v40 & 0x40) != 0 )
    {
      v13 = qword_1C0060860;
      if ( !qword_1C0060860 || (struct _DEVICE_OBJECT *)qword_1C0060860 == a1 )
      {
        qword_1C0060860 = (__int64)a1;
        HIBYTE(word_1C006085C) = (v8[3737] & 2) != 0;
      }
      else
      {
        *v40 &= ~0x40u;
      }
    }
    if ( qword_1C0060868 && qword_1C0060860 && !(_BYTE)word_1C006085C )
    {
      LOBYTE(word_1C006085C) = 1;
      *((_BYTE *)DXGGLOBAL::GetGlobal(v13) + 537) = 1;
    }
    v44 = (*v40 & 1) != 0 || (_BYTE)word_1C006085C && (*v40 & 0x40) != 0;
    v13 = (__int64)v160;
    *v160 = v44;
    if ( v8[1136] && (*v40 & 1) == 0 )
    {
      v104 = -1071775740LL;
LABEL_159:
      LODWORD(v16) = v104;
      v85 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v85 + 24) = v104;
      goto LABEL_119;
    }
    if ( !*((_DWORD *)v8 + 836)
      || (v45 = *((_QWORD *)v8 + 6),
          v46 = *((_QWORD *)v8 + 5),
          v164[1] = 0LL,
          v164[2] = 0LL,
          v164[0] = 67108861LL,
          v47 = DpiDxgkDdiDisplayDetectControl(v8, v46, v45, v164),
          v16 = v47,
          v47 >= 0) )
    {
      RelatedObjects = DpiFdoCreateRelatedObjects(a1, *((unsigned int *)v8 + 637), v32, v152);
      v16 = RelatedObjects;
      if ( RelatedObjects < 0 )
        goto LABEL_122;
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        PoolWithTag = 0LL;
      }
      if ( (*v40 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
      {
        MonitorInitializeAdapterDone(*((DXGADAPTER **)v8 + 466), v152);
        DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      }
      LOBYTE(v32) = 1;
      if ( *((_DWORD *)v8 + 772) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v8, v50, v8 + 3080);
        v110 = Caps;
        if ( Caps < 0 )
        {
          v111 = WdLogNewEntry5_WdEvent(v107, v106, v108, v109);
          *(_QWORD *)(v111 + 24) = v110;
          WdLogEvent5_WdEvent(v111);
          *((_DWORD *)v8 + 772) = -1;
          memset(v8 + 3016, 0, 0x40uLL);
        }
      }
      v51 = DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, &Handle);
      v56 = v51;
      if ( v51 < 0 )
      {
        v112 = WdLogNewEntry5_WdEvent(v53, v52, v54, v55);
        *(_QWORD *)(v112 + 24) = v56;
        WdLogEvent5_WdEvent(v112);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, (__int64)(v8 + 4640)) < 0 )
        {
          v61 = WdLogNewEntry5_WdEvent(v58, v57, v59, v60);
          *(_QWORD *)(v61 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v61);
        }
        ZwClose(Handle);
      }
      v64 = *((_QWORD *)v8 + 582);
      if ( v64 )
      {
        if ( *(_QWORD *)(v64 + 48) && *(_BYTE *)v64 )
        {
          *(_BYTE *)v64 = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            cDataa[0] = *(unsigned __int8 *)(*((_QWORD *)v8 + 582) + 2LL);
            McTemplateK0pt(&DxgkControlGuid_Context, &EventDpiFdoThermalActiveCooling, v63, a1, *(_QWORD *)cDataa);
          }
          v113 = *((_QWORD *)v8 + 582);
          LOBYTE(v62) = *(_BYTE *)(v113 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v113 + 48))(*(_QWORD *)(v113 + 16), v62);
        }
        v114 = *((_QWORD *)v8 + 582);
        if ( *(_QWORD *)(v114 + 56) && *(_BYTE *)(v114 + 1) )
        {
          *(_BYTE *)(v114 + 1) = 0;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            cDataa[0] = *(_DWORD *)(*((_QWORD *)v8 + 582) + 4LL);
            McTemplateK0xq(cDataa[0], &EventDpiFdoThermalPassiveCooling, v63, a1, *(_QWORD *)cDataa);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v8 + 582) + 56LL))(
            *(_QWORD *)(*((_QWORD *)v8 + 582) + 16LL),
            *(unsigned int *)(*((_QWORD *)v8 + 582) + 4LL));
        }
      }
      if ( !v8[1139] || (v65 = 0, !v8[480]) )
        v65 = 1;
      v66 = IoSetDeviceInterfaceState((PUNICODE_STRING)v8 + 163, v65);
      v16 = v66;
      if ( v66 >= 0 )
      {
        v140 = 1;
        v67 = DpiFdoInitializeGpuVirtualization((__int64)a1);
        v16 = v67;
        if ( v67 >= 0 )
        {
LABEL_63:
          *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension
                                                                                           + 60);
          v68 = *((_DWORD *)DeviceExtension + 59);
          ++*((_DWORD *)DeviceExtension + 69);
          *((_DWORD *)DeviceExtension + 60) = v68;
          *((_DWORD *)DeviceExtension + 59) = 2;
          if ( v8 )
          {
            if ( v8[481] )
            {
              DXGADAPTER::StartRuntimePowerManagement(*((DXGADAPTER **)v8 + 466));
              if ( v8[5232] )
              {
                v115 = IoSetDeviceInterfaceState((PUNICODE_STRING)v8 + 326, 1u);
                v16 = v115;
                if ( v115 < 0 )
                {
                  v117 = WdLogNewEntry5_WdError(v116);
                  *(_QWORD *)(v117 + 24) = v16;
                  WdLogEvent5_WdError(v117);
                  goto LABEL_68;
                }
              }
            }
            if ( !v8[480] && *((_DWORD *)v8 + 837) != -1 )
              LPMDisplayRegisterInternalDisplay(*((_QWORD *)v8 + 466));
            DpiBrightnessStartDevice(a1);
          }
          DxgkMiracastQueryMiracastSupportInternal(0LL);
LABEL_68:
          LOBYTE(v32) = v141;
          v140 = v141;
          goto LABEL_69;
        }
      }
LABEL_142:
      v97 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v97 + 24) = v16;
      goto LABEL_143;
    }
    v85 = WdLogNewEntry5_WdError(v48);
    v86 = *(_QWORD *)(v10 + 1128);
LABEL_117:
    *(_QWORD *)(v85 + 24) = v86;
    *(_QWORD *)(v85 + 32) = v16;
    goto LABEL_119;
  }
  v90 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v90 + 24) = *(_QWORD *)(v10 + 152);
  *(_QWORD *)(v90 + 32) = v16;
  WdLogEvent5_WdError(v90);
  if ( (_DWORD)v16 == -1071775735 )
  {
    P = 0LL;
    if ( !DeviceExtension[1136] )
      goto LABEL_69;
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             &P,
                             &v158);
    v96 = DevicePropertyString;
    if ( DevicePropertyString < 0 )
    {
      v97 = WdLogNewEntry5_WdError(v95);
      *(_QWORD *)(v97 + 24) = v96;
LABEL_143:
      WdLogEvent5_WdError(v97);
      goto LABEL_69;
    }
    WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else if ( (_DWORD)v16 == -1071774944 && DeviceExtension[1136] )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91, v93);
    v98[3] = 275LL;
    v98[4] = 26LL;
    v98[5] = v10;
    v98[6] = (unsigned __int8)byte_1C0060855;
    v98[7] = 0LL;
    WdLogEvent5_WdCriticalError(v98);
  }
LABEL_69:
  v69 = 0;
  if ( v8 )
    v69 = ((unsigned __int8)v8[3736] >> 1) & 0x21 | (2
                                                   * (v8[3736] & 1 | (2
                                                                    * (v8[480] & 1 | (2
                                                                                    * (v8[1136] & 1 | (2 * (v8[2556] & 1 | (4 * (v8[3736] & 0x84 | v8[3737] & 1 | (2 * (v8[3736] & 0x38 | (*((_DWORD *)v8 + 126) != 0 ? 4 : 0) | v8[1143] & 1))))))))))));
  if ( (int)v16 < 0 )
  {
    v118 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v118);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v119 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v119;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v8 )
    {
      if ( v140 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)v8 + 163, 0);
      DpiFdoCleanupGpuVirtualization(v8);
      if ( (_BYTE)v32 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v152);
      v121 = PoolWithTag;
      v122 = 0;
      if ( PoolWithTag )
      {
        if ( *((_DWORD *)v8 + 637) )
        {
          do
          {
            LOBYTE(v120) = 1;
            DMgrReleaseGdiViewId(*((unsigned int *)PoolWithTag + v122++), v120);
          }
          while ( v122 < *((_DWORD *)v8 + 637) );
          v10 = v161;
          v121 = PoolWithTag;
        }
        ExFreePoolWithTag(v121, 0);
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0060860 == a1 )
      {
        word_1C006085C = 0;
        qword_1C0060860 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0060868 == a1 )
      {
        LOBYTE(word_1C006085C) = 0;
        qword_1C0060868 = 0LL;
      }
      if ( v141 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*((_QWORD *)v8 + 466) + 2352LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v123 = (DXGADAPTER *)*((_QWORD *)v8 + 466);
        if ( v123 )
          DXGADAPTER::Stop(v123, 0, 0);
        DxgkReleaseAdapterFdoReference(*((_QWORD *)v8 + 466));
        *((_QWORD *)v8 + 466) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v142 == 1 )
    {
      if ( v10 )
      {
        if ( !DeviceExtension[1136] )
          goto LABEL_218;
        v124 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
        memset(v229, 0, 0x48uLL);
        v229[0] = 0x480000001ELL;
        memset(&v229[1], 0, 36);
        v229[8] = *((_QWORD *)DeviceExtension + 317);
        v229[6] = 0x100000062LL;
        v229[7] = (unsigned int)v124;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v229);
        if ( v124 < 0 )
        {
LABEL_218:
          if ( v8 )
            v8[3736] &= ~4u;
          DpiDxgkDdiStopDevice(v10, *((_QWORD *)DeviceExtension + 6));
        }
      }
    }
    if ( v143 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    if ( v10 )
      v125 = *(_QWORD *)(v10 + 152);
    else
      v125 = 0LL;
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)v16, v69, v125);
  }
  if ( DeviceExtension[1139] )
  {
    if ( DeviceExtension[1136] )
    {
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.wProductType = 1;
      v71 = VerSetConditionMask(0LL, 0x80u, 1u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 0x80u, v71) >= 0 )
      {
        v150 = 0;
        v219 = L"BasicDisplayUserNotified";
        v217 = 0LL;
        v218 = 288;
        v220 = &v150;
        v222 = &v150;
        v221 = 67108868;
        v223 = 4;
        v224 = 0LL;
        v225 = 0;
        memset(v226, 0, sizeof(v226));
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v217, 0LL, 0LL);
        if ( !v150 )
          WdDiagNotifyUser(0LL, 8LL, 0LL, 0LL);
      }
    }
  }
  if ( v8 )
  {
    if ( DeviceExtension[1143] )
    {
      v126 = *((_QWORD *)v8 + 126);
      if ( v126 )
      {
        v127 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)v8 + 133);
        if ( v127 )
        {
          v128 = v127(v126, (unsigned int)v16);
          v130 = v128;
          if ( v128 < 0 )
          {
            v131 = WdLogNewEntry5_WdError(v129);
            *(_QWORD *)(v131 + 24) = *((_QWORD *)v8 + 133);
            *(_QWORD *)(v131 + 32) = v130;
            WdLogEvent5_WdError(v131);
          }
        }
        v132 = (__int64 (__fastcall *)(_QWORD, char *))*((_QWORD *)v8 + 135);
        if ( v132 )
        {
          v133 = v132(*((_QWORD *)v8 + 126), v162);
          v135 = v133;
          if ( v133 < 0 )
          {
            v136 = WdLogNewEntry5_WdError(v134);
            *(_QWORD *)(v136 + 24) = *((_QWORD *)v8 + 135);
            *(_QWORD *)(v136 + 32) = v135;
            WdLogEvent5_WdError(v136);
          }
          else
          {
            *((_DWORD *)v8 + 286) = v163;
          }
        }
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)v8 + 19), PowerRelations);
      }
    }
  }
  if ( DeviceExtension[483] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    memset(v230, 0, sizeof(v230));
    v230[0] = 0x500000001ALL;
    memset(&v230[1], 0, 36);
    v230[7] = *((_QWORD *)DeviceExtension + 317);
    LODWORD(v230[6]) = v16;
    HIDWORD(v230[6]) = (unsigned int)a1 & 0xFFFF00;
    LODWORD(v230[8]) = DxgkDiagCalcDuration1us(&v156);
    HIDWORD(v230[8]) = *((_DWORD *)v8 + 936);
    LODWORD(v230[9]) = v69;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v230);
    if ( DeviceExtension[1136] )
    {
      if ( qword_1C0060A88 )
      {
        v76 = *(_QWORD *)(qword_1C0060A88 + 64);
        if ( v76 )
        {
          v77 = *(_QWORD *)(v76 + 40);
          if ( v77 )
          {
            if ( *(_QWORD *)(v77 + 408) )
            {
              v78 = ExAllocatePoolWithTag(PagedPool, 0x86E8uLL, 0x74727044u);
              v79 = v78;
              if ( v78 )
              {
                v80 = *(_QWORD *)(v76 + 40);
                v165 = 0LL;
                v166 = 0;
                v167 = v78;
                v168 = 34536;
                v169 = 0LL;
                if ( (*(int (__fastcall **)(__int64, __int64 *))(v80 + 408))(v80, &v165) >= 0 )
                {
                  EtwActivityIdControl(3u, &ActivityId);
                  if ( dword_1C005F810 > 5u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F810, 0x800000000000uLL) )
                    {
                      v145 = 1;
                      v235 = &v145;
                      v237 = v240;
                      v239 = (char *)(v79 + 8608);
                      v240[1] = v79 + 8624;
                      v240[3] = v79 + 8625;
                      v153 = v79[8627];
                      v240[5] = &v153;
                      v154 = v79[8628];
                      v240[7] = &v154;
                      v146 = *((_BYTE *)v79 + 34504);
                      v240[9] = &v146;
                      v147 = *((_BYTE *)v79 + 34516);
                      v240[11] = &v147;
                      v148 = *((_BYTE *)v79 + 34520);
                      v240[13] = &v148;
                      v149 = *((_BYTE *)v79 + 34524);
                      v240[15] = &v149;
                      v240[17] = v79 + 8632;
                      v236 = 1LL;
                      v238 = 2LL;
                      v240[0] = 64LL;
                      v240[2] = 4LL;
                      v240[4] = 4LL;
                      v240[6] = 4LL;
                      v240[8] = 4LL;
                      v240[10] = 1LL;
                      v240[12] = 1LL;
                      v240[14] = 1LL;
                      v240[16] = 1LL;
                      v240[18] = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C005F810, &unk_1C0041070, &ActivityId, v81, 0xEu, &pData);
                    }
                  }
                }
                ExFreePoolWithTag(v79, 0x74727044u);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    memset(v228, 0, sizeof(v228));
    v137 = DxgkDiagCalcDuration1us(&v156);
    v228[0] = 0x4000000006LL;
    memset(&v228[1], 0, 36);
    LODWORD(v228[6]) = 35;
    HIDWORD(v228[6]) = (unsigned int)a1 & 0xFFFF00;
    v228[7] = __PAIR64__(v16, v137);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v228);
  }
  return (unsigned int)v16;
}
