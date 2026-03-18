/*
 * XREFs of DpiAddDevice @ 0x1C0203030
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkDiagCalcDuration1us @ 0x1C003B9C8 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C003C41C (DpiGetDeviceRegistryPaths.c)
 *     McTemplateK0ppq @ 0x1C0041428 (McTemplateK0ppq.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C00421AC (DpiDxgkDdiLinkDevice.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpEvalAcpiMethod @ 0x1C01ED000 (DpEvalAcpiMethod.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F2824 (DpiFdoDetectPostDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 *     DpiFdoResetFdo @ 0x1C01F8990 (DpiFdoResetFdo.c)
 *     DpiFdoDetectVgaDeviceInCapabilities @ 0x1C01FD4FC (DpiFdoDetectVgaDeviceInCapabilities.c)
 *     DpiGetAgpStatus @ 0x1C01FD884 (DpiGetAgpStatus.c)
 *     DpiGetDevicePropertyString @ 0x1C01FDC14 (DpiGetDevicePropertyString.c)
 *     DpiQueryBusInterface @ 0x1C01FE1B0 (DpiQueryBusInterface.c)
 *     DpiSetDeviceUsageType @ 0x1C01FE58C (DpiSetDeviceUsageType.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0207E00 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C020807C (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02094E0 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C0209BF0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiAddDevice @ 0x1C020A004 (DpiDxgkDdiAddDevice.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C020A260 (DpiDxgkDdiExchangePreStartInfo.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C020AB34 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        struct _DEVICE_OBJECT *a2,
        __int64 a3)
{
  BOOL v3; // r12d
  char *DeviceExtension; // rbx
  char *v7; // r14
  __int64 v8; // rcx
  char *DriverObjectExtension; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 RegistryValues; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v16; // rcx
  char v17; // al
  int DevicePropertyString; // eax
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  ULONG v22; // edi
  int v23; // r12d
  __int64 v24; // rax
  struct _KMUTANT *v25; // rdi
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  void (__fastcall *v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rax
  void (__fastcall *v31)(_QWORD); // rax
  void *v32; // rcx
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *v34; // rcx
  BOOL v35; // r12d
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  NTSTATUS v41; // eax
  char v42; // r12
  struct _DEVICE_OBJECT *v43; // rdi
  PDEVICE_OBJECT v44; // rax
  int DeviceRegistryPaths; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ecx
  struct _DEVICE_OBJECT *v49; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rax
  _DWORD *v56; // rdi
  NTSTATUS v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rsi
  __int64 v62; // rax
  struct _DEVICE_OBJECT *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v71; // al
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  PVOID PoolWithTag; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int16 *v80; // rcx
  int v81; // edx
  int v82; // edi
  char v83; // al
  struct _DEVICE_OBJECT *v84; // rcx
  int AgpStatus; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  char v95; // al
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  struct _DEVICE_OBJECT *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rcx
  PVOID v116; // rdi
  __int16 v117; // r10
  const wchar_t **v118; // r9
  unsigned int v119; // edx
  const wchar_t *v120; // rax
  char *v121; // rcx
  __int64 v122; // rax
  _DWORD *v123; // rdx
  unsigned __int64 v124; // r8
  int v125; // eax
  __int64 v126; // rax
  char v127; // r15
  int v128; // eax
  PVOID *v129; // rdx
  _DWORD *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  NTSTATUS v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rax
  _DWORD *v136; // rax
  _DWORD *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  char v143; // al
  __int64 v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rcx
  PVOID *v147; // rax
  unsigned int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 Exclusive; // [rsp+28h] [rbp-D8h]
  char v153; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  char v155; // [rsp+50h] [rbp-B0h]
  char v156; // [rsp+51h] [rbp-AFh]
  char v157; // [rsp+52h] [rbp-AEh]
  char v158; // [rsp+53h] [rbp-ADh]
  char v159; // [rsp+54h] [rbp-ACh]
  char v160; // [rsp+55h] [rbp-ABh]
  char v161; // [rsp+56h] [rbp-AAh] BYREF
  char v162; // [rsp+57h] [rbp-A9h]
  char v163; // [rsp+58h] [rbp-A8h]
  char v164; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v166; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  int v168; // [rsp+70h] [rbp-90h]
  unsigned int v169; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v170; // [rsp+78h] [rbp-88h]
  int v171; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v172; // [rsp+80h] [rbp-80h] BYREF
  void *Source1; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v175; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  __int64 v177; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v179; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v180; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v181; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v182; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v183; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v184[14]; // [rsp+110h] [rbp+10h] BYREF
  int v185[6]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v186; // [rsp+198h] [rbp+98h] BYREF
  int v187; // [rsp+1A0h] [rbp+A0h]
  _QWORD v188[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v189[2]; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v190; // [rsp+1F8h] [rbp+F8h] BYREF
  int v191; // [rsp+200h] [rbp+100h]
  const wchar_t *v192; // [rsp+208h] [rbp+108h]
  int v193; // [rsp+210h] [rbp+110h]
  const wchar_t *v194; // [rsp+218h] [rbp+118h]
  int v195; // [rsp+220h] [rbp+120h]
  const wchar_t *v196; // [rsp+228h] [rbp+128h]
  _DWORD v197[10]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v198; // [rsp+258h] [rbp+158h] BYREF
  __int64 v199; // [rsp+268h] [rbp+168h]
  int v200; // [rsp+270h] [rbp+170h]
  wchar_t v201; // [rsp+274h] [rbp+174h]
  __int128 v202; // [rsp+278h] [rbp+178h] BYREF
  __int64 v203; // [rsp+288h] [rbp+188h]
  wchar_t v204; // [rsp+290h] [rbp+190h]
  _OWORD v205[2]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v206; // [rsp+2B8h] [rbp+1B8h]
  wchar_t v207; // [rsp+2C0h] [rbp+1C0h]
  _OWORD v208[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t v209; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v210[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v211; // [rsp+310h] [rbp+210h]
  int v212; // [rsp+318h] [rbp+218h]
  _OWORD v213[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v214; // [rsp+340h] [rbp+240h]

  v186 = 0LL;
  LOBYTE(v3) = 0;
  v187 = 0;
  DeviceExtension = 0LL;
  v204 = aDriverVgpu[12];
  v7 = 0LL;
  v202 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = a2;
  v181.Buffer = (wchar_t *)&v202;
  v209 = aDriverWddmwarp[16];
  v208[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v179.Buffer = (wchar_t *)v208;
  String1.Buffer = (wchar_t *)v213;
  v203 = *(_QWORD *)L"VGPU";
  v207 = aDriverBasicdis[20];
  v213[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v182.Buffer = (wchar_t *)v205;
  v214 = *(_QWORD *)L"der";
  v200 = *(_DWORD *)L"md";
  v208[1] = *(_OWORD *)L"WddmWarp";
  v201 = aDriverSrakmd[14];
  DriverObject = ClientIdentificationAddress;
  v205[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v172 = 0LL;
  v213[1] = *(_OWORD *)L"BasicRender";
  v164 = 0;
  DeviceObject = 0LL;
  v206 = *(_QWORD *)L"play";
  LOBYTE(v168) = 0;
  v205[1] = *(_OWORD *)L"BasicDisplay";
  v162 = 0;
  v198 = *(_OWORD *)L"\\Driver\\srakmd";
  v158 = 0;
  v199 = *(_QWORD *)L"srakmd";
  v163 = 0;
  v210[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v153 = 0;
  v157 = 0;
  v155 = 0;
  v159 = 0;
  v161 = 0;
  v156 = 0;
  v170 = v3;
  v160 = 0;
  v166 = 3;
  *(_DWORD *)&v181.Length = 1703960;
  *(_DWORD *)&v179.Length = 2228256;
  *(_DWORD *)&String1.Length = 2621478;
  *(_DWORD *)&v182.Length = 2752552;
  *(_DWORD *)&v183.Length = 1966108;
  v183.Buffer = (wchar_t *)&v198;
  v210[1] = *(_OWORD *)L"VirtualRender";
  v212 = *(_DWORD *)L"r";
  v180.Buffer = (wchar_t *)v210;
  v211 = *(_QWORD *)L"ender";
  *(_DWORD *)&v180.Length = 2883626;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq(64LL, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, a2, 0);
  v177 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(RegistryValues) = -1073741811;
    v145 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8);
    v145[3] = 275LL;
    v145[4] = 21LL;
    v145[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v145);
    goto LABEL_242;
  }
  v10 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, &v172);
  RegistryValues = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    v14 = *((_QWORD *)DriverObjectExtension + 18);
LABEL_9:
    *(_QWORD *)(v13 + 24) = v14;
    *(_QWORD *)(v13 + 32) = RegistryValues;
LABEL_10:
    WdLogEvent5_WdError(v13);
LABEL_242:
    v127 = 0;
    goto LABEL_243;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v164 = 1;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v16 = 1LL;
    v17 = 1;
    v153 = 1;
    v155 = 1;
    goto LABEL_31;
  }
  if ( !RtlCompareUnicodeString(&v179, p_DriverName, 1u) )
  {
    v155 = 1;
LABEL_19:
    v17 = 0;
    goto LABEL_31;
  }
  if ( !RtlCompareUnicodeString(&v180, p_DriverName, 1u) )
  {
    v160 = 1;
    goto LABEL_19;
  }
  if ( !RtlCompareUnicodeString(&v181, p_DriverName, 1u) )
  {
    v159 = 1;
    goto LABEL_19;
  }
  if ( RtlCompareUnicodeString(&v182, p_DriverName, 1u) )
  {
    v35 = RtlCompareUnicodeString(&v183, p_DriverName, 1u) == 0;
    v36 = DriverObjectExtension[134];
    v170 = v35;
    v156 = v36;
    memset(v184, 0, sizeof(v184));
    v37 = *((_QWORD *)DriverObjectExtension + 6);
    v184[2] = L"Start";
    LODWORD(v184[1]) = 292;
    v184[3] = &v169;
    LODWORD(v184[4]) = 67108868;
    LODWORD(v184[6]) = 4;
    RegistryValues = (int)RtlQueryRegistryValuesEx(0LL, v37, v184, 0LL, 0LL);
    v17 = 0;
    if ( (int)RegistryValues < 0 )
      goto LABEL_22;
    if ( v169 != 3 )
    {
      v38 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v38 + 24) = v169;
      WdLogEvent5_WdError(v38);
      LODWORD(RegistryValues) = -1073741637;
      goto LABEL_35;
    }
  }
  else
  {
    Source1 = 0LL;
    v157 = 1;
    DevicePropertyString = DpiGetDevicePropertyString(
                             TargetDevice,
                             DevicePropertyHardwareID,
                             PagedPool,
                             &Source1,
                             &ResultLength);
    RegistryValues = DevicePropertyString;
    if ( DevicePropertyString < 0 )
      goto LABEL_22;
    v19 = Source1;
    if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
    {
      v153 = 1;
      if ( byte_1C007A752 )
      {
        LODWORD(RegistryValues) = -1073741637;
        v21 = WdLogNewEntry5_WdEvent(v16, v20);
        *(_QWORD *)(v21 + 24) = 0LL;
        WdLogEvent5_WdEvent(v21);
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( (int)RegistryValues < 0 )
      goto LABEL_35;
    v17 = v153;
  }
LABEL_31:
  if ( v172 )
  {
    v22 = 6064;
    v23 = 2;
    v166 = 0;
    if ( *((_QWORD *)DriverObjectExtension + 77) )
    {
      if ( v17 )
      {
        LODWORD(RegistryValues) = -1073741637;
        v24 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v24 + 24) = *((_QWORD *)DriverObjectExtension + 77);
        *(_QWORD *)(v24 + 32) = -1073741637LL;
        goto LABEL_34;
      }
      v39 = DpiDxgkDdiLinkDevice((__int64)DriverObjectExtension, (__int64)TargetDevice, v172, (int *)&v186);
      RegistryValues = v39;
      if ( v39 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v40);
        v14 = *((_QWORD *)DriverObjectExtension + 77);
        goto LABEL_9;
      }
      if ( HIDWORD(v186) > 0x100 )
      {
        LODWORD(RegistryValues) = -1073741756;
        v24 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v24 + 24) = -1073741756LL;
        goto LABEL_34;
      }
      if ( HIDWORD(v186) && !(_BYTE)v187 )
      {
        v22 = 2608;
        v166 = 1;
        v23 = 3;
      }
    }
  }
  else
  {
    v166 = 2;
    v22 = 496;
    v23 = 4;
    if ( v17 )
    {
LABEL_33:
      LODWORD(RegistryValues) = -1073741637;
      v24 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v24 + 24) = -1073741637LL;
LABEL_34:
      WdLogEvent5_WdError(v24);
      goto LABEL_35;
    }
  }
  v41 = IoCreateDevice(DriverObject, v22, 0LL, 0x23u, v156 == 0 ? 0x100 : 0, 0, &DeviceObject);
  RegistryValues = v41;
  if ( v41 < 0 )
  {
LABEL_22:
    v13 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v13 + 24) = RegistryValues;
    goto LABEL_10;
  }
  v166 |= (unsigned int)DeviceObject & 0xFFFF00;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v23;
  v42 = v153;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = DeviceObject;
  *((_QWORD *)DeviceExtension + 5) = DriverObjectExtension;
  *((_QWORD *)DeviceExtension + 6) = v172;
  DeviceExtension[56] = 1;
  DeviceExtension[480] = v153;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v43 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v44 = IoAttachDeviceToDeviceStack(DeviceObject, v43);
  *((_QWORD *)DeviceExtension + 20) = v44;
  if ( !v44 )
  {
    LODWORD(RegistryValues) = -1073741810;
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = -1073741810LL;
    goto LABEL_34;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v7 = DeviceExtension;
    DeviceExtension[2557] = v155;
    DeviceExtension[1139] = v157;
    DeviceExtension[1143] = v156;
    DeviceExtension[2558] = v159;
    DeviceExtension[2559] = v170;
    DeviceExtension[2561] = v160;
    *((_DWORD *)DeviceExtension + 646) = 0;
    *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
    *((_QWORD *)DeviceExtension + 59) = DpiFdoHandleSurpriseRemoval;
    *((_QWORD *)DeviceExtension + 49) = DpiFdoHandleFilterResources;
    if ( !byte_1C007A751 && !DeviceExtension[480] )
      *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
    *(_QWORD *)(DeviceExtension + 500) = v186;
    *((_DWORD *)DeviceExtension + 127) = v187;
    DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObject, v43, (__int64)DriverObjectExtension);
    RegistryValues = DeviceRegistryPaths;
    if ( DeviceRegistryPaths < 0 )
      goto LABEL_204;
    if ( (int)DpiQueryBusInterface(
                *((PDEVICE_OBJECT *)DeviceExtension + 20),
                (ULONG_PTR)&GUID_ACPI_INTERFACE_STANDARD,
                0x58u,
                1u,
                (__int64)(DeviceExtension + 856)) >= 0 )
    {
      if ( *((_QWORD *)DriverObjectExtension + 29) )
      {
        v47 = DpiAcpiRegisterAcpiCallbacks(DeviceObject);
        v48 = (unsigned __int8)v168;
        if ( v47 >= 0 )
          v48 = 1;
        v168 = v48;
      }
      DeviceExtension[1141] = 1;
    }
    v49 = TargetDevice;
    DeviceProperty = IoGetDeviceProperty(
                       TargetDevice,
                       DevicePropertyBusNumber,
                       4u,
                       DeviceExtension + 1128,
                       &ResultLength);
    v54 = DeviceProperty;
    if ( DeviceProperty < 0 )
    {
      v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v55 + 24) = v54;
      WdLogEvent5_WdWarning(v55);
      *((_DWORD *)DeviceExtension + 282) = -1;
    }
    v56 = DeviceExtension + 1132;
    v57 = IoGetDeviceProperty(v49, DevicePropertyAddress, 4u, DeviceExtension + 1132, &ResultLength);
    v61 = v57;
    if ( v57 < 0 || *v56 == -1 )
    {
      v62 = WdLogNewEntry5_WdWarning(v59, v58, v60);
      *(_QWORD *)(v62 + 24) = v61;
      WdLogEvent5_WdWarning(v62);
      *v56 = -1;
    }
    v63 = TargetDevice;
    LODWORD(RegistryValues) = IoGetDeviceProperty(
                                TargetDevice,
                                DevicePropertyBusTypeGuid,
                                0x10u,
                                DeviceExtension + 544,
                                &ResultLength);
    if ( (int)RegistryValues < 0 || ResultLength < 0x10 )
    {
      v66 = WdLogNewEntry5_WdEvent(v65, v64);
      *(_QWORD *)(v66 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v66);
      *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
    }
    if ( !v153 )
    {
      v67 = DpiFdoDetectPostDevice((__int64)DeviceObject, &v161);
      RegistryValues = v67;
      if ( v67 < 0 )
        goto LABEL_204;
      if ( v161 )
      {
        v69 = WdLogNewEntry5_WdEvent(v46, v68);
        *(_QWORD *)(v69 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v69);
        *((_WORD *)DeviceExtension + 568) = 257;
        byte_1C007AAA0 = 1;
        if ( byte_1C007A751 == 1 )
        {
          AttachedDeviceReference = IoGetAttachedDeviceReference(v63);
          DpiSetDeviceUsageType(AttachedDeviceReference, 2u);
          ObfDereferenceObject(AttachedDeviceReference);
          v63 = TargetDevice;
        }
      }
    }
    v171 = 0;
    v71 = (int)DpiReadPnpRegistryValue((__int64)DeviceObject, L"SoftGPUAdapter", (char *)&v171, 4u, 2) >= 0 && v171;
    DeviceExtension[2556] = v71;
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
    {
      v74 = WdLogNewEntry5_WdEvent(v73, v72);
      *(_QWORD *)(v74 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v74);
      DpiQueryBusInterface(v63, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 0x40u, 1u, (__int64)(DeviceExtension + 560));
      if ( !*((_QWORD *)DeviceExtension + 77) )
      {
        v75 = -1073741127LL;
LABEL_122:
        LODWORD(RegistryValues) = v75;
        v76 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v76 + 24) = v75;
        WdLogEvent5_WdError(v76);
        goto LABEL_35;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
      *((_QWORD *)DeviceExtension + 137) = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(RegistryValues) = -1073741801;
        v79 = WdLogNewEntry5_WdLowResource(v78);
        *(_QWORD *)(v79 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v79);
        goto LABEL_35;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
        *((_QWORD *)DeviceExtension + 71),
        0LL,
        PoolWithTag,
        0LL,
        256);
      v80 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 137);
      *((_DWORD *)DeviceExtension + 276) = 1;
      v81 = *v80;
      *((_DWORD *)DeviceExtension + 277) = v81;
      v82 = v80[1];
      *((_DWORD *)DeviceExtension + 278) = v82;
      *((_DWORD *)DeviceExtension + 281) = *((unsigned __int8 *)v80 + 8);
      if ( (v80[7] & 0x7F) == 0 )
      {
        *((_DWORD *)DeviceExtension + 279) = v80[22];
        *((_DWORD *)DeviceExtension + 280) = v80[23];
      }
      if ( v81 != 22611 || (v83 = 1, v82 != 4097) )
        v83 = 0;
      v84 = TargetDevice;
      DeviceExtension[2560] = v83;
      DpiQueryBusInterface(
        v84,
        (ULONG_PTR)&GUID_PCI_DEVICE_PRESENT_INTERFACE,
        0x30u,
        1u,
        (__int64)(DeviceExtension + 624));
      DpiQueryBusInterface(
        *((PDEVICE_OBJECT *)DeviceExtension + 20),
        (ULONG_PTR)&GUID_AGP_BUS_INTERFACE_STANDARD,
        0xB8u,
        4u,
        (__int64)(DeviceExtension + 672));
      AgpStatus = DpiGetAgpStatus((__int64)DeviceObject);
      v89 = AgpStatus;
      if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
      {
        v90 = WdLogNewEntry5_WdWarning(v87, v86, v88);
        *(_QWORD *)(v90 + 24) = v89;
        WdLogEvent5_WdWarning(v90);
      }
      v91 = *((_QWORD *)DeviceObject->DeviceExtension + 137);
      v92 = DpiFdoDetectVgaDeviceInCapabilities((__int64)DeviceObject);
      v16 = (unsigned int)v92;
      if ( v92 >= 0 )
      {
        v95 = *(_BYTE *)(v91 + 11);
        if ( (v95 || *(_BYTE *)(v91 + 10) != 1) && (v95 != 3 || *(_BYTE *)(v91 + 10)) )
          v16 = 3221225473LL;
      }
      v96 = DeviceExtension[1136];
      LODWORD(RegistryValues) = v16;
      if ( (int)v16 < 0 )
      {
        if ( v96 )
        {
          v98 = WdLogNewEntry5_WdWarning(v16, v93, v94);
          *(_QWORD *)(v98 + 24) = DeviceObject;
          WdLogEvent5_WdWarning(v98);
        }
      }
      else if ( v96
             || !byte_1C007AAA0
             && (v97 = WdLogNewEntry5_WdWarning(v16, v93, v94),
                 *(_QWORD *)(v97 + 24) = DeviceObject,
                 WdLogEvent5_WdWarning(v97),
                 DeviceExtension[1136] = 1,
                 byte_1C007AAA1 = 1,
                 DeviceExtension[1136]) )
      {
        if ( byte_1C007A755 )
          DeviceExtension[1140] = 1;
      }
    }
    else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v101 = WdLogNewEntry5_WdEvent(v100, v99);
      *(_QWORD *)(v101 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v101);
      if ( !DeviceExtension[1141] )
        goto LABEL_33;
      *((_DWORD *)DeviceExtension + 276) = 2;
      BYTE1(v185[2]) = 0;
      HIWORD(v185[2]) = 0;
      strcpy((char *)v185, "AeiC_HID");
      v185[3] = 0;
      memset(v197, 0, 0x24uLL);
      v102 = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v185, 0x18u, v197, 0x24u);
      v104 = v102;
      if ( v102 >= 0 )
      {
        *((_DWORD *)DeviceExtension + 277) = v197[4];
        *((_DWORD *)DeviceExtension + 278) = v197[5];
      }
      else
      {
        v105 = WdLogNewEntry5_WdError(v103);
        *(_QWORD *)(v105 + 24) = v104;
        WdLogEvent5_WdError(v105);
      }
      strcpy((char *)v185, "AeiC_SUB");
      BYTE1(v185[2]) = 0;
      HIWORD(v185[2]) = 0;
      v185[3] = 0;
      memset(v197, 0, 0x24uLL);
      if ( (int)DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v185, 0x18u, v197, 0x24u) >= 0 )
      {
        *((_DWORD *)DeviceExtension + 279) = v197[4];
        *((_DWORD *)DeviceExtension + 280) = v197[5];
      }
      else
      {
        v108 = WdLogNewEntry5_WdEvent(v107, v106);
        *(_QWORD *)(v108 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v108);
      }
      strcpy((char *)v185, "AeiC_HRV");
      BYTE1(v185[2]) = 0;
      HIWORD(v185[2]) = 0;
      v185[3] = 0;
      memset(v197, 0, 0x24uLL);
      LODWORD(RegistryValues) = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v185, 0x18u, v197, 0x24u);
      if ( (int)RegistryValues >= 0 )
      {
        *((_DWORD *)DeviceExtension + 281) = LOWORD(v197[4]);
      }
      else
      {
        v109 = WdLogNewEntry5_WdEvent(v16, v93);
        *(_QWORD *)(v109 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v109);
        LODWORD(RegistryValues) = 0;
      }
      if ( DeviceExtension[1136] )
      {
        v110 = IoGetAttachedDeviceReference(TargetDevice);
        RegistryValues = (int)DpiSetDeviceUsageType(v110, 5u);
        ObfDereferenceObject(v110);
        if ( (int)RegistryValues < 0 )
        {
          v111 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v111 + 24) = RegistryValues;
          WdLogEvent5_WdError(v111);
          LODWORD(RegistryValues) = 0;
        }
      }
    }
    else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      v113 = WdLogNewEntry5_WdEvent(v16, v93);
      *(_QWORD *)(v113 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v113);
      if ( DeviceExtension[2558] )
      {
        *((_DWORD *)DeviceExtension + 277) = 5140;
        *((_QWORD *)DeviceExtension + 139) = 705LL;
        *((_DWORD *)DeviceExtension + 280) = 0;
        *((_DWORD *)DeviceExtension + 281) = 1;
      }
      *((_DWORD *)DeviceExtension + 276) = 4;
    }
    else if ( DeviceExtension[1143] )
    {
      *((_DWORD *)DeviceExtension + 277) = 5140;
      *((_QWORD *)DeviceExtension + 140) = 0LL;
      *((_DWORD *)DeviceExtension + 276) = 0;
      *((_QWORD *)DeviceExtension + 139) = 139LL;
    }
    else if ( DeviceExtension[480] )
    {
      *((_DWORD *)DeviceExtension + 276) = 3;
      *((_DWORD *)DeviceExtension + 277) = 5140;
      if ( DeviceExtension[1139] )
      {
        *((_DWORD *)DeviceExtension + 278) = 141;
      }
      else if ( DeviceExtension[2557] )
      {
        *((_DWORD *)DeviceExtension + 278) = 140;
      }
    }
    else
    {
      if ( !DeviceExtension[2559] && (!g_OSTestSigningEnabled || !DeviceExtension[2556]) )
        goto LABEL_33;
      *((_DWORD *)DeviceExtension + 276) = 3;
      if ( DeviceExtension[2556] )
      {
        *((_DWORD *)DeviceExtension + 277) = 5140;
        P = 0LL;
        v114 = DpiGetDevicePropertyString(v63, DevicePropertyCompatibleIDs, PagedPool, &P, &ResultLength);
        RegistryValues = v114;
        if ( v114 >= 0 && (v116 = P) != 0LL )
        {
          v117 = *(_WORD *)P;
          v190 = L"SoftGPU_Full_D3D12";
          v118 = &v190;
          v189[0] = 135;
          v192 = L"SoftGPU_Full_D3D9L";
          v119 = 0;
          v191 = 128;
          v194 = L"SoftGPU_Rod";
          v196 = L"SoftGPU_Dod";
          v193 = 136;
          v195 = 137;
          while ( 1 )
          {
            v120 = *v118;
            if ( v117 )
              break;
LABEL_188:
            if ( !*v120 )
              goto LABEL_191;
            ++v119;
            v118 += 2;
            if ( v119 >= 4 )
              goto LABEL_192;
          }
          v121 = (char *)((_BYTE *)P - (_BYTE *)v120);
          while ( *v120 )
          {
            if ( *(const wchar_t *)((char *)v120 + (_QWORD)v121) == *v120 )
            {
              if ( *(const wchar_t *)((char *)++v120 + (_QWORD)v121) )
                continue;
            }
            goto LABEL_188;
          }
LABEL_191:
          *((_DWORD *)DeviceExtension + 278) = v189[4 * v119];
LABEL_192:
          ExFreePoolWithTag(v116, 0);
        }
        else
        {
          v122 = WdLogNewEntry5_WdError(v115);
          *(_QWORD *)(v122 + 24) = RegistryValues;
          WdLogEvent5_WdError(v122);
        }
      }
    }
    if ( !DeviceExtension[1136] && !DeviceExtension[480] && DeviceExtension[1139] )
    {
      v112 = WdLogNewEntry5_WdEvent(v16, v93);
      *(_QWORD *)(v112 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v112);
      LODWORD(RegistryValues) = -1071774664;
      goto LABEL_35;
    }
    if ( DeviceExtension[2556] && DeviceExtension[2557] )
    {
      v75 = -1073741811LL;
      goto LABEL_122;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 164);
    v123 = DeviceExtension + 1176;
    *((_WORD *)DeviceExtension + 580) = 64;
    v124 = 7LL;
    if ( (((_BYTE)DeviceExtension - 104) & 4) != 0 )
    {
      *v123 = 1;
      v124 = 6LL;
      v123 = DeviceExtension + 1180;
    }
    memset64(v123, 0x100000001uLL, v124 >> 1);
    if ( (v124 & 1) != 0 )
      v123[v124 - 1] = 1;
    KeInitializeDpc((PRKDPC)(DeviceExtension + 1248), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObject);
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2384), 0);
    KeInitializeMutex((PRKMUTEX)DeviceExtension + 44, 0);
    *((_QWORD *)DeviceExtension + 297) = DeviceExtension + 2368;
    *((_QWORD *)DeviceExtension + 296) = DeviceExtension + 2368;
    *((_QWORD *)DeviceExtension + 307) = DeviceExtension + 2448;
    *((_QWORD *)DeviceExtension + 306) = DeviceExtension + 2448;
    *((_QWORD *)DeviceExtension + 322) = DeviceExtension + 2568;
    *((_QWORD *)DeviceExtension + 321) = DeviceExtension + 2568;
    if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 )
      goto LABEL_206;
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v125 = DpiFdoInitializeFdo(DeviceObject);
      RegistryValues = v125;
      if ( v125 < 0 )
      {
LABEL_204:
        v126 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v126 + 24) = RegistryValues;
        WdLogEvent5_WdError(v126);
        v127 = 0;
        goto LABEL_243;
      }
      v162 = 1;
LABEL_206:
      v42 = v153;
      goto LABEL_209;
    }
    v42 = v153;
    if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(RegistryValues) = 0;
      *((_QWORD *)DeviceObject->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_209:
  KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
  v158 = 1;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 126) )
    {
      v128 = DpiLdaLinkDeviceToChain(DeviceObject);
      RegistryValues = v128;
      if ( v128 < 0 )
        goto LABEL_204;
    }
  }
  v129 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
  if ( *v129 != DriverObjectExtension + 56 )
    __fastfail(3u);
  *(_QWORD *)DeviceExtension = DriverObjectExtension + 56;
  v127 = 1;
  *((_QWORD *)DeviceExtension + 1) = v129;
  *v129 = DeviceExtension;
  *((_QWORD *)DriverObjectExtension + 8) = DeviceExtension;
  ++*((_DWORD *)DriverObjectExtension + 32);
  if ( !*((_QWORD *)DeviceExtension + 21) )
  {
    v130 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = v130;
    if ( !v130 )
    {
LABEL_216:
      LODWORD(RegistryValues) = -1073741801;
      v132 = WdLogNewEntry5_WdLowResource(v131);
      *(_QWORD *)(v132 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v132);
LABEL_245:
      v25 = (struct _KMUTANT *)(DriverObjectExtension + 72);
      KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
      v146 = *(_QWORD **)DeviceExtension;
      if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
        || (v147 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v147 != DeviceExtension) )
      {
        __fastfail(3u);
      }
      *v147 = v146;
      v146[1] = v147;
      --*((_DWORD *)DriverObjectExtension + 32);
      if ( v7 && *((_DWORD *)v7 + 126) )
        DpiLdaUnLinkDeviceFromChain(DeviceObject);
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      goto LABEL_36;
    }
    v130[26] = 1;
    v133 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    RegistryValues = v133;
    if ( v133 < 0 )
    {
      v135 = WdLogNewEntry5_WdError(v134);
      *(_QWORD *)(v135 + 24) = RegistryValues;
LABEL_219:
      WdLogEvent5_WdError(v135);
      goto LABEL_243;
    }
    v163 = 1;
  }
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
  if ( v7 )
  {
    if ( !*((_QWORD *)v7 + 165) )
    {
      v136 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v7 + 165) = v136;
      if ( !v136 )
        goto LABEL_216;
      v136[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 165));
    }
    if ( !*((_QWORD *)v7 + 166) )
    {
      v137 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v7 + 166) = v137;
      if ( !v137 )
        goto LABEL_216;
      v137[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 166));
    }
    *((_DWORD *)v7 + 334) = 0;
    memset(v7 + 1344, 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
  v158 = 0;
  *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
  if ( v7 )
  {
    *((_QWORD *)v7 + 17) = DpiFdoDispatchPower;
    if ( v7[1136] )
    {
      AcquireMiniportListMutex();
      if ( qword_1C007A9D8 && qword_1C007A9D8 != qword_1C007A9E0 )
      {
        v140 = WdLogNewEntry5_WdError(v139);
        *(_QWORD *)(v140 + 24) = DeviceObject;
        *(_QWORD *)(v140 + 32) = (int)RegistryValues;
        WdLogEvent5_WdError(v140);
      }
      qword_1C007A9D8 = (__int64)DeviceObject;
      v141 = *((_QWORD *)v7 + 6);
      v175 = 0LL;
      RegistryValues = (int)DpiDxgkDdiExchangePreStartInfo(DriverObjectExtension, v141, &v175);
      _InterlockedExchange64(&qword_1C007A788, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
      if ( (int)RegistryValues < 0 )
      {
        v135 = WdLogNewEntry5_WdError(v142);
        *(_QWORD *)(v135 + 24) = *((_QWORD *)DriverObjectExtension + 143);
        *(_QWORD *)(v135 + 32) = RegistryValues;
        goto LABEL_219;
      }
      v138 = 1LL;
      v143 = BYTE4(v175) & 1;
      v7[2606] = (v175 & 0x200000000LL) != 0;
      v7[2605] = v143;
    }
  }
  if ( v42 && v157 )
    qword_1C007A9E0 = (__int64)DeviceObject;
  DeviceObject->Flags |= 4u;
  DeviceObject->Flags |= 0x2000u;
  DeviceObject->Flags &= ~0x4000u;
  DeviceObject->Flags &= ~0x80u;
  v144 = WdLogNewEntry5_WdEvent(0LL, v138);
  *(_QWORD *)(v144 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v144);
LABEL_243:
  if ( (int)RegistryValues >= 0 )
    goto LABEL_252;
  if ( v127 == 1 )
    goto LABEL_245;
LABEL_35:
  v25 = (struct _KMUTANT *)(DriverObjectExtension + 72);
LABEL_36:
  if ( v158 == 1 )
    KeReleaseMutex(v25, 0);
  if ( DeviceObject )
  {
    if ( v162 == 1 )
      DpiFdoResetFdo((__int64)DeviceObject);
    if ( v7 )
    {
      v26 = (_DWORD *)*((_QWORD *)v7 + 165);
      if ( v26 && v26[2] == 1 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v7 + 165) = 0LL;
      }
      v27 = (_DWORD *)*((_QWORD *)v7 + 166);
      if ( v27 && v27[2] == 1 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v7 + 166) = 0LL;
      }
      if ( (_BYTE)v168 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
      v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 73);
      if ( v28 )
      {
        v28(*((_QWORD *)v7 + 71));
        memset(v7 + 560, 0, 0x40uLL);
      }
      v29 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 81);
      if ( v29 )
      {
        v29(*((_QWORD *)v7 + 79));
        memset(v7 + 624, 0, 0x30uLL);
      }
      v30 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 87);
      if ( v30 )
      {
        v30(*((_QWORD *)v7 + 85));
        memset(v7 + 672, 0, 0xB8uLL);
      }
      v31 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 110);
      if ( v31 )
      {
        v31(*((_QWORD *)v7 + 108));
        memset(v7 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 33);
      v32 = (void *)*((_QWORD *)v7 + 137);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *((_QWORD *)v7 + 137) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v33 = *((_QWORD *)DeviceExtension + 21);
      if ( v33 )
      {
        if ( v163 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v33);
          v33 = *((_QWORD *)DeviceExtension + 21);
        }
        if ( *(_DWORD *)(v33 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v34 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v34 )
        IoDetachDevice(v34);
    }
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
  if ( v164 == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, v172);
  if ( (_DWORD)RegistryValues != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 2049LL, (int)RegistryValues, 0LL, 0LL);
LABEL_252:
  memset(v188, 0, sizeof(v188));
  v148 = DxgkDiagCalcDuration1us(&v177);
  v188[0] = 0x4000000006LL;
  memset(&v188[1], 0, 36);
  HIDWORD(v188[6]) = v166;
  LODWORD(v188[6]) = 34;
  v188[7] = __PAIR64__(RegistryValues, v148);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v188);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Exclusive) = RegistryValues;
    McTemplateK0ppq(v149, &EventExitDpiAddDevice, v150, DriverObject, TargetDevice, Exclusive);
  }
  return (unsigned int)RegistryValues;
}
