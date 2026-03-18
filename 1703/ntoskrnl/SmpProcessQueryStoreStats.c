/*
 * XREFs of SmpProcessQueryStoreStats @ 0x14015256C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessQueryStoreStats @ 0x140596E7C (SmProcessQueryStoreStats.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140034B64 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(PVOID a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == qword_1403FA178 )
  {
    v3 = dword_1403FA1D0;
  }
  else
  {
    v5 = a1;
    v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8, &v5, 0, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *(unsigned __int16 *)(v1 + 16);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3 & 0x3FF);
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v4);
}
