/*
 * XREFs of KeEnterGuardedRegion @ 0x140006F80
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
