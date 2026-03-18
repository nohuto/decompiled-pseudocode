/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x14045D5C0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404329C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyUninitializeSync(PNOTIFY_SYNC *NotifySync)
{
  PNOTIFY_SYNC v2; // rcx

  v2 = *NotifySync;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *NotifySync = 0LL;
  }
}
