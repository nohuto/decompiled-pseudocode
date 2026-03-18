/*
 * XREFs of MmUnloadSystemImage @ 0x1405856E0
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     MiSessionUnloadAllImages @ 0x14057A5E0 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x140586D2C (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x1405CFCE0 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1406A2638 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
