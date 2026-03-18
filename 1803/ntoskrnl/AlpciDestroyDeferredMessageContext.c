/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x140554700
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

struct _KTHREAD *__fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *result; // rax
  bool v6; // zf

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
  v6 = result->KernelApcDisable++ == -1;
  if ( v6
    && ($005F0E83B22994B61E86C72E0CE43C71 *)result->ApcState.ApcListHead[0].Flink != &result->152
    && !result->SpecialApcDisable )
  {
    return (struct _KTHREAD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
