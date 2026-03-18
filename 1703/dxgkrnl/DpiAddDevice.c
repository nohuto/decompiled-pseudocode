/*
 * XREFs of DpiAddDevice @ 0x1C010E450
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0010B98 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C001188C (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0012C5C (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_ppq @ 0x1C0041FF0 (Template_ppq.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C010FD8C (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C0110238 (DpiGetDevicePropertyString.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 *     DpiFdoDetectPostDevice @ 0x1C011BD40 (DpiFdoDetectPostDevice.c)
 *     DpiGetAgpStatus @ 0x1C0122380 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C012249C (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0122BDC (DpiDxgkDdiAddDevice.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C01233A4 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpEvalAcpiMethod @ 0x1C01C14A0 (DpEvalAcpiMethod.c)
 *     DpiFdoResetFdo @ 0x1C01C52A8 (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C01C6AC4 (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C01CC648 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01CDA80 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C01CE1F0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C01CF720 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        struct _DEVICE_OBJECT *a2,
        __int64 a3)
{
  BOOL v3; // r12d
  char *DeviceExtension; // rbx
  char *v7; // r14
  char v8; // di
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *DriverObjectExtension; // r15
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 started; // rsi
  UNICODE_STRING *p_DriverName; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdi
  char v22; // al
  ULONG v23; // edi
  int v24; // r12d
  NTSTATUS v25; // eax
  char v26; // r12
  struct _DEVICE_OBJECT *v27; // rax
  PDEVICE_OBJECT v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _DEVICE_OBJECT *v31; // r13
  NTSTATUS DeviceProperty; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  _DWORD *v39; // rdi
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  bool v49; // al
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int64 v55; // r8
  PVOID *v56; // rdx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  NTSTATUS v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  BOOL v73; // r12d
  __int64 v74; // rdx
  int RegistryValues; // eax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  PVOID PoolWithTag; // rax
  __int64 v85; // rcx
  unsigned __int16 *v86; // rcx
  char v87; // al
  int AgpStatus; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdi
  _BYTE *v94; // rdx
  char v95; // al
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  struct _DEVICE_OBJECT *v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  _QWORD *v132; // rdx
  PVOID *v133; // rax
  _DWORD *v134; // rcx
  _DWORD *v135; // rcx
  void (__fastcall *v136)(_QWORD); // rax
  void (__fastcall *v137)(_QWORD); // rax
  void (__fastcall *v138)(_QWORD); // rax
  void (__fastcall *v139)(_QWORD); // rax
  void *v140; // rcx
  struct _ERESOURCE *v141; // rcx
  _DWORD *v142; // rcx
  struct _DEVICE_OBJECT *v143; // rcx
  __int64 Exclusive; // [rsp+28h] [rbp-3C0h]
  char v145; // [rsp+40h] [rbp-3A8h]
  PDEVICE_OBJECT SourceDevice; // [rsp+48h] [rbp-3A0h] BYREF
  char v147; // [rsp+50h] [rbp-398h]
  char v148; // [rsp+51h] [rbp-397h]
  char v149; // [rsp+52h] [rbp-396h]
  char v150; // [rsp+53h] [rbp-395h]
  char v151; // [rsp+54h] [rbp-394h] BYREF
  char v152; // [rsp+55h] [rbp-393h]
  char v153; // [rsp+56h] [rbp-392h]
  char v154; // [rsp+57h] [rbp-391h]
  int v155; // [rsp+58h] [rbp-390h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-38Ch] BYREF
  int v157; // [rsp+60h] [rbp-388h] BYREF
  int v158; // [rsp+64h] [rbp-384h] BYREF
  int v159; // [rsp+68h] [rbp-380h]
  unsigned int v160; // [rsp+6Ch] [rbp-37Ch] BYREF
  BOOL v161; // [rsp+70h] [rbp-378h]
  int v162; // [rsp+74h] [rbp-374h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-370h]
  __int64 v164; // [rsp+80h] [rbp-368h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+88h] [rbp-360h]
  void *Source1; // [rsp+90h] [rbp-358h]
  __int64 v167; // [rsp+98h] [rbp-350h] BYREF
  __int64 v168; // [rsp+A0h] [rbp-348h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-340h] BYREF
  UNICODE_STRING v170; // [rsp+B8h] [rbp-330h] BYREF
  UNICODE_STRING v171; // [rsp+C8h] [rbp-320h] BYREF
  UNICODE_STRING v172; // [rsp+D8h] [rbp-310h] BYREF
  UNICODE_STRING v173; // [rsp+E8h] [rbp-300h] BYREF
  UNICODE_STRING v174; // [rsp+F8h] [rbp-2F0h] BYREF
  _QWORD v175[14]; // [rsp+110h] [rbp-2D8h] BYREF
  _DWORD v176[4]; // [rsp+180h] [rbp-268h] BYREF
  __int64 v177; // [rsp+198h] [rbp-250h] BYREF
  int v178; // [rsp+1A0h] [rbp-248h]
  _QWORD v179[8]; // [rsp+1B0h] [rbp-238h] BYREF
  __int64 v180; // [rsp+1F0h] [rbp-1F8h] BYREF
  int v181; // [rsp+1F8h] [rbp-1F0h]
  const wchar_t *v182; // [rsp+200h] [rbp-1E8h]
  int *v183; // [rsp+208h] [rbp-1E0h]
  int v184; // [rsp+210h] [rbp-1D8h]
  int *v185; // [rsp+218h] [rbp-1D0h]
  int v186; // [rsp+220h] [rbp-1C8h]
  __int64 v187; // [rsp+228h] [rbp-1C0h]
  int v188; // [rsp+230h] [rbp-1B8h]
  const wchar_t *v189; // [rsp+238h] [rbp-1B0h]
  int *v190; // [rsp+240h] [rbp-1A8h]
  int v191; // [rsp+248h] [rbp-1A0h]
  int *v192; // [rsp+250h] [rbp-198h]
  int v193; // [rsp+258h] [rbp-190h]
  __int64 v194; // [rsp+260h] [rbp-188h]
  int v195; // [rsp+268h] [rbp-180h]
  _BYTE v196[40]; // [rsp+270h] [rbp-178h] BYREF
  _DWORD v197[10]; // [rsp+2A0h] [rbp-148h] BYREF
  __int128 v198; // [rsp+2C8h] [rbp-120h] BYREF
  __int64 v199; // [rsp+2D8h] [rbp-110h]
  int v200; // [rsp+2E0h] [rbp-108h]
  wchar_t v201; // [rsp+2E4h] [rbp-104h]
  __int128 v202; // [rsp+2E8h] [rbp-100h] BYREF
  __int64 v203; // [rsp+2F8h] [rbp-F0h]
  wchar_t v204; // [rsp+300h] [rbp-E8h]
  _OWORD v205[2]; // [rsp+308h] [rbp-E0h] BYREF
  __int64 v206; // [rsp+328h] [rbp-C0h]
  wchar_t v207; // [rsp+330h] [rbp-B8h]
  _OWORD v208[2]; // [rsp+338h] [rbp-B0h] BYREF
  wchar_t v209; // [rsp+358h] [rbp-90h]
  _OWORD v210[2]; // [rsp+360h] [rbp-88h] BYREF
  __int64 v211; // [rsp+380h] [rbp-68h]
  int v212; // [rsp+388h] [rbp-60h]
  _OWORD v213[2]; // [rsp+390h] [rbp-58h] BYREF
  __int64 v214; // [rsp+3B0h] [rbp-38h]

  TargetDevice = a2;
  v203 = *(_QWORD *)L"VGPU";
  v177 = 0LL;
  LOBYTE(v3) = 0;
  v178 = 0;
  DeviceExtension = 0LL;
  v204 = aDriverVgpu[12];
  v7 = 0LL;
  v202 = *(_OWORD *)L"\\Driver\\VGPU";
  *(_DWORD *)&v172.Length = 1703960;
  v172.Buffer = (wchar_t *)&v202;
  v8 = 0;
  v9 = 0;
  v208[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v209 = aDriverWddmwarp[16];
  *(_DWORD *)&v170.Length = 2228256;
  v170.Buffer = (wchar_t *)v208;
  v213[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_DWORD *)&String1.Length = 2621478;
  v214 = *(_QWORD *)L"der";
  String1.Buffer = (wchar_t *)v213;
  v208[1] = *(_OWORD *)L"WddmWarp";
  v207 = aDriverBasicdis[20];
  *(_DWORD *)&v173.Length = 2752552;
  v205[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v173.Buffer = (wchar_t *)v205;
  v213[1] = *(_OWORD *)L"BasicRender";
  v200 = *(_DWORD *)L"md";
  v206 = *(_QWORD *)L"play";
  v201 = aDriverSrakmd[14];
  v205[1] = *(_OWORD *)L"BasicDisplay";
  *(_DWORD *)&v174.Length = 1966108;
  v198 = *(_OWORD *)L"\\Driver\\srakmd";
  DriverObject = ClientIdentificationAddress;
  v164 = 0LL;
  v199 = *(_QWORD *)L"srakmd";
  v154 = 0;
  v210[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  SourceDevice = 0LL;
  v210[1] = *(_OWORD *)L"VirtualRender";
  LOBYTE(v159) = 0;
  v152 = 0;
  v153 = 0;
  v145 = 0;
  v148 = 0;
  v149 = 0;
  v151 = 0;
  v147 = 0;
  v161 = v3;
  v150 = 0;
  v155 = 3;
  v174.Buffer = (wchar_t *)&v198;
  v212 = *(_DWORD *)L"r";
  *(_DWORD *)&v171.Length = 2883626;
  v171.Buffer = (wchar_t *)v210;
  v211 = *(_QWORD *)L"ender";
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppq((__int64)ClientIdentificationAddress, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, a2, 0);
  v168 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(started) = -1073741811;
    v131 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v131[3] = 275LL;
    v131[4] = 21LL;
    v131[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v131);
    goto LABEL_201;
  }
  v14 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, &v164);
  started = v14;
  if ( v14 < 0 )
  {
    v101 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v101 + 24) = *((_QWORD *)DriverObjectExtension + 18);
    *(_QWORD *)(v101 + 32) = started;
    WdLogEvent5_WdError(v101);
LABEL_201:
    v26 = 0;
LABEL_78:
    if ( (int)started >= 0 )
      goto LABEL_79;
    if ( v8 != 1 )
    {
LABEL_209:
      if ( v26 != 1 )
        goto LABEL_211;
LABEL_210:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      goto LABEL_211;
    }
LABEL_203:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v132 = *(_QWORD **)DeviceExtension;
    v133 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v133 != DeviceExtension )
      __fastfail(3u);
    *v133 = v132;
    v132[1] = v133;
    --*((_DWORD *)DriverObjectExtension + 32);
    if ( v7 && *((_DWORD *)v7 + 126) )
      DpiLdaUnLinkDeviceFromChain(SourceDevice);
    KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
    goto LABEL_209;
  }
  p_DriverName = &DriverObject->DriverName;
  v154 = 1;
  if ( !RtlCompareUnicodeString(&String1, &DriverObject->DriverName, 1u) )
  {
    v22 = 1;
    v9 = 1;
    v145 = 1;
    goto LABEL_17;
  }
  if ( !RtlCompareUnicodeString(&v170, p_DriverName, 1u) )
  {
    v9 = 1;
LABEL_84:
    v22 = 0;
    goto LABEL_17;
  }
  if ( !RtlCompareUnicodeString(&v171, p_DriverName, 1u) )
  {
    v150 = 1;
    goto LABEL_84;
  }
  if ( !RtlCompareUnicodeString(&v172, p_DriverName, 1u) )
  {
    v149 = 1;
    goto LABEL_84;
  }
  if ( RtlCompareUnicodeString(&v173, p_DriverName, 1u) )
  {
    v73 = RtlCompareUnicodeString(&v174, p_DriverName, 1u) == 0;
    v147 = DriverObjectExtension[134];
    v161 = v73;
    memset(v175, 0, sizeof(v175));
    v74 = *((_QWORD *)DriverObjectExtension + 6);
    v175[2] = L"Start";
    LODWORD(v175[1]) = 292;
    v175[3] = &v160;
    LODWORD(v175[4]) = 67108868;
    LODWORD(v175[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v74, v175, 0LL, 0LL);
    started = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_134;
    if ( v160 != 3 )
    {
      v104 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v104 + 24) = v160;
      WdLogEvent5_WdError(v104);
      LODWORD(started) = -1073741637;
      goto LABEL_211;
    }
    goto LABEL_84;
  }
  Source1 = 0LL;
  v148 = 1;
  LODWORD(started) = DpiGetDevicePropertyString(
                       TargetDevice,
                       DevicePropertyHardwareID,
                       PagedPool,
                       (__int64)&ResultLength);
  if ( (int)started < 0 )
    goto LABEL_211;
  v21 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v22 = 1;
    v145 = 1;
    if ( byte_1C006F9D7 )
    {
      v180 = 0LL;
      v187 = 0LL;
      v194 = 0LL;
      v195 = 0;
      v157 = -1;
      v158 = -1;
      v182 = L"EnableBasicDisplayFallback";
      v181 = 288;
      v183 = &v157;
      v185 = &v157;
      v189 = L"DisableBasicDisplayFallback";
      v190 = &v158;
      v188 = 288;
      v192 = &v158;
      v184 = 67108868;
      v186 = 4;
      v191 = 67108868;
      v193 = 4;
      memset(v196, 0, sizeof(v196));
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v180, 0LL, 0LL) >= 0
        && v157 != 1
        && v158 == 1 )
      {
        LODWORD(started) = -1073741637;
        v102 = WdLogNewEntry5_WdEvent(v20);
        *(_QWORD *)(v102 + 24) = 0LL;
        WdLogEvent5_WdEvent(v102);
        goto LABEL_211;
      }
      v22 = 1;
    }
  }
  else
  {
    v22 = 0;
  }
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    v22 = v145;
  }
LABEL_17:
  if ( !v164 )
  {
    v155 = 2;
    v23 = 496;
    v24 = 4;
    if ( !v22 )
      goto LABEL_19;
    LODWORD(started) = -1073741637;
    v105 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v105 + 24) = -1073741637LL;
LABEL_141:
    WdLogEvent5_WdError(v105);
    goto LABEL_211;
  }
  v155 = 0;
  v23 = 5104;
  v24 = 2;
  if ( !*((_QWORD *)DriverObjectExtension + 77) )
    goto LABEL_19;
  if ( v22 )
  {
    LODWORD(started) = -1073741637;
    v105 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v105 + 24) = *((_QWORD *)DriverObjectExtension + 77);
    *(_QWORD *)(v105 + 32) = -1073741637LL;
    goto LABEL_141;
  }
  v76 = DpiDxgkDdiLinkDevice((__int64)DriverObjectExtension, (__int64)TargetDevice, v164, (int *)&v177);
  started = v76;
  if ( v76 < 0 )
  {
    v103 = WdLogNewEntry5_WdError(v78, v77);
    *(_QWORD *)(v103 + 24) = *((_QWORD *)DriverObjectExtension + 77);
    *(_QWORD *)(v103 + 32) = started;
    goto LABEL_136;
  }
  if ( HIDWORD(v177) > 0x100 )
  {
    LODWORD(started) = -1073741756;
    v105 = WdLogNewEntry5_WdError(v78, v77);
    *(_QWORD *)(v105 + 24) = -1073741756LL;
    goto LABEL_141;
  }
  if ( HIDWORD(v177) && !(_BYTE)v178 )
  {
    v23 = 2608;
    v155 = 1;
    v24 = 3;
  }
LABEL_19:
  v25 = IoCreateDevice(DriverObject, v23, 0LL, 0x23u, v147 == 0 ? 0x100 : 0, 0, &SourceDevice);
  started = v25;
  if ( v25 < 0 )
  {
LABEL_134:
    v103 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v103 + 24) = started;
LABEL_136:
    WdLogEvent5_WdError(v103);
    v8 = 0;
    goto LABEL_201;
  }
  v155 |= (unsigned int)SourceDevice & 0xFFFF00;
  DeviceExtension = (char *)SourceDevice->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v24;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  v26 = 1;
  *((_QWORD *)DeviceExtension + 3) = SourceDevice;
  *((_QWORD *)DeviceExtension + 4) = SourceDevice;
  *((_QWORD *)DeviceExtension + 5) = DriverObjectExtension;
  *((_QWORD *)DeviceExtension + 6) = v164;
  DeviceExtension[480] = v145;
  DeviceExtension[56] = 1;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v27 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v28 = IoAttachDeviceToDeviceStack(SourceDevice, v27);
  *((_QWORD *)DeviceExtension + 20) = v28;
  if ( !v28 )
  {
    v106 = -1073741810LL;
LABEL_147:
    LODWORD(started) = v106;
    v107 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v107 + 24) = v106;
    WdLogEvent5_WdError(v107);
    goto LABEL_211;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
    goto LABEL_56;
  v7 = DeviceExtension;
  DeviceExtension[1139] = v148;
  DeviceExtension[1143] = v147;
  DeviceExtension[2558] = v149;
  DeviceExtension[2559] = v161;
  DeviceExtension[2561] = v150;
  DeviceExtension[2557] = v9;
  *((_DWORD *)DeviceExtension + 646) = 0;
  *((_QWORD *)DeviceExtension + 36) = &DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C006F9D1 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
  v31 = TargetDevice;
  *(_QWORD *)(DeviceExtension + 500) = v177;
  *((_DWORD *)DeviceExtension + 127) = v178;
  LODWORD(started) = DpiGetDeviceRegistryPaths((__int64)SourceDevice, (__int64)v31, (__int64)DriverObjectExtension);
  if ( (int)started < 0 )
    goto LABEL_211;
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *((_QWORD *)DriverObjectExtension + 29) )
    {
      v79 = DpiAcpiRegisterAcpiCallbacks(SourceDevice);
      v80 = (unsigned __int8)v159;
      if ( v79 >= 0 )
        v80 = 1;
      v159 = v80;
    }
    DeviceExtension[1141] = 1;
  }
  DeviceProperty = IoGetDeviceProperty(v31, DevicePropertyBusNumber, 4u, DeviceExtension + 1128, &ResultLength);
  v37 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = v37;
    WdLogEvent5_WdWarning(v38);
    *((_DWORD *)DeviceExtension + 282) = -1;
  }
  v39 = DeviceExtension + 1132;
  v40 = IoGetDeviceProperty(v31, DevicePropertyAddress, 4u, DeviceExtension + 1132, &ResultLength);
  v45 = v40;
  if ( v40 < 0 || *v39 == -1 )
  {
    v46 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
    *(_QWORD *)(v46 + 24) = v45;
    WdLogEvent5_WdWarning(v46);
    *v39 = -1;
  }
  LODWORD(started) = IoGetDeviceProperty(v31, DevicePropertyBusTypeGuid, 0x10u, DeviceExtension + 544, &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    v48 = WdLogNewEntry5_WdEvent(v47);
    *(_QWORD *)(v48 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v48);
    *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
  }
  if ( !v145 )
  {
    LODWORD(started) = DpiFdoDetectPostDevice(SourceDevice, &v151);
    if ( (int)started < 0 )
      goto LABEL_211;
    if ( v151 )
    {
      v82 = WdLogNewEntry5_WdEvent(v81);
      *(_QWORD *)(v82 + 24) = SourceDevice;
      WdLogEvent5_WdEvent(v82);
      *((_WORD *)DeviceExtension + 568) = 257;
      byte_1C006FCC8 = 1;
      if ( byte_1C006F9D1 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v31);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
      }
    }
  }
  v162 = 0;
  v49 = (int)DpiReadPnpRegistryValue(SourceDevice, L"SoftGPUAdapter", &v162, 4LL, 2) >= 0 && v162;
  DeviceExtension[2556] = v49;
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(DeviceExtension + 544, &DeviceObject.Dpc.DpcListEntry, 0x10uLL) == 16 )
    {
      v113 = WdLogNewEntry5_WdEvent(v51);
      *(_QWORD *)(v113 + 24) = SourceDevice;
      WdLogEvent5_WdEvent(v113);
      if ( DeviceExtension[1141] )
      {
        *((_DWORD *)DeviceExtension + 276) = 2;
        BYTE1(v176[2]) = 0;
        HIWORD(v176[2]) = 0;
        strcpy((char *)v176, "AeiC_HID");
        v176[3] = 0;
        memset(v197, 0, 0x24uLL);
        v114 = DpEvalAcpiMethod((int)SourceDevice, v197, 0x24u);
        v117 = v114;
        if ( v114 >= 0 )
        {
          *((_DWORD *)DeviceExtension + 277) = v197[4];
          *((_DWORD *)DeviceExtension + 278) = v197[5];
        }
        else
        {
          v118 = WdLogNewEntry5_WdError(v116, v115);
          *(_QWORD *)(v118 + 24) = v117;
          WdLogEvent5_WdError(v118);
        }
        strcpy((char *)v176, "AeiC_SUB");
        v176[3] = 0;
        BYTE1(v176[2]) = 0;
        HIWORD(v176[2]) = 0;
        memset(v197, 0, 0x24uLL);
        if ( (int)DpEvalAcpiMethod((int)SourceDevice, v197, 0x24u) >= 0 )
        {
          *((_DWORD *)DeviceExtension + 279) = v197[4];
          *((_DWORD *)DeviceExtension + 280) = v197[5];
        }
        else
        {
          v121 = WdLogNewEntry5_WdEvent(v120);
          *(_QWORD *)(v121 + 24) = DpEvalAcpiMethod;
          WdLogEvent5_WdEvent(v121);
        }
        strcpy((char *)v176, "AeiC_HRV");
        BYTE1(v176[2]) = 0;
        HIWORD(v176[2]) = 0;
        v176[3] = 0;
        memset(v197, 0, 0x24uLL);
        LODWORD(started) = DpEvalAcpiMethod((int)SourceDevice, v197, 0x24u);
        if ( (int)started >= 0 )
        {
          *((_DWORD *)DeviceExtension + 281) = LOWORD(v197[4]);
        }
        else
        {
          v122 = WdLogNewEntry5_WdEvent(v53);
          *(_QWORD *)(v122 + 24) = DpEvalAcpiMethod;
          WdLogEvent5_WdEvent(v122);
          LODWORD(started) = 0;
        }
        if ( DeviceExtension[1136] )
        {
          v123 = IoGetAttachedDeviceReference(v31);
          started = (int)DpiSetDeviceUsageType(v123);
          ObfDereferenceObject(v123);
          if ( (int)started < 0 )
          {
            v125 = WdLogNewEntry5_WdError(v53, v124);
            *(_QWORD *)(v125 + 24) = started;
            WdLogEvent5_WdError(v125);
            LODWORD(started) = 0;
          }
        }
        goto LABEL_44;
      }
      goto LABEL_166;
    }
    if ( RtlCompareMemory(DeviceExtension + 544, &DeviceObject.Dpc.DeferredRoutine, 0x10uLL) != 16 )
    {
      if ( DeviceExtension[1143] )
      {
        *((_QWORD *)DeviceExtension + 140) = 0LL;
        *((_DWORD *)DeviceExtension + 277) = 5140;
        *((_QWORD *)DeviceExtension + 139) = 139LL;
        *((_DWORD *)DeviceExtension + 276) = 0;
LABEL_44:
        v26 = 1;
        goto LABEL_45;
      }
      if ( DeviceExtension[480] )
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
        goto LABEL_44;
      }
      if ( DeviceExtension[2559] || g_OSTestSigningEnabled && DeviceExtension[2556] )
      {
        *((_DWORD *)DeviceExtension + 276) = 3;
        goto LABEL_44;
      }
LABEL_166:
      LODWORD(started) = -1073741637;
      v119 = WdLogNewEntry5_WdError(v53, v52);
      *(_QWORD *)(v119 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v119);
      goto LABEL_211;
    }
    v126 = WdLogNewEntry5_WdEvent(v53);
    *(_QWORD *)(v126 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v126);
    v26 = 1;
    if ( DeviceExtension[2558] )
    {
      *((_DWORD *)DeviceExtension + 277) = 5140;
      *((_QWORD *)DeviceExtension + 139) = 705LL;
      *((_DWORD *)DeviceExtension + 280) = 0;
      *((_DWORD *)DeviceExtension + 281) = 1;
    }
    *((_DWORD *)DeviceExtension + 276) = 4;
LABEL_45:
    if ( DeviceExtension[1136] )
      goto LABEL_47;
    goto LABEL_46;
  }
  v83 = WdLogNewEntry5_WdEvent(v50);
  *(_QWORD *)(v83 + 24) = SourceDevice;
  WdLogEvent5_WdEvent(v83);
  v26 = 1;
  DpiQueryBusInterface(v31, (__int64)(DeviceExtension + 560));
  if ( !*((_QWORD *)DeviceExtension + 77) )
  {
    v106 = -1073741127LL;
    goto LABEL_147;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 137) = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(started) = -1073741801;
    v108 = WdLogNewEntry5_WdLowResource(v85);
    *(_QWORD *)(v108 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v108);
    goto LABEL_211;
  }
  (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
    *((_QWORD *)DeviceExtension + 71),
    0LL,
    PoolWithTag,
    0LL,
    256);
  v86 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 137);
  *((_DWORD *)DeviceExtension + 276) = 1;
  *((_DWORD *)DeviceExtension + 277) = *v86;
  *((_DWORD *)DeviceExtension + 278) = v86[1];
  *((_DWORD *)DeviceExtension + 281) = *((unsigned __int8 *)v86 + 8);
  if ( (v86[7] & 0x7F) == 0 )
  {
    *((_DWORD *)DeviceExtension + 279) = v86[22];
    *((_DWORD *)DeviceExtension + 280) = v86[23];
  }
  if ( *((_DWORD *)DeviceExtension + 277) != 22611 || (v87 = 1, *((_DWORD *)DeviceExtension + 278) != 4097) )
    v87 = 0;
  DeviceExtension[2560] = v87;
  DpiQueryBusInterface(v31, (__int64)(DeviceExtension + 624));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
  AgpStatus = DpiGetAgpStatus(SourceDevice);
  v93 = AgpStatus;
  if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
  {
    v110 = WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
    *(_QWORD *)(v110 + 24) = v93;
    WdLogEvent5_WdWarning(v110);
  }
  v53 = SourceDevice->DeviceExtension;
  v94 = (_BYTE *)v53[137];
  if ( (v94[4] & 1) != 0 && ((v95 = v94[11]) == 0 && v94[10] == 1 || v95 == 3 && !v94[10]) )
  {
    LODWORD(started) = 0;
    if ( DeviceExtension[1136] )
      goto LABEL_115;
    if ( !byte_1C006FCC8 )
    {
      v111 = WdLogNewEntry5_WdWarning(v53, v94, v91, v92);
      *(_QWORD *)(v111 + 24) = SourceDevice;
      WdLogEvent5_WdWarning(v111);
      DeviceExtension[1136] = 1;
      byte_1C006FCC9 = 1;
    }
    if ( DeviceExtension[1136] )
    {
LABEL_115:
      if ( byte_1C006F9D5 )
        DeviceExtension[1140] = 1;
      goto LABEL_45;
    }
  }
  else
  {
    LODWORD(started) = -1073741823;
    if ( DeviceExtension[1136] )
    {
      v112 = WdLogNewEntry5_WdWarning(v53, v94, v91, v92);
      *(_QWORD *)(v112 + 24) = SourceDevice;
      WdLogEvent5_WdWarning(v112);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( !DeviceExtension[480] && DeviceExtension[1139] )
  {
    v127 = WdLogNewEntry5_WdEvent(v53);
    *(_QWORD *)(v127 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v127);
    LODWORD(started) = -1071774664;
    goto LABEL_211;
  }
LABEL_47:
  if ( DeviceExtension[2556] && DeviceExtension[2557] )
  {
    LODWORD(started) = -1073741811;
    goto LABEL_211;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 164);
  v54 = DeviceExtension + 1176;
  v55 = 7LL;
  if ( (((_BYTE)DeviceExtension - 104) & 4) != 0 )
  {
    *v54 = 1;
    v55 = 6LL;
    v54 = DeviceExtension + 1180;
  }
  memset64(v54, 0x100000001uLL, v55 >> 1);
  if ( (v55 & 1) != 0 )
    v54[v55 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 1248), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, SourceDevice);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2384), 0);
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 44, 0);
  *((_QWORD *)DeviceExtension + 297) = DeviceExtension + 2368;
  *((_QWORD *)DeviceExtension + 296) = DeviceExtension + 2368;
  *((_QWORD *)DeviceExtension + 307) = DeviceExtension + 2448;
  *((_QWORD *)DeviceExtension + 306) = DeviceExtension + 2448;
  *((_QWORD *)DeviceExtension + 322) = DeviceExtension + 2568;
  *((_QWORD *)DeviceExtension + 321) = DeviceExtension + 2568;
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 )
  {
LABEL_56:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 126) )
      {
        LODWORD(started) = DpiLdaLinkDeviceToChain(SourceDevice);
        if ( (int)started < 0 )
          goto LABEL_210;
      }
    }
    v56 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
    if ( *v56 != DriverObjectExtension + 56 )
      __fastfail(3u);
    *(_QWORD *)DeviceExtension = DriverObjectExtension + 56;
    *((_QWORD *)DeviceExtension + 1) = v56;
    *v56 = DeviceExtension;
    *((_QWORD *)DriverObjectExtension + 8) = DeviceExtension;
    ++*((_DWORD *)DriverObjectExtension + 32);
    if ( !*((_QWORD *)DeviceExtension + 21) )
    {
      v57 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
      *((_QWORD *)DeviceExtension + 21) = v57;
      if ( !v57 )
        goto LABEL_194;
      v57[26] = 1;
      v59 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      started = v59;
      if ( v59 < 0 )
      {
        v129 = WdLogNewEntry5_WdError(v61, v60);
        *(_QWORD *)(v129 + 24) = started;
        goto LABEL_197;
      }
      v153 = 1;
    }
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
    if ( !v7 )
      goto LABEL_71;
    if ( !*((_QWORD *)v7 + 165) )
    {
      v62 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v7 + 165) = v62;
      if ( !v62 )
        goto LABEL_194;
      v62[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 165));
    }
    if ( *((_QWORD *)v7 + 166) )
    {
LABEL_70:
      *((_DWORD *)v7 + 334) = 0;
      memset(v7 + 1344, 0, 0x400uLL);
LABEL_71:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      v26 = 0;
      *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
      if ( !v7 )
        goto LABEL_73;
      *((_QWORD *)v7 + 17) = DpiFdoDispatchPower;
      if ( !v7[1136] )
        goto LABEL_73;
      AcquireMiniportListMutex();
      if ( qword_1C006FC00 && qword_1C006FC00 != qword_1C006FC08 )
      {
        v130 = WdLogNewEntry5_WdError(v97, v96);
        *(_QWORD *)(v130 + 24) = SourceDevice;
        *(_QWORD *)(v130 + 32) = (int)started;
        WdLogEvent5_WdError(v130);
      }
      qword_1C006FC00 = (__int64)SourceDevice;
      v98 = *((_QWORD *)v7 + 6);
      v167 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(DriverObjectExtension, v98, &v167);
      _InterlockedExchange64(&qword_1C006FA08, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (int)started >= 0 )
      {
        v64 = HIDWORD(v167) >> 1;
        LOBYTE(v64) = (v167 & 0x200000000LL) != 0;
        v7[2605] = BYTE4(v167) & 1;
        v7[2606] = v64;
LABEL_73:
        if ( v145 && v148 )
          qword_1C006FC08 = (__int64)SourceDevice;
        SourceDevice->Flags |= 4u;
        SourceDevice->Flags |= 0x2000u;
        SourceDevice->Flags &= ~0x4000u;
        SourceDevice->Flags &= ~0x80u;
        v65 = WdLogNewEntry5_WdEvent(v64);
        *(_QWORD *)(v65 + 24) = SourceDevice;
        WdLogEvent5_WdEvent(v65);
        goto LABEL_77;
      }
      v129 = WdLogNewEntry5_WdError(v100, v99);
      *(_QWORD *)(v129 + 24) = *((_QWORD *)DriverObjectExtension + 143);
      *(_QWORD *)(v129 + 32) = started;
LABEL_197:
      WdLogEvent5_WdError(v129);
LABEL_77:
      v8 = 1;
      goto LABEL_78;
    }
    v63 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
    *((_QWORD *)v7 + 166) = v63;
    if ( v63 )
    {
      v63[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v7 + 166));
      goto LABEL_70;
    }
LABEL_194:
    LODWORD(started) = -1073741801;
    v128 = WdLogNewEntry5_WdLowResource(v58);
    *(_QWORD *)(v128 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v128);
    goto LABEL_203;
  }
  if ( *((_DWORD *)DeviceExtension + 5) != 2 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)SourceDevice->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
    goto LABEL_56;
  }
  LODWORD(started) = DpiFdoInitializeFdo(SourceDevice);
  if ( (int)started >= 0 )
  {
    v152 = 1;
    goto LABEL_56;
  }
LABEL_211:
  if ( SourceDevice )
  {
    if ( v152 == 1 )
      DpiFdoResetFdo();
    if ( v7 )
    {
      v134 = (_DWORD *)*((_QWORD *)v7 + 165);
      if ( v134 && v134[2] == 1 )
      {
        ExFreePoolWithTag(v134, 0);
        *((_QWORD *)v7 + 165) = 0LL;
      }
      v135 = (_DWORD *)*((_QWORD *)v7 + 166);
      if ( v135 && v135[2] == 1 )
      {
        ExFreePoolWithTag(v135, 0);
        *((_QWORD *)v7 + 166) = 0LL;
      }
      if ( (_BYTE)v159 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(SourceDevice);
      v136 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 73);
      if ( v136 )
      {
        v136(*((_QWORD *)v7 + 71));
        memset(v7 + 560, 0, 0x40uLL);
      }
      v137 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 81);
      if ( v137 )
      {
        v137(*((_QWORD *)v7 + 79));
        memset(v7 + 624, 0, 0x30uLL);
      }
      v138 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 87);
      if ( v138 )
      {
        v138(*((_QWORD *)v7 + 85));
        memset(v7 + 672, 0, 0xB8uLL);
      }
      v139 = (void (__fastcall *)(_QWORD))*((_QWORD *)v7 + 110);
      if ( v139 )
      {
        v139(*((_QWORD *)v7 + 108));
        memset(v7 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 33);
      v140 = (void *)*((_QWORD *)v7 + 137);
      if ( v140 )
      {
        ExFreePoolWithTag(v140, 0);
        *((_QWORD *)v7 + 137) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v141 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
      if ( v141 )
      {
        if ( v153 == 1 )
          ExDeleteResourceLite(v141);
        v142 = (_DWORD *)*((_QWORD *)DeviceExtension + 21);
        if ( v142[26] == 1 && v142 )
        {
          ExFreePoolWithTag(v142, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v143 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v143 )
        IoDetachDevice(v143);
    }
    IoDeleteDevice(SourceDevice);
    SourceDevice = 0LL;
  }
  if ( v154 == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, v164);
  if ( (_DWORD)started != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL);
LABEL_79:
  memset(v179, 0, sizeof(v179));
  v66 = DxgkDiagCalcDuration1us(&v168);
  v179[0] = 0x4000000006LL;
  memset(&v179[1], 0, 36);
  HIDWORD(v179[6]) = v155;
  LODWORD(v179[6]) = 34;
  v179[7] = __PAIR64__(started, v66);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v179, v67, v68, v69);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Exclusive) = started;
    Template_ppq(v70, &EventExitDpiAddDevice, v71, DriverObject, TargetDevice, Exclusive);
  }
  return (unsigned int)started;
}
