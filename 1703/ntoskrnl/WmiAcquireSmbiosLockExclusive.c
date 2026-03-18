/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x14057A2F4
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     <none>
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
