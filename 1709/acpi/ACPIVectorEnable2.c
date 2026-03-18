/*
 * XREFs of ACPIVectorEnable2 @ 0x1C0059C70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorEnable @ 0x1C0059BB0 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIVectorEnable2(__int64 a1, unsigned int *a2, __int64 a3)
{
  return ACPIVectorEnable(*(_QWORD *)(a1 + 720), a2, a3);
}
