/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01D70E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C01E4194 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  VIDPN_MGR *v19; // rsi
  __int64 v20; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // r9
  struct HDXGMONITOR__ *v41; // rsi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v42; // rax
  __int64 v43; // rax
  struct HDXGMONITOR__ *v45; // [rsp+60h] [rbp+18h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v46; // [rsp+68h] [rbp+20h]

  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  v8 = 0;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v8 = -1071774973;
    goto LABEL_27;
  }
  v19 = *(VIDPN_MGR **)(v11 + 48);
  if ( !*((_QWORD *)v19 + 1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v20);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(*((_QWORD *)v19 + 1) + 16LL));
  v24 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v23, v22);
    if ( !*((_QWORD *)v19 + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26, v25, v28, v29);
      WdLogEvent5_WdAssertion(v30);
    }
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)v19 + 1) + 16LL);
    *(_QWORD *)(v27 + 32) = v24;
    WdLogEvent5_WdError(v27);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v19 + 10) + 72LL));
  v31 = *((_QWORD *)v19 + 10);
  v32 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v31, v6);
  if ( !v32 )
  {
    v36 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v36 + 24) = v6;
    WdLogEvent5_WdError(v36);
    v38 = -1071774971;
LABEL_24:
    if ( v31 )
      ReferenceCounted::Release((ReferenceCounted *)(v31 + 64), v37);
    v8 = v38;
    goto LABEL_27;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v19, *(unsigned int *)(v32 + 24), &v45, v35) < 0 || (v41 = v45) == 0LL )
  {
    v43 = WdLogNewEntry5_WdWarning(v17, v39, v18, v40);
    *(_QWORD *)(v43 + 24) = v6;
    WdLogEvent5_WdWarning(v43);
    v38 = -1071774920;
    goto LABEL_24;
  }
  if ( v31 )
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 64), v39);
  v42 = v46;
  *a3 = v41;
  *a4 = v42;
LABEL_27:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 6038);
  return v8;
}
