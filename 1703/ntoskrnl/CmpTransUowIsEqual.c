/*
 * XREFs of CmpTransUowIsEqual @ 0x140669578
 * Callers:
 *     CmpSearchForTrans @ 0x14042DB64 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
