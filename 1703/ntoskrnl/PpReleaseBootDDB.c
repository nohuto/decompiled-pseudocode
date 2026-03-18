/*
 * XREFs of PpReleaseBootDDB @ 0x1405C6318
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x1404533F0 (SdbReleaseDatabase.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  v1 = 0;
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase(PpDDBHandle);
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
  }
  else
  {
    v1 = -1073741823;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
