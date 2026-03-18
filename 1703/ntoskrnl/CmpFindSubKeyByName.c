/*
 * XREFs of CmpFindSubKeyByName @ 0x1405B67BC
 * Callers:
 *     CmpLoadServicesNode @ 0x14080D864 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x14080D904 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x14080D9BC (CmpSortDriverList.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x14080ED64 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140832340 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140832430 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1408324EC (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
