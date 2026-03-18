/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106DA4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetMonitorDescriptor @ 0x1C0115ED8 (DpiGetMonitorDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r14
  int MonitorDescriptor; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  SIZE_T v20; // rax
  PVOID v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rcx

  if ( !*((_QWORD *)this + 5) )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v30);
  }
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = (char *)operator new(0x9FuLL, 0x4D677844u, PagedPool);
    v11 = v7;
    if ( !v7 )
    {
      v38 = WdLogNewEntry5_WdError(v9, v8);
      WdLogEvent5_WdError(v38);
      LODWORD(v17) = -1073741801;
      goto LABEL_40;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(*((_QWORD *)this + 5), v6 << 7, v10, v7 + 24);
    v17 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdWarning(v33);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v31 + 24) = v17;
      WdLogEvent5_WdError(v31);
      goto LABEL_18;
    }
    *(_QWORD *)v11 = v5;
    v18 = -v6;
    v11[2] = 2;
    *((_QWORD *)v11 + 2) = 128LL;
    v5 = v11;
    v19 = -(v6++ != 0);
    v11[3] = (v19 & 0xFE) + 1;
    if ( v6 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v6;
LABEL_18:
  LODWORD(v17) = 0;
  ExFreePoolWithTag(v11, 0);
LABEL_19:
  if ( (int)v17 < 0 )
  {
LABEL_40:
    while ( v5 )
    {
      v39 = v5;
      v5 = (_QWORD *)*v5;
      ExFreePoolWithTag(v39, 0);
    }
    return (unsigned int)v17;
  }
  if ( v5 )
  {
    if ( !v6 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18, v13, v15, v16);
      WdLogEvent5_WdAssertion(v34);
    }
    v20 = 8LL * v6;
    if ( !is_mul_ok(v6, 8uLL) )
      v20 = -1LL;
    v21 = operator new(v20, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v21;
    if ( v21 )
    {
      for ( *((_DWORD *)this + 28) = v6; v6; *v23 = 0LL )
      {
        if ( !v5 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
          WdLogEvent5_WdAssertion(v36);
        }
        *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * --v6) = v5;
        v5 = (_QWORD *)*v5;
        v23 = *(_QWORD **)(*((_QWORD *)this + 15) + 8LL * v6);
      }
      if ( v5 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v37);
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v23, v22);
      WdLogEvent5_WdError(v35);
      LODWORD(v17) = -1073741801;
    }
  }
  return (unsigned int)v17;
}
