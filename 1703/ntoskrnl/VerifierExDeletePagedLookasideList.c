/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x14077C960
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(__int64 a1)
{
  ViLookasideDelete();
  return ((__int64 (__fastcall *)(__int64))pXdvExDeletePagedLookasideList)(a1);
}
