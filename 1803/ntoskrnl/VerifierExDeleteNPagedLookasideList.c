/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x14082BCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x14082C25C (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteNPagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeleteNPagedLookasideList)(a1);
}
