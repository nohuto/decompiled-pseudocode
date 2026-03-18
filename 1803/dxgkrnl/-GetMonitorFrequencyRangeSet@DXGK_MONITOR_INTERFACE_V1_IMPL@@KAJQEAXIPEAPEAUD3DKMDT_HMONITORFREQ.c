/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C0230DB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ **a3,
        const struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v16; // rcx
  DXGADAPTER *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int MonitorHandle; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+30h] [rbp-28h] BYREF
  __int64 v33; // [rsp+38h] [rbp-20h]
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF

  v33 = 0LL;
  v6 = a2;
  v7 = a1;
  v32 = 7054;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7054);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7054);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v7;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 32) = v7;
LABEL_8:
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdError(v14);
    LODWORD(v7) = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 32) = v6;
    goto LABEL_8;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v17 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_13;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((_QWORD *)v17 + 307) )
  {
    LOBYTE(v18) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v17,
                      (unsigned int)v6,
                      v18,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v34);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v26 + 24) = v6;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v7 = v34;
      if ( !v34 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v28);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v7;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(v17, v7, DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet, v25);
      LODWORD(v7) = 0;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v27 + 24) = v6;
      *(_QWORD *)(v27 + 32) = v7;
      WdLogEvent5_WdError(v27);
    }
  }
  else
  {
LABEL_13:
    v20 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    LODWORD(v7) = -1071775742;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v7;
}
