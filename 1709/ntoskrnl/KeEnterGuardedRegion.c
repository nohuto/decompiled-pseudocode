/*
 * XREFs of KeEnterGuardedRegion @ 0x1401026B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}
