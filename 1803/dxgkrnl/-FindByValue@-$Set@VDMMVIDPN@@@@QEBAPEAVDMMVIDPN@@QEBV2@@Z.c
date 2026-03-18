/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000A8AC
 * Callers:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000A8EC (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00BC478 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02119D4 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPN>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 && v4 != a2 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v4 = v6 - 8;
    if ( v6 == v2 )
      v4 = 0LL;
  }
  return v4;
}
