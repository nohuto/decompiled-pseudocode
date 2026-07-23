/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1405CF9D8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14006EB18 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x140147994 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     PiDevCfgSetObjectProperty @ 0x1405D189C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405D66A4 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildIndirectString @ 0x1405D8850 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1405DA67C (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1405DA7CC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405DC2E8 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1405E7AF8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1405E7E04 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1405E8480 (PiDevCfgConfigureDeviceLocation.c)
 *     PipHardwareConfigActivateService @ 0x1405F2938 (PipHardwareConfigActivateService.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     PnpDeleteDeviceInterfaces @ 0x1407253AC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x14072ADB8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072CF24 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceRegKey @ 0x1407E7E90 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v7; // r13d
  __int64 v8; // r15
  void *v9; // r14
  __int64 v10; // r12
  signed int DriverConfiguration; // ebx
  __int64 *v12; // r14
  int v13; // edx
  const WCHAR *v14; // rdx
  wchar_t *v15; // rcx
  int v16; // ebx
  char v17; // cl
  char v18; // al
  _BYTE *v19; // rcx
  char v20; // al
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  int *v26; // r14
  __int64 *j; // r14
  int v28; // eax
  char v29; // r9
  _DWORD *v30; // r13
  __int64 v31; // rcx
  UNICODE_STRING v32; // xmm0
  __int64 v33; // r8
  __int64 v34; // rcx
  const WCHAR *v35; // r14
  const WCHAR *v36; // r14
  int v38; // eax
  char v39; // cl
  unsigned int i; // eax
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  int v45; // ecx
  char v46; // al
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  PVOID v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+28h] [rbp-D8h]
  char v69; // [rsp+60h] [rbp-A0h] BYREF
  char v70; // [rsp+61h] [rbp-9Fh] BYREF
  char v71; // [rsp+62h] [rbp-9Eh] BYREF
  char v72; // [rsp+63h] [rbp-9Dh]
  int v73; // [rsp+64h] [rbp-9Ch] BYREF
  char v74[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v75[3]; // [rsp+6Ch] [rbp-94h] BYREF
  int v76; // [rsp+78h] [rbp-88h] BYREF
  int v77; // [rsp+7Ch] [rbp-84h]
  int v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+84h] [rbp-7Ch] BYREF
  int v80; // [rsp+88h] [rbp-78h]
  int v81; // [rsp+8Ch] [rbp-74h]
  unsigned int v82; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v84; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING v85; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v87; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v88; // [rsp+CCh] [rbp-34h]
  int v89; // [rsp+D0h] [rbp-30h] BYREF
  int v90; // [rsp+D4h] [rbp-2Ch] BYREF
  int *v91; // [rsp+D8h] [rbp-28h]
  __int64 v92; // [rsp+E0h] [rbp-20h]
  HANDLE KeyHandle; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v94; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v96; // [rsp+110h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+120h] [rbp+20h]
  PCWSTR Buffer; // [rsp+128h] [rbp+28h]
  PVOID P; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v100; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v102; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v103; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v104; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v105; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING String1; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v107; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v108; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v109; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int16 v110; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v111; // [rsp+1E0h] [rbp+E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 Source2; // [rsp+218h] [rbp+118h] BYREF
  __int64 v114; // [rsp+220h] [rbp+120h]
  _QWORD v115[22]; // [rsp+230h] [rbp+130h] BYREF

  *(_QWORD *)&v75[1] = a1;
  v91 = a4;
  Handle = 0LL;
  v84 = a5;
  *a4 = 1024;
  v7 = 1024;
  v8 = a1 + 40;
  v73 = 1024;
  *a5 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  KeyHandle = 0LL;
  *(_DWORD *)&v100.Length = 0;
  v100.Buffer = 0LL;
  *(_DWORD *)&v102.Length = 0;
  SourceString = 0LL;
  v102.Buffer = 0LL;
  *(_DWORD *)&v103.Length = 0;
  Buffer = 0LL;
  v103.Buffer = 0LL;
  *(_DWORD *)&v104.Length = 0;
  v104.Buffer = 0LL;
  *(_DWORD *)&v105.Length = 0;
  v105.Buffer = 0LL;
  *(_DWORD *)&v108.Length = 0;
  v108.Buffer = 0LL;
  *(_DWORD *)&v109.Length = 0;
  v109.Buffer = 0LL;
  v81 = 0;
  v80 = 0;
  v75[0] = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v85.Length = 0;
  v85.Buffer = 0LL;
  *(_DWORD *)&v94.Length = 0;
  v94.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v110 = 0;
  v111 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v69 = 0;
  v82 = 0;
  v87 = 0;
  v70 = 0;
  v71 = 0;
  P = 0LL;
  v88 = 0;
  v76 = 0;
  v72 = 0;
  *(_DWORD *)&v96.Length = 0;
  v96.Buffer = 0LL;
  v74[0] = 0;
  *(_DWORD *)&v107.Length = 68157440;
  v107.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v107.Buffer )
    goto LABEL_158;
  if ( !a3 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  v92 = *(_QWORD *)(a3 + 248);
  if ( *(_QWORD *)(a3 + 280) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v100, a3 + 272) )
      goto LABEL_158;
  }
  if ( *(_QWORD *)(a3 + 296) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v102, a3 + 288) )
      goto LABEL_158;
    SourceString = v102.Buffer;
  }
  if ( !*(_QWORD *)(a3 + 312) )
    goto LABEL_8;
  if ( !PnpDuplicateUnicodeString((__int64)&v103, a3 + 304) )
  {
LABEL_158:
    DriverConfiguration = -1073741670;
LABEL_139:
    PiDevCfgLogDeviceConfigured(v75[1], a2, a3, *v84, DriverConfiguration);
    goto LABEL_140;
  }
  Buffer = v103.Buffer;
LABEL_8:
  if ( *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v104, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v105, a3 + 336) )
  {
    goto LABEL_158;
  }
  v12 = *(__int64 **)(a3 + 192);
  v13 = *(_DWORD *)(a3 + 168);
  v77 = *(_DWORD *)(a3 + 368);
  v73 = v77;
  v81 = *(_DWORD *)(a3 + 372);
  v80 = v13;
  if ( v12 == (__int64 *)(a3 + 192) )
  {
    v9 = (void *)SourceString;
  }
  else
  {
    do
    {
      v38 = PiDevCfgQueryDriverConfiguration(v12);
      DriverConfiguration = v38;
      if ( v38 >= 0 )
      {
        if ( v12[35] )
        {
          *((_DWORD *)v12 + 42) &= ~1u;
        }
        else
        {
          if ( v12[37] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v102);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v12[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v103);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v12[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v104);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v12[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v105);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          v77 |= *((_DWORD *)v12 + 92);
          v73 = v77;
          v81 |= *((_DWORD *)v12 + 93);
          v80 |= *((_DWORD *)v12 + 42);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v108);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v109);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
      }
      else
      {
        if ( v38 != -1073740653 )
          break;
        if ( !PnpBootMode )
          goto LABEL_140;
        DriverConfiguration = 0;
        v77 |= 0x400u;
        v73 = v77;
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != (__int64 *)(a3 + 192) );
    v9 = v102.Buffer;
    LOBYTE(v13) = v80;
    SourceString = v102.Buffer;
    Buffer = v103.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  v7 = v77;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v77 & 0x400) != 0
      && (*(_BYTE *)(a3 + 392) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_188;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_188;
      v7 = v77 | 0x400;
      v73 = v77 | 0x400;
    }
  }
  memset(v115, 0, 0xA8uLL);
  LODWORD(v115[1]) = 288;
  LODWORD(v115[4]) = 0x1000000;
  v115[2] = L"Description";
  LODWORD(v115[11]) = 0x1000000;
  v14 = *(const WCHAR **)(a3 + 24);
  v115[3] = &v85;
  v115[9] = L"Manufacturer";
  LODWORD(v115[8]) = 288;
  v115[10] = &v94;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, (__int64)v115, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  v15 = v94.Buffer;
  if ( !v85.Buffer && !v94.Buffer && *(_QWORD *)(a3 + 152) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
  {
    if ( !PnpBootMode )
      goto LABEL_188;
    v7 |= 0x400u;
    v73 = v7;
  }
  if ( !v85.Length && v85.Buffer )
  {
    RtlFreeAnsiString(&v85);
    v15 = v94.Buffer;
  }
  if ( !v94.Length && v15 )
    RtlFreeAnsiString(&v94);
  v16 = v92;
  if ( !v92 || (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v92, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) < 0 )
    goto LABEL_212;
  memset(v115, 0, 0xA0uLL);
  v115[0] = &DEVPKEY_DeviceClass_Configurable;
  LODWORD(v115[1]) = 17;
  v115[2] = &v69;
  LODWORD(v115[6]) = 17;
  v115[5] = &DEVPKEY_DeviceClass_PolicyExempt;
  v115[7] = &v70;
  LODWORD(v115[3]) = 1;
  v115[10] = &DEVPKEY_DeviceClass_DefaultService;
  v115[12] = &DestinationString;
  v115[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
  v115[17] = &P;
  LODWORD(v115[8]) = 1;
  LODWORD(v115[11]) = 18;
  HIDWORD(v115[13]) = 6;
  LODWORD(v115[16]) = 4099;
  HIDWORD(v115[18]) = 2;
  DriverConfiguration = PiDevCfgQueryObjectProperties(2, v16, 2, (_DWORD)Handle, (__int64)v115, 4);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  v17 = v69;
  v18 = v70;
  if ( SLODWORD(v115[4]) < 0 )
    v17 = 0;
  v69 = v17;
  if ( SLODWORD(v115[9]) < 0 )
    v18 = 0;
  v70 = v18;
  if ( SLODWORD(v115[14]) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v17 = v69;
  }
  if ( SLODWORD(v115[19]) >= 0 )
    v88 = v115[18];
  else
    P = 0LL;
  if ( v17 )
  {
LABEL_32:
    v19 = P;
    if ( P )
    {
      for ( i = 0; i < v88; ++v19 )
      {
        if ( *v19 == *(_BYTE *)(a3 + 110) )
          break;
        ++i;
      }
      DriverConfiguration = i >= v88 ? 0xC0000424 : 0;
      if ( i >= v88 )
        goto LABEL_138;
    }
LABEL_33:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v115, 0, 0xA0uLL);
      v41 = *(_QWORD *)(v8 + 8);
      v115[0] = &DEVPKEY_Device_ClassGuid;
      v115[2] = &Source2;
      LODWORD(v115[1]) = 13;
      v115[5] = &DEVPKEY_Device_InstallFlags;
      v115[7] = &v76;
      v115[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v115[12] = &v96;
      LODWORD(v115[3]) = 16;
      LODWORD(v115[6]) = 7;
      LODWORD(v115[8]) = 4;
      LODWORD(v115[11]) = 18;
      HIDWORD(v115[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v42, v41, 1, v10, (__int64)v115, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
      if ( SLODWORD(v115[4]) >= 0 )
      {
        v72 = 1;
      }
      else
      {
        Source2 = 0LL;
        v114 = 0LL;
      }
      v43 = v76;
      if ( SLODWORD(v115[9]) < 0 )
        v43 = 0;
      v76 = v43;
      if ( SLODWORD(v115[14]) < 0 )
        RtlInitUnicodeString(&v96, 0LL);
    }
    if ( !v70 )
    {
      if ( (v76 & 4) == 0 )
        goto LABEL_36;
      if ( !a3 )
        goto LABEL_237;
      memset(v115, 0, 0xA0uLL);
      v44 = *(_QWORD *)(v8 + 8);
      v115[0] = &DEVPKEY_Device_DriverInfPath;
      v115[2] = &String1;
      LODWORD(v115[1]) = 18;
      HIDWORD(v115[3]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v45, v44, 1, v10, (__int64)v115, 1);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
      if ( SLODWORD(v115[4]) < 0 )
        RtlInitUnicodeString(&String1, 0LL);
      if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
      {
LABEL_237:
        v46 = -1;
        v70 = -1;
      }
      else
      {
        v46 = v70;
      }
      if ( !v46 )
      {
LABEL_36:
        DriverConfiguration = PiDevCfgEnforceDevicePolicy(*(_QWORD *)&v75[1], a2, v92);
        if ( DriverConfiguration < 0 )
          goto LABEL_138;
      }
    }
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
      DriverConfiguration = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DriverConfiguration != -1073741772 )
      {
        if ( DriverConfiguration < 0 )
          goto LABEL_138;
        DriverConfiguration = PiDevCfgVerifyDeviceAllowed(*(_QWORD *)&v75[1], KeyHandle);
        if ( DriverConfiguration < 0 )
          goto LABEL_138;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v75[1] + 32LL) + 8LL) + 16LL) & 4) == 0
      || (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v8 + 8),
                1u,
                v10,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                (__int64)&v78,
                (__int64)&v71,
                1,
                (__int64)&v79,
                0) >= 0
      && v78 == 17
      && v79 == 1 )
    {
      v20 = v71;
    }
    else
    {
      v20 = 0;
      v71 = 0;
    }
    if ( a3
      && !v100.Buffer
      && !DestinationString.Buffer
      && !v20
      && (*(_DWORD *)(*(_QWORD *)&v75[1] + 560LL) & 0x100) == 0 )
    {
      DriverConfiguration = -1073740652;
      goto LABEL_139;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
LABEL_44:
      v21 = v75[1];
      if ( (int)PiDevCfgMigrateDevice(
                  v75[1],
                  a2,
                  a3 != 0 ? a3 + 240 : 0,
                  a3 != 0 ? a3 + 40 : 0,
                  (__int64)&v89,
                  (__int64)&v90) >= 0 )
      {
        v7 |= v89;
        v73 = v7;
        v75[0] = v90;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgResetDeviceDriverSettings(
          v21,
          a2,
          a3 != 0 ? a3 + 224 : 0,
          (int)Handle,
          (PGUID)((unsigned __int64)&Source2 & -(__int64)(v72 != 0)));
        if ( *(_QWORD *)&PiPnpRtlCtx && (v49 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
          v50 = *(_QWORD *)(v49 + 8);
        else
          v50 = 0LL;
        RegRtlDeleteTreeInternal(v10, L"Devices", v50, 0LL);
      }
      if ( !a3 || PnpIsNullGuid((void *)(a3 + 224)) )
      {
        if ( (*(_DWORD *)a2 & 1) == 0 )
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v10,
            v57,
            (__int64)&DEVPKEY_Device_ClassGuid,
            0,
            0LL,
            0,
            0);
      }
      else
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                a2,
                                *(_QWORD *)(v8 + 8),
                                1,
                                v10,
                                v57,
                                (__int64)&DEVPKEY_Device_ClassGuid,
                                13,
                                a3 + 224,
                                16,
                                0);
        if ( DriverConfiguration < 0 )
          goto LABEL_138;
      }
      if ( v100.Buffer )
      {
        if ( v100.Length )
        {
          v22 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (__int64)v100.Buffer,
                  (unsigned int)v100.Length + 2,
                  0);
          goto LABEL_53;
        }
      }
      else if ( DestinationString.Buffer && DestinationString.Length )
      {
        v22 = PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v10,
                v57,
                (__int64)&DEVPKEY_Device_Service,
                18,
                (__int64)DestinationString.Buffer,
                (unsigned int)DestinationString.Length + 2,
                0);
LABEL_53:
        DriverConfiguration = v22;
        if ( v22 < 0 )
          goto LABEL_138;
LABEL_54:
        if ( v9 )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v10,
                                  v57,
                                  (__int64)&DEVPKEY_Device_LowerFilters,
                                  8210,
                                  (__int64)v9,
                                  v102.Length,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v10,
            v57,
            (__int64)&DEVPKEY_Device_LowerFilters,
            0,
            0LL,
            0,
            0);
        }
        if ( Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v10,
                                  v57,
                                  (__int64)&DEVPKEY_Device_UpperFilters,
                                  8210,
                                  (__int64)Buffer,
                                  v103.Length,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v10,
            v57,
            (__int64)&DEVPKEY_Device_UpperFilters,
            0,
            0LL,
            0,
            0);
        }
        if ( a3 && v85.Buffer )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v85, &UnicodeString, &v110);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
          if ( (v7 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    *(_QWORD *)(v8 + 8),
                                    1,
                                    v10,
                                    v57,
                                    (__int64)&DEVPKEY_Device_DeviceDesc,
                                    18,
                                    (__int64)UnicodeString.Buffer,
                                    (unsigned int)UnicodeString.Length + 2,
                                    0);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v111 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    *(_QWORD *)(v8 + 8),
                                    1,
                                    v10,
                                    v57,
                                    (__int64)&DEVPKEY_Device_DriverDesc,
                                    18,
                                    v111,
                                    (unsigned int)v110 + 2,
                                    0);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v8 + 8),
              1,
              v10,
              v57,
              (__int64)&DEVPKEY_Device_DriverDesc,
              0,
              0LL,
              0,
              0);
          }
          RtlFreeAnsiString(&UnicodeString);
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v10,
            v57,
            (__int64)&DEVPKEY_Device_DriverDesc,
            0,
            0LL,
            0,
            0);
          if ( a3 )
          {
LABEL_69:
            if ( v94.Buffer )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v94, &UnicodeString, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v10,
                                      v57,
                                      (__int64)&DEVPKEY_Device_Manufacturer,
                                      18,
                                      (__int64)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
LABEL_72:
              if ( a3 && (v23 = *(_QWORD *)(a3 + 264)) != 0 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverProvider,
                                        18,
                                        v23,
                                        (unsigned int)*(unsigned __int16 *)(a3 + 256) + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_DriverProvider,
                  0,
                  0LL,
                  0,
                  0);
              }
              if ( a3 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverDate,
                                        16,
                                        a3 + 112,
                                        8,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                v24 = *(unsigned __int16 *)(a3 + 124);
                v58 = *(unsigned __int16 *)(a3 + 120);
                LODWORD(v56) = *(unsigned __int16 *)(a3 + 122);
                v25 = (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124));
                v107.Length = 0;
                DriverConfiguration = RtlUnicodeStringPrintf(&v107, L"%u.%u.%u.%u", v25, v24, v56);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverVersion,
                                        18,
                                        (__int64)v107.Buffer,
                                        (unsigned int)v107.Length + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DriverInfPath,
                                        18,
                                        *(_QWORD *)(a3 + 48),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v60,
                                        (__int64)&DEVPKEY_Device_DriverInfSection,
                                        18,
                                        *(_QWORD *)(a3 + 96),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v94, &v85, &String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                if ( v96.Buffer && !RtlCompareUnicodeString(&v96, &String2, 1u) )
                  RtlFreeAnsiString(&v96);
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v61,
                                        (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                        18,
                                        (__int64)String2.Buffer,
                                        (unsigned int)String2.Length + 2,
                                        0);
                RtlFreeAnsiString(&String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_DriverDate,
                  0,
                  0LL,
                  0,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v64,
                  (__int64)&DEVPKEY_Device_DriverVersion,
                  0,
                  0LL,
                  0,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v65,
                  (__int64)&DEVPKEY_Device_DriverInfPath,
                  0,
                  0LL,
                  0,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v66,
                  (__int64)&DEVPKEY_Device_DriverInfSection,
                  0,
                  0LL,
                  0,
                  0);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v67,
                  (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                  0,
                  0LL,
                  0,
                  0);
              }
              if ( !v96.Buffer || (v76 & 8) != 0 || (*(_DWORD *)(*(_QWORD *)&v75[1] + 396LL) & 0x6000) != 0 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(v8 + 8),
                    1,
                    v10,
                    v57,
                    (__int64)&DEVPKEY_Device_RollbackDriverNode,
                    0,
                    0LL,
                    0,
                    0);
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                        18,
                                        (__int64)v96.Buffer,
                                        (unsigned int)v96.Length + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              if ( v104.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                        8210,
                                        (__int64)v104.Buffer,
                                        v104.Length,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                  0,
                  0LL,
                  0,
                  0);
              }
              if ( v105.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                        8210,
                                        (__int64)v105.Buffer,
                                        v105.Length,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                  0,
                  0LL,
                  0,
                  0);
              }
              if ( v108.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                        8210,
                                        (__int64)v108.Buffer,
                                        v108.Length,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                  0,
                  0LL,
                  0,
                  0);
              }
              if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(v8 + 8),
                    1,
                    v10,
                    v57,
                    (__int64)&DEVPKEY_Device_MatchingDeviceId,
                    0,
                    0LL,
                    0,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(v8 + 8),
                    1,
                    v10,
                    v68,
                    (__int64)&DEVPKEY_Device_DriverRank,
                    0,
                    0LL,
                    0,
                    0);
                }
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                        18,
                                        *(_QWORD *)(a3 + 80),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(v8 + 8),
                                        1,
                                        v10,
                                        v62,
                                        (__int64)&DEVPKEY_Device_DriverRank,
                                        7,
                                        a3 + 108,
                                        4,
                                        0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
              }
              if ( v76 )
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v10,
                  v57,
                  (__int64)&DEVPKEY_Device_InstallFlags,
                  0,
                  0LL,
                  0,
                  0);
              v26 = v91;
              if ( a3 )
              {
                *v91 = v7;
                if ( (*(_DWORD *)(a3 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                  *v26 = v7 | 0x400;
                DriverConfiguration = PiDevCfgConfigureDeviceDriver(v75[1], a2, a3, (unsigned int)&v73, (__int64)v75);
                if ( DriverConfiguration < 0 )
                  goto LABEL_138;
                *v26 |= v73;
                *v84 |= v75[0];
                for ( j = *(__int64 **)(a3 + 192); j != (__int64 *)(a3 + 192); j = (__int64 *)*j )
                {
                  if ( (j[21] & 1) != 0 )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                            v75[1],
                                            a2,
                                            (_DWORD)j,
                                            (unsigned int)&v73,
                                            (__int64)v75);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_138;
                    *v91 |= v73;
                    *v84 |= v75[0];
                  }
                }
                v28 = PiDevCfgConfigureDeviceLocation(*(_QWORD *)&v75[1], a2, &v73, v75);
                v29 = 0;
                DriverConfiguration = v28;
                if ( v28 < 0 )
                  goto LABEL_138;
                v26 = v91;
                v30 = v84;
                *v91 |= v73;
                *v30 |= v75[0];
              }
              else
              {
                v31 = *(_QWORD *)&v75[1];
                if ( (*(_DWORD *)(*(_QWORD *)&v75[1] + 560LL) & 0x100) != 0 )
                {
                  v30 = v84;
                  v29 = 0;
                  *v91 = 0;
LABEL_110:
                  if ( v81 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v31) || (v76 & 2) != 0 )
                    *v30 |= 2u;
                  if ( v72 != v29 )
                    *v30 |= 1u;
                  if ( KeyHandle )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v31, a2, (int)KeyHandle, -1, &v73, (__int64)v75);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_138;
                    *v26 |= v73;
                    *v30 |= v75[0];
                  }
                  if ( (*v30 & 4) == 0 && v92 && Handle )
                  {
                    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v92, Handle, &v73);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_138;
                    *v26 |= v73;
                  }
                  if ( a3 )
                    v32 = *(UNICODE_STRING *)(a3 + 376);
                  else
                    v32 = *(UNICODE_STRING *)PiDevCfgEmptyString;
                  v33 = *(_QWORD *)(v8 + 8);
                  String2 = v32;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          v33,
                                          1,
                                          v10,
                                          v57,
                                          (__int64)&DEVPKEY_Device_ConfigurationId,
                                          18,
                                          (__int64)v32.Buffer,
                                          (unsigned int)v32.Length + 2,
                                          0);
                  if ( DriverConfiguration >= 0 )
                  {
                    if ( v109.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(v8 + 8),
                                              1,
                                              v10,
                                              v63,
                                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                              8210,
                                              (__int64)v109.Buffer,
                                              v109.Length,
                                              0);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_138;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(v8 + 8),
                        1,
                        v10,
                        v63,
                        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                        0,
                        0LL,
                        0,
                        0);
                    }
                    if ( a3 && (v34 = *(_QWORD *)(a3 + 136)) != 0 )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(v8 + 8),
                                              1,
                                              v10,
                                              v63,
                                              (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                              18,
                                              v34,
                                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                                              0);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_138;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(v8 + 8),
                        1,
                        v10,
                        v63,
                        (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                        0,
                        0LL,
                        0,
                        0);
                    }
                    if ( (v80 & 0x80u) != 0 )
                    {
                      v53 = *(_QWORD *)(v8 + 8);
                      v74[0] = -1;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              v53,
                                              1,
                                              v10,
                                              v63,
                                              (__int64)&DEVPKEY_Device_DriverInGroup,
                                              17,
                                              (__int64)v74,
                                              1,
                                              0);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_138;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(v8 + 8),
                        1,
                        v10,
                        v63,
                        (__int64)&DEVPKEY_Device_DriverInGroup,
                        0,
                        0LL,
                        0,
                        0);
                    }
                    if ( v100.Buffer && v100.Length )
                      PipHardwareConfigActivateService(v100.Buffer);
                    v35 = SourceString;
                    if ( SourceString )
                    {
                      while ( *v35 )
                      {
                        PipHardwareConfigActivateService(v35);
                        if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v35);
                        v54 = -1LL;
                        do
                          ++v54;
                        while ( v35[v54] );
                        v35 += v54 + 1;
                      }
                    }
                    v36 = Buffer;
                    if ( Buffer )
                    {
                      while ( *v36 )
                      {
                        PipHardwareConfigActivateService(v36);
                        if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v36);
                        v55 = -1LL;
                        do
                          ++v55;
                        while ( v36[v55] );
                        v36 += v55 + 1;
                      }
                    }
                  }
LABEL_138:
                  if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
                    goto LABEL_140;
                  goto LABEL_139;
                }
                *v91 = 64;
                PnpDeleteDeviceInterfaces(v8);
                v30 = v84;
                v29 = 0;
              }
              v31 = *(_QWORD *)&v75[1];
              goto LABEL_110;
            }
LABEL_287:
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v10,
                v57,
                (__int64)&DEVPKEY_Device_Manufacturer,
                0,
                0LL,
                0,
                0);
            goto LABEL_72;
          }
          memset(v115, 0, 0xA0uLL);
          v51 = *(_QWORD *)(v8 + 8);
          v115[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v115[2] = &v85;
          LODWORD(v115[1]) = 18;
          HIDWORD(v115[3]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(v52, v51, 1, v10, (__int64)v115, 1) < 0
            || SLODWORD(v115[4]) < 0
            || !v85.Buffer )
          {
            goto LABEL_287;
          }
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v10,
                                  v57,
                                  (__int64)&DEVPKEY_Device_DeviceDesc,
                                  18,
                                  (__int64)v85.Buffer,
                                  (unsigned int)v85.Length + 2,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
        if ( !a3 )
          goto LABEL_287;
        goto LABEL_69;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 && (v100.Buffer && DestinationString.Buffer || !v71) )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v8 + 8),
          1,
          v10,
          v57,
          (__int64)&DEVPKEY_Device_Service,
          0,
          0LL,
          0,
          0);
      goto LABEL_54;
    }
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_44;
      v47 = (_QWORD *)(a3 + 224);
      if ( PnpIsNullGuid((void *)(a3 + 224)) )
        goto LABEL_44;
      v48 = Source2 - *v47;
      if ( Source2 == *v47 )
        v48 = v114 - *(_QWORD *)(a3 + 232);
      if ( !v48 )
        goto LABEL_44;
    }
    else if ( !v72 || (*(_DWORD *)(*(_QWORD *)&v75[1] + 560LL) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17LL);
    }
    CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18LL);
    goto LABEL_44;
  }
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v92,
              2u,
              (__int64)Handle,
              0LL,
              (__int64)&DEVPKEY_DeviceClass_ConfigurableClassVersion,
              (__int64)&v78,
              (__int64)&v82,
              4,
              (__int64)&v79,
              0) >= 0
    && v78 == 7
    && v79 == 4
    && v82
    && (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a3 + 64),
              8u,
              *(_QWORD *)(a3 + 16),
              0LL,
              (__int64)&DEVPKEY_DriverPackage_ClassVersion,
              (__int64)&v78,
              (__int64)&v87,
              4,
              (__int64)&v79,
              0) >= 0
    && v78 == 7
    && v79 == 4 )
  {
    v39 = v69;
    if ( v87 >= v82 )
      v39 = -1;
    v69 = v39;
  }
  else
  {
LABEL_212:
    v39 = v69;
  }
  if ( v39 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    goto LABEL_32;
  if ( PnpBootMode )
  {
    v7 |= 0x400u;
    v73 = v7;
    goto LABEL_32;
  }
LABEL_188:
  DriverConfiguration = -1073740651;
LABEL_140:
  RtlFreeAnsiString(&v85);
  RtlFreeAnsiString(&v94);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v100);
  RtlFreeAnsiString(&v102);
  RtlFreeAnsiString(&v103);
  RtlFreeAnsiString(&v104);
  RtlFreeAnsiString(&v105);
  RtlFreeAnsiString(&v108);
  RtlFreeAnsiString(&v109);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v96);
  if ( v107.Buffer )
    ExFreePoolWithTag(v107.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
