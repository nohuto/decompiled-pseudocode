/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C01ECEB8
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C01A4110 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01E696C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01EB388 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  VIDPN_MGR *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  struct DMMVIDPN *v26; // rbx
  char v27; // si
  char *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DMMVIDPNTOPOLOGY *v33; // r12
  __int64 v34; // rax
  char *v35; // rdi
  char *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r13d
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v49; // [rsp+38h] [rbp-18h] BYREF
  __int64 v50; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v51; // [rsp+80h] [rbp+30h] BYREF

  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v13);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 288);
  if ( !v17 )
  {
    v13 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v13 + 24) = this;
    goto LABEL_3;
  }
  v18 = *(VIDPN_MGR **)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50, *(_QWORD *)(v17 + 88));
    v51 = 0LL;
    v49 = 0LL;
    v20 = VIDPN_MGR::RecommendFunctionalVidPn(v18, v8, a3, a4, &v49);
    v23 = v20;
    if ( v20 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v51, (__int64)v49);
      v26 = v51;
      v27 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v27 = 1;
        v28 = (char *)v51 + 96;
        if ( v51 == (struct DMMVIDPN *)-96LL )
        {
          v29 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v29);
        }
        v30 = *((_QWORD *)v18 + 11);
        v48 = 0LL;
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 32));
          v31 = *((_QWORD *)v18 + 11);
          v26 = v51;
        }
        else
        {
          v31 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v48, v31);
        if ( v48 )
        {
          v33 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
          if ( v48 == -96 )
          {
            v34 = WdLogNewEntry5_WdAssertion(v32);
            WdLogEvent5_WdAssertion(v34);
          }
          if ( *((_QWORD *)v33 + 5) == *((_QWORD *)v28 + 5) )
          {
            v35 = (char *)*((_QWORD *)v28 + 3);
            if ( v35 == v28 + 24 )
              goto LABEL_33;
            v36 = v35 - 8;
            if ( !v36 )
              goto LABEL_33;
            do
            {
              v37 = *(unsigned int *)(*((_QWORD *)v36 + 11) + 24LL);
              v38 = *((_QWORD *)v36 + 12);
              a6 = v37;
              v39 = *(_DWORD *)(v38 + 24);
              if ( (_DWORD)v37 == -1 )
              {
                v40 = WdLogNewEntry5_WdAssertion(v37);
                WdLogEvent5_WdAssertion(v40);
              }
              if ( v39 == -1 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v37);
                WdLogEvent5_WdAssertion(v41);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v33, a6, v39) )
                break;
              v42 = (char *)*((_QWORD *)v36 + 1);
              v36 = v42 - 8;
              if ( v42 == v28 + 24 )
                v36 = 0LL;
            }
            while ( v36 );
            v26 = v51;
            if ( !v36 )
LABEL_33:
              v27 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v48, 0LL);
        if ( v27 )
        {
          v44 = WdLogNewEntry5_WdDmmEvent(v43);
          *(_QWORD *)(v44 + 24) = v26;
          WdLogEvent5_WdDmmEvent(v44);
        }
      }
      v45 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v18, v26, v27, a5);
      v23 = v45;
      if ( v45 >= 0 )
      {
        LODWORD(v23) = 0;
      }
      else
      {
        v47 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v47 + 24) = v26;
        *(_QWORD *)(v47 + 32) = v23;
        WdLogEvent5_WdError(v47);
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdTrace(v22, v21);
      *(_QWORD *)(v24 + 24) = 0LL;
      *(_QWORD *)(v24 + 32) = v23;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v51, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40));
    return (unsigned int)v23;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
