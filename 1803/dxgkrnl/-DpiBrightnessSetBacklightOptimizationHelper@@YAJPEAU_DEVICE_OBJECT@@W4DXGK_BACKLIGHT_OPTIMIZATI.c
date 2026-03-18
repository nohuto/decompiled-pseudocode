/*
 * XREFs of ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0201910
 * Callers:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0201500 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 * Callees:
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C0201DDC (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessSetBacklightOptimizationHelper(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  _WORD *DeviceExtension; // rbx
  char *v4; // rdx
  __int64 result; // rax

  DeviceExtension = a1->DeviceExtension;
  v4 = 0LL;
  if ( DeviceExtension[2281] == 2 )
    v4 = (char *)(DeviceExtension + 2280);
  if ( !v4 )
    return 3221225659LL;
  if ( !*((_QWORD *)v4 + 9) || a2 == *((_DWORD *)DeviceExtension + 1047) )
    return 0LL;
  result = DpiCallDrvSetBacklightOptimizationLevel(a1);
  if ( (int)result >= 0 )
    *((_DWORD *)DeviceExtension + 1047) = a2;
  return result;
}
