/*
 * XREFs of KeLeaveGuardedRegion @ 0x14011C750
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  __int16 v1; // cx

  CurrentThread = KeGetCurrentThread();
  v1 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v1;
  if ( !v1 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
