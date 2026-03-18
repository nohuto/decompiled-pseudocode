/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0230310
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C023982C (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int MonitorFromHandle; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v20; // rdx
  __int64 v21; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+20h] [rbp-18h] BYREF
  __int64 v28; // [rsp+28h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v29; // [rsp+48h] [rbp+10h] BYREF

  v28 = 0LL;
  v27 = 6000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6000);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v29);
  if ( MonitorFromHandle == -1073741816 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    v10 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = v29;
    if ( !v29 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    p_VideoSignalInfo = (struct _ERESOURCE *)&v12[3].VideoSignalInfo;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)&v12[3].VideoSignalInfo, 1u);
    v20 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v12[2].VideoSignalInfo.HSyncFreq.Denominator;
    if ( v20 )
    {
      v29 = 0LL;
      v10 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR *)v12, v20, &v29);
      if ( !v10 )
      {
        v22 = v29;
        if ( !v29 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v23);
        }
        *a2 = v22;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, 0LL, v18, v19) + 24) = v12;
      v10 = 1075708702;
    }
    ExReleaseResourceLite(p_VideoSignalInfo);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return v10;
}
