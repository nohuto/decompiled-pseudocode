/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x140444820
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDispatchKernelSubscription @ 0x140444870 (ExpWnfDispatchKernelSubscription.c)
 */

__int64 ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
