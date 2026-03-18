/*
 * XREFs of PipOpenServiceEnumKeys @ 0x14051A2F0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessDriverInstance @ 0x140555A00 (PiProcessDriverInstance.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14058C7DC (PipDmgGetDriverDmarCompatLevel.c)
 *     PiDevCfgVerifyService @ 0x1405A2558 (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406C1260 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1406C6478 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 */

NTSTATUS __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  void *v14; // [rsp+48h] [rbp-1h] BYREF
  int v15; // [rsp+50h] [rbp+7h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 6LL, &v14);
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
