/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C0013FDC
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0073090 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))DxgCoreInterface[2])(a1, 2LL);
}
