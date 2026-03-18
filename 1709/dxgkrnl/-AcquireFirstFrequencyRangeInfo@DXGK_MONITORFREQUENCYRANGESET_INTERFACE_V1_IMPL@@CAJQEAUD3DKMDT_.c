/*
 * XREFs of ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01FEF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0202958 (-_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireFirstFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int FirstMonitorFreqRangeEnumerator; // edi
  int MonitorFromHandle; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGMONITOR *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7024);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v23);
    if ( MonitorFromHandle == -1073741816 )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
      FirstMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v14);
      }
      v15 = v23;
      if ( !v23 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v16);
        v18 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v18);
      }
      KeEnterCriticalRegion();
      v19 = (struct _ERESOURCE *)((char *)v15 + 280);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 280), 1u);
      FirstMonitorFreqRangeEnumerator = DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(v15, a2);
      if ( !FirstMonitorFreqRangeEnumerator && !*a2 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      ExReleaseResourceLite(v19);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = a1;
    WdLogEvent5_WdError(v7);
    FirstMonitorFreqRangeEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 7024);
  return FirstMonitorFreqRangeEnumerator;
}
