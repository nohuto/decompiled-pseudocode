/*
 * XREFs of ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C022FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C023A4B0 (-_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireNextFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int NextMonitorFreqRangeEnumerator; // ebx
  int MonitorFromHandle; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _ERESOURCE *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+20h] [rbp-18h] BYREF
  __int64 v29; // [rsp+28h] [rbp-10h]
  struct DXGMONITOR *v30; // [rsp+40h] [rbp+8h] BYREF

  v29 = 0LL;
  v28 = 7025;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7025);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 7025);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v30);
    if ( MonitorFromHandle == -1073741816 )
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      NextMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = v30;
      if ( !v30 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v19);
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = (struct _ERESOURCE *)((char *)v18 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
      NextMonitorFreqRangeEnumerator = DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(v18, a2, a3);
      if ( !NextMonitorFreqRangeEnumerator && !*a3 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v24);
      }
      ExReleaseResourceLite(v22);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v12[3] = 0LL;
    v12[4] = a2;
    v12[5] = a1;
    WdLogEvent5_WdError(v12);
    NextMonitorFreqRangeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return NextMonitorFreqRangeEnumerator;
}
