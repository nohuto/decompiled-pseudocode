/*
 * XREFs of CmpValueToData @ 0x1405B6E58
 * Callers:
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x14080D9BC (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x14080E168 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x14080E330 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x14080ED64 (CmpIsLoadType.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
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
