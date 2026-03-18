/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0108180
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C010B298 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int MonitorFromHandle; // eax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  struct _ERESOURCE *v11; // rbp
  __int64 v12; // rcx
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v6[3] = a2;
  v6[4] = a1;
  v6[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v25);
      if ( MonitorFromHandle == -1073741816 )
      {
        v19 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v19 + 24) = a1;
        WdLogEvent5_WdError(v19);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v20);
        }
        v10 = v25;
        if ( !v25 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v21);
          v23 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v23);
        }
        KeEnterCriticalRegion();
        v11 = (struct _ERESOURCE *)((char *)v10 + 280);
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 280), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v10, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v24);
        }
        ExReleaseResourceLite(v11);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v18 + 24) = 0LL;
      WdLogEvent5_WdError(v18);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v17[3] = 0LL;
    v17[4] = a2;
    v17[5] = a1;
    WdLogEvent5_WdError(v17);
    NextMonitorModeEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 7019);
  return NextMonitorModeEnumerator;
}
