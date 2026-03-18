/*
 * XREFs of MmQueryApiSetSchema @ 0x140036358
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401747D0 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404569F0 (PsQueryCurrentApiSetSchema.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_14036BFC0;
  result = &qword_14036BFC8;
  *a2 = &qword_14036BFC8;
  return result;
}
