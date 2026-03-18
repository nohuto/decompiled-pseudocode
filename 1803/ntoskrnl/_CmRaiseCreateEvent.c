/*
 * XREFs of _CmRaiseCreateEvent @ 0x1405E4134
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x1405D5084 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x1405E408C (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1405F19E8 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x1405F1C74 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1407E70DC (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x1407EC438 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405069E4 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x1405E4194 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v11[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v11);
  }
  return result;
}
