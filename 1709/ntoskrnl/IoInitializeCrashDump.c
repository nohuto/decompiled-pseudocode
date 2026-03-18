/*
 * XREFs of IoInitializeCrashDump @ 0x1405D46BC
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x14084DBF4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14014F7C0 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14015BE40 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x1405D4750 (IopInitializeCrashDump.c)
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
