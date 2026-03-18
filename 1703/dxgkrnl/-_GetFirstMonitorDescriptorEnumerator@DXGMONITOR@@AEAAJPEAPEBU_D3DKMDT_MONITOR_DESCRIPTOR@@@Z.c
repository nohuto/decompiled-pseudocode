/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0108660
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0105840 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbp
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v16; // rax
  char **v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v20 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdDmmEvent(v20);
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  v6 = *((_QWORD *)this + 16);
  if ( !v6 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    goto LABEL_13;
  }
  v7 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new(0x30uLL, 0x4D677844u, PagedPool);
  v10 = v7;
  if ( v7 )
  {
    v7->Id = 0;
    v7->Type = *(_DWORD *)(v6 + 12);
    v7->DataSize = *(_QWORD *)(v6 + 16);
    v7->pData = (void *)(v6 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v6 + 8), &v7->Origin) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v22);
    }
    v15 = (char *)this + 136;
    v16 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v10[1];
    v17 = (char **)*((_QWORD *)v15 + 1);
    if ( *v17 != v15 )
      __fastfail(3u);
    *(_QWORD *)&v16->Id = v15;
    v10[1].DataSize = (SIZE_T)v17;
    *v17 = (char *)v16;
    *((_QWORD *)v15 + 1) = v16;
    *a2 = v10;
    return 0LL;
  }
  v21 = WdLogNewEntry5_WdError(v9, v8);
  WdLogEvent5_WdError(v21);
  return 3221225495LL;
}
