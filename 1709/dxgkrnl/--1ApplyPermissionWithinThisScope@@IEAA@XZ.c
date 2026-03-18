/*
 * XREFs of ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC
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
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00069A4 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C001D8C8 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C017063C (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 */

void __fastcall ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(ApplyPermissionWithinThisScope *this)
{
  ProtectableFromChange *v2; // rsi
  unsigned __int8 v3; // di
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  ProtectableFromChange *v9; // rsi
  unsigned __int8 v10; // di
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_BYTE *)this + 10) )
  {
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
      v9 = *(ProtectableFromChange **)this;
      v10 = *((_BYTE *)this + 8);
      if ( v10 >= *(_BYTE *)(*(_QWORD *)this + 20LL) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v11);
      }
      *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)v9 + 24, v10) = *((_BYTE *)this + 11);
    }
    else
    {
      v2 = *(ProtectableFromChange **)this;
      v3 = *((_BYTE *)this + 8);
      if ( v3 >= *(_BYTE *)(*(_QWORD *)this + 20LL) )
      {
        v12 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v12);
      }
      v4 = *((unsigned __int16 *)v2 + 11);
      if ( _bittest(&v4, v3) )
        ProtectableFromChange::DisallowModifyingAction(*(ProtectableFromChange **)this, *((_BYTE *)this + 8));
    }
  }
}
