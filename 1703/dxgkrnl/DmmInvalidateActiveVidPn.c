/*
 * XREFs of DmmInvalidateActiveVidPn @ 0x1C01D5D98
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C018F8F0 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01CC590 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D1E60 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DMMVIDPN *v38; // rbx
  char v39; // r14
  char *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  DMMVIDPNTOPOLOGY *v48; // r12
  __int64 v49; // rax
  char *v50; // rdi
  char *v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rax
  char *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v70; // [rsp+38h] [rbp-18h] BYREF
  __int64 v71; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v72; // [rsp+80h] [rbp+30h] BYREF

  v6 = a4;
  v8 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = *((_QWORD *)this + 285);
  if ( !v24 )
  {
    v17 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v17 + 24) = this;
    goto LABEL_3;
  }
  v25 = *(_QWORD *)(v24 + 88);
  if ( v25 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v71, v25, v21, v22);
    v72 = 0LL;
    v70 = 0LL;
    v27 = VIDPN_MGR::RecommendFunctionalVidPn((ADAPTER_DISPLAY **)v25, v8, a3, v6, &v70);
    v32 = v27;
    if ( v27 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v72, (__int64)v70);
      v38 = v72;
      v39 = 0;
      if ( v8 == 1 )
      {
        v39 = 1;
        v40 = (char *)v72 + 96;
        if ( v72 == (struct DMMVIDPN *)-96LL )
        {
          v41 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          WdLogEvent5_WdAssertion(v41);
        }
        v42 = *(_QWORD *)(v25 + 88);
        v69 = 0LL;
        if ( v42 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 32));
          v43 = *(_QWORD *)(v25 + 88);
          v38 = v72;
        }
        else
        {
          v43 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v69, v43);
        if ( v69 )
        {
          v48 = (DMMVIDPNTOPOLOGY *)(v69 + 96);
          if ( v69 == -96 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
            WdLogEvent5_WdAssertion(v49);
          }
          if ( *((_QWORD *)v48 + 5) == *((_QWORD *)v40 + 5) )
          {
            v50 = (char *)*((_QWORD *)v40 + 3);
            if ( v50 == v40 + 24 )
              goto LABEL_33;
            v51 = v50 - 8;
            if ( !v51 )
              goto LABEL_33;
            do
            {
              v52 = *(unsigned int *)(*((_QWORD *)v51 + 11) + 24LL);
              v53 = *((_QWORD *)v51 + 12);
              a6 = v52;
              v54 = *(_DWORD *)(v53 + 24);
              if ( (_DWORD)v52 == -1 )
              {
                v55 = WdLogNewEntry5_WdAssertion(v52, v44, v46, v47);
                WdLogEvent5_WdAssertion(v55);
              }
              if ( v54 == -1 )
              {
                v56 = WdLogNewEntry5_WdAssertion(v52, v44, v46, v47);
                WdLogEvent5_WdAssertion(v56);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v48, a6, v54) )
                break;
              v57 = (char *)*((_QWORD *)v51 + 1);
              v51 = v57 - 8;
              if ( v57 == v40 + 24 )
                v51 = 0LL;
            }
            while ( v51 );
            v38 = v72;
            if ( !v51 )
LABEL_33:
              v39 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v69, 0LL);
        if ( v39 )
        {
          v61 = WdLogNewEntry5_WdDmmEvent(v59, v58, v36, v60);
          *(_QWORD *)(v61 + 24) = v38;
          WdLogEvent5_WdDmmEvent(v61);
        }
      }
      LOBYTE(v36) = v39;
      v62 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v25, v38, v36, a5);
      v32 = v62;
      if ( v62 >= 0 )
      {
        LODWORD(v32) = 0;
      }
      else
      {
        v65 = WdLogNewEntry5_WdError(v64, v63);
        *(_QWORD *)(v65 + 24) = v38;
        *(_QWORD *)(v65 + 32) = v32;
        WdLogEvent5_WdError(v65);
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      *(_QWORD *)(v33 + 24) = 0LL;
      *(_QWORD *)(v33 + 32) = v32;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v72, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71 + 40), v66, v67, v68);
    return (unsigned int)v32;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
}
