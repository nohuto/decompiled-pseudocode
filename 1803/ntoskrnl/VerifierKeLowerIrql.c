/*
 * XREFs of VerifierKeLowerIrql @ 0x1408264A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1408276E8 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeLowerIrql(char a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a1;
  v3 = ViKeLowerIrqlSanityChecks(KeGetCurrentIrql(), a2);
  LOBYTE(v4) = a1;
  ((void (__fastcall *)(__int64))pXdvKeLowerIrql)(v4);
  return ViKeIrqlLogCommon(v3, 1LL);
}
