/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E3A20
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C0178460 (DxgkNotifyMonitorDimming.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01CACE0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, char a2)
{
  char *DeviceExtension; // rbx

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension || *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 2 )
    return 3221225485LL;
  KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)DeviceExtension + 570) )
  {
    if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 0) >= 0 )
    {
      DeviceExtension[4184] = a2;
      DpiBrightnessAISetBacklightOptLevel(a1);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
  return 0LL;
}
