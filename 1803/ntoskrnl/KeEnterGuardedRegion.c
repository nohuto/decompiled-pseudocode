/*
 * XREFs of KeEnterGuardedRegion @ 0x1400A4130
 * Callers:
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}
