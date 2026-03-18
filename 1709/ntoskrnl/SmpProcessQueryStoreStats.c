/*
 * XREFs of SmpProcessQueryStoreStats @ 0x140271A00
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessQueryStoreStats @ 0x140738888 (SmProcessQueryStoreStats.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14000948C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(PVOID a1)
{
  _QWORD *v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == Object )
  {
    v3 = dword_14041B1A0;
  }
  else
  {
    v5 = a1;
    v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_14041B178, &v5, 0, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *((unsigned __int16 *)v1 + 8);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3 & 0x3FF);
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v4);
}
