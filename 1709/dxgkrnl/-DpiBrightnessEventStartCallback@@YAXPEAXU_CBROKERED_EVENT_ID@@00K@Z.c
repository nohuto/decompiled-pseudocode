/*
 * XREFs of ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01E32E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG __fastcall DpiBrightnessEventStartCallback(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  char *DeviceExtension; // rsi
  unsigned int v6; // ebx
  char *v7; // rax

  DeviceExtension = (char *)a3->DeviceExtension;
  v6 = 0;
  KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)DeviceExtension + 570) && (int)DpiAcquireCoreSyncAccessSafe((__int64)a3, 0) >= 0 )
  {
    v7 = DeviceExtension + 4200;
    while ( a1 != *((_QWORD *)v7 + 1) )
    {
      ++v6;
      v7 += 24;
      if ( v6 >= 3 )
        goto LABEL_8;
    }
    *v7 = 1;
    DpiBrightnessAISetBacklightOptLevel(a3);
LABEL_8:
    DpiReleaseCoreSyncAccessSafe((__int64)a3, 0);
  }
  return KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
}
