/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x1407BE8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeletePagedLookasideList)(a1);
}
