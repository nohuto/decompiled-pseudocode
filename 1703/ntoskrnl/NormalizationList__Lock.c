/*
 * XREFs of NormalizationList__Lock @ 0x140244C84
 * Callers:
 *     RtlpGetNormalization @ 0x1406EFEA8 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

void NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&NormalizationListLock, 0LL);
}
