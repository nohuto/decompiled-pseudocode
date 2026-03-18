/*
 * XREFs of _CmRaiseDeleteEvent @ 0x14073E840
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x14073A8B0 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x14073B6F8 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x14073BAC8 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14073C678 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140484DF8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14073EA44 (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v7, v6);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 336);
  if ( result )
  {
    v9[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 3LL, v9);
  }
  return result;
}
