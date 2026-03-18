/*
 * XREFs of ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C01FF290
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C0202A74 (-_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireNextFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int NextMonitorFreqRangeEnumerator; // edi
  int MonitorFromHandle; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7025);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v6[3] = a1;
  v6[4] = a2;
  v6[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v24);
    if ( MonitorFromHandle == -1073741816 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a1;
      WdLogEvent5_WdError(v14);
      NextMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = v24;
      if ( !v24 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v17);
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      KeEnterCriticalRegion();
      v20 = (struct _ERESOURCE *)((char *)v16 + 280);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 280), 1u);
      NextMonitorFreqRangeEnumerator = DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(v16, a2, a3);
      if ( !NextMonitorFreqRangeEnumerator && !*a3 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v8[3] = 0LL;
    v8[4] = a2;
    v8[5] = a1;
    WdLogEvent5_WdError(v8);
    NextMonitorFreqRangeEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 7025);
  return NextMonitorFreqRangeEnumerator;
}
