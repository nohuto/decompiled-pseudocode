/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLock @ 0x1407B99F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14036A0C8;
  v3 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(a1) = 2;
  v4 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = ((__int64 (__fastcall *)(__int64, __int64))pXdvKeTryToAcquireQueuedSpinLock)(v3, a2);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
