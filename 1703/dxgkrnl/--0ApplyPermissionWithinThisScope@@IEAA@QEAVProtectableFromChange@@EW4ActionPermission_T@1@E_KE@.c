/*
 * XREFs of ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01D8F40 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // bp
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 10) = 1;
  v6 = a3;
  *(_BYTE *)(a1 + 8) = a3;
  v7 = a2;
  v8 = a1;
  if ( (unsigned __int8)a3 >= *(_BYTE *)(a2 + 20) )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  v9 = *(unsigned __int16 *)(v7 + 22);
  *(_BYTE *)(v8 + 9) = _bittest(&v9, v6);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v7 + 40) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  LOBYTE(a1) = *(_BYTE *)(v6 + *(_QWORD *)(v7 + 48));
  *(_BYTE *)(v8 + 11) = a1;
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v7 + 80) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL * v6);
  *(_QWORD *)(v8 + 16) = v10;
  if ( !*(_BYTE *)(v8 + 9) )
  {
    if ( (*(_BYTE *)(v8 + 11) & 0xF) != 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *(_QWORD *)(v8 + 16) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( !*(_BYTE *)(v8 + 9) )
    {
      if ( v6 >= *(_BYTE *)(v7 + 20) && v6 != 0xFF )
      {
        v21 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
        WdLogEvent5_WdAssertion(v21);
      }
      LOBYTE(a2) = v6;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, char))(*(_QWORD *)v7 + 16LL))(v7, a2, 1LL, a6, -1);
      if ( v6 == 0xFF )
      {
        if ( a6 != 255 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v22);
        }
        *(_WORD *)(v7 + 22) |= (2 << *(_BYTE *)(v7 + 20)) - 1;
        memset(*(void **)(v7 + 48), 0, *(_QWORD *)(v7 + 40));
      }
      else
      {
        *(_WORD *)(v7 + 22) |= 1 << v6;
        if ( (unsigned __int64)v6 >= *(_QWORD *)(v7 + 40) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v23);
        }
        *(_BYTE *)(*(_QWORD *)(v7 + 48) + v6) &= 0xF0u;
        if ( (unsigned __int64)v6 >= *(_QWORD *)(v7 + 80) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v24);
        }
        *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL * v6) = a6;
      }
    }
  }
  return v8;
}
