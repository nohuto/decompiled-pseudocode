/*
 * XREFs of DrvpGetDeviceInterfaceName @ 0x1C0093D4C
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvpGetDeviceInterfaceName(
        PDEVICE_OBJECT PhysicalDeviceObject,
        GUID *InterfaceClassGuid,
        __int64 a3,
        wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  wchar_t *v9; // rcx
  __int64 v11; // rax
  wchar_t *Src; // [rsp+20h] [rbp-18h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(InterfaceClassGuid, PhysicalDeviceObject, 0, &Src);
  v8 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v7);
    *(_QWORD *)(v11 + 24) = PhysicalDeviceObject;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v8;
}
