/*
 * XREFs of IoInitializeCrashDump @ 0x1405BA5F8
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     IopInitDumpCapsuleSupport @ 0x140159548 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14015A054 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x1405BA68C (IopInitializeCrashDump.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v3;
}
