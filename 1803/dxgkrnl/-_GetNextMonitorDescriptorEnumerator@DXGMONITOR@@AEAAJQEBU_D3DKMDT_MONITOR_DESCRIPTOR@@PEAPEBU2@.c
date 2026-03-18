/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C023A2FC
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C022FE00 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  DXGMONITOR *v10; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v11; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v21; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v22; // rax
  __int64 v23; // rax

  v6 = this;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (char *)v6 + 192;
  if ( !a2 )
    goto LABEL_27;
  v10 = *(DXGMONITOR **)v9;
  if ( *(char **)v9 == v9 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v10 != this )
  {
    if ( v9 == (char *)v10 )
      goto LABEL_27;
    v10 = *(DXGMONITOR **)v10;
  }
  this = (DXGMONITOR *)*((unsigned int *)v6 + 32);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v23 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v6;
    WdLogEvent5_WdError(v23);
    return 3223192368LL;
  }
  v11 = a2->Id + 1;
  if ( (unsigned int)this <= v11 )
  {
LABEL_13:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v6;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v13 = *((_QWORD *)v6 + 18);
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL * v11);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
LABEL_19:
    if ( !v13 )
      goto LABEL_13;
  }
  v15 = (char *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v17 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v15;
  if ( v15 )
  {
    *(_DWORD *)v15 = a2->Id + 1;
    *((_DWORD *)v15 + 1) = *(_DWORD *)(v13 + 12);
    *((_QWORD *)v15 + 1) = *(_QWORD *)(v13 + 16);
    *((_QWORD *)v15 + 2) = v13 + 24;
    if ( (int)ConvertMonitorCapablitiesOrigin(
                *(unsigned int *)(v13 + 8),
                (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v15 + 24)) < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v9 + 1);
    v22 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v17[1];
    if ( *v21 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9 )
      __fastfail(3u);
    *(_QWORD *)&v22->Id = v9;
    v17[1].DataSize = (SIZE_T)v21;
    *v21 = v22;
    *((_QWORD *)v9 + 1) = v22;
    *a3 = v17;
    return 0LL;
  }
  v18 = WdLogNewEntry5_WdError(v16);
  WdLogEvent5_WdError(v18);
  return 3221225495LL;
}
