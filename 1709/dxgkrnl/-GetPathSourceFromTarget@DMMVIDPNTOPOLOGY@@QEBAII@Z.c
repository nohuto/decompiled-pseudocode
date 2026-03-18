/*
 * XREFs of ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8
 * Callers:
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00A3448 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A4B78 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00A7D74 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00D9650 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00E24E4 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z @ 0x1C01ED848 (-DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01EE660 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01EE780 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 *     ?GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C01F19B0 (-GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01F2FB4 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C01F4060 (-GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(DMMVIDPNTOPOLOGY *this, __int64 a2)
{
  __int64 v2; // rdi
  DMMVIDPNTOPOLOGY *v3; // r9
  DMMVIDPNTOPOLOGY *v4; // rbx
  _QWORD *v5; // r8
  __int64 v7; // rax

  v2 = (unsigned int)a2;
  v3 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v4 = this;
  if ( v3 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = (_QWORD *)((char *)v3 - 8);
    a2 = 0LL;
    while ( v5 )
    {
      if ( *(_DWORD *)(v5[12] + 24LL) == (_DWORD)v2 )
        return *(unsigned int *)(v5[11] + 24LL);
      this = (DMMVIDPNTOPOLOGY *)v5[1];
      v5 = (_QWORD *)((char *)this - 8);
      if ( this == (DMMVIDPNTOPOLOGY *)((char *)v4 + 24) )
        v5 = 0LL;
    }
  }
  if ( v3 == (DMMVIDPNTOPOLOGY *)((char *)v4 + 24) || *((_QWORD *)v4 + 3) == 8LL )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v4;
  }
  else
  {
    v7 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v7 + 24) = v2;
    *(_QWORD *)(v7 + 32) = v4;
  }
  return 0xFFFFFFFFLL;
}
