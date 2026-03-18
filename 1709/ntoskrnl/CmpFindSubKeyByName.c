/*
 * XREFs of CmpFindSubKeyByName @ 0x1405BC614
 * Callers:
 *     CmpLoadServicesNode @ 0x140835AF8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140835B98 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140835C50 (CmpSortDriverList.c)
 *     CmGetSystemControlValues @ 0x140836B78 (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x140837000 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140869234 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140869324 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1408693E0 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
