/*
 * XREFs of LdrpCompareModuleMappingInfo @ 0x180029E04
 * Callers:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180029CD4 (LdrpFindLoadedDllByMappingLockHeld.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCompareModuleMappingInfo(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v5; // ecx

  v2 = *(_DWORD *)(a2 - 96);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > v2 )
    return 1LL;
  v5 = *(_DWORD *)(a2 - 160);
  if ( a1[1] >= v5 )
    return a1[1] > v5;
  else
    return 0xFFFFFFFFLL;
}
