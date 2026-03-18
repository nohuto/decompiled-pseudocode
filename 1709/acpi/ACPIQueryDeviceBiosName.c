/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C0087CB0
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C00230C0 (ACPIAddInitializationDependencies.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087DC0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008CF5C (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIsDebuggingDevice @ 0x1C0092404 (ACPIIsDebuggingDevice.c)
 *     AcpiIsDeviceSecure @ 0x1C0096600 (AcpiIsDeviceSecure.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00A26E8 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0002A1C (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000D35C (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1C0087D3C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  __int64 *v3; // rax
  int v4; // ebx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)&a2->Length = 0LL;
  a2->Buffer = 0LL;
  P = 0LL;
  v3 = (__int64 *)OSConvertDeviceHandleToNSHANDLE(a1);
  if ( v3 )
  {
    v4 = ACPIAmliBuildObjectPathname(v3, &P, 1);
    if ( v4 >= 0 )
    {
      v4 = ACPIInitUnicodeString(a2);
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
