/*
 * XREFs of ACPIVectorClear2 @ 0x1C003F840
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorClear @ 0x1C003F810 (ACPIVectorClear.c)
 */

__int64 __fastcall ACPIVectorClear2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorClear(*(_QWORD *)(a1 + 720), a2);
}
