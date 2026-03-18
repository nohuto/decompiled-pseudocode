/*
 * XREFs of PipOpenServiceEnumKeys @ 0x1405AD84C
 * Callers:
 *     PiDevCfgVerifyService @ 0x140590184 (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406954A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x14081D8E4 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1405B27F4 (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  int result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  void *v14; // [rsp+48h] [rbp-1h] BYREF
  int v15; // [rsp+50h] [rbp+7h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 6, &v14);
  if ( result >= 0 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v14;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result >= 0 )
    {
      if ( a4 || a5 )
      {
        v15 = 655368;
        v16 = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v15, a2, 1, 0LL);
        }
        else
        {
          Handle = 0LL;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
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
