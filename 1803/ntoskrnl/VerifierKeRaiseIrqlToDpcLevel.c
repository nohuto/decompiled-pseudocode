/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x140826510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeRaiseIrqlToDpcLevel(__int64 a1)
{
  __int64 (*v1)(void); // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_1403AD164;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 144LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  result = v1();
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
