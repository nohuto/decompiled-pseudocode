/*
 * XREFs of ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C01059F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0108730 (-_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::ReleaseDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a2,
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
  int v17; // eax
  struct _ERESOURCE *v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7030);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v32, v9, v10);
    if ( MonitorFromHandle == -1073741816 )
    {
      v24 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v24 + 24) = a1;
      WdLogEvent5_WdError(v24);
      v19 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v25);
      }
      v16 = v32;
      if ( !v32 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v26);
        v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
        WdLogEvent5_WdAssertion(v31);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
      v17 = DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(v16, a2);
      v18 = (struct _ERESOURCE *)((char *)v16 + 240);
      v19 = v17;
      ExReleaseResourceLite(v18);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    v19 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 7030);
  return v19;
}
