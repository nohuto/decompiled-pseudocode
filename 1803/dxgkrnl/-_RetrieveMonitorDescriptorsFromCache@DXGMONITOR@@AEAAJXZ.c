/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C023B86C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A8B80 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  struct DXGADAPTER *v9; // rsi
  bool v10; // al
  unsigned int v11; // r15d
  char v12; // r14
  __int64 v13; // rcx
  EDIDCACHE *v14; // rcx
  int EdidForTarget; // esi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v22; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v6 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    WdLogEvent5_WdError(v7);
    return 3221225495LL;
  }
  v9 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  v10 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12));
  v11 = *((_DWORD *)this + 11);
  v12 = v10;
  v14 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 95);
  if ( v14 )
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v14, v9, v11, v12, (unsigned __int8 *const)v6 + 24, &v22);
  else
    EdidForTarget = -1073741801;
  if ( EdidForTarget < 0 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdDmmEvent(v16);
LABEL_18:
    operator delete[](v6);
    return (unsigned int)EdidForTarget;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24) < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    WdLogEvent5_WdError(v18);
    EdidForTarget = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v22, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v6 + 1));
  *v6 = 0LL;
  *((_DWORD *)v6 + 3) = 1;
  v6[2] = 128LL;
  v19 = operator new[](8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 17) = v19;
  if ( !v19 )
  {
    v21 = WdLogNewEntry5_WdError(v20);
    WdLogEvent5_WdError(v21);
    EdidForTarget = -1073741801;
    goto LABEL_18;
  }
  *v19 = 0LL;
  **((_QWORD **)this + 17) = v6;
  result = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = v6;
  return result;
}
