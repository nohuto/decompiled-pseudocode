/*
 * XREFs of ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200F30
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG __fastcall DpiBrightnessEventStopCallback(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  char *DeviceExtension; // rsi
  char *v4; // rdi
  unsigned int v7; // ecx
  char *v8; // rax

  DeviceExtension = (char *)a3->DeviceExtension;
  v4 = 0LL;
  if ( *((_WORD *)DeviceExtension + 2281) == 2 )
    v4 = DeviceExtension + 4560;
  KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
  if ( v4 && *((_QWORD *)v4 + 9) && (int)DpiAcquireCoreSyncAccessSafe((__int64)a3, 0) >= 0 )
  {
    v7 = 0;
    v8 = DeviceExtension + 4200;
    while ( a1 != *((_QWORD *)v8 + 1) )
    {
      ++v7;
      v8 += 24;
      if ( v7 >= 3 )
        goto LABEL_11;
    }
    *v8 = 0;
    DpiBrightnessAISetBacklightOptLevel(a3);
LABEL_11:
    DpiReleaseCoreSyncAccessSafe((__int64)a3, 0);
  }
  return KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
}
