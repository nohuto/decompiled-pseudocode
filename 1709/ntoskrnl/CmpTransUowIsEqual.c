/*
 * XREFs of CmpTransUowIsEqual @ 0x1406942E8
 * Callers:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x1405D7064 (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
