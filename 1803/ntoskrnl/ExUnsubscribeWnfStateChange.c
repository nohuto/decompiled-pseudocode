/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140575B10
 * Callers:
 *     RtlpCtContextFree @ 0x14078AC0C (RtlpCtContextFree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
