/*
 * XREFs of RIMUpdateMonitorQuirk @ 0x1C000B05C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     RIMGetPointerDevicePDO @ 0x1C000EC48 (RIMGetPointerDevicePDO.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z @ 0x1C0115904 (-RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z.c)
 */

unsigned int __fastcall RIMUpdateMonitorQuirk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  unsigned int result; // eax
  int v21; // edx
  int v22; // r8d
  const GUID *v23; // r9
  int v24; // r14d
  BOOL v25; // eax
  unsigned __int16 *v26; // rdi
  struct _DEVICE_OBJECT *v27; // rdi
  int v28; // eax
  PVOID v29; // r14
  int v30; // eax
  const GUID *v31; // r9
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
  EVENT_DATA_DESCRIPTOR v53; // [rsp+E8h] [rbp-20h] BYREF
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  int *v91; // [rsp+248h] [rbp+140h]
  __int64 v92; // [rsp+250h] [rbp+148h]
  _BYTE KeyValueInformation[4]; // [rsp+258h] [rbp+150h] BYREF
  int v94; // [rsp+25Ch] [rbp+154h]
  int v95; // [rsp+264h] [rbp+15Ch]

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
    if ( dword_1C01880D0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
      {
        v36 = (int)v23;
        v91 = &v36;
        v92 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A9A8, 0LL, v23, 3u, &pData);
      }
    }
  }
  result = ZwClose(KeyHandle);
  if ( !v18 )
  {
LABEL_2:
    result = RIMIsRunningOnMobile();
    if ( result && (result = *(_DWORD *)(a3 + 24) - 1, result <= 3) )
    {
      v24 = a12;
      v25 = a12 == 51;
      LODWORD(v33) = v25;
      if ( a12 == 19 && a13 == 14 && (a8 == 1080 && a9 == 1920 || a8 == 720 && a9 == 1280) )
      {
        v25 = 1;
        LODWORD(v33) = 1;
      }
      if ( !v25 )
        LODWORD(v33) = (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"ACERINC", L"TM01")
                    || (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"BLU", L"WIN JR LTE");
      v26 = (unsigned __int16 *)(a2 + 208);
      if ( (int)RIMGetDeviceObjectPointer(
                  (int)a2 + 208,
                  v21,
                  v22,
                  (unsigned int)&Handle,
                  (__int64)&v38,
                  (__int64)&Object) >= 0 )
      {
        v27 = (struct _DEVICE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v28 = RIMGetPointerDevicePDO(v27);
        v29 = v40;
        if ( v28 >= 0 && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v40 + 8), 1u, 0x20019u, &KeyHandle) >= 0 )
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
            v30 = -1;
            if ( v95 )
              v30 = 1;
            HIDWORD(v33) = v30;
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
        ObfDereferenceObject(v29);
        ZwClose(Handle);
        ObfDereferenceObject(v38);
        ObfDereferenceObject(v27);
        v24 = a12;
        v26 = (unsigned __int16 *)(a2 + 208);
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
      if ( dword_1C01880D0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
        {
          v55 = 2LL;
          v54 = v57;
          v56 = *((_QWORD *)v26 + 1);
          v57[0] = *v26;
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
          v46 = v24;
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
          TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A862, 0LL, v31, 0x14u, &v53);
        }
      }
      result = *(_DWORD *)(a2 + 184) & 0xFEFFFFFF;
      *(_DWORD *)(a2 + 184) = result;
      if ( v16 != -1 )
      {
        v32 = v16 == 0;
        goto LABEL_53;
      }
      if ( v17 != -1 )
      {
        v32 = v17 == 0;
LABEL_53:
        if ( v32 )
        {
LABEL_55:
          *(_DWORD *)(a2 + 184) = result;
          return result;
        }
LABEL_54:
        result |= 0x1000000u;
        goto LABEL_55;
      }
      if ( (_DWORD)v33 )
        goto LABEL_54;
    }
    else
    {
      *(_DWORD *)(a2 + 184) &= ~0x1000000u;
    }
  }
  return result;
}
