/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x140770780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14034F668;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLock)(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
