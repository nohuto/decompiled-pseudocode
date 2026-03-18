/*
 * XREFs of CmpFindValueByName @ 0x1405BCD40
 * Callers:
 *     CmpSortDriverList @ 0x140835C50 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x140836400 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1408365C8 (CmpAddDriverToList.c)
 *     CmGetSystemControlValues @ 0x140836B78 (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x140837000 (CmpIsLoadType.c)
 * Callees:
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
