/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C022FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C023982C (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  int MonitorFromHandle; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  UINT *p_cy; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v27; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v28; // rax
  __int64 v29; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v30; // rdx
  __int64 v31; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // [rsp+20h] [rbp-28h] BYREF
  __int64 v38; // [rsp+28h] [rbp-20h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v39; // [rsp+50h] [rbp+8h] BYREF

  v38 = 0LL;
  v37 = 7018;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7018);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 7018);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v39);
    if ( MonitorFromHandle == -1073741816 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      v12 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = v39;
      if ( !v39 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v17[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v17[3].VideoSignalInfo, 1u);
      if ( v17[2].VideoSignalInfo.TotalSize.cy )
      {
        p_cy = &v17[2].VideoSignalInfo.ActiveSize.cy;
        v39 = 0LL;
        v27 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v17[2].VideoSignalInfo.ActiveSize.cy;
        if ( v27 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v17[2].VideoSignalInfo.ActiveSize.cy )
          goto LABEL_18;
        v28 = v27 - 1;
        if ( !v27 )
          v28 = 0LL;
        if ( !v28 )
        {
LABEL_18:
          v29 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v29);
          v27 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)p_cy;
        }
        if ( v27 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)p_cy )
        {
          v30 = 0LL;
        }
        else
        {
          v30 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)&v27[-1];
          if ( !v27 )
            v30 = 0LL;
        }
        v12 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR *)v17, v30, &v39);
        if ( !v12 )
        {
          v32 = v39;
          if ( !v39 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31);
            WdLogEvent5_WdAssertion(v33);
          }
          *a2 = v32;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v17;
        v12 = 1075708747;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v37);
  return v12;
}
