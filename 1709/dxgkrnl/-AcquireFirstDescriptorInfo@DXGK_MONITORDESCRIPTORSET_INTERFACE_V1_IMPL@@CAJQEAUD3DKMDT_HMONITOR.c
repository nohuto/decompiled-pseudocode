/*
 * XREFs of ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0123020
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C010B4DC (-_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireFirstDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int MonitorFromHandle; // eax
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rsi
  unsigned int FirstMonitorDescriptorEnumerator; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 7028);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v20);
    if ( MonitorFromHandle == -1073741816 )
    {
      v15 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      FirstMonitorDescriptorEnumerator = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v16);
      }
      v9 = v20;
      if ( !v20 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v17);
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 280), 1u);
      FirstMonitorDescriptorEnumerator = DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(v9, a2);
      ExReleaseResourceLite((PERESOURCE)((char *)v9 + 280));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdError(v14);
    FirstMonitorDescriptorEnumerator = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 7028);
  return FirstMonitorDescriptorEnumerator;
}
