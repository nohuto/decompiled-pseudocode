/*
 * XREFs of CmpValueToData @ 0x1406351F8
 * Callers:
 *     CmpFindControlSet @ 0x140634C90 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x1408B8454 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x1408B8C24 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1408B8DEC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1408B9900 (CmpIsLoadType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int *a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
