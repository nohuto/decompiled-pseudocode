/*
 * XREFs of ?GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEA_K@Z @ 0x1C01E54E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::GetNumFrequencyRanges(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        unsigned __int64 *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int MonitorFromHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  struct DXGMONITOR *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7023);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v11 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v30, v9, v10);
    if ( MonitorFromHandle == -1073741816 )
    {
      v20 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      v11 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = v30;
      if ( !v30 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v23);
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 240), 1u);
      *a2 = *((unsigned int *)v22 + 50);
      ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdError(v12);
    v11 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7023);
  return v11;
}
