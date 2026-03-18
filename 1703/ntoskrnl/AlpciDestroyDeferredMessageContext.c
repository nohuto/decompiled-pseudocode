/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x14042C1F0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *result; // rax
  __int16 v6; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  result = KeGetCurrentThread();
  v6 = result->KernelApcDisable + 1;
  result->KernelApcDisable = v6;
  if ( !v6 )
  {
    v7 = &result->152;
    if ( ($69CD3F157F9F39B6F7113F2231989901 *)v7->ApcState.ApcListHead[0].Flink != v7 && !result->SpecialApcDisable )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery((__int64)v7);
  }
  return result;
}
