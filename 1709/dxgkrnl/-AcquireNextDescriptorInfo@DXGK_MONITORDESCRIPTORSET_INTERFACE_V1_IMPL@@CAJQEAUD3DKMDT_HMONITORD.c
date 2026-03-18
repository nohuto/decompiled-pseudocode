/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C0122F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C010B638 (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireNextDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int MonitorFromHandle; // eax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rsi
  unsigned int NextMonitorDescriptorEnumerator; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7029);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v6[3] = a1;
  v6[4] = a2;
  v6[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v21);
    if ( MonitorFromHandle == -1073741816 )
    {
      v16 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      NextMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v17);
      }
      v10 = v21;
      if ( !v21 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 280), 1u);
      NextMonitorDescriptorEnumerator = DXGMONITOR::_GetNextMonitorDescriptorEnumerator(v10, a2, a3);
      ExReleaseResourceLite((PERESOURCE)((char *)v10 + 280));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v15[3] = 0LL;
    v15[4] = a2;
    v15[5] = a1;
    WdLogEvent5_WdError(v15);
    NextMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 7029);
  return NextMonitorDescriptorEnumerator;
}
