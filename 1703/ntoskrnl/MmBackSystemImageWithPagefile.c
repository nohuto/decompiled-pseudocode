/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x14059D470
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14059D440 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x14059D500 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v3; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v3 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v5 = MiBackSystemImageWithPagefile(v3);
  MmReleaseLoadLock((__int64)Lock);
  return v5;
}
