/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x140770A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1407784A0 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseQueuedSpinLock(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( KernelVerifier == 1 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x36uLL, CurrentIrql, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  LOBYTE(v6) = v2;
  ((void (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseQueuedSpinLock)(v3, v6);
  return ViKeIrqlLogCommon(v5, 1LL);
}
