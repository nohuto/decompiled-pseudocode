/*
 * XREFs of ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01083F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B1A8 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int MonitorFromHandle; // eax
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rdi
  struct _ERESOURCE *v10; // rsi
  __int64 v11; // rcx
  unsigned int MonitorModeEnumerator; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7020);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v23);
    if ( MonitorFromHandle == -1073741816 )
    {
      v17 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      MonitorModeEnumerator = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v18);
      }
      v9 = v23;
      if ( !v23 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v19);
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      KeEnterCriticalRegion();
      v10 = (struct _ERESOURCE *)((char *)v9 + 280);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 280), 1u);
      MonitorModeEnumerator = DXGMONITOR::_CreateMonitorModeEnumerator(v9, 0LL, a2);
      if ( !MonitorModeEnumerator && !*a2 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v22);
      }
      ExReleaseResourceLite(v10);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    MonitorModeEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 7020);
  return MonitorModeEnumerator;
}
