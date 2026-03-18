/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1400ACAD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

$005F0E83B22994B61E86C72E0CE43C71 *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(
        ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  $005F0E83B22994B61E86C72E0CE43C71 *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(BugCheckParameter2, v2);
  result = ($005F0E83B22994B61E86C72E0CE43C71 *)KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($005F0E83B22994B61E86C72E0CE43C71 *)result->ApcState.ApcListHead[0].Flink != result
      && !CurrentThread->SpecialApcDisable )
    {
      return ($005F0E83B22994B61E86C72E0CE43C71 *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
