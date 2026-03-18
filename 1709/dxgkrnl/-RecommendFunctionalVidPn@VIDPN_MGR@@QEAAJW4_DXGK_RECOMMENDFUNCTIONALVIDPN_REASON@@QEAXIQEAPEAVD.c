/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0121E9C (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C01ECEB8 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0035498 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C003556C (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00A5664 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C017B1C0 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01EDB38 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rcx
  DMMVIDPN *v16; // rsi
  __int64 v17; // rax
  DXGADAPTER *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  DMMVIDPN *v34; // rax
  DMMVIDPN *v35; // rax
  __int64 v36; // rcx
  struct DMMVIDPN **v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v42; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v43; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v44[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v45; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v43 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v43);
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v45.pVidPnTargetPrioritizationVector, 0, 0x28uLL);
  v45.NumberOfVidPnTargets = 0;
  v45.pVidPnTargetPrioritizationVector = 0LL;
  v16 = v43;
  if ( v43 == (DMMVIDPN *)-88LL )
    v45.hRecommendedFunctionalVidPn = 0LL;
  else
    v45.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v43;
  v45.RequestReason = a2;
  v45.pPrivateDriverData = a3;
  v45.PrivateDriverDataSize = a4;
  if ( !this[1] )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v18) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v20);
  }
  LOBYTE(v19) = *((_BYTE *)v16 + 172);
  if ( ((unsigned __int16)((2 << v19) - 1) & *((_WORD *)v16 + 87)) != 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v21);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v44,
    ((unsigned __int64)v16 + 152) & -(__int64)((DMMVIDPN *)((char *)v16 + 96) != 0LL),
    1u,
    v23,
    v42,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    v26 = WdLogNewEntry5_WdAssertion(v24);
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v45, v25);
  v29 = v27;
  v14 = -1071774941;
  if ( v27 == -1071774941 )
  {
    v30 = WdLogNewEntry5_WdDmmEvent(v28);
    *(_QWORD *)(v30 + 24) = v18;
    WdLogEvent5_WdDmmEvent(v30);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v44);
    goto LABEL_32;
  }
  v14 = 0;
  if ( v27 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v31 + 24) = v18;
    *(_QWORD *)(v31 + 32) = v29;
    WdLogEvent5_WdError(v31);
    v14 = v29;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v44);
  if ( !DMMVIDPN::IsFunctional(v16) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    WdLogEvent5_WdAssertion(v33);
  }
  a5 = 0LL;
  v34 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v34 )
    v35 = DMMVIDPN::DMMVIDPN(v34, v16);
  else
    v35 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v35);
  v37 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v16 + 96), a2);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v37);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v43 = 0LL;
      *v5 = v16;
      goto LABEL_32;
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39);
    v40[3] = v37;
    v40[4] = v16;
    v40[5] = *((int *)v37 + 20);
    WdLogEvent5_WdDmmEvent(v40);
    v14 = *((_DWORD *)v37 + 20);
  }
  else
  {
    v38 = WdLogNewEntry5_WdLowResource(v36);
    *(_QWORD *)(v38 + 24) = v16;
    WdLogEvent5_WdLowResource(v38);
    v14 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v43, 0LL);
  return v14;
}
