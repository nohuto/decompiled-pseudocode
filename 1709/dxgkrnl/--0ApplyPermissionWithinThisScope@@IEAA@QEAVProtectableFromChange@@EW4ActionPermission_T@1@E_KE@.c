/*
 * XREFs of ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00A4C10 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00A823C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A865C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01F2100 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 10) = 1;
  *(_BYTE *)(a1 + 8) = a3;
  v7 = a2;
  v8 = a1;
  if ( a3 >= *(_BYTE *)(a2 + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *(unsigned __int16 *)(v7 + 22);
  *(_BYTE *)(v8 + 9) = _bittest(&v9, a3);
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v7 + 40) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  LOBYTE(a1) = *(_BYTE *)(a3 + *(_QWORD *)(v7 + 48));
  *(_BYTE *)(v8 + 11) = a1;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v7 + 80) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL * a3);
  *(_QWORD *)(v8 + 16) = v10;
  if ( !*(_BYTE *)(v8 + 9) )
  {
    if ( (*(_BYTE *)(v8 + 11) & 0xF) != 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *(_QWORD *)(v8 + 16) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !*(_BYTE *)(v8 + 9) )
    {
      if ( a3 >= *(_BYTE *)(v7 + 20) && a3 != 0xFF )
      {
        v18 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v18);
      }
      LOBYTE(a2) = a3;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, char))(*(_QWORD *)v7 + 16LL))(v7, a2, 1LL, a6, -1);
      if ( a3 == 0xFF )
      {
        if ( a6 != 255 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v19);
        }
        *(_WORD *)(v7 + 22) |= (2 << *(_BYTE *)(v7 + 20)) - 1;
        memset(*(void **)(v7 + 48), 0, *(_QWORD *)(v7 + 40));
      }
      else
      {
        *(_WORD *)(v7 + 22) |= 1 << a3;
        if ( (unsigned __int64)a3 >= *(_QWORD *)(v7 + 40) )
        {
          v20 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v20);
        }
        *(_BYTE *)(*(_QWORD *)(v7 + 48) + a3) &= 0xF0u;
        if ( (unsigned __int64)a3 >= *(_QWORD *)(v7 + 80) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL * a3) = a6;
      }
    }
  }
  return v8;
}
