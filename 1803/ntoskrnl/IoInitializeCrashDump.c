/*
 * XREFs of IoInitializeCrashDump @ 0x14063CE44
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408989C8 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14017E33C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x140186178 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x14063CED8 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v3; // di

  if ( ForceDumpDisabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
