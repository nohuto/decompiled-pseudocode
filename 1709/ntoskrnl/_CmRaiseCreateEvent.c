/*
 * XREFs of _CmRaiseCreateEvent @ 0x1405D79EC
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x14054E844 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x14058A96C (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1405D78DC (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x1405D7BCC (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x14077E558 (_CmCreateInstallerClassWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140522F88 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14059B8DC (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8, v10);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 336);
  if ( result )
  {
    v12[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v12);
  }
  return result;
}
