/*
 * XREFs of ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0122870
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORDESCRIPTORSET__ **a3,
        const struct _DXGK_MONITORDESCRIPTORSET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGADAPTER *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  int MonitorHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct HDXGMONITOR__ *v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7055);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 32) = v7;
LABEL_19:
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    LODWORD(v7) = -1073741811;
    goto LABEL_13;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 32) = v6;
    goto LABEL_19;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v14 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_20;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_QWORD *)v14 + 285) )
  {
    LOBYTE(v15) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v14,
                      (unsigned int)v6,
                      v15,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v31);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v28 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v28 + 24) = v6;
      WdLogEvent5_WdWarning(v28);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v29 + 24) = v6;
      *(_QWORD *)(v29 + 32) = v7;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      v7 = (__int64)v31;
      if ( !v31 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v30);
      }
      *a3 = (struct D3DKMDT_HMONITORDESCRIPTORSET__ *)v7;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v14,
        (struct HDXGMONITOR__ *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
        v21);
      LODWORD(v7) = 0;
    }
  }
  else
  {
LABEL_20:
    v27 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v27 + 24) = v7;
    WdLogEvent5_WdError(v27);
    LODWORD(v7) = -1071775742;
  }
LABEL_13:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 7055);
  return (unsigned int)v7;
}
