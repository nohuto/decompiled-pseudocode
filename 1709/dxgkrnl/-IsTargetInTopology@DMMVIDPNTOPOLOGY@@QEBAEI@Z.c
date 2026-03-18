/*
 * XREFs of ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00A7D74 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00D4430 (-AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01EBEFC (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C01ED724 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNTOPOLOGY::IsTargetInTopology(DMMVIDPNTOPOLOGY *this, int a2)
{
  DMMVIDPNTOPOLOGY *v3; // rdx
  char *v5; // rdx
  DMMVIDPNTOPOLOGY *v7; // rcx

  v3 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v3 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = (char *)v3 - 8;
    while ( v5 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) == a2 )
        break;
      v7 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v5 + 1);
      v5 = (char *)v7 - 8;
      if ( v7 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v5 = 0LL;
    }
  }
  return v5 != 0LL;
}
