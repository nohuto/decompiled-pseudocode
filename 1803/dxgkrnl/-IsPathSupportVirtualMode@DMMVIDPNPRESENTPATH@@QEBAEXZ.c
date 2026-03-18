/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BEC74
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006358 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00BB8A0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00BEFC4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  DXGADAPTER *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // si
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct _FAST_MUTEX *v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  int MonitorInstance; // eax
  __int64 v23; // rax
  char v24; // di
  __int64 v25; // rax
  DXGMONITOR *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v30; // rcx
  __int64 v31; // rax
  DXGMONITOR *v33; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v8 = *(DXGADAPTER **)(v6 + 16);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 1;
  if ( !v8 || (v12 = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL), (_DWORD)v12 == -1) )
  {
    v21 = -1073741811;
    goto LABEL_32;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v8);
  v14 = *((_QWORD *)v8 + 307);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = 8138LL;
    WdLogEvent5_WdError(v15);
LABEL_33:
    v31 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v31);
    return !v11;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v8);
  v17 = *((_QWORD *)v8 + 307);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
    v17 = *((_QWORD *)v8 + 307);
  }
  v19 = *(struct _FAST_MUTEX **)(v17 + 96);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = v8;
    WdLogEvent5_WdError(v20);
    v21 = -1073741811;
LABEL_22:
    v25 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v25 + 24) = v21;
    WdLogEvent5_WdAssertion(v25);
    goto LABEL_32;
  }
  v33 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v12, 1, &v33);
  v21 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v23 = WdLogNewEntry5_WdDmmEvent(v9);
    *(_QWORD *)(v23 + 24) = v12;
    *(_QWORD *)(v23 + 32) = v8;
    WdLogEvent5_WdDmmEvent(v23);
    goto LABEL_19;
  }
  if ( MonitorInstance < 0 )
  {
    if ( MonitorInstance != -1073741632 )
    {
      v24 = (char)v33;
LABEL_21:
      if ( v21 < 0 )
        goto LABEL_22;
      goto LABEL_29;
    }
LABEL_19:
    v24 = 0;
    v21 = 0;
    goto LABEL_21;
  }
  v26 = v33;
  if ( !v33 || *((_DWORD *)v33 + 108) != 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !v26 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 296), 1u);
  IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v26);
  v30 = (struct _ERESOURCE *)((char *)v26 + 296);
  v24 = IsVirtualModeSuportDisabled;
  ExReleaseResourceLite(v30);
  KeLeaveCriticalRegion();
  v21 = 0;
LABEL_29:
  if ( !v24 )
    v11 = *(_BYTE *)(v14 + 132) == 0;
LABEL_32:
  if ( v21 < 0 )
    goto LABEL_33;
  return !v11;
}
