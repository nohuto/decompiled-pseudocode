/*
 * XREFs of MmQueryApiSetSchema @ 0x14012C5B8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401690CC (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405960C0 (PsQueryCurrentApiSetSchema.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_1403882E0;
  result = &qword_1403882E8;
  *a2 = &qword_1403882E8;
  return result;
}
