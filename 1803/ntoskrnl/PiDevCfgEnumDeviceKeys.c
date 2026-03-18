/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x1405DAB98
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1405DA7CC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgResetDeviceKeys @ 0x14072E678 (PiDevCfgResetDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1405F31C0 (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        char a5,
        __int64 (__fastcall *a6)(__int64, __int64, int *, HANDLE, HANDLE, __int64),
        __int64 a7)
{
  int *v7; // rdi
  void *v8; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  NTSTATUS v13; // eax
  unsigned int v15; // r8d
  int DeviceRegProp; // ebx
  const WCHAR *v17; // rdx
  __int64 v18; // rdx
  HANDLE v19; // rax
  HANDLE v20; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v26; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v31)(__int64, __int64, int *, HANDLE, HANDLE, __int64); // [rsp+B8h] [rbp-48h]
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = &dword_1407FB34C;
  v31 = a6;
  v8 = a3;
  v29 = a7;
  v26 = a3;
  v30 = a1;
  v11 = 0;
  KeyHandle = 0LL;
  v12 = 0;
  Handle = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    if ( (a4 & *(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 - 3));
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v13 == -1073741772 )
      goto LABEL_4;
    if ( v13 < 0 )
      goto LABEL_23;
    v15 = v7[1];
    if ( v15 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        v15,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
    }
    else
    {
      DeviceRegProp = PnpCtxOpenContextBaseKey(0, *v7, 0, 983103, (__int64)&Handle);
      if ( DeviceRegProp >= 0 )
      {
        if ( *v7 == 7 )
        {
          v18 = *(_QWORD *)(a2 + 8);
          v24 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            v18,
                            0LL,
                            9,
                            (__int64)&v25,
                            (__int64)SourceString,
                            (__int64)&v24,
                            0);
          if ( DeviceRegProp >= 0 )
          {
            if ( v25 == 1 && v24 > 2 )
              SourceString[38] = 0;
            else
              DeviceRegProp = -1073741772;
            if ( DeviceRegProp >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              ObjectAttributes.Length = 48;
              v23 = 0LL;
              ObjectAttributes.RootDirectory = Handle;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              DeviceRegProp = ZwOpenKey(&v23, 0xF003Fu, &ObjectAttributes);
              ZwClose(Handle);
              v19 = Handle;
              if ( DeviceRegProp >= 0 )
                v19 = v23;
              Handle = v19;
            }
          }
        }
        v17 = *(const WCHAR **)(v7 + 3);
        if ( v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          ObjectAttributes.Length = 48;
          v23 = 0LL;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceRegProp = ZwOpenKey(&v23, 0xF003Fu, &ObjectAttributes);
          ZwClose(Handle);
          v20 = Handle;
          if ( DeviceRegProp >= 0 )
            v20 = v23;
          Handle = v20;
        }
      }
    }
    if ( DeviceRegProp != -1073741772 )
      break;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
LABEL_18:
    v8 = v26;
LABEL_4:
    ++v12;
    v7 += 8;
    if ( v12 >= 7 )
      goto LABEL_5;
  }
  if ( DeviceRegProp >= 0 )
  {
    v13 = v31(v30, a2, v7 - 3, KeyHandle, Handle, v29);
    if ( v13 == -1073741248 )
      goto LABEL_5;
    if ( v13 < 0 )
    {
LABEL_23:
      v11 = v13;
      goto LABEL_5;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
    goto LABEL_18;
  }
  v11 = DeviceRegProp;
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
