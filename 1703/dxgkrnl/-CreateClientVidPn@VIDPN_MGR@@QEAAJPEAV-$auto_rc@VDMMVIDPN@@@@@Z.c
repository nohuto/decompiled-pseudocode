/*
 * XREFs of ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7C00 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020A8 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  DMMVIDPN *v7; // rax
  DMMVIDPN *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v23);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v27 = 0LL;
  v7 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v7 )
    v8 = DMMVIDPN::DMMVIDPN(v7, a1);
  else
    v8 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v27, (__int64)v8);
  v10 = v27;
  if ( v27 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v27 + 72))(v27 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 8LL) != CurrentThread )
      {
        v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v11, v13, v14);
        WdLogEvent5_WdAssertion(v22);
      }
      v16 = v27;
      if ( Set<DMMVIDPN>::Add((__int64)a1 + 96, v27) != 1 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = 0LL;
      auto_rc<DMMVIDPN>::reset(a2, v16);
    }
    else
    {
      v25 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = v10;
      *(_QWORD *)(v25 + 32) = *(int *)(v10 + 80);
      WdLogEvent5_WdDmmEvent(v25);
      v4 = *(_DWORD *)(v10 + 80);
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource(v9);
    WdLogEvent5_WdLowResource(v24);
    v4 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v27, 0LL);
  return v4;
}
