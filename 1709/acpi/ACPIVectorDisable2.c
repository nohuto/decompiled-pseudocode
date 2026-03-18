/*
 * XREFs of ACPIVectorDisable2 @ 0x1C0059A70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisable @ 0x1C00599C0 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2, __int64 a3)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 720), a2, a3);
}
