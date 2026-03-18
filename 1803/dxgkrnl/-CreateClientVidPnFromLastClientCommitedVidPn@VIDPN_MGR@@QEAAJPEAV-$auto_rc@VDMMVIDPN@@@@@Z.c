/*
 * XREFs of ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4
 * Callers:
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C009EAD0 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00ADA30 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00ADE30 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF75C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00C6470 (-CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN_.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DB2D0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00DCCC0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C0212F4C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C021E0B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0227C18 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA08C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(const struct DMMVIDPN **a1, __int64 *a2)
{
  __int64 v4; // r9
  const struct DMMVIDPN *v5; // rax
  const struct DMMVIDPN *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  const struct DMMVIDPN *v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v5 = a1[11];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 8);
    v6 = a1[11];
  }
  else
  {
    v6 = 0LL;
  }
  v16 = 0LL;
  v17 = v6;
  if ( !v6 )
  {
    v13 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)a1, &v16);
    v9 = v13;
    if ( v13 >= 0 )
      goto LABEL_7;
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v9;
LABEL_13:
    WdLogEvent5_WdError(v15);
    goto LABEL_8;
  }
  v7 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)a1, v6, &v16, v4);
  v9 = v7;
  if ( v7 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = v6;
    *(_QWORD *)(v15 + 32) = v9;
    goto LABEL_13;
  }
LABEL_7:
  v10 = v16;
  v16 = 0LL;
  auto_rc<DMMVIDPN>::reset(a2, v10);
  LODWORD(v9) = 0;
LABEL_8:
  auto_rc<DMMVIDPN>::reset(&v16, 0LL);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v17, 0LL);
  return (unsigned int)v9;
}
