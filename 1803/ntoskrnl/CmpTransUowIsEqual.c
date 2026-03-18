/*
 * XREFs of CmpTransUowIsEqual @ 0x1406F74E4
 * Callers:
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x1405E167C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
