/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x14081F6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLock)(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
