/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x14059ACD0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
