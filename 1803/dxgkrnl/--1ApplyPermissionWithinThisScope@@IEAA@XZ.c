/*
 * XREFs of ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF75C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00B9ABC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9DFC (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00BC600 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0216B04 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C021C200 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C021E0B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00041E0 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0024048 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C00BB770 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00BB818 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(ApplyPermissionWithinThisScope *this)
{
  unsigned __int8 v2; // di
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_BYTE *)this + 10) )
  {
    v2 = *((_BYTE *)this + 8);
    v3 = *(_QWORD *)this;
    if ( *((_BYTE *)this + 9) )
    {
      if ( ProtectableFromChange::IsModifyingActionAllowed(*(ProtectableFromChange **)this, *((_BYTE *)this + 8)) )
      {
        v7 = WdLogNewEntry5_WdAssertion(v5);
        WdLogEvent5_WdAssertion(v7);
      }
      ProtectableFromChange::AllowModifyingAction(
        *(ProtectableFromChange **)this,
        *((_BYTE *)this + 8),
        *((_QWORD *)this + 2),
        v6);
      v9 = *(_QWORD *)this;
      v10 = *((_BYTE *)this + 8);
      if ( v10 >= *(_BYTE *)(*(_QWORD *)this + 20LL) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v11);
      }
      *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](v9 + 24, v10) = *((_BYTE *)this + 11);
    }
    else
    {
      if ( v2 >= *(_BYTE *)(v3 + 20) )
      {
        v12 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v12);
      }
      v4 = *(unsigned __int16 *)(v3 + 22);
      if ( _bittest(&v4, v2) )
        ProtectableFromChange::DisallowModifyingAction(*(ProtectableFromChange **)this, *((_BYTE *)this + 8));
    }
  }
}
