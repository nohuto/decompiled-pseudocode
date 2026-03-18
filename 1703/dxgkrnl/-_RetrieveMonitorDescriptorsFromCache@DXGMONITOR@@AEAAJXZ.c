/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01E84F8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198918 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C01E78AC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // esi
  unsigned int v16; // r14d
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rbp
  __int64 v19; // rdx
  EDIDCACHE *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int EdidForTarget; // esi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v32; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 94) == 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v10 = operator new(0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  v15 = *((_DWORD *)this + 94);
  v16 = *((_DWORD *)this + 7);
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL);
  v18 = *(struct DXGADAPTER **)(v17 + 16);
  v20 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v8, v11, v12) + 85);
  if ( v20 )
  {
    LOBYTE(v22) = v15 != 1;
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v20, v18, v16, v22, (unsigned __int8 *const)v10 + 24, &v32);
  }
  else
  {
    EdidForTarget = -1073741801;
  }
  if ( EdidForTarget < 0 )
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdDmmEvent(v24);
LABEL_18:
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)EdidForTarget;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v10 + 24) < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v26, v25);
    WdLogEvent5_WdError(v27);
    EdidForTarget = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v32, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v10 + 1));
  *v10 = 0LL;
  *((_DWORD *)v10 + 3) = 1;
  v10[2] = 128LL;
  v28 = operator new(8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 15) = v28;
  if ( !v28 )
  {
    v31 = WdLogNewEntry5_WdError(v30, v29);
    WdLogEvent5_WdError(v31);
    EdidForTarget = -1073741801;
    goto LABEL_18;
  }
  *v28 = 0LL;
  **((_QWORD **)this + 15) = v10;
  result = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 16) = v10;
  return result;
}
