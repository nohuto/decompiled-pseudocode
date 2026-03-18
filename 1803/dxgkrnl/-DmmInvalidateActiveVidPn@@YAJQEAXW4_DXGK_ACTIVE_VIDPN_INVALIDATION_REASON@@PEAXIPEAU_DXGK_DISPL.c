/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02137B4
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C0194B00 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0207D74 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02119D4 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  unsigned int v5; // edi
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v7; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  VIDPN_MGR *v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  struct DMMVIDPN *v27; // rbx
  char v28; // r14
  char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  DMMVIDPNTOPOLOGY *v34; // r15
  __int64 v35; // rax
  struct DMMVIDPN *v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // r13d
  int v41; // r12d
  __int64 v42; // rax
  __int64 v43; // rax
  struct DMMVIDPN *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v51; // [rsp+38h] [rbp-18h] BYREF
  __int64 v52; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v53; // [rsp+80h] [rbp+30h] BYREF

  v5 = a4;
  v7 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v12);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 307);
  if ( !v16 )
  {
    v12 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v12 + 24) = this;
    goto LABEL_3;
  }
  v17 = *(VIDPN_MGR **)(v16 + 88);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v52, (__int64)v17);
    v53 = 0LL;
    v51 = 0LL;
    v19 = VIDPN_MGR::RecommendFunctionalVidPn(v17, v7, a3, v5, &v51);
    v24 = v19;
    if ( v19 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v53, (__int64)v51);
      v27 = v53;
      v28 = 0;
      if ( v7 == DXGK_RFVR_HOTKEY )
      {
        v29 = (char *)v53 + 96;
        v28 = 1;
        if ( v53 == (struct DMMVIDPN *)-96LL )
        {
          v30 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v30);
        }
        v31 = *((_QWORD *)v17 + 11);
        v50 = 0LL;
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 32));
          v32 = *((_QWORD *)v17 + 11);
          v27 = v53;
        }
        else
        {
          v32 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v50, v32);
        if ( v50 )
        {
          v34 = (DMMVIDPNTOPOLOGY *)(v50 + 96);
          if ( v50 == -96 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v35);
          }
          if ( *((_QWORD *)v34 + 5) == *((_QWORD *)v29 + 5) )
          {
            v36 = (struct DMMVIDPN *)(v29 + 24);
            v37 = 0LL;
            v38 = *(_QWORD *)v36;
            v39 = *(_QWORD *)v36 == (_QWORD)v36;
            v51 = v36;
            if ( !v39 )
              v37 = (_QWORD *)(v38 - 8);
            if ( !v37 )
              goto LABEL_34;
            do
            {
              v40 = *(_DWORD *)(v37[11] + 24LL);
              v41 = *(_DWORD *)(v37[12] + 24LL);
              if ( v40 == -1 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v38);
                WdLogEvent5_WdAssertion(v42);
              }
              if ( v41 == -1 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v38);
                WdLogEvent5_WdAssertion(v43);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v34, v40, v41) )
                break;
              v44 = (struct DMMVIDPN *)v37[1];
              v37 = (_QWORD *)((char *)v44 - 8);
              if ( v44 == v51 )
                v37 = 0LL;
            }
            while ( v37 );
            v27 = v53;
            if ( !v37 )
LABEL_34:
              v28 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v50, 0LL);
        if ( v28 )
        {
          v46 = WdLogNewEntry5_WdDmmEvent(v45);
          *(_QWORD *)(v46 + 24) = v27;
          WdLogEvent5_WdDmmEvent(v46);
        }
      }
      v47 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v17, v27, v28, a5);
      v24 = v47;
      if ( v47 >= 0 )
      {
        LODWORD(v24) = 0;
      }
      else
      {
        v49 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v49 + 24) = v27;
        *(_QWORD *)(v49 + 32) = v24;
        WdLogEvent5_WdError(v49);
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = 0LL;
      *(_QWORD *)(v25 + 32) = v24;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v53, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
    return (unsigned int)v24;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
