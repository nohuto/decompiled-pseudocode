/*
 * XREFs of CmpFindSubKeyByName @ 0x140634C70
 * Callers:
 *     CmpLoadServicesNode @ 0x1408B82FC (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x1408B839C (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x1408B8454 (CmpSortDriverList.c)
 *     CmGetSystemControlValues @ 0x1408B93FC (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1408B9900 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x1408DDA6C (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x1408DDB5C (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1408DDC18 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
