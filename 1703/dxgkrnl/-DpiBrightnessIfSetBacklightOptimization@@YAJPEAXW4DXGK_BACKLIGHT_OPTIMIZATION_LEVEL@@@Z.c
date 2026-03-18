/*
 * XREFs of ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01C9770
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01C9980 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessIfSetBacklightOptimization(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  char *DeviceExtension; // rbx
  int v5; // edi

  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = -1073741661;
  KeWaitForSingleObject(DeviceExtension + 4192, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)DeviceExtension + 558) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      v5 = DpiBrightnessSetBacklightOptimizationHelper(a1, a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4192), 0);
  return (unsigned int)v5;
}
