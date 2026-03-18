/*
 * XREFs of ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200E60
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG __fastcall DpiBrightnessEventStartCallback(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  char *DeviceExtension; // rbp
  unsigned int v4; // ebx
  char *v7; // rsi
  char *v8; // rax

  DeviceExtension = (char *)a3->DeviceExtension;
  v4 = 0;
  v7 = 0LL;
  if ( *((_WORD *)DeviceExtension + 2281) == 2 )
    v7 = DeviceExtension + 4560;
  KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
  if ( v7 && *((_QWORD *)v7 + 9) && (int)DpiAcquireCoreSyncAccessSafe((__int64)a3, 0) >= 0 )
  {
    v8 = DeviceExtension + 4200;
    while ( a1 != *((_QWORD *)v8 + 1) )
    {
      ++v4;
      v8 += 24;
      if ( v4 >= 3 )
        goto LABEL_11;
    }
    *v8 = 1;
    DpiBrightnessAISetBacklightOptLevel(a3);
LABEL_11:
    DpiReleaseCoreSyncAccessSafe((__int64)a3, 0);
  }
  return KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
}
