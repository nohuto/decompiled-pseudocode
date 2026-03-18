/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140777C00
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401FE850 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14034F668;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v4) = 12;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  result = KeTryToAcquireQueuedSpinLockRaiseToSynch(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
