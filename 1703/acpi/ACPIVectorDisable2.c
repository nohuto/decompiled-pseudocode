/*
 * XREFs of ACPIVectorDisable2 @ 0x1C0058F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 720), a2);
}
