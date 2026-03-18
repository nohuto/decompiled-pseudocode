/*
 * XREFs of ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00F3E70 (-AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C (DmmGetClientVidPnTargetModeInfo.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNTOPOLOGY::IsTargetInTopology(DMMVIDPNTOPOLOGY *this, int a2)
{
  char v2; // r8
  DMMVIDPNTOPOLOGY *v3; // r9
  char *v5; // r9
  DMMVIDPNTOPOLOGY *v7; // rcx

  v2 = 0;
  v3 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v3 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = (char *)v3 - 8;
    if ( v5 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) == a2 )
          break;
        v7 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v5 + 1);
        v5 = (char *)v7 - 8;
        if ( v7 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v5 = 0LL;
      }
      while ( v5 );
      if ( v5 )
        return 1;
    }
  }
  return v2;
}
