/*
 * XREFs of ?GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEA_K@Z @ 0x1C01FFB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::GetNumFrequencyRanges(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        unsigned __int64 *const a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int MonitorFromHandle; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGMONITOR *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7023);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  v7 = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v20);
    if ( MonitorFromHandle == -1073741816 )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
      v7 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v14);
      }
      v15 = v20;
      if ( !v20 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v16);
        v18 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v18);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 280), 1u);
      *a2 = *((unsigned int *)v15 + 60);
      ExReleaseResourceLite((PERESOURCE)((char *)v15 + 280));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a1;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 7023);
  return v7;
}
