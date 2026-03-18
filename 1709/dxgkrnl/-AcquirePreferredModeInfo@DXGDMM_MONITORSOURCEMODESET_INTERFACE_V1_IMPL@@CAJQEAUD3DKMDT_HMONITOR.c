/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FF420
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B1A8 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rax
  int MonitorFromHandle; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _ERESOURCE *p_Preference; // rbp
  __int64 v18; // rcx
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v19; // rdx
  __int64 v20; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v21; // rdi
  __int64 v22; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v24; // [rsp+38h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6000);
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  *a2 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v24);
  if ( MonitorFromHandle == -1073741816 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = a1;
    WdLogEvent5_WdError(v8);
    v11 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = v24;
    if ( !v24 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v14);
      v16 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    p_Preference = (struct _ERESOURCE *)&v13[2].Preference;
    ExAcquireResourceSharedLite((PERESOURCE)&v13[2].Preference, 1u);
    v19 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v13[2].VideoSignalInfo.ActiveSize.cy;
    if ( v19 )
    {
      v24 = 0LL;
      v11 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v13, v19, &v24);
      if ( !v11 )
      {
        v21 = v24;
        if ( !v24 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v22);
        }
        *a2 = v21;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, 0LL) + 24) = v13;
      v11 = 1075708702;
    }
    ExReleaseResourceLite(p_Preference);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6000);
  return v11;
}
