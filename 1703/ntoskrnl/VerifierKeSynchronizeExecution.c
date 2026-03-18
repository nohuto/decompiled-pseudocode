/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140777B10
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14034F66C;
  v5 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 136LL);
  LOBYTE(v5) = *(_BYTE *)(a1 + 93);
  ViKeRaiseIrqlSanityChecks(v5, 0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(a1, a2, a3);
}
