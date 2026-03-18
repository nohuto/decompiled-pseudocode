/*
 * XREFs of KeEnterCriticalRegion @ 0x140006340
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
