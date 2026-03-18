/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01093F8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0014168 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiGetMonitorDescriptor @ 0x1C0107FEC (DpiGetMonitorDescriptor.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C012394C (DpiQueryDisplayIDDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(DXGMONITOR *this)
{
  char *v2; // r14
  unsigned int v3; // esi
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // r15
  int MonitorDescriptor; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  SIZE_T v15; // rax
  PVOID v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // rcx
  __int64 v35; // rsi
  PVOID v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // r8d
  char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 5) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((_DWORD *)this + 104) != 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  v2 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = (char *)operator new(0x9FuLL, 0x4D677844u, PagedPool);
    v7 = v4;
    if ( !v4 )
    {
      v33 = WdLogNewEntry5_WdError(v5);
      WdLogEvent5_WdError(v33);
      LODWORD(v12) = -1073741801;
LABEL_41:
      while ( v2 )
      {
        v34 = v2;
        v2 = *(char **)v2;
        ExFreePoolWithTag(v34, 0);
      }
      goto LABEL_32;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(*((_QWORD *)this + 5), v3 << 7, v6, v4 + 24);
    v12 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v3 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v27 + 24) = v12;
      WdLogEvent5_WdError(v27);
      goto LABEL_18;
    }
    *(_QWORD *)v7 = v2;
    v13 = -v3;
    *((_DWORD *)v7 + 2) = 2;
    *((_QWORD *)v7 + 2) = 128LL;
    v2 = v7;
    v14 = -(v3++ != 0);
    *((_DWORD *)v7 + 3) = (v14 & 0xFE) + 1;
    if ( v3 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = v3;
LABEL_18:
  ExFreePoolWithTag(v7, 0);
  LODWORD(v12) = 0;
LABEL_19:
  if ( (int)v12 < 0 )
    goto LABEL_41;
  if ( !v2 )
    goto LABEL_32;
  if ( !v3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v30);
  }
  v15 = 8LL * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    v15 = -1LL;
  v16 = operator new(v15, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 15) = v16;
  if ( !v16 )
    goto LABEL_51;
  for ( *((_DWORD *)this + 28) = v3; v3; *v17 = 0LL )
  {
    if ( !v2 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v31);
    }
    *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * --v3) = v2;
    v2 = *(char **)v2;
    v17 = *(_QWORD **)(*((_QWORD *)this + 15) + 8LL * v3);
  }
  if ( v2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v32);
  }
LABEL_32:
  if ( (int)v12 >= 0 )
  {
    v18 = *((_QWORD *)this + 5);
    LODWORD(Size) = 0;
    if ( (unsigned int)DpiQueryDisplayIDDescriptor(v18, &Size, 0LL) == -1073741789 )
    {
      v35 = (unsigned int)Size;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        v47 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v47 + 24) = v35;
        WdLogEvent5_WdWarning(v47);
        return (unsigned int)v12;
      }
      v36 = operator new((unsigned int)Size, 0x4D677844u, PagedPool);
      *((_QWORD *)this + 18) = v36;
      if ( v36 )
      {
        memset(v36, 0, (unsigned int)v35);
        v37 = DpiQueryDisplayIDDescriptor(*((_QWORD *)this + 5), &Size, *((_QWORD *)this + 18));
        v39 = v37;
        if ( v37 < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v38);
          *(_QWORD *)(v44 + 24) = v39;
          WdLogEvent5_WdError(v44);
          v45 = (void *)*((_QWORD *)this + 18);
          if ( v45 )
            ExFreePoolWithTag(v45, 0);
          *((_QWORD *)this + 18) = 0LL;
        }
        else
        {
          v40 = Size;
          v41 = (char *)*((_QWORD *)this + 18);
          *((_DWORD *)this + 34) = Size;
          DisplayID_Initialize((DXGMONITOR *)((char *)this + 152), v41, v40);
          if ( !*((_DWORD *)this + 28) )
          {
            v43 = WdLogNewEntry5_WdError(v42);
            WdLogEvent5_WdError(v43);
          }
        }
        return (unsigned int)v12;
      }
LABEL_51:
      v46 = WdLogNewEntry5_WdError(v17);
      WdLogEvent5_WdError(v46);
      LODWORD(v12) = -1073741801;
    }
  }
  return (unsigned int)v12;
}
