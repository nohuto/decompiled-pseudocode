/*
 * XREFs of ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01FFE80
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0202C0C (-_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::ReleaseFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  int MonitorFromHandle; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGMONITOR *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  struct _ERESOURCE *v20; // rcx
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7026);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v22);
    if ( MonitorFromHandle == -1073741816 )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
      v10 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v14);
      }
      v15 = v22;
      if ( !v22 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v16);
        v18 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v18);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 280), 1u);
      v19 = DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(v15, a2);
      v20 = (struct _ERESOURCE *)((char *)v15 + 280);
      v10 = v19;
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    v10 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 7026);
  return v10;
}
