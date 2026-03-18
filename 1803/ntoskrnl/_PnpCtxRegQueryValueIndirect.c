/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x140508774
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x140503E94 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14056B1FC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140586188 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1405CD6FC (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
