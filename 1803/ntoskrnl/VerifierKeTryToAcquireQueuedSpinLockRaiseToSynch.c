/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140826DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140242330 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1;
  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(a1) = 12;
  v4 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = KeTryToAcquireQueuedSpinLockRaiseToSynch(v3, a2, v5);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
