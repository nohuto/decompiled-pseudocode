/*
 * XREFs of KeEnterCriticalRegion @ 0x14009EEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
