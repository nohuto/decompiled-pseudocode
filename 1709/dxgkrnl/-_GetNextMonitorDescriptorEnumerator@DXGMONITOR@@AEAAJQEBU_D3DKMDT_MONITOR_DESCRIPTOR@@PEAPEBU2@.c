/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C010B638
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C0122F40 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0108624 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  DXGMONITOR *v5; // rbx
  char *v6; // rdi
  DXGMONITOR *v7; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v14; // rax
  __int64 v15; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v20; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v21; // rax
  __int64 v22; // rax

  v5 = this;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = (char *)v5 + 176;
  if ( !a2 )
    goto LABEL_27;
  v7 = *(DXGMONITOR **)v6;
  if ( *(char **)v6 == v6 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v7 != this )
  {
    if ( v6 == (char *)v7 )
      goto LABEL_27;
    v7 = *(DXGMONITOR **)v7;
  }
  this = (DXGMONITOR *)*((unsigned int *)v5 + 28);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v22 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = v5;
    WdLogEvent5_WdError(v22);
    return 3223192368LL;
  }
  v8 = a2->Id + 1;
  if ( (unsigned int)this <= v8 )
  {
LABEL_11:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v5;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v12 = *((_QWORD *)v5 + 16);
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v5 + 15) + 8LL * v8);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v13);
LABEL_19:
    if ( !v12 )
      goto LABEL_11;
  }
  v14 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new(0x30uLL, 0x4D677844u, PagedPool);
  v16 = v14;
  if ( v14 )
  {
    v14->Id = a2->Id + 1;
    v14->Type = *(_DWORD *)(v12 + 12);
    v14->DataSize = *(_QWORD *)(v12 + 16);
    v14->pData = (void *)(v12 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v12 + 8), &v14->Origin) < 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v6 + 1);
    v21 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v16[1];
    if ( *v20 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v6 )
      __fastfail(3u);
    *(_QWORD *)&v21->Id = v6;
    v16[1].DataSize = (SIZE_T)v20;
    *v20 = v21;
    *((_QWORD *)v6 + 1) = v21;
    *a3 = v16;
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdError(v15);
  WdLogEvent5_WdError(v17);
  return 3221225495LL;
}
