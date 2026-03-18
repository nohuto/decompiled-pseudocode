/*
 * XREFs of ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48
 * Callers:
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C00A6F38 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00DE500 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DE754 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01D2B38 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01D2C58 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C01D6588 (DmmIsVidPnTargetConnectedToSource.c)
 *     ?GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C01D87F0 (-GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01DA060 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C01DB760 (-GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // r8
  DMMVIDPNTOPOLOGY *v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rcx
  __int64 v10; // rax

  v4 = a2;
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v5 == (_QWORD *)((char *)this + 24) || --v5 == 0LL )
  {
LABEL_5:
    v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
    if ( v8 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) || v8 == (DMMVIDPNTOPOLOGY *)8 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, 0LL, v5, a4) + 24) = this;
    }
    else
    {
      v10 = WdLogNewEntry5_WdTrace(v8, 0LL, v5, a4);
      *(_QWORD *)(v10 + 24) = v4;
      *(_QWORD *)(v10 + 32) = this;
    }
    return 0xFFFFFFFFLL;
  }
  else
  {
    while ( *(_DWORD *)(v5[12] + 24LL) != a2 )
    {
      v9 = (DMMVIDPNTOPOLOGY *)v5[1];
      v5 = (_QWORD *)((char *)v9 - 8);
      if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v5 = 0LL;
      if ( !v5 )
        goto LABEL_5;
    }
    return *(unsigned int *)(v5[11] + 24LL);
  }
}
