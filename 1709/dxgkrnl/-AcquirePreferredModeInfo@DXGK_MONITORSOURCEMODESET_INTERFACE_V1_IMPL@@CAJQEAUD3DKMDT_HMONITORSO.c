/*
 * XREFs of ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B1A8 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int MonitorFromHandle; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _ERESOURCE *p_Preference; // rbp
  __int64 v20; // rcx
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v21; // rdx
  __int64 v22; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v23; // rsi
  __int64 v24; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v26; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7017);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v26);
    if ( MonitorFromHandle == -1073741816 )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
      v10 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v14);
      }
      v15 = v26;
      if ( !v26 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v16);
        v18 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v18);
      }
      KeEnterCriticalRegion();
      p_Preference = (struct _ERESOURCE *)&v15[2].Preference;
      ExAcquireResourceSharedLite((PERESOURCE)&v15[2].Preference, 1u);
      v21 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v15[2].VideoSignalInfo.ActiveSize.cy;
      if ( v21 )
      {
        v26 = 0LL;
        v10 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v15, v21, &v26);
        if ( !v10 )
        {
          v23 = v26;
          if ( !v26 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v24);
          }
          *a2 = v23;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, 0LL) + 24) = v15;
        v10 = 1075708702;
      }
      ExReleaseResourceLite(p_Preference);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = a1;
    WdLogEvent5_WdError(v7);
    v10 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 7017);
  return v10;
}
