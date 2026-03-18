/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x14077C930
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteNPagedLookasideList(__int64 a1)
{
  ViLookasideDelete();
  return ((__int64 (__fastcall *)(__int64))pXdvExDeleteNPagedLookasideList)(a1);
}
