/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C008E2C4
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0008D68 (ACPIAddInitializationDependencies.c)
 *     ACPIIsDebuggingDevice @ 0x1C008CAD8 (ACPIIsDebuggingDevice.c)
 *     AcpiIsDeviceSecure @ 0x1C008E07C (AcpiIsDeviceSecure.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C008E3E0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00936CC (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C009F9B4 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0009384 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001447C (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1C008E350 (ACPIInitUnicodeString.c)
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
