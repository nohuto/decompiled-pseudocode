/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x1407B9230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeRaiseIrqlToDpcLevel(__int64 a1)
{
  __int64 (*v1)(void); // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_14036A0C4;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  result = v1();
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
