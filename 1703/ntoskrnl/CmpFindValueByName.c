/*
 * XREFs of CmpFindValueByName @ 0x1405B6E28
 * Callers:
 *     CmpSortDriverList @ 0x14080D9BC (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x14080E168 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x14080E330 (CmpAddDriverToList.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x14080ED64 (CmpIsLoadType.c)
 * Callees:
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
