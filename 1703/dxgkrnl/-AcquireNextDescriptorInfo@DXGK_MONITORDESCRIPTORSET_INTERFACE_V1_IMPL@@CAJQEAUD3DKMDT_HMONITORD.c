/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C0105910
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C01087BC (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireNextDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int MonitorFromHandle; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGMONITOR *v17; // rsi
  unsigned int NextMonitorDescriptorEnumerator; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGMONITOR *v31; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7029);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a1;
  v7[4] = a2;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v31, v10, v11);
    if ( MonitorFromHandle == -1073741816 )
    {
      v23 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdError(v23);
      NextMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v24);
      }
      v17 = v31;
      if ( !v31 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v25);
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v30);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
      NextMonitorDescriptorEnumerator = DXGMONITOR::_GetNextMonitorDescriptorEnumerator(v17, a2, a3);
      ExReleaseResourceLite((PERESOURCE)((char *)v17 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v22[3] = 0LL;
    v22[4] = a2;
    v22[5] = a1;
    WdLogEvent5_WdError(v22);
    NextMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7029);
  return NextMonitorDescriptorEnumerator;
}
