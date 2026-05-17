/*
 * XREFs of LdrFindEntryForAddress @ 0x180019140
 * Callers:
 *     LdrpIsReparsePoint @ 0x180018D88 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180018EF8 (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2880 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180019188 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, _QWORD *a2)
{
  int LoadedDllByAddress; // ebx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(a1, &v7, &v6);
    if ( LoadedDllByAddress >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      LdrpDereferenceModule(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)LoadedDllByAddress;
}
