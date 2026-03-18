/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C021350C (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02137B4 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0044714 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0044968 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00BC414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C0160E40 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C0214520 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rcx
  DMMVIDPN *v18; // rsi
  ADAPTER_DISPLAY *v19; // rax
  __int64 v20; // rax
  DXGADAPTER *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  unsigned __int8 v26; // r9
  __int64 v27; // r8
  ADAPTER_DISPLAY *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  DMMVIDPN *v37; // rax
  DMMVIDPN *v38; // rax
  __int64 v39; // rcx
  struct DMMVIDPN **v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v45; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v46; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v47[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v48; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v46 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v46);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v48, 0, sizeof(v48));
  v48.NumberOfVidPnTargets = 0;
  v48.pVidPnTargetPrioritizationVector = 0LL;
  v18 = v46;
  if ( v46 == (DMMVIDPN *)-88LL )
    v48.hRecommendedFunctionalVidPn = 0LL;
  else
    v48.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v46;
  v19 = this[1];
  v48.RequestReason = a2;
  v48.pPrivateDriverData = a3;
  v48.PrivateDriverDataSize = a4;
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v20);
    v19 = this[1];
  }
  v21 = (DXGADAPTER *)*((_QWORD *)v19 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v21) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v23);
  }
  LOBYTE(v22) = *((_BYTE *)v18 + 172);
  if ( ((unsigned __int16)((2 << v22) - 1) & *((_WORD *)v18 + 87)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v24);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v47,
    ((unsigned __int64)v18 + 152) & -(__int64)((DMMVIDPN *)((char *)v18 + 96) != 0LL),
    1u,
    v26,
    v45,
    NumTargetsWithMonitorObjects);
  v28 = this[1];
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v29);
    v28 = this[1];
  }
  v30 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v28, &v48, v27);
  v32 = v30;
  v16 = -1071774941;
  if ( v30 == -1071774941 )
  {
    v33 = WdLogNewEntry5_WdDmmEvent(v31);
    *(_QWORD *)(v33 + 24) = v21;
    WdLogEvent5_WdDmmEvent(v33);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v47);
    goto LABEL_32;
  }
  v16 = 0;
  if ( v30 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v34 + 24) = v21;
    *(_QWORD *)(v34 + 32) = v32;
    WdLogEvent5_WdError(v34);
    v16 = v32;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v47);
  if ( !DMMVIDPN::IsFunctional(v18) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35);
    WdLogEvent5_WdAssertion(v36);
  }
  a5 = 0LL;
  v37 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v37 )
    v38 = DMMVIDPN::DMMVIDPN(v37, (const struct DMMVIDPNSOURCESET **)v18);
  else
    v38 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v38);
  v40 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v18 + 96), a2);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v40);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v46 = 0LL;
      *v5 = v18;
      goto LABEL_32;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42);
    v43[3] = v40;
    v43[4] = v18;
    v43[5] = *((int *)v40 + 20);
    WdLogEvent5_WdDmmEvent(v43);
    v16 = *((_DWORD *)v40 + 20);
  }
  else
  {
    v41 = WdLogNewEntry5_WdLowResource(v39);
    *(_QWORD *)(v41 + 24) = v18;
    WdLogEvent5_WdLowResource(v41);
    v16 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v46, 0LL);
  return v16;
}
