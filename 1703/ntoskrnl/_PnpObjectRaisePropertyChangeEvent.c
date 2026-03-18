/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x1404DE868
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404435D8 (_CmSetDeviceMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DB004 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404DB9FC (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405C220C (_CmRaisePropertyChangeEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1405CC868 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140740D1C (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14074144C (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x140457360 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DE940 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x14073E8B4 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14073E97C (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 320);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 320));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 320));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(
                 a1,
                 a2,
                 a4,
                 a5,
                 a6,
                 *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 320));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 320));
      default:
        v8[1] = a5;
        v8[2] = a6;
        v8[0] = a4;
        return v6(a1, a2, a3, 4LL, v8);
    }
  }
  return result;
}
