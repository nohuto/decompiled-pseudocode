/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00AD3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00E4AB0 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  VIDPN_MGR *v12; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v14; // rdx
  struct _DXGDMM_VIDPN_INTERFACE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v28; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        WdLogEvent5_WdAssertion(v24);
      }
      v11 = *((_QWORD *)v6 + 285);
      if ( v11 )
      {
        v12 = *(VIDPN_MGR **)(v11 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v26, (__int64)v12, v9, v10);
        v28 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnInterface(v12, &v28);
        v27 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent();
          *(_QWORD *)(v25 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else
        {
          v14 = v27;
          v27 = 0LL;
          v15 = v28;
          *a2 = v14 & -(__int64)(v14 != -88);
          LODWORD(v6) = 0;
          *a3 = (struct D3DKMDT_HVIDPN__ *)v15;
        }
        auto_rc<DMMVIDPN>::reset(&v27, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26[0] + 40LL), v16, v17, v18);
        goto LABEL_11;
      }
      v23 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v23 + 24) = v6;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v23 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v23);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v6;
    WdLogEvent5_WdError(v22);
    LODWORD(v6) = -1073741811;
  }
LABEL_11:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 6053);
  return (unsigned int)v6;
}
