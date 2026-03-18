/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E3C08
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E2FF8 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int v3; // r14d
  void (__fastcall *v4)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2244) )
  {
    KeWaitForSingleObject(DeviceExtension + 4288, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1149] )
    {
      DpiBrightnessCleanupAggregateEvents(a1, 0);
    }
    else
    {
      DpiBrightnessCleanupAggregateEvents(a1, 1);
      v4 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 564);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 562));
        memset(DeviceExtension + 4488, 0, 0x58uLL);
      }
    }
    memset(DeviceExtension + 4488, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
  }
  return 0LL;
}
