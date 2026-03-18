/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x1405D24C8
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1405CC730 (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405CF920 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x1405D2178 (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x1405D3F7C (_CmAddDeviceToContainerWorker.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140602328 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407EA7E4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1407EC114 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1407ED474 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x1407EF960 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1407F0090 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1405D25A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x140602E80 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x1407EBE08 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x1407EBED0 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
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

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 496);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        v8[1] = a5;
        v8[2] = a6;
        v8[0] = a4;
        return v6(a1, a2, a3, 4LL, v8);
    }
  }
  return result;
}
