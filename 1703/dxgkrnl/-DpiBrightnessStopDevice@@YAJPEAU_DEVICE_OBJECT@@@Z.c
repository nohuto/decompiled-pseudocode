/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C9AB8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01C8EB4 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int v3; // r14d
  void (__fastcall *v4)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2196) )
  {
    KeWaitForSingleObject(DeviceExtension + 4192, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1149] )
    {
      DpiBrightnessCleanupAggregateEvents(a1, 0);
    }
    else
    {
      DpiBrightnessCleanupAggregateEvents(a1, 1);
      v4 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 552);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 550));
        memset(DeviceExtension + 4392, 0, 0x58uLL);
      }
    }
    memset(DeviceExtension + 4392, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4192), 0);
  }
  return 0LL;
}
