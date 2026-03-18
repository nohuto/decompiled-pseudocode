/*
 * XREFs of PpReleaseBootDDB @ 0x1405D9614
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401518F0 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x140543FBC (SdbReleaseDatabase.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  v2 = 0;
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase((__int64)PpDDBHandle, v1);
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
  }
  else
  {
    v2 = -1073741823;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
