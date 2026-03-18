/*
 * XREFs of VerifierKfRaiseIrql @ 0x1407B9CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKfRaiseIrql(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rsi
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (__fastcall *)(__int64))pXdvKfRaiseIrql;
  v2 = a1;
  ++dword_14036A0C4;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(a1) = v2;
  v3 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  LOBYTE(v4) = v2;
  result = v1(v4);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
