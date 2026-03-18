/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C021A160
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
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct VIDPN_MGR *v13; // rbx
  struct D3DKMDT_HVIDPN__ *v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h]
  __int64 v24; // [rsp+58h] [rbp+28h] BYREF
  __int64 v25; // [rsp+68h] [rbp+38h] BYREF

  v23 = 0LL;
  v22 = 6052;
  v6 = this;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6052);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6052);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v11);
      }
      v12 = *((_QWORD *)v6 + 307);
      if ( v12 )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v13);
        v14 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v13 + 53);
        v24 = 0LL;
        v15 = VIDPN_MGR::CreateClientVidPn(v13, &v24);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v15;
        if ( v15 >= 0 )
        {
          v18 = v24;
          v24 = 0LL;
          *a2 = v18 & -(__int64)(v18 != -88);
          LODWORD(v6) = 0;
          *a3 = v14;
        }
        else
        {
          v17 = WdLogNewEntry5_WdDmmEvent(v16);
          *(_QWORD *)(v17 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v17);
        }
        auto_rc<DMMVIDPN>::reset(&v24, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
        goto LABEL_18;
      }
      v9 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v9 + 24) = v6;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v9);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = v6;
    WdLogEvent5_WdError(v8);
    LODWORD(v6) = -1073741811;
  }
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v6;
}
