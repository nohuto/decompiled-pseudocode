/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x14077C900
 * Callers:
 *     <none>
 * Callees:
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteLookasideListEx(__int64 a1)
{
  ViLookasideDelete();
  return ((__int64 (__fastcall *)(__int64))pXdvExDeleteLookasideListEx)(a1);
}
