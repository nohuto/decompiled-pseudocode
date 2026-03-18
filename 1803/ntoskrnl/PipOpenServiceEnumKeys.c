/*
 * XREFs of PipOpenServiceEnumKeys @ 0x1405F7868
 * Callers:
 *     PiDevCfgVerifyService @ 0x1405F23B0 (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x1405F2938 (PipHardwareConfigActivateService.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C (PipDmgGetDriverDmarCompatLevel.c)
 *     PiProcessDriverInstance @ 0x1405F7090 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x140648B50 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140726F40 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072CF24 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405063E0 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  int result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  void *v15; // [rsp+48h] [rbp-11h] BYREF
  int v16; // [rsp+50h] [rbp-9h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v15);
  if ( result >= 0 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( !v12 )
          v12 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        v12 = (_QWORD *)*v12;
        if ( v12 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v12 )
          break;
        result = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, v12, 6, &v15);
        if ( result < 0 )
        {
          if ( result != -2147483622 )
            goto LABEL_3;
          break;
        }
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = v15;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
      result = -1073741772;
    }
LABEL_3:
    if ( result >= 0 )
    {
      if ( a4 || a5 )
      {
        v16 = 655368;
        v17 = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v16, a2, 1, 0LL);
        }
        else
        {
          Handle = 0LL;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
        }
        v11 = v10;
        if ( v10 < 0 )
        {
          ZwClose(KeyHandle);
          return v11;
        }
        if ( a4 )
          *a4 = Handle;
        else
          ZwClose(Handle);
      }
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
