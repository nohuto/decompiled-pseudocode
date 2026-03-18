/*
 * XREFs of ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AB880 (-AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0104858 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C01D605C (DmmIsSourceInVidPnTopology.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNTOPOLOGY::IsSourceInTopology(DMMVIDPNTOPOLOGY *this, int a2)
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
        if ( *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) == a2 )
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
