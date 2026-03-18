/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimmingDirect@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C02016E4
 * Callers:
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C020169C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimmingDirect(struct _DEVICE_OBJECT *a1, char a2)
{
  char *DeviceExtension; // rbx
  char *v3; // rbp

  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = 0LL;
  if ( *((_WORD *)DeviceExtension + 2281) == 2 )
    v3 = DeviceExtension + 4560;
  if ( !v3 )
    return 3221225659LL;
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 2 )
    return 3221225485LL;
  KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)v3 + 9) )
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
