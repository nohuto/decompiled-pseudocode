/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1407B9A70
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140204B50 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14036A0C8;
  v3 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(a1) = 12;
  v4 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = KeTryToAcquireQueuedSpinLockRaiseToSynch(v3, a2);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
