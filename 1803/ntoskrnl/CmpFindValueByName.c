/*
 * XREFs of CmpFindValueByName @ 0x1406351C8
 * Callers:
 *     CmpSortDriverList @ 0x1408B8454 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x1408B8C24 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1408B8DEC (CmpAddDriverToList.c)
 *     CmGetSystemControlValues @ 0x1408B93FC (CmGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1408B9900 (CmpIsLoadType.c)
 * Callees:
 *     CmpFindNameInList @ 0x1404A389C (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
