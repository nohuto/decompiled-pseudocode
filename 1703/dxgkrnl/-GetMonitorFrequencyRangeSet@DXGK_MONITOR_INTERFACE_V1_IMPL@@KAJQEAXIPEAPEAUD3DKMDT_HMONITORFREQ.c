/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01E5300
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ **a3,
        const struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGADAPTER *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  int MonitorHandle; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct HDXGMONITOR__ *v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7054);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 32) = v7;
LABEL_8:
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    LODWORD(v7) = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 32) = v6;
    goto LABEL_8;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v17 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_13;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((_QWORD *)v17 + 285) )
  {
    LOBYTE(v18) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v17,
                      (unsigned int)v6,
                      v18,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v31);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdWarning(v27);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v7 = (__int64)v31;
      if ( !v31 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        WdLogEvent5_WdAssertion(v29);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v7;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v17,
        (struct HDXGMONITOR__ *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
        v26);
      LODWORD(v7) = 0;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v28 + 24) = v6;
      *(_QWORD *)(v28 + 32) = v7;
      WdLogEvent5_WdError(v28);
    }
  }
  else
  {
LABEL_13:
    v21 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v21 + 24) = v7;
    WdLogEvent5_WdError(v21);
    LODWORD(v7) = -1071775742;
  }
LABEL_21:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7054);
  return (unsigned int)v7;
}
