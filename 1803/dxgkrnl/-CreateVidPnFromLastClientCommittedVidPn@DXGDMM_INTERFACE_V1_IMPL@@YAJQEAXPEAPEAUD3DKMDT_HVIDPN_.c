/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00C6470
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  struct D3DKMDT_HVIDPN__ *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h]
  __int64 v24; // [rsp+58h] [rbp+28h] BYREF
  __int64 v25; // [rsp+68h] [rbp+38h] BYREF

  v23 = 0LL;
  v22 = 6053;
  v6 = this;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6053);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v20);
      }
      v9 = *((_QWORD *)v6 + 307);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, v10);
        v11 = *(struct D3DKMDT_HVIDPN__ **)(v10 + 424);
        v24 = 0LL;
        v12 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v10, &v24);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v12;
        if ( v12 < 0 )
        {
          v21 = WdLogNewEntry5_WdDmmEvent(v13);
          *(_QWORD *)(v21 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v21);
        }
        else
        {
          v14 = v24;
          v24 = 0LL;
          *a2 = v14 & -(__int64)(v14 != -88);
          LODWORD(v6) = 0;
          *a3 = v11;
        }
        auto_rc<DMMVIDPN>::reset(&v24, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
        goto LABEL_11;
      }
      v19 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v19 + 24) = v6;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v19 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v19);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = v6;
    WdLogEvent5_WdError(v18);
    LODWORD(v6) = -1073741811;
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v22);
  return (unsigned int)v6;
}
