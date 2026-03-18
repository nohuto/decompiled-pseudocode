/*
 * XREFs of ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01E3AD0
 * Callers:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01E38C0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 * Callees:
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C01E3CF8 (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessSetBacklightOptimizationHelper(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  _QWORD *DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension[570] || a2 == *((_DWORD *)DeviceExtension + 1047) )
    return 0LL;
  result = DpiCallDrvSetBacklightOptimizationLevel(a1);
  if ( (int)result >= 0 )
    *((_DWORD *)DeviceExtension + 1047) = a2;
  return result;
}
