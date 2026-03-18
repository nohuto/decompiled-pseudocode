/*
 * XREFs of ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0106030
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
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
  struct DXGMONITOR *v16; // rdi
  struct _ERESOURCE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int MonitorModeEnumerator; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGMONITOR *v36; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7020);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v36, v9, v10);
    if ( MonitorFromHandle == -1073741816 )
    {
      v27 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v27 + 24) = a1;
      WdLogEvent5_WdError(v27);
      MonitorModeEnumerator = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v28);
      }
      v16 = v36;
      if ( !v36 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v29);
        v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        WdLogEvent5_WdAssertion(v34);
      }
      KeEnterCriticalRegion();
      v17 = (struct _ERESOURCE *)((char *)v16 + 240);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
      MonitorModeEnumerator = DXGMONITOR::_CreateMonitorModeEnumerator(v16, 0LL, a2);
      if ( !MonitorModeEnumerator && !*a2 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
        WdLogEvent5_WdAssertion(v35);
      }
      ExReleaseResourceLite(v17);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    MonitorModeEnumerator = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 7020);
  return MonitorModeEnumerator;
}
