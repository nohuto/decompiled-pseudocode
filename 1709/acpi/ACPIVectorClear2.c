/*
 * XREFs of ACPIVectorClear2 @ 0x1C00597E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorClear @ 0x1C00597B0 (ACPIVectorClear.c)
 */

__int64 __fastcall ACPIVectorClear2(__int64 a1, unsigned int *a2, __int64 a3)
{
  return ACPIVectorClear(*(_QWORD *)(a1 + 720), a2, a3);
}
