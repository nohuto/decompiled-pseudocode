/*
 * XREFs of _CmRaiseCreateEvent @ 0x140596434
 * Callers:
 *     _CmCreateDeviceWorker @ 0x14044CF80 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x1404DABBC (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140596324 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x14059664C (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140739E70 (_CmCreateInstallerClassWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140484DF8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x140596494 (_PnpObjectRaiseCreateEvent.c)
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
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 336);
  if ( result )
  {
    v11[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v11);
  }
  return result;
}
