/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140437F90
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 */

__int64 __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
