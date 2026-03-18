/*
 * XREFs of VerifierKfRaiseIrql @ 0x140777E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKfRaiseIrql(char a1)
{
  __int64 (__fastcall *v1)(__int64); // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (__fastcall *)(__int64))pXdvKfRaiseIrql;
  ++dword_14034F664;
  v3 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(v3) = a1;
  v4 = ViKeRaiseIrqlSanityChecks(v3, 0LL);
  LOBYTE(v5) = a1;
  result = v1(v5);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
