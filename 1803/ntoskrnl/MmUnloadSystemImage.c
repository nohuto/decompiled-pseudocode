/*
 * XREFs of MmUnloadSystemImage @ 0x140605910
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     MiSessionUnloadAllImages @ 0x1405ED214 (MiSessionUnloadAllImages.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140605830 (IopDeleteDriver.c)
 *     MiLoadImportDll @ 0x1406113D4 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140734878 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
