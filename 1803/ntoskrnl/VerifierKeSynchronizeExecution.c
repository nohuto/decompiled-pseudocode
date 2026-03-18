/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140826CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = a1;
  ++dword_1403AD16C;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 152LL);
  LOBYTE(a1) = *(_BYTE *)(v5 + 93);
  ViKeRaiseIrqlSanityChecks(a1, 0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(v5, a2, a3);
}
