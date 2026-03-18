/*
 * XREFs of RIMUpdateMonitorQuirk @ 0x1C0008ADC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z @ 0x1C000907C (-RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z.c)
 *     RIMGetPointerDevicePDO @ 0x1C000B3F0 (RIMGetPointerDevicePDO.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RIMUpdateMonitorQuirk(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // r15d
  int v17; // esi
  int v18; // edi
  int v20; // edx
  int v21; // r8d
  NTSTATUS result; // eax
  int v23; // r14d
  BOOL v24; // eax
  unsigned __int16 *v25; // rdi
  struct _DEVICE_OBJECT *v26; // rdi
  int v27; // eax
  PVOID v28; // r14
  const GUID *v29; // r9
  const GUID *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v38; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v40; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  int v45; // [rsp+84h] [rbp-84h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v48; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+94h] [rbp-74h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD *v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  __int64 v56; // [rsp+118h] [rbp+10h]
  _DWORD v57[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  int *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  int *v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  int *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  int *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  int *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  int *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  int *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  int *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  PVOID *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  HANDLE *p_Handle; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  char *v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  PVOID *v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  PVOID *p_Object; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v90; // [rsp+238h] [rbp+130h] BYREF
  int *v91; // [rsp+258h] [rbp+150h]
  __int64 v92; // [rsp+260h] [rbp+158h]
  _BYTE KeyValueInformation[4]; // [rsp+278h] [rbp+170h] BYREF
  int v94; // [rsp+27Ch] [rbp+174h]
  int v95; // [rsp+284h] [rbp+17Ch]

  LODWORD(v37) = a4;
  Object = 0LL;
  v38 = 0LL;
  Handle = 0LL;
  v40 = 0LL;
  KeyHandle = 0LL;
  v16 = -1;
  v33 = 0xFFFFFFFF00000000uLL;
  v17 = -1;
  v18 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_2;
  RtlInitUnicodeString(&ValueName, L"ForceOverride");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength) >= 0
    && v94 == 4 )
  {
    if ( v95 )
      *(_DWORD *)(a2 + 184) |= 0x1000000u;
    else
      *(_DWORD *)(a2 + 184) &= ~0x1000000u;
    v18 = 1;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v36 = (int)v30;
        v91 = &v36;
        v92 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016A4D7, 0LL, v30, 3u, &v90);
      }
    }
  }
  result = ZwClose(KeyHandle);
  if ( !v18 )
  {
LABEL_2:
    result = a3 - 5;
    if ( (unsigned int)(a3 - 5) <= 2 )
    {
      *(_DWORD *)(a2 + 184) &= ~0x1000000u;
      return result;
    }
    v23 = a12;
    v24 = a12 == 51;
    LODWORD(v33) = v24;
    if ( a12 == 19 && a13 == 14 && (a8 == 1080 && a9 == 1920 || a8 == 720 && a9 == 1280) )
    {
      v24 = 1;
      LODWORD(v33) = 1;
    }
    if ( !v24 )
      LODWORD(v33) = (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"ACERINC", L"TM01")
                  || (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"BLU", L"WIN JR LTE");
    v25 = (unsigned __int16 *)(a2 + 208);
    if ( (int)RIMGetDeviceObjectPointer((int)a2 + 208, v20, v21, (unsigned int)&Handle, (__int64)&v38, (__int64)&Object) >= 0 )
    {
      v26 = (struct _DEVICE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v27 = RIMGetPointerDevicePDO(v26);
      v28 = v40;
      if ( v27 >= 0 && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v40 + 8), 1u, 0x20019u, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"EnhancedPowerManagementNoDelay");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v94 == 4 )
        {
          v31 = -1;
          if ( v95 )
            v31 = 1;
          HIDWORD(v33) = v31;
        }
        RtlInitUnicodeString(&ValueName, L"LegacyTouchScaling");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v94 == 4 )
        {
          v16 = v95 != 0;
        }
        ZwClose(KeyHandle);
      }
      ObfDereferenceObject(v28);
      ZwClose(Handle);
      ObfDereferenceObject(v38);
      ObfDereferenceObject(v26);
      v23 = a12;
      v25 = (unsigned __int16 *)(a2 + 208);
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Enable");
      if ( ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength) >= 0
        && v94 == 4 )
      {
        v17 = v95 != 0;
      }
      ZwClose(KeyHandle);
    }
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v55 = 2LL;
        v54 = v57;
        v56 = *((_QWORD *)v25 + 1);
        v57[0] = *v25;
        v58 = &v37;
        v36 = a5;
        v60 = &v36;
        v42 = a6;
        v62 = &v42;
        v43 = a7;
        v64 = &v43;
        v66 = &v44;
        v45 = a10;
        v68 = &v45;
        v70 = &v46;
        v47 = a13;
        v72 = &v47;
        v74 = &v48;
        v49 = a11;
        v76 = &v49;
        LODWORD(v38) = a14;
        v78 = &v38;
        LODWORD(Handle) = a15;
        p_Handle = &Handle;
        v82 = &v33;
        v84 = (char *)&v33 + 4;
        v86 = &v40;
        p_Object = &Object;
        v57[1] = 0;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v44 = a8;
        v67 = 4LL;
        v69 = 4LL;
        v46 = v23;
        v71 = 4LL;
        v73 = 4LL;
        v48 = a9;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        LODWORD(v40) = v16;
        v87 = 4LL;
        LODWORD(Object) = v17;
        v89 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016A391, 0LL, v29, 0x14u, &pData);
      }
    }
    *(_DWORD *)(a2 + 184) &= ~0x1000000u;
    result = *(_DWORD *)(a2 + 184);
    if ( v16 == -1 )
    {
      if ( v17 == -1 )
      {
        if ( !(_DWORD)v33 )
          return result;
        goto LABEL_56;
      }
      v32 = v17 == 0;
    }
    else
    {
      v32 = v16 == 0;
    }
    if ( v32 )
    {
      result &= ~0x1000000u;
LABEL_57:
      *(_DWORD *)(a2 + 184) = result;
      return result;
    }
LABEL_56:
    result |= 0x1000000u;
    goto LABEL_57;
  }
  return result;
}
