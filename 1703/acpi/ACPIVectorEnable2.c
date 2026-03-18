/*
 * XREFs of ACPIVectorEnable2 @ 0x1C0059080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIVectorEnable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorEnable(*(_QWORD *)(a1 + 720), a2);
}
