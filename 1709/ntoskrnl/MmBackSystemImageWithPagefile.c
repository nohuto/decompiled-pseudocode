/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x1405C861C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x1405C85F0 (FsRtlSetDriverBacking.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x1405C86AC (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v3; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v5 = MiBackSystemImageWithPagefile(v3);
  MmReleaseLoadLock((__int64)Lock);
  return v5;
}
