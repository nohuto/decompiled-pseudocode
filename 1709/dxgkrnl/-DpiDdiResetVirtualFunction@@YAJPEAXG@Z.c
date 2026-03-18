/*
 * XREFs of ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0032740
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C018A61C (DxgkDdiResetVirtualFunction.c)
 */

__int64 __fastcall DpiDdiResetVirtualFunction(void *a1)
{
  __int64 v2; // [rsp+40h] [rbp+18h] BYREF

  DpiGetVirtualGpuType(a1, &v2);
  return DxgkDdiResetVirtualFunction(*(void **)(*(_QWORD *)(v2 + 64) + 3728LL));
}
