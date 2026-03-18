/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638
 * Callers:
 *     DmmInitializeAdapter @ 0x1C01223D4 (DmmInitializeAdapter.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01D5D98 (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0044830 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0044904 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00DF1F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C01778B4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01D26A8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        void *const a3,
        __int64 a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  UINT v6; // ebx
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r13d
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DMMVIDPN *v21; // rsi
  __int64 v22; // rax
  DXGADAPTER *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  DMMVIDPN *v54; // rax
  DMMVIDPN *v55; // rax
  __int64 v56; // rcx
  struct DMMVIDPN **v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v65; // [rsp+28h] [rbp-41h]
  struct DMMVIDPN *v66; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v67[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v68; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v69; // [rsp+D0h] [rbp+67h]

  v69 = (int)a2;
  v5 = a5;
  v6 = a4;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v66 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v66, (__int64)a3, a4);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v68.pVidPnTargetPrioritizationVector, 0, 0x28uLL);
  v68.NumberOfVidPnTargets = 0;
  v68.pVidPnTargetPrioritizationVector = 0LL;
  v21 = v66;
  if ( v66 == (struct DMMVIDPN *)-88LL )
    v68.hRecommendedFunctionalVidPn = 0LL;
  else
    v68.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v66;
  v68.RequestReason = v8;
  v68.pPrivateDriverData = a3;
  v68.PrivateDriverDataSize = v6;
  if ( !this[1] )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v23) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v28);
  }
  LOBYTE(v25) = *((_BYTE *)v21 + 172);
  if ( ((unsigned __int16)((2 << v25) - 1) & *((_WORD *)v21 + 87)) != 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v29);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this, v24, v26, v27);
  LOBYTE(v31) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v67,
    ((unsigned __int64)v21 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v21 + 96) != 0LL),
    v31,
    v32,
    v65,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    WdLogEvent5_WdAssertion(v37);
  }
  v38 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v68, v35);
  v43 = v38;
  v16 = -1071774941;
  if ( v38 == -1071774941 )
  {
    v44 = WdLogNewEntry5_WdDmmEvent(v40, v39, v41, v42);
    *(_QWORD *)(v44 + 24) = v23;
    WdLogEvent5_WdDmmEvent(v44);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v67,
      v45,
      v46,
      v47);
    goto LABEL_32;
  }
  v16 = 0;
  if ( v38 < 0 )
  {
    v48 = WdLogNewEntry5_WdError(v40, v39);
    *(_QWORD *)(v48 + 24) = v23;
    *(_QWORD *)(v48 + 32) = v43;
    WdLogEvent5_WdError(v48);
    v16 = v43;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v67, v39, v41, v42);
  if ( !DMMVIDPN::IsFunctional(v21) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
    WdLogEvent5_WdAssertion(v53);
  }
  a5 = 0LL;
  v54 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v54 )
    v55 = DMMVIDPN::DMMVIDPN(v54, v21);
  else
    v55 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v55);
  v57 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((struct DMMVIDPN *)((char *)v21 + 96), v69);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v57);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v66 = 0LL;
      *v5 = v21;
      goto LABEL_32;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v60, v59, v61, v62);
    v63[3] = v57;
    v63[4] = v21;
    v63[5] = *((int *)v57 + 20);
    WdLogEvent5_WdDmmEvent(v63);
    v16 = *((_DWORD *)v57 + 20);
  }
  else
  {
    v58 = WdLogNewEntry5_WdLowResource(v56);
    *(_QWORD *)(v58 + 24) = v21;
    WdLogEvent5_WdLowResource(v58);
    v16 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v66, 0LL);
  return v16;
}
