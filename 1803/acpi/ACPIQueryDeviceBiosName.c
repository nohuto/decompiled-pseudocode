/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C008BEA0
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0009A60 (ACPIAddInitializationDependencies.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C0079C98 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007DDF0 (ACPIIoctlQueryDeviceBiosName.c)
 *     AcpiIsDeviceSecure @ 0x1C00884E4 (AcpiIsDeviceSecure.c)
 *     ACPIIsDebuggingDevice @ 0x1C008B584 (ACPIIsDebuggingDevice.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00091E8 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1C007D67C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)&a2->Length = 0LL;
  a2->Buffer = 0LL;
  P = 0LL;
  v3 = OSConvertDeviceHandleToNSHANDLE(a1);
  if ( v3 )
  {
    v4 = ACPIAmliBuildObjectPathname(v3, (char **)&P, 1);
    if ( v4 >= 0 )
    {
      v4 = ACPIInitUnicodeString(a2, (const char *)P);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v4;
}
