/*
 * XREFs of MmQueryApiSetSchema @ 0x1401618C8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140193188 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405FB2D8 (PsQueryCurrentApiSetSchema.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_1403CB480;
  result = &qword_1403CB488;
  *a2 = &qword_1403CB488;
  return result;
}
