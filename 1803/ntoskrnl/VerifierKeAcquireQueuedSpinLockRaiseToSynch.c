/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140825F80
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140242290 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

unsigned __int8 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 result; // al
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(a1) = 12;
  v2 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  result = KeAcquireQueuedSpinLockRaiseToSynch(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
