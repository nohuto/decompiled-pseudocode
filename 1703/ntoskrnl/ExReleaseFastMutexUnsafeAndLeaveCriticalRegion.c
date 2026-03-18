/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140011910
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 result; // rax

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(BugCheckParameter2, v2);
  KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  result = (unsigned int)++CurrentThread->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result && !CurrentThread->SpecialApcDisable )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
