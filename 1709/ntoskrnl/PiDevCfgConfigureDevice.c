/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1405A296C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PnpDuplicateUnicodeString @ 0x140133158 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14059CE14 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405A26D0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1405A46D8 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1405A498C (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405A4A80 (PiDevCfgVerifyDeviceAllowed.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x1406C4A18 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1406C6478 (PiDevCfgMakeServiceBootStart.c)
 *     _CmDeleteDeviceRegKey @ 0x14077F224 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v7; // r13d
  __int64 v8; // r15
  unsigned int *v9; // r14
  void *v10; // r12
  signed int DriverConfiguration; // ebx
  __int64 v12; // r14
  int v13; // edx
  const WCHAR *v14; // rdx
  __int64 v15; // rbx
  char v16; // cl
  char v17; // al
  _BYTE *v18; // rcx
  char v19; // al
  __int64 v20; // rbx
  int v21; // eax
  unsigned int *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r8
  int *v25; // r14
  __int64 *j; // r14
  int v27; // eax
  char v28; // r9
  _DWORD *v29; // r13
  __int64 v30; // rcx
  UNICODE_STRING v31; // xmm0
  const WCHAR *v32; // r8
  unsigned int *v33; // rcx
  const WCHAR *v34; // r14
  const WCHAR *v35; // r14
  int v37; // eax
  char v38; // cl
  unsigned int i; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // al
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  const WCHAR *v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+28h] [rbp-D8h]
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
  char v67; // [rsp+60h] [rbp-A0h] BYREF
  char v68; // [rsp+61h] [rbp-9Fh] BYREF
  char v69; // [rsp+62h] [rbp-9Eh] BYREF
  char v70; // [rsp+63h] [rbp-9Dh]
  int v71; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v72; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v73[3]; // [rsp+6Ch] [rbp-94h] BYREF
  int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+7Ch] [rbp-84h]
  int v76; // [rsp+80h] [rbp-80h] BYREF
  int v77; // [rsp+84h] [rbp-7Ch] BYREF
  int v78; // [rsp+88h] [rbp-78h]
  int v79; // [rsp+8Ch] [rbp-74h]
  unsigned int v80; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v82; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING v83; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v85; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v86; // [rsp+CCh] [rbp-34h]
  int v87; // [rsp+D0h] [rbp-30h] BYREF
  int v88; // [rsp+D4h] [rbp-2Ch] BYREF
  int *v89; // [rsp+D8h] [rbp-28h]
  __int64 v90; // [rsp+E0h] [rbp-20h]
  HANDLE KeyHandle; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v92; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v94; // [rsp+110h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+120h] [rbp+20h]
  PCWSTR Buffer; // [rsp+128h] [rbp+28h]
  PVOID P; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v98; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v100; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v101; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v102; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v103; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING String1; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v105; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v106; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v107; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int16 v108; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int *v109; // [rsp+1E0h] [rbp+E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 Source2; // [rsp+218h] [rbp+118h] BYREF
  __int64 v112; // [rsp+220h] [rbp+120h]
  _QWORD v113[22]; // [rsp+230h] [rbp+130h] BYREF

  *(_QWORD *)&v73[1] = a1;
  v89 = a4;
  Handle = 0LL;
  v82 = a5;
  *a4 = 1024;
  v7 = 1024;
  v8 = a1 + 40;
  v71 = 1024;
  *a5 = 0;
  v9 = 0LL;
  v10 = *(void **)(a2 + 16);
  KeyHandle = 0LL;
  *(_DWORD *)&v98.Length = 0;
  v98.Buffer = 0LL;
  *(_DWORD *)&v100.Length = 0;
  SourceString = 0LL;
  v100.Buffer = 0LL;
  *(_DWORD *)&v101.Length = 0;
  Buffer = 0LL;
  v101.Buffer = 0LL;
  *(_DWORD *)&v102.Length = 0;
  v102.Buffer = 0LL;
  *(_DWORD *)&v103.Length = 0;
  v103.Buffer = 0LL;
  *(_DWORD *)&v106.Length = 0;
  v106.Buffer = 0LL;
  *(_DWORD *)&v107.Length = 0;
  v107.Buffer = 0LL;
  v79 = 0;
  v78 = 0;
  v73[0] = 0;
  v87 = 0;
  v88 = 0;
  v90 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v83.Length = 0;
  v83.Buffer = 0LL;
  *(_DWORD *)&v92.Length = 0;
  v92.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v108 = 0;
  v109 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v67 = 0;
  v80 = 0;
  v85 = 0;
  v68 = 0;
  v69 = 0;
  P = 0LL;
  v86 = 0;
  v74 = 0;
  v70 = 0;
  *(_DWORD *)&v94.Length = 0;
  v94.Buffer = 0LL;
  LOBYTE(v72) = 0;
  *(_DWORD *)&v105.Length = 68157440;
  v105.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v105.Buffer )
    goto LABEL_153;
  if ( !a3 )
    goto LABEL_32;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_137;
  v90 = *(_QWORD *)(a3 + 248);
  if ( *(_QWORD *)(a3 + 280) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v98, a3 + 272) )
      goto LABEL_153;
  }
  if ( *(_QWORD *)(a3 + 296) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v100, a3 + 288) )
      goto LABEL_153;
    SourceString = v100.Buffer;
  }
  if ( !*(_QWORD *)(a3 + 312) )
    goto LABEL_8;
  if ( !PnpDuplicateUnicodeString((__int64)&v101, a3 + 304) )
  {
LABEL_153:
    DriverConfiguration = -1073741670;
LABEL_138:
    PiDevCfgLogDeviceConfigured(v73[1], a2, a3, *v82, DriverConfiguration);
    goto LABEL_139;
  }
  Buffer = v101.Buffer;
LABEL_8:
  if ( *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v102, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v103, a3 + 336) )
  {
    goto LABEL_153;
  }
  v12 = *(_QWORD *)(a3 + 192);
  v13 = *(_DWORD *)(a3 + 168);
  v75 = *(_DWORD *)(a3 + 368);
  v71 = v75;
  v79 = *(_DWORD *)(a3 + 372);
  v78 = v13;
  if ( v12 == a3 + 192 )
  {
    v9 = (unsigned int *)SourceString;
  }
  else
  {
    do
    {
      v37 = PiDevCfgQueryDriverConfiguration(v12);
      DriverConfiguration = v37;
      if ( v37 >= 0 )
      {
        if ( *(_QWORD *)(v12 + 280) )
        {
          *(_DWORD *)(v12 + 168) &= ~1u;
        }
        else
        {
          if ( *(_QWORD *)(v12 + 296) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v100);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          if ( *(_QWORD *)(v12 + 312) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v101);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          if ( *(_QWORD *)(v12 + 328) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v102);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          if ( *(_QWORD *)(v12 + 344) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v103);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          v75 |= *(_DWORD *)(v12 + 368);
          v71 = v75;
          v79 |= *(_DWORD *)(v12 + 372);
          v78 |= *(_DWORD *)(v12 + 168);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v106);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v107);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
        }
      }
      else
      {
        if ( v37 != -1073740653 )
          break;
        if ( !PnpBootMode )
          goto LABEL_139;
        DriverConfiguration = 0;
        v75 |= 0x400u;
        v71 = v75;
      }
      v12 = *(_QWORD *)v12;
    }
    while ( v12 != a3 + 192 );
    v9 = (unsigned int *)v100.Buffer;
    LOBYTE(v13) = v78;
    SourceString = v100.Buffer;
    Buffer = v101.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_137;
  v7 = v75;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v75 & 0x400) != 0
      && (*(_BYTE *)(a3 + 392) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_183;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_183;
      v7 = v75 | 0x400;
      v71 = v75 | 0x400;
    }
  }
  memset(v113, 0, 0xA8uLL);
  LODWORD(v113[1]) = 288;
  LODWORD(v113[4]) = 0x1000000;
  v113[2] = L"Description";
  LODWORD(v113[11]) = 0x1000000;
  v14 = *(const WCHAR **)(a3 + 24);
  v113[3] = &v83;
  v113[9] = L"Manufacturer";
  LODWORD(v113[8]) = 288;
  v113[10] = &v92;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, (__int64)v113, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_137;
  if ( !v83.Length && v83.Buffer )
    RtlFreeUnicodeString(&v83);
  if ( !v92.Length && v92.Buffer )
    RtlFreeUnicodeString(&v92);
  v15 = v90;
  if ( !v90 || (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v90, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) < 0 )
    goto LABEL_201;
  memset(v113, 0, 0xA0uLL);
  v113[0] = &DEVPKEY_DeviceClass_Configurable;
  LODWORD(v113[1]) = 17;
  v113[2] = &v67;
  LODWORD(v113[6]) = 17;
  v113[5] = &DEVPKEY_DeviceClass_PolicyExempt;
  v113[7] = &v68;
  LODWORD(v113[3]) = 1;
  v113[10] = &DEVPKEY_DeviceClass_DefaultService;
  v113[12] = &DestinationString;
  v113[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
  v113[17] = &P;
  LODWORD(v113[8]) = 1;
  LODWORD(v113[11]) = 18;
  HIDWORD(v113[13]) = 6;
  LODWORD(v113[16]) = 4099;
  HIDWORD(v113[18]) = 2;
  DriverConfiguration = PiDevCfgQueryObjectProperties(2LL, v15, 2u, Handle, (__int64)v113, 4u);
  if ( DriverConfiguration < 0 )
    goto LABEL_137;
  v16 = v67;
  v17 = v68;
  if ( SLODWORD(v113[4]) < 0 )
    v16 = 0;
  v67 = v16;
  if ( SLODWORD(v113[9]) < 0 )
    v17 = 0;
  v68 = v17;
  if ( SLODWORD(v113[14]) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v16 = v67;
  }
  if ( SLODWORD(v113[19]) >= 0 )
    v86 = v113[18];
  else
    P = 0LL;
  if ( v16 )
  {
LABEL_31:
    v18 = P;
    if ( P )
    {
      for ( i = 0; i < v86; ++v18 )
      {
        if ( *v18 == *(_BYTE *)(a3 + 110) )
          break;
        ++i;
      }
      DriverConfiguration = i >= v86 ? 0xC0000424 : 0;
      if ( i >= v86 )
        goto LABEL_137;
    }
LABEL_32:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v113, 0, 0xA0uLL);
      v40 = *(_QWORD *)(v8 + 8);
      v113[0] = &DEVPKEY_Device_ClassGuid;
      v113[2] = &Source2;
      LODWORD(v113[1]) = 13;
      v113[5] = &DEVPKEY_Device_InstallFlags;
      v113[7] = &v74;
      v113[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v113[12] = &v94;
      LODWORD(v113[3]) = 16;
      LODWORD(v113[6]) = 7;
      LODWORD(v113[8]) = 4;
      LODWORD(v113[11]) = 18;
      HIDWORD(v113[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v41, v40, 1u, v10, (__int64)v113, 3u);
      if ( DriverConfiguration < 0 )
        goto LABEL_137;
      if ( SLODWORD(v113[4]) >= 0 )
      {
        v70 = 1;
      }
      else
      {
        Source2 = 0LL;
        v112 = 0LL;
      }
      v42 = v74;
      if ( SLODWORD(v113[9]) < 0 )
        v42 = 0;
      v74 = v42;
      if ( SLODWORD(v113[14]) < 0 )
        RtlInitUnicodeString(&v94, 0LL);
    }
    if ( !v68 )
    {
      if ( (v74 & 4) == 0 )
        goto LABEL_35;
      if ( !a3 )
        goto LABEL_226;
      memset(v113, 0, 0xA0uLL);
      v43 = *(_QWORD *)(v8 + 8);
      v113[0] = &DEVPKEY_Device_DriverInfPath;
      v113[2] = &String1;
      LODWORD(v113[1]) = 18;
      HIDWORD(v113[3]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v44, v43, 1u, v10, (__int64)v113, 1u);
      if ( DriverConfiguration < 0 )
        goto LABEL_137;
      if ( SLODWORD(v113[4]) < 0 )
        RtlInitUnicodeString(&String1, 0LL);
      if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
      {
LABEL_226:
        v45 = -1;
        v68 = -1;
      }
      else
      {
        v45 = v68;
      }
      if ( !v45 )
      {
LABEL_35:
        DriverConfiguration = PiDevCfgEnforceDevicePolicy(*(_QWORD *)&v73[1], a2, v90);
        if ( DriverConfiguration < 0 )
          goto LABEL_137;
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
          goto LABEL_137;
        DriverConfiguration = PiDevCfgVerifyDeviceAllowed(*(_QWORD *)&v73[1], KeyHandle);
        if ( DriverConfiguration < 0 )
          goto LABEL_137;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v73[1] + 32LL) + 8LL) + 16LL) & 4) == 0
      || (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v8 + 8),
                1u,
                (__int64)v10,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                (__int64)&v76,
                (__int64)&v69,
                1,
                (__int64)&v77,
                0) >= 0
      && v76 == 17
      && v77 == 1 )
    {
      v19 = v69;
    }
    else
    {
      v19 = 0;
      v69 = 0;
    }
    if ( a3
      && !v98.Buffer
      && !DestinationString.Buffer
      && !v19
      && (*(_DWORD *)(*(_QWORD *)&v73[1] + 560LL) & 0x100) == 0 )
    {
      DriverConfiguration = -1073740652;
      goto LABEL_138;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
LABEL_43:
      v20 = *(_QWORD *)&v73[1];
      if ( (int)PiDevCfgMigrateDevice(
                  *(__int64 *)&v73[1],
                  a2,
                  (unsigned __int16 *)((a3 + 240) & -(__int64)(a3 != 0)),
                  (a3 + 40) & -(__int64)(a3 != 0),
                  &v87,
                  (__int64)&v88) >= 0 )
      {
        v7 |= v87;
        v71 = v7;
        v73[0] = v88;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgResetDeviceDriverSettings(
          v20,
          a2,
          (_QWORD *)((a3 + 224) & -(__int64)(a3 != 0)),
          (__int64)Handle,
          (PGUID)((unsigned __int64)&Source2 & -(__int64)(v70 != 0)));
        if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
          v48 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
        else
          v48 = 0LL;
        RegRtlDeleteTreeInternal((char *)v10, L"Devices", v48, 0);
      }
      if ( !a3 || PnpIsNullGuid((void *)(a3 + 224)) )
      {
        if ( (*(_DWORD *)a2 & 1) == 0 )
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(const WCHAR **)(v8 + 8),
            1,
            (__int64)v10,
            v55,
            (__int64)&DEVPKEY_Device_ClassGuid,
            0,
            0LL,
            0);
      }
      else
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                *(__int64 *)&PiPnpRtlCtx,
                                (_BYTE *)a2,
                                *(const WCHAR **)(v8 + 8),
                                1,
                                (__int64)v10,
                                v55,
                                (__int64)&DEVPKEY_Device_ClassGuid,
                                13,
                                (unsigned int *)(a3 + 224),
                                16);
        if ( DriverConfiguration < 0 )
          goto LABEL_137;
      }
      if ( v98.Buffer )
      {
        if ( v98.Length )
        {
          v21 = PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (unsigned int *)v98.Buffer,
                  (unsigned int)v98.Length + 2);
          goto LABEL_52;
        }
      }
      else if ( DestinationString.Buffer && DestinationString.Length )
      {
        v21 = PiDevCfgSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (_BYTE *)a2,
                *(const WCHAR **)(v8 + 8),
                1,
                (__int64)v10,
                v55,
                (__int64)&DEVPKEY_Device_Service,
                18,
                (unsigned int *)DestinationString.Buffer,
                (unsigned int)DestinationString.Length + 2);
LABEL_52:
        DriverConfiguration = v21;
        if ( v21 < 0 )
          goto LABEL_137;
LABEL_53:
        if ( v9 )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (_BYTE *)a2,
                                  *(const WCHAR **)(v8 + 8),
                                  1,
                                  (__int64)v10,
                                  v55,
                                  (__int64)&DEVPKEY_Device_LowerFilters,
                                  8210,
                                  v9,
                                  v100.Length);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(const WCHAR **)(v8 + 8),
            1,
            (__int64)v10,
            v55,
            (__int64)&DEVPKEY_Device_LowerFilters,
            0,
            0LL,
            0);
        }
        if ( Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (_BYTE *)a2,
                                  *(const WCHAR **)(v8 + 8),
                                  1,
                                  (__int64)v10,
                                  v55,
                                  (__int64)&DEVPKEY_Device_UpperFilters,
                                  8210,
                                  (unsigned int *)Buffer,
                                  v101.Length);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(const WCHAR **)(v8 + 8),
            1,
            (__int64)v10,
            v55,
            (__int64)&DEVPKEY_Device_UpperFilters,
            0,
            0LL,
            0);
        }
        if ( a3 && v83.Buffer )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v83, &UnicodeString, &v108);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
          if ( (v7 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    (_BYTE *)a2,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    (__int64)v10,
                                    v55,
                                    (__int64)&DEVPKEY_Device_DeviceDesc,
                                    18,
                                    (unsigned int *)UnicodeString.Buffer,
                                    (unsigned int)UnicodeString.Length + 2);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          if ( v109 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    (_BYTE *)a2,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    (__int64)v10,
                                    v55,
                                    (__int64)&DEVPKEY_Device_DriverDesc,
                                    18,
                                    v109,
                                    (unsigned int)v108 + 2);
            if ( DriverConfiguration < 0 )
              goto LABEL_137;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              (_BYTE *)a2,
              *(const WCHAR **)(v8 + 8),
              1,
              (__int64)v10,
              v55,
              (__int64)&DEVPKEY_Device_DriverDesc,
              0,
              0LL,
              0);
          }
          RtlFreeUnicodeString(&UnicodeString);
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(const WCHAR **)(v8 + 8),
            1,
            (__int64)v10,
            v55,
            (__int64)&DEVPKEY_Device_DriverDesc,
            0,
            0LL,
            0);
          if ( a3 )
          {
LABEL_68:
            if ( v92.Buffer )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v92, &UnicodeString, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_137;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (_BYTE *)a2,
                                      *(const WCHAR **)(v8 + 8),
                                      1,
                                      (__int64)v10,
                                      v55,
                                      (__int64)&DEVPKEY_Device_Manufacturer,
                                      18,
                                      (unsigned int *)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_137;
LABEL_71:
              if ( a3 && (v22 = *(unsigned int **)(a3 + 264)) != 0LL )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_DriverProvider,
                                        18,
                                        v22,
                                        (unsigned int)*(unsigned __int16 *)(a3 + 256) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_DriverProvider,
                  0,
                  0LL,
                  0);
              }
              if ( a3 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_DriverDate,
                                        16,
                                        (unsigned int *)(a3 + 112),
                                        8);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                v23 = *(unsigned __int16 *)(a3 + 124);
                v56 = *(unsigned __int16 *)(a3 + 120);
                LODWORD(Guid) = *(unsigned __int16 *)(a3 + 122);
                v24 = (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124));
                v105.Length = 0;
                DriverConfiguration = RtlUnicodeStringPrintf(&v105, L"%u.%u.%u.%u", v24, v23, Guid);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v56,
                                        (__int64)&DEVPKEY_Device_DriverVersion,
                                        18,
                                        (unsigned int *)v105.Buffer,
                                        (unsigned int)v105.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v57,
                                        (__int64)&DEVPKEY_Device_DriverInfPath,
                                        18,
                                        *(unsigned int **)(a3 + 48),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverInfSection,
                                        18,
                                        *(unsigned int **)(a3 + 96),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v92, &v83, &String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                if ( v94.Buffer && !RtlCompareUnicodeString(&v94, &String2, 1u) )
                  RtlFreeUnicodeString(&v94);
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                        18,
                                        (unsigned int *)String2.Buffer,
                                        (unsigned int)String2.Length + 2);
                RtlFreeUnicodeString(&String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_DriverDate,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v62,
                  (__int64)&DEVPKEY_Device_DriverVersion,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v63,
                  (__int64)&DEVPKEY_Device_DriverInfPath,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v64,
                  (__int64)&DEVPKEY_Device_DriverInfSection,
                  0,
                  0LL,
                  0);
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v65,
                  (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                  0,
                  0LL,
                  0);
              }
              if ( !v94.Buffer || (v74 & 8) != 0 || (*(_DWORD *)(*(_QWORD *)&v73[1] + 396LL) & 0x6000) != 0 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (_BYTE *)a2,
                    *(const WCHAR **)(v8 + 8),
                    1,
                    (__int64)v10,
                    v55,
                    (__int64)&DEVPKEY_Device_RollbackDriverNode,
                    0,
                    0LL,
                    0);
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                        18,
                                        (unsigned int *)v94.Buffer,
                                        (unsigned int)v94.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              if ( v102.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                        8210,
                                        (unsigned int *)v102.Buffer,
                                        v102.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                  0,
                  0LL,
                  0);
              }
              if ( v103.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                        8210,
                                        (unsigned int *)v103.Buffer,
                                        v103.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                  0,
                  0LL,
                  0);
              }
              if ( v106.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                        8210,
                                        (unsigned int *)v106.Buffer,
                                        v106.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                  0,
                  0LL,
                  0);
              }
              if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (_BYTE *)a2,
                    *(const WCHAR **)(v8 + 8),
                    1,
                    (__int64)v10,
                    v55,
                    (__int64)&DEVPKEY_Device_MatchingDeviceId,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (_BYTE *)a2,
                    *(const WCHAR **)(v8 + 8),
                    1,
                    (__int64)v10,
                    v66,
                    (__int64)&DEVPKEY_Device_DriverRank,
                    0,
                    0LL,
                    0);
                }
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v55,
                                        (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                        18,
                                        *(unsigned int **)(a3 + 80),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (_BYTE *)a2,
                                        *(const WCHAR **)(v8 + 8),
                                        1,
                                        (__int64)v10,
                                        v60,
                                        (__int64)&DEVPKEY_Device_DriverRank,
                                        7,
                                        (unsigned int *)(a3 + 108),
                                        4);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
              }
              if ( v74 )
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (_BYTE *)a2,
                  *(const WCHAR **)(v8 + 8),
                  1,
                  (__int64)v10,
                  v55,
                  (__int64)&DEVPKEY_Device_InstallFlags,
                  0,
                  0LL,
                  0);
              v25 = v89;
              if ( a3 )
              {
                *v89 = v7;
                if ( (*(_DWORD *)(a3 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                  *v25 = v7 | 0x400;
                DriverConfiguration = PiDevCfgConfigureDeviceDriver(v73[1], a2, (__int64)v73);
                if ( DriverConfiguration < 0 )
                  goto LABEL_137;
                *v25 |= v71;
                *v82 |= v73[0];
                for ( j = *(__int64 **)(a3 + 192); j != (__int64 *)(a3 + 192); j = (__int64 *)*j )
                {
                  if ( (j[21] & 1) != 0 )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceDriver(v73[1], a2, (__int64)v73);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_137;
                    *v89 |= v71;
                    *v82 |= v73[0];
                  }
                }
                v27 = PiDevCfgConfigureDeviceLocation(*(__int64 *)&v73[1], a2, &v71, v73);
                v28 = 0;
                DriverConfiguration = v27;
                if ( v27 < 0 )
                  goto LABEL_137;
                v25 = v89;
                v29 = v82;
                *v89 |= v71;
                *v29 |= v73[0];
              }
              else
              {
                v30 = *(_QWORD *)&v73[1];
                if ( (*(_DWORD *)(*(_QWORD *)&v73[1] + 560LL) & 0x100) != 0 )
                {
                  v29 = v82;
                  v28 = 0;
                  *v89 = 0;
LABEL_109:
                  if ( v79 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v30) || (v74 & 2) != 0 )
                    *v29 |= 2u;
                  if ( v70 != v28 )
                    *v29 |= 1u;
                  if ( KeyHandle )
                  {
                    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v30, a2, KeyHandle, -1, &v71, v73);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_137;
                    *v25 |= v71;
                    *v29 |= v73[0];
                  }
                  if ( (*v29 & 4) == 0 && v90 && Handle )
                  {
                    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v90, (__int64)Handle, &v71);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_137;
                    *v25 |= v71;
                  }
                  if ( a3 )
                    v31 = *(UNICODE_STRING *)(a3 + 376);
                  else
                    v31 = *(UNICODE_STRING *)&PiDevCfgEmptyString;
                  v32 = *(const WCHAR **)(v8 + 8);
                  String2 = v31;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          (_BYTE *)a2,
                                          v32,
                                          1,
                                          (__int64)v10,
                                          v55,
                                          (__int64)&DEVPKEY_Device_ConfigurationId,
                                          18,
                                          (unsigned int *)v31.Buffer,
                                          (unsigned int)v31.Length + 2);
                  if ( DriverConfiguration >= 0 )
                  {
                    if ( v107.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              (_BYTE *)a2,
                                              *(const WCHAR **)(v8 + 8),
                                              1,
                                              (__int64)v10,
                                              v61,
                                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                              8210,
                                              (unsigned int *)v107.Buffer,
                                              v107.Length);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_137;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        *(__int64 *)&PiPnpRtlCtx,
                        (_BYTE *)a2,
                        *(const WCHAR **)(v8 + 8),
                        1,
                        (__int64)v10,
                        v61,
                        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                        0,
                        0LL,
                        0);
                    }
                    if ( a3 && (v33 = *(unsigned int **)(a3 + 136)) != 0LL )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              (_BYTE *)a2,
                                              *(const WCHAR **)(v8 + 8),
                                              1,
                                              (__int64)v10,
                                              v61,
                                              (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                              18,
                                              v33,
                                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_137;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        *(__int64 *)&PiPnpRtlCtx,
                        (_BYTE *)a2,
                        *(const WCHAR **)(v8 + 8),
                        1,
                        (__int64)v10,
                        v61,
                        (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                        0,
                        0LL,
                        0);
                    }
                    if ( (v78 & 0x80u) != 0 )
                    {
                      v51 = *(const WCHAR **)(v8 + 8);
                      LOBYTE(v72) = -1;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              (_BYTE *)a2,
                                              v51,
                                              1,
                                              (__int64)v10,
                                              v61,
                                              (__int64)&DEVPKEY_Device_DriverInGroup,
                                              17,
                                              &v72,
                                              1);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_137;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        *(__int64 *)&PiPnpRtlCtx,
                        (_BYTE *)a2,
                        *(const WCHAR **)(v8 + 8),
                        1,
                        (__int64)v10,
                        v61,
                        (__int64)&DEVPKEY_Device_DriverInGroup,
                        0,
                        0LL,
                        0);
                    }
                    if ( v98.Buffer && v98.Length )
                      PipHardwareConfigActivateService(v98.Buffer);
                    v34 = SourceString;
                    if ( SourceString )
                    {
                      while ( *v34 )
                      {
                        PipHardwareConfigActivateService(v34);
                        if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v34);
                        v52 = -1LL;
                        do
                          ++v52;
                        while ( v34[v52] );
                        v34 += v52 + 1;
                      }
                    }
                    v35 = Buffer;
                    if ( Buffer )
                    {
                      while ( *v35 )
                      {
                        PipHardwareConfigActivateService(v35);
                        if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                          PiDevCfgMakeServiceBootStart(v35);
                        v53 = -1LL;
                        do
                          ++v53;
                        while ( v35[v53] );
                        v35 += v53 + 1;
                      }
                    }
                  }
LABEL_137:
                  if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
                    goto LABEL_139;
                  goto LABEL_138;
                }
                *v89 = 64;
                PnpDeleteDeviceInterfaces(v8);
                v29 = v82;
                v28 = 0;
              }
              v30 = *(_QWORD *)&v73[1];
              goto LABEL_109;
            }
LABEL_278:
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (_BYTE *)a2,
                *(const WCHAR **)(v8 + 8),
                1,
                (__int64)v10,
                v55,
                (__int64)&DEVPKEY_Device_Manufacturer,
                0,
                0LL,
                0);
            goto LABEL_71;
          }
          memset(v113, 0, 0xA0uLL);
          v49 = *(_QWORD *)(v8 + 8);
          v113[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v113[2] = &v83;
          LODWORD(v113[1]) = 18;
          HIDWORD(v113[3]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(v50, v49, 1u, v10, (__int64)v113, 1u) < 0
            || SLODWORD(v113[4]) < 0
            || !v83.Buffer )
          {
            goto LABEL_278;
          }
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (_BYTE *)a2,
                                  *(const WCHAR **)(v8 + 8),
                                  1,
                                  (__int64)v10,
                                  v55,
                                  (__int64)&DEVPKEY_Device_DeviceDesc,
                                  18,
                                  (unsigned int *)v83.Buffer,
                                  (unsigned int)v83.Length + 2);
          if ( DriverConfiguration < 0 )
            goto LABEL_137;
        }
        if ( !a3 )
          goto LABEL_278;
        goto LABEL_68;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 && (v98.Buffer && DestinationString.Buffer || !v69) )
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_BYTE *)a2,
          *(const WCHAR **)(v8 + 8),
          1,
          (__int64)v10,
          v55,
          (__int64)&DEVPKEY_Device_Service,
          0,
          0LL,
          0);
      goto LABEL_53;
    }
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_43;
      v46 = (_QWORD *)(a3 + 224);
      if ( PnpIsNullGuid((void *)(a3 + 224)) )
        goto LABEL_43;
      v47 = Source2 - *v46;
      if ( Source2 == *v46 )
        v47 = v112 - *(_QWORD *)(a3 + 232);
      if ( !v47 )
        goto LABEL_43;
    }
    else if ( !v70 || (*(_DWORD *)(*(_QWORD *)&v73[1] + 560LL) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17LL);
    }
    CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18LL);
    goto LABEL_43;
  }
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v90,
              2u,
              (__int64)Handle,
              0LL,
              (__int64)&DEVPKEY_DeviceClass_ConfigurableClassVersion,
              (__int64)&v76,
              (__int64)&v80,
              4,
              (__int64)&v77,
              0) >= 0
    && v76 == 7
    && v77 == 4
    && v80
    && (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a3 + 64),
              7u,
              *(_QWORD *)(a3 + 16),
              0LL,
              (__int64)&DEVPKEY_DriverPackage_ClassVersion,
              (__int64)&v76,
              (__int64)&v85,
              4,
              (__int64)&v77,
              0) >= 0
    && v76 == 7
    && v77 == 4 )
  {
    v38 = v67;
    if ( v85 >= v80 )
      v38 = -1;
    v67 = v38;
  }
  else
  {
LABEL_201:
    v38 = v67;
  }
  if ( v38 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    goto LABEL_31;
  if ( PnpBootMode )
  {
    v7 |= 0x400u;
    v71 = v7;
    goto LABEL_31;
  }
LABEL_183:
  DriverConfiguration = -1073740651;
LABEL_139:
  RtlFreeUnicodeString(&v83);
  RtlFreeUnicodeString(&v92);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v98);
  RtlFreeUnicodeString(&v100);
  RtlFreeUnicodeString(&v101);
  RtlFreeUnicodeString(&v102);
  RtlFreeUnicodeString(&v103);
  RtlFreeUnicodeString(&v106);
  RtlFreeUnicodeString(&v107);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&String1);
  RtlFreeUnicodeString(&v94);
  if ( v105.Buffer )
    ExFreePoolWithTag(v105.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
