/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x1407B9980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14036A0CC;
  v5 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 136LL);
  LOBYTE(a1) = *(_BYTE *)(v5 + 93);
  ViKeRaiseIrqlSanityChecks(a1, 0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(v5, a2, a3);
}
