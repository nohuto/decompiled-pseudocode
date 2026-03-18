/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01FF960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
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
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int MonitorHandle; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7054);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = v7;
LABEL_8:
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    LODWORD(v7) = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = v6;
    goto LABEL_8;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v15 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_13;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_QWORD *)v15 + 288) )
  {
    MonitorHandle = MonitorGetMonitorHandle(
                      v15,
                      (unsigned int)v6,
                      1,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v26);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdWarning(v22);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v7 = v26;
      if ( !v26 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v24);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v7;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v15,
        (struct _IO_REMOVE_LOCK *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet);
      LODWORD(v7) = 0;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v23 + 24) = v6;
      *(_QWORD *)(v23 + 32) = v7;
      WdLogEvent5_WdError(v23);
    }
  }
  else
  {
LABEL_13:
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = v7;
    WdLogEvent5_WdError(v17);
    LODWORD(v7) = -1071775742;
  }
LABEL_21:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 7054);
  return (unsigned int)v7;
}
