/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x1407B2510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14036A0C8;
  v1 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLock)(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
