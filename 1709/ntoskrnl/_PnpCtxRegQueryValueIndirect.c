/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1405229BC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14051D0E8 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14051F7DC (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 344);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
