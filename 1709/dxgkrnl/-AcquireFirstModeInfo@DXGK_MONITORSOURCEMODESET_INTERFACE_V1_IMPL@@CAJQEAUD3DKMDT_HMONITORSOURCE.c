/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01221A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B1A8 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int MonitorFromHandle; // eax
  __int64 v8; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v9; // rbx
  struct _ERESOURCE *p_Preference; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  D3DKMDT_VIDEO_SIGNAL_INFO *p_VideoSignalInfo; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v14; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rax
  _QWORD *v16; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v32; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7018);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v32);
    if ( MonitorFromHandle == -1073741816 )
    {
      v25 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdError(v25);
      v19 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v26);
      }
      v9 = v32;
      if ( !v32 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v27);
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      p_Preference = (struct _ERESOURCE *)&v9[2].Preference;
      ExAcquireResourceSharedLite((PERESOURCE)&v9[2].Preference, 1u);
      if ( v9[2].Id )
      {
        p_VideoSignalInfo = &v9[2].VideoSignalInfo;
        v32 = 0LL;
        v14 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v9[2].VideoSignalInfo.VideoStandard;
        if ( v14 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v9[2].VideoSignalInfo )
          goto LABEL_29;
        v15 = v14 - 1;
        if ( !v14 )
          v15 = 0LL;
        if ( !v15 )
        {
LABEL_29:
          v30 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v30);
        }
        v16 = *(_QWORD **)&p_VideoSignalInfo->VideoStandard;
        if ( *(D3DKMDT_VIDEO_SIGNAL_INFO **)&p_VideoSignalInfo->VideoStandard == p_VideoSignalInfo )
        {
          v17 = 0LL;
        }
        else
        {
          v17 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(v16 - 12);
          if ( !v16 )
            v17 = 0LL;
        }
        v19 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v9, v17, &v32);
        if ( !v19 )
        {
          v20 = v32;
          if ( !v32 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v18);
            WdLogEvent5_WdAssertion(v31);
          }
          *a2 = v20;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v9;
        v19 = 1075708747;
      }
      ExReleaseResourceLite(p_Preference);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = a1;
    WdLogEvent5_WdError(v24);
    v19 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, 7018);
  return v19;
}
