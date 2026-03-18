/*
 * XREFs of DpiAddDevice @ 0x1C01148E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0012764 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C00135F0 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0013F2C (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppq @ 0x1C0032B64 (McTemplateK0ppq.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     DpiFdoInitializeFdo @ 0x1C0115904 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C01162F0 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C0116770 (DpiGetDevicePropertyString.c)
 *     DpiFdoDetectPostDevice @ 0x1C011C11C (DpiFdoDetectPostDevice.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0121484 (DpiDxgkDdiAddDevice.c)
 *     DpiGetAgpStatus @ 0x1C0121D78 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0122784 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0123C14 (DpiDxgkDdiExchangePreStartInfo.c)
 *     DpEvalAcpiMethod @ 0x1C0123D50 (DpEvalAcpiMethod.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiFdoResetFdo @ 0x1C01DEDB0 (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C01E0BE4 (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C01E6A24 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01E7E90 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C01E8600 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C01E9B40 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        struct _DEVICE_OBJECT *a2,
        __int64 a3)
{
  BOOL v3; // r12d
  PVOID **DeviceExtension; // rbx
  PVOID **v7; // r14
  char v8; // di
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *DriverObjectExtension; // r15
  int v14; // eax
  __int64 v15; // rcx
  __int64 started; // rsi
  UNICODE_STRING *p_DriverName; // rdi
  __int64 v18; // rcx
  void *v19; // rdi
  char v20; // al
  ULONG v21; // edi
  int v22; // r12d
  NTSTATUS v23; // eax
  char v24; // r12
  struct _DEVICE_OBJECT *v25; // rax
  PDEVICE_OBJECT v26; // rax
  __int64 v27; // rcx
  struct _DEVICE_OBJECT *v28; // r13
  NTSTATUS DeviceProperty; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  _DWORD *v35; // rdi
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  bool v47; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _BYTE *v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _DWORD *v60; // rdx
  unsigned __int64 v61; // r8
  PVOID *v62; // rdx
  PVOID *v63; // rax
  __int64 v64; // rcx
  NTSTATUS v65; // eax
  __int64 v66; // rcx
  PVOID *v67; // rax
  PVOID *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r8
  int v78; // eax
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rax
  PVOID *PoolWithTag; // rax
  __int64 v87; // rcx
  PVOID *v88; // rcx
  char v89; // al
  int AgpStatus; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdi
  char v94; // al
  __int64 v95; // rcx
  PVOID *v96; // rdx
  __int64 v97; // rcx
  BOOL v98; // r12d
  __int64 v99; // rdx
  int RegistryValues; // eax
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 v129; // rax
  struct _DEVICE_OBJECT *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  _QWORD *v137; // rax
  PVOID *v138; // rdx
  PVOID *v139; // rax
  PVOID *v140; // rcx
  PVOID *v141; // rcx
  PVOID *v142; // rax
  PVOID *v143; // rax
  PVOID *v144; // rax
  PVOID *v145; // rax
  PVOID *v146; // rcx
  struct _ERESOURCE *v147; // rcx
  PVOID *v148; // rcx
  struct _DEVICE_OBJECT *v149; // rcx
  __int64 Exclusive; // [rsp+28h] [rbp-3C0h]
  char v151; // [rsp+40h] [rbp-3A8h]
  PDEVICE_OBJECT SourceDevice; // [rsp+48h] [rbp-3A0h] BYREF
  char v153; // [rsp+50h] [rbp-398h]
  char v154; // [rsp+51h] [rbp-397h]
  char v155; // [rsp+52h] [rbp-396h]
  char v156; // [rsp+53h] [rbp-395h]
  char v157; // [rsp+54h] [rbp-394h] BYREF
  char v158; // [rsp+55h] [rbp-393h]
  char v159; // [rsp+56h] [rbp-392h]
  char v160; // [rsp+57h] [rbp-391h]
  int v161; // [rsp+58h] [rbp-390h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-38Ch] BYREF
  int v163; // [rsp+60h] [rbp-388h] BYREF
  int v164; // [rsp+64h] [rbp-384h] BYREF
  int v165; // [rsp+68h] [rbp-380h]
  unsigned int v166; // [rsp+6Ch] [rbp-37Ch] BYREF
  BOOL v167; // [rsp+70h] [rbp-378h]
  int v168; // [rsp+74h] [rbp-374h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-370h]
  PVOID *v170; // [rsp+80h] [rbp-368h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+88h] [rbp-360h]
  void *Source1; // [rsp+90h] [rbp-358h]
  __int64 v173; // [rsp+98h] [rbp-350h] BYREF
  __int64 v174; // [rsp+A0h] [rbp-348h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-340h] BYREF
  UNICODE_STRING v176; // [rsp+B8h] [rbp-330h] BYREF
  UNICODE_STRING v177; // [rsp+C8h] [rbp-320h] BYREF
  UNICODE_STRING v178; // [rsp+D8h] [rbp-310h] BYREF
  UNICODE_STRING v179; // [rsp+E8h] [rbp-300h] BYREF
  UNICODE_STRING v180; // [rsp+F8h] [rbp-2F0h] BYREF
  _QWORD v181[14]; // [rsp+110h] [rbp-2D8h] BYREF
  _DWORD v182[4]; // [rsp+180h] [rbp-268h] BYREF
  PVOID *v183; // [rsp+198h] [rbp-250h] BYREF
  int v184; // [rsp+1A0h] [rbp-248h]
  _QWORD v185[8]; // [rsp+1B0h] [rbp-238h] BYREF
  __int64 v186; // [rsp+1F0h] [rbp-1F8h] BYREF
  int v187; // [rsp+1F8h] [rbp-1F0h]
  const wchar_t *v188; // [rsp+200h] [rbp-1E8h]
  int *v189; // [rsp+208h] [rbp-1E0h]
  int v190; // [rsp+210h] [rbp-1D8h]
  int *v191; // [rsp+218h] [rbp-1D0h]
  int v192; // [rsp+220h] [rbp-1C8h]
  __int64 v193; // [rsp+228h] [rbp-1C0h]
  int v194; // [rsp+230h] [rbp-1B8h]
  const wchar_t *v195; // [rsp+238h] [rbp-1B0h]
  int *v196; // [rsp+240h] [rbp-1A8h]
  int v197; // [rsp+248h] [rbp-1A0h]
  int *v198; // [rsp+250h] [rbp-198h]
  int v199; // [rsp+258h] [rbp-190h]
  __int64 v200; // [rsp+260h] [rbp-188h]
  int v201; // [rsp+268h] [rbp-180h]
  _BYTE v202[40]; // [rsp+270h] [rbp-178h] BYREF
  _DWORD v203[10]; // [rsp+2A0h] [rbp-148h] BYREF
  __int128 v204; // [rsp+2C8h] [rbp-120h] BYREF
  __int64 v205; // [rsp+2D8h] [rbp-110h]
  int v206; // [rsp+2E0h] [rbp-108h]
  wchar_t v207; // [rsp+2E4h] [rbp-104h]
  __int128 v208; // [rsp+2E8h] [rbp-100h] BYREF
  __int64 v209; // [rsp+2F8h] [rbp-F0h]
  wchar_t v210; // [rsp+300h] [rbp-E8h]
  _OWORD v211[2]; // [rsp+308h] [rbp-E0h] BYREF
  __int64 v212; // [rsp+328h] [rbp-C0h]
  wchar_t v213; // [rsp+330h] [rbp-B8h]
  _OWORD v214[2]; // [rsp+338h] [rbp-B0h] BYREF
  wchar_t v215; // [rsp+358h] [rbp-90h]
  _OWORD v216[2]; // [rsp+360h] [rbp-88h] BYREF
  __int64 v217; // [rsp+380h] [rbp-68h]
  int v218; // [rsp+388h] [rbp-60h]
  _OWORD v219[2]; // [rsp+390h] [rbp-58h] BYREF
  __int64 v220; // [rsp+3B0h] [rbp-38h]

  TargetDevice = a2;
  v209 = *(_QWORD *)L"VGPU";
  v183 = 0LL;
  LOBYTE(v3) = 0;
  v184 = 0;
  DeviceExtension = 0LL;
  v210 = aDriverVgpu[12];
  v7 = 0LL;
  v208 = *(_OWORD *)L"\\Driver\\VGPU";
  *(_DWORD *)&v178.Length = 1703960;
  v178.Buffer = (wchar_t *)&v208;
  v8 = 0;
  v9 = 0;
  v214[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v215 = aDriverWddmwarp[16];
  *(_DWORD *)&v176.Length = 2228256;
  v176.Buffer = (wchar_t *)v214;
  v219[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_DWORD *)&String1.Length = 2621478;
  v220 = *(_QWORD *)L"der";
  String1.Buffer = (wchar_t *)v219;
  v214[1] = *(_OWORD *)L"WddmWarp";
  v213 = aDriverBasicdis[20];
  *(_DWORD *)&v179.Length = 2752552;
  v211[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v179.Buffer = (wchar_t *)v211;
  v219[1] = *(_OWORD *)L"BasicRender";
  v206 = *(_DWORD *)L"md";
  v212 = *(_QWORD *)L"play";
  v207 = aDriverSrakmd[14];
  v211[1] = *(_OWORD *)L"BasicDisplay";
  *(_DWORD *)&v180.Length = 1966108;
  v204 = *(_OWORD *)L"\\Driver\\srakmd";
  DriverObject = ClientIdentificationAddress;
  v170 = 0LL;
  v205 = *(_QWORD *)L"srakmd";
  v160 = 0;
  v216[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  SourceDevice = 0LL;
  v216[1] = *(_OWORD *)L"VirtualRender";
  LOBYTE(v165) = 0;
  v158 = 0;
  v159 = 0;
  v151 = 0;
  v154 = 0;
  v155 = 0;
  v157 = 0;
  v153 = 0;
  v167 = v3;
  v156 = 0;
  v161 = 3;
  v180.Buffer = (wchar_t *)&v204;
  v218 = *(_DWORD *)L"r";
  *(_DWORD *)&v177.Length = 2883626;
  v177.Buffer = (wchar_t *)v216;
  v217 = *(_QWORD *)L"ender";
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      a3,
      ClientIdentificationAddress,
      a2,
      0);
  v174 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(started) = -1073741811;
    v137 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
    v137[3] = 275LL;
    v137[4] = 21LL;
    v137[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v137);
    goto LABEL_204;
  }
  v14 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, &v170);
  started = v14;
  if ( v14 < 0 )
  {
    v103 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v103 + 24) = *((_QWORD *)DriverObjectExtension + 18);
    *(_QWORD *)(v103 + 32) = started;
    WdLogEvent5_WdError(v103);
LABEL_204:
    v24 = 0;
LABEL_80:
    if ( (int)started >= 0 )
      goto LABEL_81;
    if ( v8 != 1 )
    {
LABEL_212:
      if ( v24 != 1 )
        goto LABEL_214;
LABEL_213:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      goto LABEL_214;
    }
LABEL_206:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v138 = *DeviceExtension;
    if ( (*DeviceExtension)[1] != DeviceExtension || (v139 = DeviceExtension[1], *v139 != DeviceExtension) )
      __fastfail(3u);
    *v139 = v138;
    v138[1] = v139;
    --*((_DWORD *)DriverObjectExtension + 32);
    if ( v7 && *((_DWORD *)v7 + 126) )
      DpiLdaUnLinkDeviceFromChain(SourceDevice);
    KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
    goto LABEL_212;
  }
  p_DriverName = &DriverObject->DriverName;
  v160 = 1;
  if ( !RtlCompareUnicodeString(&String1, &DriverObject->DriverName, 1u) )
  {
    v20 = 1;
    v9 = 1;
    v151 = 1;
    goto LABEL_19;
  }
  if ( !RtlCompareUnicodeString(&v176, p_DriverName, 1u) )
  {
    v9 = 1;
LABEL_121:
    v20 = 0;
    goto LABEL_19;
  }
  if ( !RtlCompareUnicodeString(&v177, p_DriverName, 1u) )
  {
    v156 = 1;
    goto LABEL_121;
  }
  if ( !RtlCompareUnicodeString(&v178, p_DriverName, 1u) )
  {
    v155 = 1;
    goto LABEL_121;
  }
  if ( RtlCompareUnicodeString(&v179, p_DriverName, 1u) )
  {
    v98 = RtlCompareUnicodeString(&v180, p_DriverName, 1u) == 0;
    v153 = DriverObjectExtension[134];
    v167 = v98;
    memset(v181, 0, sizeof(v181));
    v99 = *((_QWORD *)DriverObjectExtension + 6);
    v181[2] = L"Start";
    LODWORD(v181[1]) = 292;
    v181[3] = &v166;
    LODWORD(v181[4]) = 67108868;
    LODWORD(v181[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v99, v181, 0LL, 0LL);
    started = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_137;
    if ( v166 != 3 )
    {
      v109 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v109 + 24) = v166;
      WdLogEvent5_WdError(v109);
      LODWORD(started) = -1073741637;
      goto LABEL_214;
    }
    goto LABEL_121;
  }
  Source1 = 0LL;
  v154 = 1;
  LODWORD(started) = DpiGetDevicePropertyString(
                       TargetDevice,
                       DevicePropertyHardwareID,
                       PagedPool,
                       (__int64)&ResultLength);
  if ( (int)started < 0 )
    goto LABEL_214;
  v19 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v20 = 1;
    v151 = 1;
    if ( byte_1C0060857 )
    {
      v186 = 0LL;
      v193 = 0LL;
      v200 = 0LL;
      v201 = 0;
      v163 = -1;
      v164 = -1;
      v188 = L"EnableBasicDisplayFallback";
      v187 = 288;
      v189 = &v163;
      v191 = &v163;
      v195 = L"DisableBasicDisplayFallback";
      v196 = &v164;
      v194 = 288;
      v198 = &v164;
      v190 = 67108868;
      v192 = 4;
      v197 = 67108868;
      v199 = 4;
      memset(v202, 0, sizeof(v202));
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v186, 0LL, 0LL) >= 0
        && v163 != 1
        && v164 == 1 )
      {
        LODWORD(started) = -1073741637;
        v107 = WdLogNewEntry5_WdEvent(v18, v104, v105, v106);
        *(_QWORD *)(v107 + 24) = 0LL;
        WdLogEvent5_WdEvent(v107);
        goto LABEL_214;
      }
      v20 = 1;
    }
  }
  else
  {
    v20 = 0;
  }
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    v20 = v151;
  }
LABEL_19:
  if ( !v170 )
  {
    v161 = 2;
    v21 = 496;
    v22 = 4;
    if ( !v20 )
      goto LABEL_21;
    LODWORD(started) = -1073741637;
    v110 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v110 + 24) = -1073741637LL;
LABEL_144:
    WdLogEvent5_WdError(v110);
    goto LABEL_214;
  }
  v161 = 0;
  v21 = 5240;
  v22 = 2;
  if ( !*((_QWORD *)DriverObjectExtension + 77) )
    goto LABEL_21;
  if ( v20 )
  {
    LODWORD(started) = -1073741637;
    v110 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v110 + 24) = *((_QWORD *)DriverObjectExtension + 77);
    *(_QWORD *)(v110 + 32) = -1073741637LL;
    goto LABEL_144;
  }
  v101 = DpiDxgkDdiLinkDevice((__int64)DriverObjectExtension, (__int64)TargetDevice, (__int64)v170, (int *)&v183);
  started = v101;
  if ( v101 < 0 )
  {
    v108 = WdLogNewEntry5_WdError(v102);
    *(_QWORD *)(v108 + 24) = *((_QWORD *)DriverObjectExtension + 77);
    *(_QWORD *)(v108 + 32) = started;
    goto LABEL_139;
  }
  if ( HIDWORD(v183) > 0x100 )
  {
    LODWORD(started) = -1073741756;
    v110 = WdLogNewEntry5_WdError(v102);
    *(_QWORD *)(v110 + 24) = -1073741756LL;
    goto LABEL_144;
  }
  if ( HIDWORD(v183) && !(_BYTE)v184 )
  {
    v21 = 2608;
    v161 = 1;
    v22 = 3;
  }
LABEL_21:
  v23 = IoCreateDevice(DriverObject, v21, 0LL, 0x23u, v153 == 0 ? 0x100 : 0, 0, &SourceDevice);
  started = v23;
  if ( v23 < 0 )
  {
LABEL_137:
    v108 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v108 + 24) = started;
LABEL_139:
    WdLogEvent5_WdError(v108);
    v8 = 0;
    goto LABEL_204;
  }
  v161 |= (unsigned int)SourceDevice & 0xFFFF00;
  DeviceExtension = (PVOID **)SourceDevice->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v22;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  v24 = 1;
  DeviceExtension[3] = (PVOID *)SourceDevice;
  DeviceExtension[4] = (PVOID *)SourceDevice;
  DeviceExtension[5] = (PVOID *)DriverObjectExtension;
  DeviceExtension[6] = v170;
  *((_BYTE *)DeviceExtension + 480) = v151;
  *((_BYTE *)DeviceExtension + 56) = 1;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v25 = TargetDevice;
  DeviceExtension[19] = (PVOID *)TargetDevice;
  v26 = IoAttachDeviceToDeviceStack(SourceDevice, v25);
  DeviceExtension[20] = (PVOID *)v26;
  if ( !v26 )
  {
    v111 = -1073741810LL;
LABEL_150:
    LODWORD(started) = v111;
    v112 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v112 + 24) = v111;
    WdLogEvent5_WdError(v112);
    goto LABEL_214;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  DeviceExtension[38] = (PVOID *)DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
    goto LABEL_58;
  v7 = DeviceExtension;
  *((_BYTE *)DeviceExtension + 1139) = v154;
  *((_BYTE *)DeviceExtension + 1143) = v153;
  *((_BYTE *)DeviceExtension + 2558) = v155;
  *((_BYTE *)DeviceExtension + 2559) = v167;
  *((_BYTE *)DeviceExtension + 2561) = v156;
  *((_BYTE *)DeviceExtension + 2557) = v9;
  *((_DWORD *)DeviceExtension + 646) = 0;
  DeviceExtension[36] = (PVOID *)&DpiFdoHandleStartDevice;
  DeviceExtension[59] = (PVOID *)&DpiFdoHandleSurpriseRemoval;
  DeviceExtension[49] = (PVOID *)&DpiFdoHandleFilterResources;
  if ( !byte_1C0060851 && !*((_BYTE *)DeviceExtension + 480) )
    DeviceExtension[40] = (PVOID *)DpiFdoHandleStopDevice;
  v28 = TargetDevice;
  *(PVOID **)((char *)DeviceExtension + 500) = v183;
  *((_DWORD *)DeviceExtension + 127) = v184;
  LODWORD(started) = DpiGetDeviceRegistryPaths((__int64)SourceDevice, (__int64)v28, (__int64)DriverObjectExtension);
  if ( (int)started < 0 )
    goto LABEL_214;
  if ( (int)DpiQueryBusInterface((PDEVICE_OBJECT)DeviceExtension[20], (__int64)(DeviceExtension + 107)) >= 0 )
  {
    if ( *((_QWORD *)DriverObjectExtension + 29) )
    {
      v78 = DpiAcpiRegisterAcpiCallbacks(SourceDevice);
      v79 = (unsigned __int8)v165;
      if ( v78 >= 0 )
        v79 = 1;
      v165 = v79;
    }
    *((_BYTE *)DeviceExtension + 1141) = 1;
  }
  DeviceProperty = IoGetDeviceProperty(v28, DevicePropertyBusNumber, 4u, DeviceExtension + 141, &ResultLength);
  v33 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v34 + 24) = v33;
    WdLogEvent5_WdWarning(v34);
    *((_DWORD *)DeviceExtension + 282) = -1;
  }
  v35 = (_DWORD *)DeviceExtension + 283;
  v36 = IoGetDeviceProperty(v28, DevicePropertyAddress, 4u, (char *)DeviceExtension + 1132, &ResultLength);
  v40 = v36;
  if ( v36 < 0 || *v35 == -1 )
  {
    v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v41 + 24) = v40;
    WdLogEvent5_WdWarning(v41);
    *v35 = -1;
  }
  LODWORD(started) = IoGetDeviceProperty(v28, DevicePropertyBusTypeGuid, 0x10u, DeviceExtension + 68, &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    v46 = WdLogNewEntry5_WdEvent(v43, v42, v44, v45);
    *(_QWORD *)(v46 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v46);
    *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
  }
  if ( !v151 )
  {
    LODWORD(started) = DpiFdoDetectPostDevice(SourceDevice, &v157);
    if ( (int)started < 0 )
      goto LABEL_214;
    if ( v157 )
    {
      v84 = WdLogNewEntry5_WdEvent(v81, v80, v82, v83);
      *(_QWORD *)(v84 + 24) = SourceDevice;
      WdLogEvent5_WdEvent(v84);
      *((_WORD *)DeviceExtension + 568) = 257;
      byte_1C0060B48 = 1;
      if ( byte_1C0060851 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v28);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
      }
    }
  }
  v168 = 0;
  v47 = (int)DpiReadPnpRegistryValue((__int64)SourceDevice, L"SoftGPUAdapter", (char *)&v168, 4u, 2u) >= 0 && v168;
  *((_BYTE *)DeviceExtension + 2556) = v47;
  if ( RtlCompareMemory(DeviceExtension + 68, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(DeviceExtension + 68, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v118 = WdLogNewEntry5_WdEvent(v53, v52, v54, v55);
      *(_QWORD *)(v118 + 24) = SourceDevice;
      WdLogEvent5_WdEvent(v118);
      if ( *((_BYTE *)DeviceExtension + 1141) )
      {
        *((_DWORD *)DeviceExtension + 276) = 2;
        BYTE1(v182[2]) = 0;
        HIWORD(v182[2]) = 0;
        strcpy((char *)v182, "AeiC_HID");
        v182[3] = 0;
        memset(v203, 0, 0x24uLL);
        v119 = DpEvalAcpiMethod((int)SourceDevice, v203, 0x24u);
        v121 = v119;
        if ( v119 >= 0 )
        {
          *((_DWORD *)DeviceExtension + 277) = v203[4];
          *((_DWORD *)DeviceExtension + 278) = v203[5];
        }
        else
        {
          v122 = WdLogNewEntry5_WdError(v120);
          *(_QWORD *)(v122 + 24) = v121;
          WdLogEvent5_WdError(v122);
        }
        strcpy((char *)v182, "AeiC_SUB");
        v182[3] = 0;
        BYTE1(v182[2]) = 0;
        HIWORD(v182[2]) = 0;
        memset(v203, 0, 0x24uLL);
        if ( (int)DpEvalAcpiMethod((int)SourceDevice, v203, 0x24u) >= 0 )
        {
          *((_DWORD *)DeviceExtension + 279) = v203[4];
          *((_DWORD *)DeviceExtension + 280) = v203[5];
        }
        else
        {
          v128 = WdLogNewEntry5_WdEvent(v125, v124, v126, v127);
          *(_QWORD *)(v128 + 24) = DpEvalAcpiMethod;
          WdLogEvent5_WdEvent(v128);
        }
        strcpy((char *)v182, "AeiC_HRV");
        BYTE1(v182[2]) = 0;
        HIWORD(v182[2]) = 0;
        v182[3] = 0;
        memset(v203, 0, 0x24uLL);
        LODWORD(started) = DpEvalAcpiMethod((int)SourceDevice, v203, 0x24u);
        if ( (int)started >= 0 )
        {
          *((_DWORD *)DeviceExtension + 281) = LOWORD(v203[4]);
        }
        else
        {
          v129 = WdLogNewEntry5_WdEvent(v57, v56, v58, v59);
          *(_QWORD *)(v129 + 24) = DpEvalAcpiMethod;
          WdLogEvent5_WdEvent(v129);
          LODWORD(started) = 0;
        }
        if ( *((_BYTE *)DeviceExtension + 1136) )
        {
          v130 = IoGetAttachedDeviceReference(v28);
          started = (int)DpiSetDeviceUsageType(v130);
          ObfDereferenceObject(v130);
          if ( (int)started < 0 )
          {
            v131 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v131 + 24) = started;
            WdLogEvent5_WdError(v131);
            LODWORD(started) = 0;
          }
        }
        goto LABEL_46;
      }
      goto LABEL_169;
    }
    if ( RtlCompareMemory(DeviceExtension + 68, &GUID_BUS_VMBUS, 0x10uLL) != 16 )
    {
      if ( *((_BYTE *)DeviceExtension + 1143) )
      {
        DeviceExtension[140] = 0LL;
        *((_DWORD *)DeviceExtension + 277) = 5140;
        DeviceExtension[139] = (PVOID *)139;
        *((_DWORD *)DeviceExtension + 276) = 0;
LABEL_46:
        v24 = 1;
        goto LABEL_47;
      }
      if ( *((_BYTE *)DeviceExtension + 480) )
      {
        *((_DWORD *)DeviceExtension + 276) = 3;
        *((_DWORD *)DeviceExtension + 277) = 5140;
        if ( *((_BYTE *)DeviceExtension + 1139) )
        {
          *((_DWORD *)DeviceExtension + 278) = 141;
        }
        else if ( *((_BYTE *)DeviceExtension + 2557) )
        {
          *((_DWORD *)DeviceExtension + 278) = 140;
        }
        goto LABEL_46;
      }
      if ( *((_BYTE *)DeviceExtension + 2559) || g_OSTestSigningEnabled && *((_BYTE *)DeviceExtension + 2556) )
      {
        *((_DWORD *)DeviceExtension + 276) = 3;
        goto LABEL_46;
      }
LABEL_169:
      LODWORD(started) = -1073741637;
      v123 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v123 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v123);
      goto LABEL_214;
    }
    v132 = WdLogNewEntry5_WdEvent(v57, v56, v58, v59);
    *(_QWORD *)(v132 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v132);
    v24 = 1;
    if ( *((_BYTE *)DeviceExtension + 2558) )
    {
      *((_DWORD *)DeviceExtension + 277) = 5140;
      DeviceExtension[139] = (PVOID *)705;
      *((_DWORD *)DeviceExtension + 280) = 0;
      *((_DWORD *)DeviceExtension + 281) = 1;
    }
    *((_DWORD *)DeviceExtension + 276) = 4;
LABEL_47:
    if ( *((_BYTE *)DeviceExtension + 1136) )
      goto LABEL_49;
    goto LABEL_48;
  }
  v85 = WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
  *(_QWORD *)(v85 + 24) = SourceDevice;
  WdLogEvent5_WdEvent(v85);
  v24 = 1;
  DpiQueryBusInterface(v28, (__int64)(DeviceExtension + 70));
  if ( !DeviceExtension[77] )
  {
    v111 = -1073741127LL;
    goto LABEL_150;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  DeviceExtension[137] = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(started) = -1073741801;
    v113 = WdLogNewEntry5_WdLowResource(v87);
    *(_QWORD *)(v113 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v113);
    goto LABEL_214;
  }
  ((void (__fastcall *)(PVOID *, _QWORD, PVOID *, _QWORD, int))DeviceExtension[77])(
    DeviceExtension[71],
    0LL,
    PoolWithTag,
    0LL,
    256);
  v88 = DeviceExtension[137];
  *((_DWORD *)DeviceExtension + 276) = 1;
  *((_DWORD *)DeviceExtension + 277) = *(unsigned __int16 *)v88;
  *((_DWORD *)DeviceExtension + 278) = *((unsigned __int16 *)v88 + 1);
  *((_DWORD *)DeviceExtension + 281) = *((unsigned __int8 *)v88 + 8);
  if ( (*((_BYTE *)v88 + 14) & 0x7F) == 0 )
  {
    *((_DWORD *)DeviceExtension + 279) = *((unsigned __int16 *)v88 + 22);
    *((_DWORD *)DeviceExtension + 280) = *((unsigned __int16 *)v88 + 23);
  }
  if ( *((_DWORD *)DeviceExtension + 277) != 22611 || (v89 = 1, *((_DWORD *)DeviceExtension + 278) != 4097) )
    v89 = 0;
  *((_BYTE *)DeviceExtension + 2560) = v89;
  DpiQueryBusInterface(v28, (__int64)(DeviceExtension + 78));
  DpiQueryBusInterface((PDEVICE_OBJECT)DeviceExtension[20], (__int64)(DeviceExtension + 84));
  AgpStatus = DpiGetAgpStatus(SourceDevice);
  v93 = AgpStatus;
  if ( AgpStatus >= 0 && !DeviceExtension[85] )
  {
    v115 = WdLogNewEntry5_WdWarning(v92, v91, v58);
    *(_QWORD *)(v115 + 24) = v93;
    WdLogEvent5_WdWarning(v115);
  }
  v57 = SourceDevice->DeviceExtension;
  v56 = (_BYTE *)v57[137];
  if ( (v56[4] & 1) != 0 && ((v94 = v56[11]) == 0 && v56[10] == 1 || v94 == 3 && !v56[10]) )
  {
    if ( *((_BYTE *)DeviceExtension + 1136) )
      goto LABEL_111;
    if ( !byte_1C0060B48 )
    {
      v116 = WdLogNewEntry5_WdWarning(v57, v56, v58);
      *(_QWORD *)(v116 + 24) = SourceDevice;
      WdLogEvent5_WdWarning(v116);
      *((_BYTE *)DeviceExtension + 1136) = 1;
      byte_1C0060B49 = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 1136) )
    {
LABEL_111:
      if ( byte_1C0060855 )
        *((_BYTE *)DeviceExtension + 1140) = 1;
    }
    LODWORD(started) = 0;
    goto LABEL_47;
  }
  LODWORD(started) = -1073741823;
  if ( *((_BYTE *)DeviceExtension + 1136) )
  {
    v117 = WdLogNewEntry5_WdWarning(v57, v56, v58);
    *(_QWORD *)(v117 + 24) = SourceDevice;
    WdLogEvent5_WdWarning(v117);
    goto LABEL_47;
  }
LABEL_48:
  if ( !*((_BYTE *)DeviceExtension + 480) && *((_BYTE *)DeviceExtension + 1139) )
  {
    v133 = WdLogNewEntry5_WdEvent(v57, v56, v58, v59);
    *(_QWORD *)(v133 + 24) = SourceDevice;
    WdLogEvent5_WdEvent(v133);
    LODWORD(started) = -1071774664;
    goto LABEL_214;
  }
LABEL_49:
  if ( *((_BYTE *)DeviceExtension + 2556) && *((_BYTE *)DeviceExtension + 2557) )
  {
    LODWORD(started) = -1073741811;
    goto LABEL_214;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 164);
  v60 = DeviceExtension + 147;
  v61 = 7LL;
  if ( (((_BYTE)DeviceExtension - 104) & 4) != 0 )
  {
    *v60 = 1;
    v61 = 6LL;
    v60 = (_DWORD *)DeviceExtension + 295;
  }
  memset64(v60, 0x100000001uLL, v61 >> 1);
  if ( (v61 & 1) != 0 )
    v60[v61 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 156), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, SourceDevice);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 298), 0);
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 44, 0);
  DeviceExtension[297] = (PVOID *)(DeviceExtension + 296);
  DeviceExtension[296] = (PVOID *)(DeviceExtension + 296);
  DeviceExtension[307] = (PVOID *)(DeviceExtension + 306);
  DeviceExtension[306] = (PVOID *)(DeviceExtension + 306);
  DeviceExtension[322] = (PVOID *)(DeviceExtension + 321);
  DeviceExtension[321] = (PVOID *)(DeviceExtension + 321);
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 )
  {
LABEL_58:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 126) )
      {
        LODWORD(started) = DpiLdaLinkDeviceToChain(SourceDevice);
        if ( (int)started < 0 )
          goto LABEL_213;
      }
    }
    v62 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
    if ( *v62 != DriverObjectExtension + 56 )
      __fastfail(3u);
    *DeviceExtension = (PVOID *)(DriverObjectExtension + 56);
    DeviceExtension[1] = v62;
    *v62 = DeviceExtension;
    *((_QWORD *)DriverObjectExtension + 8) = DeviceExtension;
    ++*((_DWORD *)DriverObjectExtension + 32);
    if ( !DeviceExtension[21] )
    {
      v63 = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
      DeviceExtension[21] = v63;
      if ( !v63 )
        goto LABEL_197;
      *((_DWORD *)v63 + 26) = 1;
      v65 = ExInitializeResourceLite((PERESOURCE)DeviceExtension[21]);
      started = v65;
      if ( v65 < 0 )
      {
        v135 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v135 + 24) = started;
        goto LABEL_200;
      }
      v159 = 1;
    }
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 22), 0);
    if ( !v7 )
      goto LABEL_73;
    if ( !v7[165] )
    {
      v67 = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      v7[165] = v67;
      if ( !v67 )
        goto LABEL_197;
      *((_DWORD *)v67 + 2) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v7[165]);
    }
    if ( v7[166] )
    {
LABEL_72:
      *((_DWORD *)v7 + 334) = 0;
      memset(v7 + 168, 0, 0x400uLL);
LABEL_73:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      v24 = 0;
      DeviceExtension[16] = (PVOID *)DpiFdoDispatchPnp;
      if ( !v7 )
        goto LABEL_75;
      v7[17] = (PVOID *)DpiFdoDispatchPower;
      if ( !*((_BYTE *)v7 + 1136) )
        goto LABEL_75;
      AcquireMiniportListMutex();
      if ( qword_1C0060A80 && qword_1C0060A80 != qword_1C0060A88 )
      {
        v136 = WdLogNewEntry5_WdError(v95);
        *(_QWORD *)(v136 + 24) = SourceDevice;
        *(_QWORD *)(v136 + 32) = (int)started;
        WdLogEvent5_WdError(v136);
      }
      qword_1C0060A80 = (__int64)SourceDevice;
      v96 = v7[6];
      v173 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(DriverObjectExtension, v96, &v173);
      _InterlockedExchange64(&qword_1C0060888, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (int)started >= 0 )
      {
        v70 = HIDWORD(v173) >> 1;
        LOBYTE(v70) = (v173 & 0x200000000LL) != 0;
        *((_BYTE *)v7 + 2605) = BYTE4(v173) & 1;
        *((_BYTE *)v7 + 2606) = v70;
LABEL_75:
        if ( v151 && v154 )
          qword_1C0060A88 = (__int64)SourceDevice;
        SourceDevice->Flags |= 4u;
        SourceDevice->Flags |= 0x2000u;
        SourceDevice->Flags &= ~0x4000u;
        SourceDevice->Flags &= ~0x80u;
        v73 = WdLogNewEntry5_WdEvent(v70, v69, v71, v72);
        *(_QWORD *)(v73 + 24) = SourceDevice;
        WdLogEvent5_WdEvent(v73);
        goto LABEL_79;
      }
      v135 = WdLogNewEntry5_WdError(v97);
      *(_QWORD *)(v135 + 24) = *((_QWORD *)DriverObjectExtension + 143);
      *(_QWORD *)(v135 + 32) = started;
LABEL_200:
      WdLogEvent5_WdError(v135);
LABEL_79:
      v8 = 1;
      goto LABEL_80;
    }
    v68 = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
    v7[166] = v68;
    if ( v68 )
    {
      *((_DWORD *)v68 + 2) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v7[166]);
      goto LABEL_72;
    }
LABEL_197:
    LODWORD(started) = -1073741801;
    v134 = WdLogNewEntry5_WdLowResource(v64);
    *(_QWORD *)(v134 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v134);
    goto LABEL_206;
  }
  if ( *((_DWORD *)DeviceExtension + 5) != 2 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)SourceDevice->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
    goto LABEL_58;
  }
  LODWORD(started) = DpiFdoInitializeFdo(SourceDevice);
  if ( (int)started >= 0 )
  {
    v158 = 1;
    goto LABEL_58;
  }
LABEL_214:
  if ( SourceDevice )
  {
    if ( v158 == 1 )
      DpiFdoResetFdo();
    if ( v7 )
    {
      v140 = v7[165];
      if ( v140 && *((_DWORD *)v140 + 2) == 1 )
      {
        ExFreePoolWithTag(v140, 0);
        v7[165] = 0LL;
      }
      v141 = v7[166];
      if ( v141 && *((_DWORD *)v141 + 2) == 1 )
      {
        ExFreePoolWithTag(v141, 0);
        v7[166] = 0LL;
      }
      if ( (_BYTE)v165 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(SourceDevice);
      v142 = v7[73];
      if ( v142 )
      {
        ((void (__fastcall *)(PVOID *))v142)(v7[71]);
        memset(v7 + 70, 0, 0x40uLL);
      }
      v143 = v7[81];
      if ( v143 )
      {
        ((void (__fastcall *)(PVOID *))v143)(v7[79]);
        memset(v7 + 78, 0, 0x30uLL);
      }
      v144 = v7[87];
      if ( v144 )
      {
        ((void (__fastcall *)(PVOID *))v144)(v7[85]);
        memset(v7 + 84, 0, 0xB8uLL);
      }
      v145 = v7[110];
      if ( v145 )
      {
        ((void (__fastcall *)(PVOID *))v145)(v7[108]);
        memset(v7 + 107, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v7 + 33);
      v146 = v7[137];
      if ( v146 )
      {
        ExFreePoolWithTag(v146, 0);
        v7[137] = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v147 = (struct _ERESOURCE *)DeviceExtension[21];
      if ( v147 )
      {
        if ( v159 == 1 )
          ExDeleteResourceLite(v147);
        v148 = DeviceExtension[21];
        if ( *((_DWORD *)v148 + 26) == 1 && v148 )
        {
          ExFreePoolWithTag(v148, 0);
          DeviceExtension[21] = 0LL;
        }
      }
      v149 = (struct _DEVICE_OBJECT *)DeviceExtension[20];
      if ( v149 )
        IoDetachDevice(v149);
    }
    IoDeleteDevice(SourceDevice);
    SourceDevice = 0LL;
  }
  if ( v160 == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, v170);
  if ( (_DWORD)started != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL);
LABEL_81:
  memset(v185, 0, sizeof(v185));
  v74 = DxgkDiagCalcDuration1us(&v174);
  v185[0] = 0x4000000006LL;
  memset(&v185[1], 0, 36);
  HIDWORD(v185[6]) = v161;
  LODWORD(v185[6]) = 34;
  v185[7] = __PAIR64__(started, v74);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v185);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Exclusive) = started;
    McTemplateK0ppq(v75, &EventExitDpiAddDevice, v76, DriverObject, TargetDevice, Exclusive);
  }
  return (unsigned int)started;
}
