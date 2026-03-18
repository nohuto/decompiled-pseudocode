/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1404E0DF8
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x140487660 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404E0178 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E0B68 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1405A99BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *))(a1 + 344);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
