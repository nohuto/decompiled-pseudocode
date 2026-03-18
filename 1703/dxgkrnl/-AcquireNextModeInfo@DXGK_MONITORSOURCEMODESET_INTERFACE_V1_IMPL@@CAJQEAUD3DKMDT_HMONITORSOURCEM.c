/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01E4C10
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01E825C (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v16; // rax
  int MonitorFromHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct _ERESOURCE *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  struct DXGMONITOR *v38; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a2;
  v7[4] = a1;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v38, v10, v11);
      if ( MonitorFromHandle == -1073741816 )
      {
        v22 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v22 + 24) = a1;
        WdLogEvent5_WdError(v22);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          WdLogEvent5_WdAssertion(v23);
        }
        v24 = v38;
        if ( !v38 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          WdLogEvent5_WdAssertion(v25);
          v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          WdLogEvent5_WdAssertion(v30);
        }
        KeEnterCriticalRegion();
        v31 = (struct _ERESOURCE *)((char *)v24 + 240);
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 240), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v24, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
          WdLogEvent5_WdAssertion(v36);
        }
        ExReleaseResourceLite(v31);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v16 + 24) = 0LL;
      WdLogEvent5_WdError(v16);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v12[3] = 0LL;
    v12[4] = a2;
    v12[5] = a1;
    WdLogEvent5_WdError(v12);
    NextMonitorModeEnumerator = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7019);
  return NextMonitorModeEnumerator;
}
