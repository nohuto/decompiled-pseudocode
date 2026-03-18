/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x14052DA0C
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x14052FA38 (_PnpSetObjectPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x14054E500 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140551898 (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140551F84 (_CmRaisePropertyChangeEvent.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x14058DD38 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140784C90 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1407853C0 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14052D5B0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x140591680 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140782D64 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140782E2C (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

char __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  char result; // al
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 320);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(
                 a1,
                 a2,
                 a4,
                 a5,
                 a6,
                 *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 320));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 320));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 320));
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
