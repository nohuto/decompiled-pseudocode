/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407AC050
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiGetCpuVendor @ 0x14047A4BC (KiGetCpuVendor.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407AB52C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromRegistry(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int CpuVendor; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *PoolWithTag; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int MatchingPmcRegistryGroup; // edi

  v4 = MaxCount;
  CpuVendor = KiGetCpuVendor();
  v7 = -1LL;
  v8 = CpuVendor;
  do
    ++v7;
  while ( aRegistryMachin_16[v7] );
  v9 = 2 * v7 + 514;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v11, v8, a3, v9, PoolWithTag);
  if ( MatchingPmcRegistryGroup >= 0 )
    MatchingPmcRegistryGroup = EtwpRemoveMicroarchitecturalPmcFromPmcGroup(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
