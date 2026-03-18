/*
 * XREFs of MmUnloadSystemImage @ 0x14059DFC0
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x14059DED0 (IopDeleteDriver.c)
 *     MiLoadImportDll @ 0x1405C9014 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1406CCED8 (PnprLoadPluginDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406ED444 (MiSessionUnloadAllImages.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
