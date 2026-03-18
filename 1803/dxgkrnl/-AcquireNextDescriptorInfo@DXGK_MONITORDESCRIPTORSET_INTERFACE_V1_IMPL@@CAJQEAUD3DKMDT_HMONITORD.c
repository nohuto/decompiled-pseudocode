/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C022FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C023A2FC (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireNextDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // edi
  int MonitorFromHandle; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int NextMonitorDescriptorEnumerator; // eax
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+20h] [rbp-18h] BYREF
  __int64 v28; // [rsp+28h] [rbp-10h]
  struct DXGMONITOR *v29; // [rsp+40h] [rbp+8h] BYREF

  v28 = 0LL;
  v27 = 7029;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7029);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 7029);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      v13 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = v29;
      if ( !v29 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v19);
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
      NextMonitorDescriptorEnumerator = DXGMONITOR::_GetNextMonitorDescriptorEnumerator(v18, a2, a3);
      v23 = (struct _ERESOURCE *)((char *)v18 + 296);
      v13 = NextMonitorDescriptorEnumerator;
      ExReleaseResourceLite(v23);
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
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return v13;
}
