/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140590890
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14004FB44 (PipIsDevNodeDNStarted.c)
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x14014FD00 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x140156E08 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14058FC40 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14058FD34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x14059187C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140592C98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140592D7C (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140593720 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405946CC (PiDevCfgVerifyDeviceAllowed.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PnpDeleteDeviceInterfaces @ 0x140693BA0 (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x140698BEC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceRegKey @ 0x14073AB30 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, unsigned __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // rdi
  HANDLE v9; // r12
  wchar_t *v10; // r14
  const wchar_t *v11; // r13
  int DriverConfiguration; // ebx
  __int64 v13; // r15
  int v14; // r12d
  const WCHAR *v15; // rdx
  int v16; // ecx
  unsigned int v17; // r14d
  _BYTE *v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  char v22; // al
  int v23; // r9d
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  int *v29; // r14
  __int64 *j; // r15
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  UNICODE_STRING v33; // xmm0
  __int64 v34; // r8
  __int64 v35; // rcx
  const WCHAR *v36; // r14
  const WCHAR *v37; // r14
  int v39; // eax
  char v40; // cl
  unsigned int i; // ecx
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rcx
  GUID *p_Source2; // rax
  int v49; // r8d
  PVOID PoolWithTag; // r14
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  unsigned int v54; // r8d
  int v55; // eax
  unsigned __int64 v56; // rsi
  unsigned int v57; // r15d
  int v58; // eax
  unsigned __int64 v59; // r15
  void *v60; // rcx
  unsigned __int64 v61; // rbx
  unsigned int v62; // r8d
  int v63; // eax
  unsigned __int64 v64; // rsi
  unsigned int v65; // r15d
  int v66; // eax
  unsigned __int64 v67; // r15
  unsigned __int64 v68; // rbx
  unsigned int v69; // r8d
  int v70; // eax
  unsigned int v71; // r15d
  int v72; // eax
  unsigned __int64 v73; // r15
  wchar_t *v74; // rcx
  __int64 v75; // rdx
  int v76; // ecx
  __int64 v77; // rax
  bool v78; // zf
  __int64 v79; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
  int v81; // [rsp+28h] [rbp-D8h]
  int v82; // [rsp+28h] [rbp-D8h]
  int v83; // [rsp+28h] [rbp-D8h]
  int v84; // [rsp+28h] [rbp-D8h]
  int v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+28h] [rbp-D8h]
  int v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+28h] [rbp-D8h]
  int v89; // [rsp+28h] [rbp-D8h]
  int v90; // [rsp+28h] [rbp-D8h]
  int v91; // [rsp+28h] [rbp-D8h]
  int v92; // [rsp+28h] [rbp-D8h]
  char v93; // [rsp+60h] [rbp-A0h] BYREF
  char v94; // [rsp+61h] [rbp-9Fh] BYREF
  char v95; // [rsp+62h] [rbp-9Eh] BYREF
  char v96; // [rsp+63h] [rbp-9Dh]
  int v97; // [rsp+64h] [rbp-9Ch] BYREF
  int v98; // [rsp+68h] [rbp-98h]
  unsigned int v99; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-90h] BYREF
  int v101; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v102; // [rsp+80h] [rbp-80h] BYREF
  int v103[2]; // [rsp+88h] [rbp-78h]
  int v104; // [rsp+90h] [rbp-70h] BYREF
  int v105; // [rsp+94h] [rbp-6Ch] BYREF
  int v106; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 HighLimit; // [rsp+A0h] [rbp-60h] BYREF
  int v108; // [rsp+A8h] [rbp-58h]
  HANDLE v109; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v110; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v111; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v112; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v114; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v116; // [rsp+100h] [rbp+0h] BYREF
  HANDLE v117; // [rsp+108h] [rbp+8h] BYREF
  int *v118; // [rsp+110h] [rbp+10h]
  PCWSTR SourceString; // [rsp+118h] [rbp+18h]
  PCWSTR Buffer; // [rsp+120h] [rbp+20h]
  HANDLE KeyHandle; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v122; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v124; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v126; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING v128; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING v129; // [rsp+190h] [rbp+90h] BYREF
  _DWORD *v130; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v131; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v132; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v133; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING String1; // [rsp+1D0h] [rbp+D0h] BYREF
  UNICODE_STRING v135; // [rsp+1E0h] [rbp+E0h] BYREF
  UNICODE_STRING v136; // [rsp+1F0h] [rbp+F0h] BYREF
  UNICODE_STRING v137; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int16 v138; // [rsp+210h] [rbp+110h] BYREF
  __int64 v139; // [rsp+218h] [rbp+118h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+220h] [rbp+120h] BYREF
  __int64 Source2; // [rsp+250h] [rbp+150h] BYREF
  __int64 v142; // [rsp+258h] [rbp+158h]
  _QWORD v143[22]; // [rsp+260h] [rbp+160h] BYREF

  v5 = a1;
  *(_QWORD *)v103 = a1;
  v6 = (_DWORD *)a2;
  v7 = 1024;
  v126 = a3;
  v8 = a3;
  v130 = (_DWORD *)a2;
  *a4 = 1024;
  *a5 = 0;
  v9 = *(HANDLE *)(a2 + 16);
  v111 = a5;
  v10 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v11 = 0LL;
  *(_DWORD *)&v112.Length = 0;
  v112.Buffer = 0LL;
  *(_DWORD *)&v128.Length = 0;
  SourceString = 0LL;
  v128.Buffer = 0LL;
  *(_DWORD *)&v129.Length = 0;
  Buffer = 0LL;
  v129.Buffer = 0LL;
  *(_DWORD *)&v132.Length = 0;
  v132.Buffer = 0LL;
  *(_DWORD *)&v133.Length = 0;
  v133.Buffer = 0LL;
  *(_DWORD *)&v136.Length = 0;
  v136.Buffer = 0LL;
  *(_DWORD *)&v137.Length = 0;
  v137.Buffer = 0LL;
  v108 = 0;
  v101 = 0;
  v99 = 0;
  LODWORD(LowLimit) = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v114.Length = 0;
  v114.Buffer = 0LL;
  *(_DWORD *)&v122.Length = 0;
  v122.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v138 = 0;
  v139 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v93 = 0;
  v110 = 0;
  v116 = 0;
  v94 = 0;
  v95 = 0;
  P = 0LL;
  LODWORD(v102) = 0;
  v104 = 0;
  v96 = 0;
  *(_DWORD *)&v124.Length = 0;
  v124.Buffer = 0LL;
  v109 = v9;
  v118 = a4;
  v98 = 1024;
  v97 = 1024;
  HighLimit = a1 + 40;
  *(_DWORD *)&v135.Length = 68157440;
  v135.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v135.Buffer )
  {
    DriverConfiguration = -1073741670;
LABEL_133:
    PiDevCfgLogDeviceConfigured(v103[0], (_DWORD)v6, v8, *v111, DriverConfiguration);
    goto LABEL_134;
  }
  if ( !v8 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(v8);
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  v11 = *(const wchar_t **)(v8 + 248);
  if ( *(_QWORD *)(v8 + 280) && !PnpDuplicateUnicodeString((__int64)&v112, v8 + 272) )
  {
    DriverConfiguration = -1073741670;
    goto LABEL_133;
  }
  if ( !*(_QWORD *)(v8 + 296) )
    goto LABEL_7;
  if ( !PnpDuplicateUnicodeString((__int64)&v128, v8 + 288) )
  {
    DriverConfiguration = -1073741670;
    goto LABEL_133;
  }
  SourceString = v128.Buffer;
LABEL_7:
  if ( !*(_QWORD *)(v8 + 312) )
    goto LABEL_8;
  if ( !PnpDuplicateUnicodeString((__int64)&v129, v8 + 304) )
  {
    DriverConfiguration = -1073741670;
    goto LABEL_133;
  }
  Buffer = v129.Buffer;
LABEL_8:
  if ( *(_QWORD *)(v8 + 328) && !PnpDuplicateUnicodeString((__int64)&v132, v8 + 320) )
  {
    DriverConfiguration = -1073741670;
    goto LABEL_133;
  }
  if ( *(_QWORD *)(v8 + 344) && !PnpDuplicateUnicodeString((__int64)&v133, v8 + 336) )
  {
    DriverConfiguration = -1073741670;
    goto LABEL_133;
  }
  v13 = *(_QWORD *)(v8 + 192);
  v14 = *(_DWORD *)(v8 + 168);
  v98 = *(_DWORD *)(v8 + 368);
  v97 = v98;
  v108 = *(_DWORD *)(v8 + 372);
  if ( v13 != v8 + 192 )
  {
    do
    {
      v39 = PiDevCfgQueryDriverConfiguration(v13);
      DriverConfiguration = v39;
      if ( v39 >= 0 )
      {
        if ( *(_QWORD *)(v13 + 280) )
        {
          *(_DWORD *)(v13 + 168) &= ~1u;
        }
        else
        {
          if ( *(_QWORD *)(v13 + 296) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v128);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v13 + 312) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v129);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v13 + 328) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v132);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v13 + 344) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v133);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          v14 |= *(_DWORD *)(v13 + 168);
          v98 |= *(_DWORD *)(v13 + 368);
          v97 = v98;
          v108 |= *(_DWORD *)(v13 + 372);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v136);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v137);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
        }
      }
      else
      {
        if ( v39 != -1073740653 )
          break;
        if ( !PnpBootMode )
          goto LABEL_134;
        v98 |= 0x400u;
        v97 = v98;
        DriverConfiguration = 0;
      }
      v13 = *(_QWORD *)v13;
    }
    while ( v13 != v8 + 192 );
    SourceString = v128.Buffer;
    Buffer = v129.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  v7 = v98;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v98 & 0x400) != 0
      && (*(_BYTE *)(v8 + 392) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      DriverConfiguration = -1073740651;
      goto LABEL_134;
    }
    if ( (v14 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
      {
        DriverConfiguration = -1073740651;
        goto LABEL_134;
      }
      v7 = v98 | 0x400;
      v98 = v7;
      v97 = v7;
    }
  }
  memset(v143, 0, 0xA8uLL);
  v15 = *(const WCHAR **)(v8 + 24);
  v143[2] = L"Description";
  LODWORD(v143[4]) = 0x1000000;
  v143[3] = &v114;
  LODWORD(v143[1]) = 288;
  v143[9] = L"Manufacturer";
  LODWORD(v143[11]) = 0x1000000;
  v143[10] = &v122;
  LODWORD(v143[8]) = 288;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v15, (__int64)v143, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  if ( !v114.Length && v114.Buffer )
    RtlFreeUnicodeString(&v114);
  if ( !v122.Length && v122.Buffer )
    RtlFreeUnicodeString(&v122);
  if ( v11 )
  {
    if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v11, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) < 0 )
    {
      v17 = 0;
    }
    else
    {
      memset(v143, 0, 0xA0uLL);
      v143[0] = &DEVPKEY_DeviceClass_Configurable;
      v143[2] = &v93;
      LODWORD(v143[1]) = 17;
      v143[5] = &DEVPKEY_DeviceClass_PolicyExempt;
      v143[7] = &v94;
      v143[10] = &DEVPKEY_DeviceClass_DefaultService;
      v143[12] = &DestinationString;
      v143[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
      v143[17] = &P;
      LODWORD(v143[3]) = 1;
      LODWORD(v143[6]) = 17;
      LODWORD(v143[8]) = 1;
      LODWORD(v143[11]) = 18;
      HIDWORD(v143[13]) = 6;
      LODWORD(v143[16]) = 4099;
      HIDWORD(v143[18]) = 2;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v16, (_DWORD)v11, 2, (_DWORD)Handle, (__int64)v143, 4);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
      if ( SLODWORD(v143[4]) < 0 )
        v93 = 0;
      if ( SLODWORD(v143[9]) < 0 )
        v94 = 0;
      if ( SLODWORD(v143[14]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v143[19]) >= 0 )
      {
        v17 = v143[18];
      }
      else
      {
        P = 0LL;
        v17 = 0;
      }
      if ( !v93
        && (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v11,
                  2u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ConfigurableClassVersion,
                  (__int64)&v105,
                  (__int64)&v110,
                  4,
                  (__int64)&v106,
                  0) >= 0
        && v105 == 7
        && v106 == 4
        && v110
        && (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v8 + 64),
                  7u,
                  *(_QWORD *)(v8 + 16),
                  0LL,
                  (__int64)&DEVPKEY_DriverPackage_ClassVersion,
                  (__int64)&v105,
                  (__int64)&v116,
                  4,
                  (__int64)&v106,
                  0) >= 0
        && v105 == 7
        && v106 == 4 )
      {
        v40 = v93;
        if ( v116 >= v110 )
          v40 = -1;
        v93 = v40;
      }
    }
  }
  else
  {
    v17 = v102;
  }
  if ( v93 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    goto LABEL_31;
  if ( PnpBootMode )
  {
    v7 |= 0x400u;
    v98 = v7;
    v97 = v7;
LABEL_31:
    v18 = P;
    if ( P )
    {
      for ( i = 0; i < v17; ++v18 )
      {
        if ( *v18 == *(_BYTE *)(v8 + 110) )
          break;
        ++i;
      }
      DriverConfiguration = -1073740764;
      if ( i >= v17 )
        goto LABEL_132;
    }
    v5 = *(_QWORD *)v103;
    v10 = v112.Buffer;
    v9 = v109;
LABEL_33:
    if ( (*v6 & 1) == 0 )
    {
      memset(v143, 0, 0xA0uLL);
      v42 = *(_QWORD *)(v5 + 48);
      v143[0] = &DEVPKEY_Device_ClassGuid;
      v143[2] = &Source2;
      LODWORD(v143[1]) = 13;
      v143[5] = &DEVPKEY_Device_InstallFlags;
      v143[7] = &v104;
      v143[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v143[12] = &v124;
      LODWORD(v143[3]) = 16;
      LODWORD(v143[6]) = 7;
      LODWORD(v143[8]) = 4;
      LODWORD(v143[11]) = 18;
      HIDWORD(v143[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v43, v42, 1, (_DWORD)v9, (__int64)v143, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
      if ( SLODWORD(v143[4]) >= 0 )
      {
        v96 = 1;
      }
      else
      {
        Source2 = 0LL;
        v142 = 0LL;
      }
      v44 = v104;
      if ( SLODWORD(v143[9]) < 0 )
        v44 = 0;
      v104 = v44;
      if ( SLODWORD(v143[14]) < 0 )
        RtlInitUnicodeString(&v124, 0LL);
      v5 = *(_QWORD *)v103;
    }
    if ( !v94 )
    {
      if ( (v104 & 4) != 0 )
      {
        if ( !v8 )
          goto LABEL_228;
        memset(v143, 0, 0xA0uLL);
        v45 = *(_QWORD *)(v5 + 48);
        v143[0] = &DEVPKEY_Device_DriverInfPath;
        v143[2] = &String1;
        LODWORD(v143[1]) = 18;
        HIDWORD(v143[3]) = 6;
        DriverConfiguration = PiDevCfgQueryObjectProperties(v46, v45, 1, (_DWORD)v9, (__int64)v143, 1);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
        if ( SLODWORD(v143[4]) < 0 )
          RtlInitUnicodeString(&String1, 0LL);
        if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v8 + 40), 1u) )
        {
LABEL_228:
          v94 = -1;
          goto LABEL_37;
        }
        if ( v94 )
          goto LABEL_37;
        v5 = *(_QWORD *)v103;
      }
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(v5, (__int64)v6, v11);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
    }
LABEL_37:
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      String2.Buffer = L"Configuration";
      *(_DWORD *)&String2.Length = 1835034;
      KeyHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &String2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      DriverConfiguration = v19;
      if ( v19 != -1073741772 )
      {
        if ( v19 < 0 )
          goto LABEL_132;
        DriverConfiguration = PiDevCfgVerifyDeviceAllowed(*(_QWORD *)v103, KeyHandle);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
      }
    }
    v20 = *(_QWORD *)v103;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v103 + 32LL) + 8LL) + 16LL) & 4) != 0 )
    {
      v21 = HighLimit;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(HighLimit + 8),
                  1u,
                  (__int64)v9,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  (__int64)&v105,
                  (__int64)&v95,
                  1,
                  (__int64)&v106,
                  0) < 0
        || v105 != 17
        || v106 != 1 )
      {
        v22 = 0;
        v95 = 0;
        goto LABEL_42;
      }
    }
    else
    {
      v21 = HighLimit;
    }
    v22 = v95;
LABEL_42:
    if ( v8 && !v10 && !DestinationString.Buffer && !v22 && (*(_DWORD *)(v20 + 560) & 0x100) == 0 )
    {
      DriverConfiguration = -1073740652;
      goto LABEL_133;
    }
    if ( (*v6 & 1) == 0 )
    {
      if ( !v8 )
      {
        if ( !v96 || (*(_DWORD *)(v20 + 560) & 0x100) == 0 )
          CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v21 + 8), 17LL);
        CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v21 + 8), 18LL);
        goto LABEL_244;
      }
      if ( !PnpIsNullGuid(&Source2) && !PnpIsNullGuid((void *)(v8 + 224)) )
      {
        v47 = Source2 - *(_QWORD *)(v8 + 224);
        if ( Source2 == *(_QWORD *)(v8 + 224) )
          v47 = v142 - *(_QWORD *)(v8 + 232);
        if ( v47 )
          CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v21 + 8), 18LL);
      }
    }
    if ( v8 )
    {
      v23 = v8 + 40;
      v24 = v8 + 240;
      goto LABEL_47;
    }
LABEL_244:
    v23 = 0;
    v24 = 0;
LABEL_47:
    if ( (int)PiDevCfgMigrateDevice(v20, (_DWORD)v6, v24, v23, (__int64)&v99, (__int64)&LowLimit) >= 0 )
    {
      v7 |= v99;
      v98 = v7;
      v97 = v7;
      v101 = LowLimit;
    }
    if ( (*v6 & 1) != 0 )
    {
LABEL_50:
      if ( !v8 || PnpIsNullGuid((void *)(v8 + 224)) )
      {
        if ( (*v6 & 1) == 0 )
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (_DWORD)v6,
            *(_QWORD *)(v21 + 8),
            1,
            (__int64)v9,
            v81,
            (__int64)&DEVPKEY_Device_ClassGuid,
            0,
            0LL,
            0);
      }
      else
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                (_DWORD)v6,
                                *(_QWORD *)(v21 + 8),
                                1,
                                (__int64)v9,
                                v81,
                                (__int64)&DEVPKEY_Device_ClassGuid,
                                13,
                                v8 + 224,
                                16);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
      }
      if ( v10 )
      {
        if ( v112.Length )
        {
          v25 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (__int64)v10,
                  (unsigned int)v112.Length + 2);
          goto LABEL_56;
        }
        v74 = DestinationString.Buffer;
      }
      else
      {
        v74 = DestinationString.Buffer;
        if ( DestinationString.Buffer && DestinationString.Length )
        {
          v25 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (__int64)DestinationString.Buffer,
                  (unsigned int)DestinationString.Length + 2);
LABEL_56:
          DriverConfiguration = v25;
          if ( v25 < 0 )
            goto LABEL_132;
LABEL_57:
          if ( SourceString )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    (_DWORD)v6,
                                    *(_QWORD *)(v21 + 8),
                                    1,
                                    (__int64)v9,
                                    v81,
                                    (__int64)&DEVPKEY_Device_LowerFilters,
                                    8210,
                                    (__int64)SourceString,
                                    v128.Length);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          else if ( (*v6 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (_DWORD)v6,
              *(_QWORD *)(v21 + 8),
              1,
              (__int64)v9,
              v81,
              (__int64)&DEVPKEY_Device_LowerFilters,
              0,
              0LL,
              0);
          }
          if ( Buffer )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    (_DWORD)v6,
                                    *(_QWORD *)(v21 + 8),
                                    1,
                                    (__int64)v9,
                                    v81,
                                    (__int64)&DEVPKEY_Device_UpperFilters,
                                    8210,
                                    (__int64)Buffer,
                                    v129.Length);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          else if ( (*v6 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (_DWORD)v6,
              *(_QWORD *)(v21 + 8),
              1,
              (__int64)v9,
              v81,
              (__int64)&DEVPKEY_Device_UpperFilters,
              0,
              0LL,
              0);
          }
          if ( v8 && v114.Buffer )
          {
            DriverConfiguration = PiDevCfgBuildIndirectString(v8, &v114, &UnicodeString, &v138);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
            if ( (v7 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      (_DWORD)v6,
                                      *(_QWORD *)(v21 + 8),
                                      1,
                                      (__int64)v9,
                                      v81,
                                      (__int64)&DEVPKEY_Device_DeviceDesc,
                                      18,
                                      (__int64)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
            }
            if ( v139 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      (_DWORD)v6,
                                      *(_QWORD *)(v21 + 8),
                                      1,
                                      (__int64)v9,
                                      v81,
                                      (__int64)&DEVPKEY_Device_DriverDesc,
                                      18,
                                      v139,
                                      (unsigned int)v138 + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
            }
            else if ( (*v6 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (_DWORD)v6,
                *(_QWORD *)(v21 + 8),
                1,
                (__int64)v9,
                v81,
                (__int64)&DEVPKEY_Device_DriverDesc,
                0,
                0LL,
                0);
            }
            RtlFreeUnicodeString(&UnicodeString);
          }
          else if ( (*v6 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (_DWORD)v6,
              *(_QWORD *)(v21 + 8),
              1,
              (__int64)v9,
              v81,
              (__int64)&DEVPKEY_Device_DriverDesc,
              0,
              0LL,
              0);
            if ( !v8 )
            {
              memset(v143, 0, 0xA0uLL);
              v75 = *(_QWORD *)(v21 + 8);
              v143[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
              v143[2] = &v114;
              LODWORD(v143[1]) = 18;
              HIDWORD(v143[3]) = 6;
              if ( (int)PiDevCfgQueryObjectProperties(v76, v75, 1, (_DWORD)v9, (__int64)v143, 1) >= 0
                && SLODWORD(v143[4]) >= 0 )
              {
                if ( v114.Buffer )
                {
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          (_DWORD)v6,
                                          *(_QWORD *)(v21 + 8),
                                          1,
                                          (__int64)v9,
                                          v81,
                                          (__int64)&DEVPKEY_Device_DeviceDesc,
                                          18,
                                          (__int64)v114.Buffer,
                                          (unsigned int)v114.Length + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_132;
                }
              }
              goto LABEL_378;
            }
LABEL_71:
            if ( v122.Buffer )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(v8, &v122, &UnicodeString, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      (_DWORD)v6,
                                      *(_QWORD *)(v21 + 8),
                                      1,
                                      (__int64)v9,
                                      v81,
                                      (__int64)&DEVPKEY_Device_Manufacturer,
                                      18,
                                      (__int64)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
LABEL_74:
              if ( v8 && (v26 = *(_QWORD *)(v8 + 264)) != 0 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_DriverProvider,
                                        18,
                                        v26,
                                        (unsigned int)*(unsigned __int16 *)(v8 + 256) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*v6 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_DriverProvider,
                  0,
                  0LL,
                  0);
              }
              if ( v8 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_DriverDate,
                                        16,
                                        v8 + 112,
                                        8);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                v27 = *(unsigned __int16 *)(v8 + 124);
                v82 = *(unsigned __int16 *)(v8 + 120);
                LODWORD(Guid) = *(unsigned __int16 *)(v8 + 122);
                v28 = (unsigned __int16)HIWORD(*(_DWORD *)(v8 + 124));
                v135.Length = 0;
                DriverConfiguration = RtlUnicodeStringPrintf(&v135, L"%u.%u.%u.%u", v28, v27, Guid);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v82,
                                        (__int64)&DEVPKEY_Device_DriverVersion,
                                        18,
                                        (__int64)v135.Buffer,
                                        (unsigned int)v135.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v83,
                                        (__int64)&DEVPKEY_Device_DriverInfPath,
                                        18,
                                        *(_QWORD *)(v8 + 48),
                                        (unsigned int)*(unsigned __int16 *)(v8 + 40) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v84,
                                        (__int64)&DEVPKEY_Device_DriverInfSection,
                                        18,
                                        *(_QWORD *)(v8 + 96),
                                        (unsigned int)*(unsigned __int16 *)(v8 + 88) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(v8, &v122, &v114, &String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                if ( v124.Buffer && !RtlCompareUnicodeString(&v124, &String2, 1u) )
                  RtlFreeUnicodeString(&v124);
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v85,
                                        (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                        18,
                                        (__int64)String2.Buffer,
                                        (unsigned int)String2.Length + 2);
                RtlFreeUnicodeString(&String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*v6 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_DriverDate,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v88,
                  (__int64)&DEVPKEY_Device_DriverVersion,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v89,
                  (__int64)&DEVPKEY_Device_DriverInfPath,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v90,
                  (__int64)&DEVPKEY_Device_DriverInfSection,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v91,
                  (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                  0,
                  0LL,
                  0);
              }
              if ( !v124.Buffer || (v104 & 8) != 0 || (*(_DWORD *)(*(_QWORD *)v103 + 396LL) & 0x6000) != 0 )
              {
                if ( (*v6 & 1) == 0 )
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (_DWORD)v6,
                    *(_QWORD *)(v21 + 8),
                    1,
                    (__int64)v9,
                    v81,
                    (__int64)&DEVPKEY_Device_RollbackDriverNode,
                    0,
                    0LL,
                    0);
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                        18,
                                        (__int64)v124.Buffer,
                                        (unsigned int)v124.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              if ( v132.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                        8210,
                                        (__int64)v132.Buffer,
                                        v132.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*v6 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                  0,
                  0LL,
                  0);
              }
              if ( v133.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                        8210,
                                        (__int64)v133.Buffer,
                                        v133.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*v6 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                  0,
                  0LL,
                  0);
              }
              if ( v136.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                        8210,
                                        (__int64)v136.Buffer,
                                        v136.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*v6 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                  0,
                  0LL,
                  0);
              }
              if ( !v8 || *(_DWORD *)(v8 + 108) == -1 )
              {
                if ( (*v6 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (_DWORD)v6,
                    *(_QWORD *)(v21 + 8),
                    1,
                    (__int64)v9,
                    v81,
                    (__int64)&DEVPKEY_Device_MatchingDeviceId,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (_DWORD)v6,
                    *(_QWORD *)(v21 + 8),
                    1,
                    (__int64)v9,
                    v92,
                    (__int64)&DEVPKEY_Device_DriverRank,
                    0,
                    0LL,
                    0);
                }
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v81,
                                        (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                        18,
                                        *(_QWORD *)(v8 + 80),
                                        (unsigned int)*(unsigned __int16 *)(v8 + 72) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        (_DWORD)v6,
                                        *(_QWORD *)(v21 + 8),
                                        1,
                                        (__int64)v9,
                                        v86,
                                        (__int64)&DEVPKEY_Device_DriverRank,
                                        7,
                                        v8 + 108,
                                        4);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              if ( v104 )
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v6,
                  *(_QWORD *)(v21 + 8),
                  1,
                  (__int64)v9,
                  v81,
                  (__int64)&DEVPKEY_Device_InstallFlags,
                  0,
                  0LL,
                  0);
              v29 = v118;
              if ( v8 )
              {
                *v118 = v7;
                if ( (*(_BYTE *)(v8 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                  *v29 = v7 | 0x400;
                DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                        v103[0],
                                        (_DWORD)v6,
                                        v8,
                                        (unsigned int)&v97,
                                        (__int64)&v101);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                *v29 |= v97;
                *v111 |= v101;
                for ( j = *(__int64 **)(v8 + 192); j != (__int64 *)(v8 + 192); j = (__int64 *)*j )
                {
                  if ( (j[21] & 1) != 0 )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                            v103[0],
                                            (_DWORD)v6,
                                            (_DWORD)j,
                                            (unsigned int)&v97,
                                            (__int64)&v101);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_132;
                    *v118 |= v97;
                    *v111 |= v101;
                  }
                }
                DriverConfiguration = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v103, v6, &v97, &v101);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                v29 = v118;
                v31 = v111;
                *v118 |= v97;
                *v31 |= v101;
              }
              else
              {
                v32 = *(_QWORD *)v103;
                if ( (*(_DWORD *)(*(_QWORD *)v103 + 560LL) & 0x100) != 0 )
                {
                  v31 = v111;
                  *v118 = 0;
LABEL_112:
                  if ( v108 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v32) || (v104 & 2) != 0 )
                    *v31 |= 2u;
                  if ( v96 )
                    *v31 |= 1u;
                  if ( KeyHandle )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceKeys(
                                            v32,
                                            (_DWORD)v6,
                                            (_DWORD)KeyHandle,
                                            -1,
                                            (__int64)&v97,
                                            (__int64)&v101);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_132;
                    *v29 |= v97;
                    *v111 |= v101;
                  }
                  if ( v8 )
                    v33 = *(UNICODE_STRING *)(v8 + 376);
                  else
                    v33 = *(UNICODE_STRING *)PiDevCfgEmptyString;
                  v34 = *(_QWORD *)(v21 + 8);
                  String2 = v33;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          (_DWORD)v6,
                                          v34,
                                          1,
                                          (__int64)v9,
                                          v81,
                                          (__int64)&DEVPKEY_Device_ConfigurationId,
                                          18,
                                          (__int64)v33.Buffer,
                                          (unsigned int)v33.Length + 2);
                  if ( DriverConfiguration >= 0 )
                  {
                    if ( v137.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              (_DWORD)v6,
                                              *(_QWORD *)(v21 + 8),
                                              1,
                                              (__int64)v9,
                                              v87,
                                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                              8210,
                                              (__int64)v137.Buffer,
                                              v137.Length);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_132;
                    }
                    else if ( (*v6 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        (_DWORD)v6,
                        *(_QWORD *)(v21 + 8),
                        1,
                        (__int64)v9,
                        v87,
                        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                        0,
                        0LL,
                        0);
                    }
                    if ( v8 && (v35 = *(_QWORD *)(v8 + 136)) != 0 )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              (_DWORD)v6,
                                              *(_QWORD *)(v21 + 8),
                                              1,
                                              (__int64)v9,
                                              v87,
                                              (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                              18,
                                              v35,
                                              (unsigned int)*(unsigned __int16 *)(v8 + 128) + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_132;
                    }
                    else if ( (*v6 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        (_DWORD)v6,
                        *(_QWORD *)(v21 + 8),
                        1,
                        (__int64)v9,
                        v87,
                        (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                        0,
                        0LL,
                        0);
                    }
                    if ( v112.Buffer && v112.Length )
                      PipHardwareConfigActivateService(v112.Buffer);
                    v36 = SourceString;
                    if ( SourceString && *SourceString )
                    {
                      do
                      {
                        PipHardwareConfigActivateService(v36);
                        if ( !PnpBootMode && (*(_DWORD *)(v8 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v36);
                        v77 = -1LL;
                        do
                          v78 = v36[++v77] == 0;
                        while ( !v78 );
                        v36 += v77 + 1;
                      }
                      while ( *v36 );
                    }
                    v37 = Buffer;
                    if ( Buffer && *Buffer )
                    {
                      do
                      {
                        PipHardwareConfigActivateService(v37);
                        if ( !PnpBootMode && (*(_DWORD *)(v8 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v37);
                        v79 = -1LL;
                        do
                          v78 = v37[++v79] == 0;
                        while ( !v78 );
                        v37 += v79 + 1;
                      }
                      while ( *v37 );
                    }
                  }
LABEL_132:
                  if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
                    goto LABEL_134;
                  goto LABEL_133;
                }
                *v118 = 64;
                PnpDeleteDeviceInterfaces(v21);
                v31 = v111;
              }
              v32 = *(_QWORD *)v103;
              goto LABEL_112;
            }
LABEL_378:
            if ( (*v6 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (_DWORD)v6,
                *(_QWORD *)(v21 + 8),
                1,
                (__int64)v9,
                v81,
                (__int64)&DEVPKEY_Device_Manufacturer,
                0,
                0LL,
                0);
            goto LABEL_74;
          }
          if ( !v8 )
            goto LABEL_378;
          goto LABEL_71;
        }
      }
      if ( (*v6 & 1) == 0 && (v10 && v74 || !v95) )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (_DWORD)v6,
          *(_QWORD *)(v21 + 8),
          1,
          (__int64)v9,
          v81,
          (__int64)&DEVPKEY_Device_Service,
          0,
          0LL,
          0);
      goto LABEL_57;
    }
    p_Source2 = (GUID *)&Source2;
    v49 = v8 + 224;
    PoolWithTag = 0LL;
    if ( !v96 )
      p_Source2 = 0LL;
    if ( !v8 )
      v49 = 0;
    PiDevCfgResetDeviceDriverSettings(v20, (int)v6, v49, (int)Handle, p_Source2);
    if ( !*(_QWORD *)&PiPnpRtlCtx || (v51 = **(_QWORD **)&PiPnpRtlCtx) == 0 )
    {
      LODWORD(v68) = 0;
      v109 = 0LL;
      v99 = 0;
      IoGetStackLimits(&v126, &v131);
      if ( (unsigned __int64)&v131 - v126 >= 0x400
        && (int)RegRtlOpenKeyTransacted((char *)v9, L"Devices", 0, 0x3001Fu, &v109, 0LL) >= 0 )
      {
        if ( (unsigned int)RegRtlQueryInfoKey(v109, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
          goto LABEL_347;
        v69 = LowLimit;
        if ( !(_DWORD)LowLimit )
          goto LABEL_432;
        v70 = -1;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
          v70 = LowLimit + 1;
        v69 = v70;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
        {
LABEL_432:
          v68 = 2LL * v69;
          if ( v68 <= 0xFFFFFFFF
            && (!(_DWORD)v68 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v68, 0x4C474552u)) != 0LL) )
          {
LABEL_347:
            while ( 1 )
            {
              v71 = 0;
              LODWORD(v102) = 0;
              while ( 1 )
              {
                LODWORD(LowLimit) = (unsigned int)v68 >> 1;
                v72 = RegRtlEnumKey(v109, v71, PoolWithTag, &LowLimit);
                if ( v72 == -2147483622 || v72 == -1073741444 )
                  break;
                if ( v72 == -1073741789 )
                {
                  v73 = 2LL * (unsigned int)LowLimit;
                  if ( v73 > 0xFFFFFFFF )
                    goto LABEL_349;
                  LODWORD(v68) = 2 * LowLimit;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v73, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_349;
                  v71 = v102;
                }
                else
                {
                  if ( v72 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v68 >> 1) - 1) = 0;
                  if ( (unsigned int)RegRtlDeleteTreeInternal(v109, PoolWithTag, 0LL, 0LL) )
                  {
                    LODWORD(v102) = ++v71;
                  }
                  else
                  {
                    v71 = 0;
                    LODWORD(v102) = 0;
                  }
                }
              }
              if ( (unsigned int)RegRtlDeleteKeyTransacted(v9, L"Devices", 0LL) != -1073741535 || v71 || v99 >= 0xA )
                break;
              ++v99;
            }
LABEL_349:
            v6 = v130;
            v7 = v98;
          }
        }
      }
      if ( v109 )
        ZwClose(v109);
      if ( !PoolWithTag )
        goto LABEL_354;
LABEL_353:
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_354:
      v10 = v112.Buffer;
      goto LABEL_50;
    }
    v52 = *(_QWORD *)(v51 + 8);
    if ( *(_BYTE *)(v51 + 16) )
    {
      v102 = *(_QWORD *)(v51 + 8);
      v99 = 0;
      v117 = 0LL;
      IoGetStackLimits(&LowLimit, &HighLimit);
      if ( (unsigned __int64)&HighLimit - LowLimit >= 0x400
        && (int)RegRtlOpenKeyTransacted((char *)v9, L"Devices", 0, 0x3001Fu, &v117, v52) >= 0 )
      {
        LODWORD(v53) = 0;
        if ( (unsigned int)RegRtlQueryInfoKey(v117, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
          goto LABEL_268;
        v54 = LowLimit;
        if ( !(_DWORD)LowLimit )
          goto LABEL_433;
        v55 = -1;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
          v55 = LowLimit + 1;
        v54 = v55;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
        {
LABEL_433:
          v53 = 2LL * v54;
          if ( v53 <= 0xFFFFFFFF
            && (!(_DWORD)v53 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v53, 0x4C474552u)) != 0LL) )
          {
LABEL_268:
            v56 = v102;
            while ( 1 )
            {
              v57 = 0;
              LODWORD(v102) = 0;
              while ( 1 )
              {
                LODWORD(LowLimit) = (unsigned int)v53 >> 1;
                v58 = RegRtlEnumKey(v117, v57, PoolWithTag, &LowLimit);
                if ( v58 == -2147483622 || v58 == -1073741444 )
                  break;
                if ( v58 == -1073741789 )
                {
                  v59 = 2LL * (unsigned int)LowLimit;
                  if ( v59 > 0xFFFFFFFF )
                    goto LABEL_286;
                  LODWORD(v53) = 2 * LowLimit;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v59, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_286;
                  v57 = v102;
                }
                else
                {
                  if ( v58 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v53 >> 1) - 1) = 0;
                  if ( (unsigned int)RegRtlDeleteTreeInternal(v117, PoolWithTag, v56, 0LL) )
                  {
                    LODWORD(v102) = ++v57;
                  }
                  else
                  {
                    v57 = 0;
                    LODWORD(v102) = 0;
                  }
                }
              }
              if ( (unsigned int)RegRtlDeleteKeyTransacted(v9, L"Devices", v56) != -1073741535 || v57 || v99 >= 0xA )
                break;
              ++v99;
            }
LABEL_286:
            v8 = v126;
            v6 = v130;
            v7 = v98;
          }
        }
      }
      v60 = v117;
      if ( v117 )
LABEL_288:
        ZwClose(v60);
    }
    else
    {
      v131 = *(_QWORD *)(v51 + 8);
      v99 = 0;
      HighLimit = 0LL;
      IoGetStackLimits(&v102, &LowLimit);
      if ( (unsigned __int64)&LowLimit - v102 >= 0x400
        && (int)RegRtlOpenKeyTransacted((char *)v9, L"Devices", 0, 0x3001Fu, (PHANDLE)&HighLimit, v52) >= 0 )
      {
        LODWORD(v61) = 0;
        if ( (unsigned int)RegRtlQueryInfoKey((void *)HighLimit, 0LL, (unsigned int *)&LowLimit, 0LL, 0LL, 0LL) )
          goto LABEL_301;
        v62 = LowLimit;
        if ( !(_DWORD)LowLimit )
          goto LABEL_434;
        v63 = -1;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
          v63 = LowLimit + 1;
        v62 = v63;
        if ( (int)LowLimit + 1 >= (unsigned int)LowLimit )
        {
LABEL_434:
          v61 = 2LL * v62;
          if ( v61 <= 0xFFFFFFFF
            && (!(_DWORD)v61 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v61, 0x4C474552u)) != 0LL) )
          {
LABEL_301:
            v64 = v131;
            while ( 1 )
            {
              v65 = 0;
              LODWORD(v102) = 0;
              while ( 1 )
              {
                LODWORD(LowLimit) = (unsigned int)v61 >> 1;
                v66 = RegRtlEnumKey(HighLimit, v65, PoolWithTag, &LowLimit);
                if ( v66 == -2147483622 || v66 == -1073741444 )
                  break;
                if ( v66 == -1073741789 )
                {
                  v67 = 2LL * (unsigned int)LowLimit;
                  if ( v67 > 0xFFFFFFFF )
                    goto LABEL_319;
                  LODWORD(v61) = 2 * LowLimit;
                  if ( PoolWithTag )
                    ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v67, 0x4C474552u);
                  if ( !PoolWithTag )
                    goto LABEL_319;
                  v65 = v102;
                }
                else
                {
                  if ( v66 )
                    break;
                  *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v61 >> 1) - 1) = 0;
                  if ( (unsigned int)RegRtlDeleteTreeInternal(HighLimit, PoolWithTag, v64, 0LL) )
                  {
                    LODWORD(v102) = ++v65;
                  }
                  else
                  {
                    v65 = 0;
                    LODWORD(v102) = 0;
                  }
                }
              }
              if ( (unsigned int)RegRtlDeleteKeyTransacted(v9, L"Devices", v64) != -1073741535 || v65 || v99 >= 0xA )
                break;
              ++v99;
            }
LABEL_319:
            v8 = v126;
            v6 = v130;
            v7 = v98;
          }
        }
      }
      v60 = (void *)HighLimit;
      if ( HighLimit )
        goto LABEL_288;
    }
    if ( !PoolWithTag )
      goto LABEL_354;
    goto LABEL_353;
  }
  DriverConfiguration = -1073740651;
LABEL_134:
  RtlFreeUnicodeString(&v114);
  RtlFreeUnicodeString(&v122);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v112);
  RtlFreeUnicodeString(&v128);
  RtlFreeUnicodeString(&v129);
  RtlFreeUnicodeString(&v132);
  RtlFreeUnicodeString(&v133);
  RtlFreeUnicodeString(&v136);
  RtlFreeUnicodeString(&v137);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&String1);
  RtlFreeUnicodeString(&v124);
  if ( v135.Buffer )
    ExFreePoolWithTag(v135.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
