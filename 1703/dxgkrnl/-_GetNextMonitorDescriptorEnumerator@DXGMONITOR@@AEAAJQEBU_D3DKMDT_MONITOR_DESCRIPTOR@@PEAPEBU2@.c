/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C01087BC
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C0105910 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rbx
  char *v7; // rdi
  DXGMONITOR *v8; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v25; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v26; // rax
  __int64 v27; // rax

  v6 = this;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = (char *)v6 + 136;
  if ( !a2 )
    goto LABEL_27;
  v8 = *(DXGMONITOR **)v7;
  if ( *(char **)v7 == v7 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v8 != this )
  {
    if ( v7 == (char *)v8 )
      goto LABEL_27;
    v8 = *(DXGMONITOR **)v8;
  }
  this = (DXGMONITOR *)*((unsigned int *)v6 + 28);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v27 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v27 + 24) = a2;
    *(_QWORD *)(v27 + 32) = v6;
    WdLogEvent5_WdError(v27);
    return 3223192368LL;
  }
  v9 = a2->Id + 1;
  if ( (unsigned int)this <= v9 )
  {
LABEL_11:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v6;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v13 = *((_QWORD *)v6 + 16);
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v6 + 15) + 8LL * v9);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
LABEL_19:
    if ( !v13 )
      goto LABEL_11;
  }
  v15 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new(0x30uLL, 0x4D677844u, PagedPool);
  v18 = v15;
  if ( v15 )
  {
    v15->Id = a2->Id + 1;
    v15->Type = *(_DWORD *)(v13 + 12);
    v15->DataSize = *(_QWORD *)(v13 + 16);
    v15->pData = (void *)(v13 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v13 + 8), &v15->Origin) < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v7 + 1);
    v26 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v18[1];
    if ( *v25 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v7 )
      __fastfail(3u);
    *(_QWORD *)&v26->Id = v7;
    v18[1].DataSize = (SIZE_T)v25;
    *v25 = v26;
    *((_QWORD *)v7 + 1) = v26;
    *a3 = v18;
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v17, v16);
  WdLogEvent5_WdError(v19);
  return 3221225495LL;
}
