/*
 * XREFs of ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B128 (-_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a2,
        __int64 a3)
{
  __int64 v5; // rax
  int MonitorFromHandle; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rax
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  struct _ERESOURCE *v18; // rcx
  struct DXGMONITOR *v20; // [rsp+38h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 6001);
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v20);
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
    v13 = v20;
    if ( !v20 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v14);
      v16 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 280), 1u);
    v17 = DXGMONITOR::_ReleaseMonitorModeEnumerator(v13, a2);
    v18 = (struct _ERESOURCE *)((char *)v13 + 280);
    v11 = v17;
    ExReleaseResourceLite(v18);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6001);
  return v11;
}
