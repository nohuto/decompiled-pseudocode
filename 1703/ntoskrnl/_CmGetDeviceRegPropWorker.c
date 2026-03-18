/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x140484810
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlStringCbCopyNExW @ 0x14002E73C (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x14003679C (_MapCmDevicePropertyToRegType.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     _CmDevicePropertyRead @ 0x14004C224 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToNtProperty @ 0x14004C260 (_MapCmDevicePropertyToNtProperty.c)
 *     _MapCmDevicePropertyToRegValue @ 0x14004C2C4 (_MapCmDevicePropertyToRegValue.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E09F0 (_CmGetInstallerClassRegProp.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404E6644 (_NtPlugPlayGetDeviceProperty.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const wchar_t *a2,
        HANDLE a3,
        int a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int *a7,
        __int16 a8)
{
  unsigned int v10; // edi
  wchar_t *v11; // r13
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // r10
  const wchar_t *v15; // r11
  unsigned int v16; // r12d
  __int64 v17; // rcx
  const WCHAR *v18; // r11
  int v19; // r12d
  const wchar_t *v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  HANDLE v23; // rdx
  __int64 (__fastcall *v24)(__int64, HANDLE, const wchar_t *, int *, wchar_t *, unsigned int *, __int64); // rax
  NTSTATUS inited; // eax
  int v26; // ecx
  unsigned int DeviceRegProp; // eax
  int v29; // ecx
  unsigned int DeviceProperty; // eax
  wchar_t *v31; // rax
  const wchar_t *v32; // r8
  unsigned int v33; // ecx
  __int64 v34; // rax
  int v35; // r9d
  unsigned int ObjectProperty; // eax
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  STRSAFE_PCNZWCH pszSrc; // [rsp+80h] [rbp-80h]
  char v47[8]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v49[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v50; // [rsp+ECh] [rbp-14h]

  v45 = a1;
  pszSrc = a2;
  v43 = 0;
  Handle = 0LL;
  v42 = 0;
  if ( a8 || !a7 || !a5 )
    return 3221225485LL;
  v10 = *a7;
  if ( *a7 && !pszDest )
    return 3221225485LL;
  *a7 = 0;
  v11 = 0LL;
  cbDest = v10;
  if ( v10 )
    v11 = pszDest;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead((__int64)pszDest, a4) )
    return 3221226032LL;
  if ( !a3 )
  {
    v43 = CmOpenDeviceRegKey(v14, (__int64)v15, 0x10u, (unsigned int)v13, 33554433, (char)v13, (__int64)&Handle, v13);
    v16 = v43;
    if ( v43 < 0 )
      goto LABEL_28;
    v10 = cbDest;
    LODWORD(v13) = 0;
    v14 = v45;
    v15 = pszSrc;
  }
  if ( a4 < 8 )
    goto LABEL_14;
  if ( a4 != 8 )
  {
    if ( a4 == 23 )
    {
      v31 = wcschr(v15, 0x5Cu);
      if ( !v31 )
      {
        v16 = -1073741811;
        goto LABEL_28;
      }
      v32 = pszSrc;
      v33 = cbDest;
      *a7 = (_DWORD)v31 - (_DWORD)pszSrc + 2;
      *a5 = 1;
      v34 = *a7;
      if ( v33 >= (unsigned int)v34 )
      {
        v16 = RtlStringCbCopyNExW(v11, v33, v32, v34 - 2, ppszDestEnd, pcbRemaining, dwFlags);
        goto LABEL_28;
      }
      goto LABEL_41;
    }
    if ( a4 == 36 )
    {
      v35 = (int)Handle;
      if ( a3 )
        v35 = (int)a3;
      ObjectProperty = PnpGetObjectProperty(
                         v14,
                         (_DWORD)v15,
                         1,
                         v35,
                         0LL,
                         (__int64)&DEVPKEY_Device_LocationPaths,
                         (__int64)v47,
                         (__int64)v11,
                         v10,
                         (__int64)a7,
                         0);
      *a5 = 7;
      v16 = ObjectProperty;
      if ( ObjectProperty != -1073741772 )
        goto LABEL_28;
      goto LABEL_42;
    }
LABEL_14:
    v19 = MapCmDevicePropertyToNtProperty(v12, a4);
    if ( v19 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v18);
      if ( inited >= 0 )
      {
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v45,
                           (unsigned int)&DestinationString,
                           v19,
                           (_DWORD)v11,
                           v10,
                           (__int64)&cbDest);
        v16 = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
        {
          v16 = -1073741275;
        }
        else if ( (int)(DeviceProperty + 0x80000000) < 0 || DeviceProperty == -1073741789 )
        {
          *a7 = cbDest;
          *a5 = MapCmDevicePropertyToRegType(a4);
        }
        goto LABEL_28;
      }
      goto LABEL_48;
    }
    v20 = MapCmDevicePropertyToRegValue(v17, a4);
    if ( !v20 )
    {
      v16 = -1073741264;
      goto LABEL_28;
    }
    v23 = Handle;
    v24 = *(__int64 (__fastcall **)(__int64, HANDLE, const wchar_t *, int *, wchar_t *, unsigned int *, __int64))(v22 + 344);
    if ( a3 )
      v23 = a3;
    cbDest_4 = v10;
    if ( !v24 )
      v24 = (__int64 (__fastcall *)(__int64, HANDLE, const wchar_t *, int *, wchar_t *, unsigned int *, __int64))&PnpRegQueryValueIndirect;
    inited = v24(v22, v23, v20, &v42, v11, &cbDest_4, v21);
    if ( inited != -1073741772 && inited != -1073741444 )
    {
      if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741789 )
        goto LABEL_48;
      v26 = v42;
      if ( v42 != 7 && v42 != 1 )
      {
        if ( cbDest_4 != 4 && v42 == 4 )
        {
          v16 = -1073741275;
          goto LABEL_28;
        }
LABEL_25:
        *a7 = cbDest_4;
        *a5 = v26;
        if ( !inited && cbDest )
        {
          v16 = v43;
          goto LABEL_28;
        }
LABEL_41:
        v16 = -1073741789;
        goto LABEL_28;
      }
      if ( cbDest_4 >= 2 )
        goto LABEL_25;
    }
LABEL_42:
    v16 = -1073741275;
    goto LABEL_28;
  }
  cbDest_4 = 78;
  v42 = (int)v13;
  if ( !a3 )
    a3 = Handle;
  DeviceRegProp = CmGetDeviceRegProp(
                    v14,
                    (__int64)v15,
                    (__int64)a3,
                    9,
                    (__int64)&v42,
                    (__int64)v49,
                    (__int64)&cbDest_4,
                    (int)v13);
  v16 = DeviceRegProp;
  if ( DeviceRegProp == -1073741789 )
  {
    v16 = -1073741595;
    goto LABEL_28;
  }
  if ( !DeviceRegProp )
  {
    v50 = 0;
    v29 = v45;
    *a7 = cbDest;
    inited = CmGetInstallerClassRegProp(v29, (unsigned int)v49, 0, 8, (__int64)a5, (__int64)v11, (__int64)a7);
LABEL_48:
    v16 = inited;
  }
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  return v16;
}
