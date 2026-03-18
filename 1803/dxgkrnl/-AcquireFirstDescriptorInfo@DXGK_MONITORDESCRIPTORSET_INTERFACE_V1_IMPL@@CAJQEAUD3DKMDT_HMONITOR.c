/*
 * XREFs of ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C022F710
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0239E14 (-_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireFirstDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  int MonitorFromHandle; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int FirstMonitorDescriptorEnumerator; // eax
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-18h] BYREF
  __int64 v27; // [rsp+28h] [rbp-10h]
  struct DXGMONITOR *v28; // [rsp+40h] [rbp+8h] BYREF

  v27 = 0LL;
  v26 = 7028;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7028);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7028);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v28);
    if ( MonitorFromHandle == -1073741816 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      v12 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = v28;
      if ( !v28 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
      FirstMonitorDescriptorEnumerator = DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(v17, a2);
      v22 = (struct _ERESOURCE *)((char *)v17 + 296);
      v12 = FirstMonitorDescriptorEnumerator;
      ExReleaseResourceLite(v22);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdError(v11);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return v12;
}
