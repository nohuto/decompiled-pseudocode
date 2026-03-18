/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C010B4DC
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0123020 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0108624 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2)
{
  __int64 v4; // rbp
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v5; // rax
  __int64 v6; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rdi
  __int64 v8; // rcx
  char *v9; // rbx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v10; // rax
  char **v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v14 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdDmmEvent(v14);
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  v4 = *((_QWORD *)this + 16);
  if ( !v4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    goto LABEL_13;
  }
  v5 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new(0x30uLL, 0x4D677844u, PagedPool);
  v7 = v5;
  if ( v5 )
  {
    v5->Id = 0;
    v5->Type = *(_DWORD *)(v4 + 12);
    v5->DataSize = *(_QWORD *)(v4 + 16);
    v5->pData = (void *)(v4 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v4 + 8), &v5->Origin) < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v16);
    }
    v9 = (char *)this + 176;
    v10 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v7[1];
    v11 = (char **)*((_QWORD *)v9 + 1);
    if ( *v11 != v9 )
      __fastfail(3u);
    *(_QWORD *)&v10->Id = v9;
    v7[1].DataSize = (SIZE_T)v11;
    *v11 = (char *)v10;
    *((_QWORD *)v9 + 1) = v10;
    *a2 = v7;
    return 0LL;
  }
  v15 = WdLogNewEntry5_WdError(v6);
  WdLogEvent5_WdError(v15);
  return 3221225495LL;
}
