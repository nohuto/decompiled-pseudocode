/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x1405EB490
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
