/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x1407773B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 VerifierKeRaiseIrqlToDpcLevel()
{
  __int64 (*v0)(void); // rdi
  unsigned int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_14034F664;
  v1 = MmVerifierData;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    ViTargetIncrementCounter(retaddr, 128LL);
    v1 = MmVerifierData;
  }
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, (v1 >> 17) & 1);
  result = v0();
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
