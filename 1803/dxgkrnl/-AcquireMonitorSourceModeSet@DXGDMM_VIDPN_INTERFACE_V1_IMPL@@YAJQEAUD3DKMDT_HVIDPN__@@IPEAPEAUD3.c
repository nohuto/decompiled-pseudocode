/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02190E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00B8E74 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C022ECF8 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  VIDPN_MGR *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct HDXGMONITOR__ *v33; // rsi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  int v39; // [rsp+20h] [rbp-38h] BYREF
  __int64 v40; // [rsp+28h] [rbp-30h]
  struct HDXGMONITOR__ *v41; // [rsp+70h] [rbp+18h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v42; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v40 = 0LL;
  v39 = 6038;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 6038);
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    v4 = -1071774973;
    goto LABEL_27;
  }
  v15 = *(VIDPN_MGR **)(v12 + 48);
  v16 = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v17);
    v16 = *((_QWORD *)v15 + 1);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(v16 + 16));
  v20 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    v23 = *((_QWORD *)v15 + 1);
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v24);
      v23 = *((_QWORD *)v15 + 1);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(v23 + 16);
    *(_QWORD *)(v22 + 32) = v20;
    WdLogEvent5_WdError(v22);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v15 + 10) + 72LL));
  v25 = *((_QWORD *)v15 + 10);
  v26 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v25, v5);
  if ( !v26 )
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v5;
    WdLogEvent5_WdError(v28);
    v29 = -1071774971;
LABEL_24:
    if ( v25 )
      ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
    v4 = v29;
    goto LABEL_27;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v15, *(_DWORD *)(v26 + 24), &v41) < 0 || (v33 = v41) == 0LL )
  {
    v35 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v35 + 24) = v5;
    WdLogEvent5_WdWarning(v35);
    v29 = -1071774920;
    goto LABEL_24;
  }
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
  v34 = v42;
  *a3 = v33;
  *a4 = v34;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v39);
  return v4;
}
