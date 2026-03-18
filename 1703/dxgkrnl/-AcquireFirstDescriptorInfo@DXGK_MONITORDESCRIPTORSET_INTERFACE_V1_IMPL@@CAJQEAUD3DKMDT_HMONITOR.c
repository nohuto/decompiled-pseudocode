/*
 * XREFs of ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0105840
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0108660 (-_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireFirstDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int MonitorFromHandle; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGMONITOR *v16; // rsi
  unsigned int FirstMonitorDescriptorEnumerator; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7028);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v30, v9, v10);
    if ( MonitorFromHandle == -1073741816 )
    {
      v22 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdError(v22);
      FirstMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v23);
      }
      v16 = v30;
      if ( !v30 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v24);
        v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
      FirstMonitorDescriptorEnumerator = DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(v16, a2);
      ExReleaseResourceLite((PERESOURCE)((char *)v16 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = a1;
    WdLogEvent5_WdError(v21);
    FirstMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 7028);
  return FirstMonitorDescriptorEnumerator;
}
