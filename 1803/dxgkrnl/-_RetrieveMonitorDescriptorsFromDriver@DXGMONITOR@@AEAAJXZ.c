/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C023BA38
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00480F0 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     DpiGetMonitorDescriptor @ 0x1C020B2A4 (DpiGetMonitorDescriptor.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C020DF34 (DpiQueryDisplayIDDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // r14
  unsigned int v7; // esi
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // r15
  int MonitorDescriptor; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  SIZE_T v24; // rax
  PVOID v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rsi
  PVOID v36; // rax
  int DisplayIDDescriptor; // eax
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // r8d
  char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 7) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v8 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
    v11 = v8;
    if ( !v8 )
    {
      v29 = WdLogNewEntry5_WdError(v9);
      WdLogEvent5_WdError(v29);
      LODWORD(v17) = -1073741801;
LABEL_38:
      while ( v6 )
      {
        v30 = v6;
        v6 = *(char **)v6;
        operator delete[](v30);
      }
      goto LABEL_39;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(*((_QWORD *)this + 7), v7 << 7, v10, v8 + 24);
    v17 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v7 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v22 + 24) = this;
      WdLogEvent5_WdWarning(v22);
      goto LABEL_22;
    }
    if ( MonitorDescriptor == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v7;
      goto LABEL_22;
    }
    if ( MonitorDescriptor < 0 )
      break;
    *(_QWORD *)v11 = v6;
    v18 = -v7;
    *((_DWORD *)v11 + 2) = 2;
    *((_QWORD *)v11 + 2) = 128LL;
    v6 = v11;
    v19 = -(v7++ != 0);
    *((_DWORD *)v11 + 3) = (v19 & 0xFE) + 1;
    if ( v7 > 0xFE )
      goto LABEL_23;
  }
  v20 = WdLogNewEntry5_WdError(v14);
  *(_QWORD *)(v20 + 24) = v17;
  WdLogEvent5_WdError(v20);
LABEL_22:
  operator delete[](v11);
  LODWORD(v17) = 0;
LABEL_23:
  if ( (int)v17 < 0 )
    goto LABEL_38;
  if ( !v6 )
    goto LABEL_39;
  if ( !v7 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = 8LL * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v24 = -1LL;
  v25 = operator new[](v24, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 17) = v25;
  if ( !v25 )
    goto LABEL_47;
  for ( *((_DWORD *)this + 32) = v7; v7; *v26 = 0LL )
  {
    if ( !v6 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v27);
    }
    *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * --v7) = v6;
    v6 = *(char **)v6;
    v26 = *(_QWORD **)(*((_QWORD *)this + 17) + 8LL * v7);
  }
  if ( v6 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v26);
    WdLogEvent5_WdAssertion(v28);
  }
LABEL_39:
  if ( (int)v17 >= 0 )
  {
    v31 = *((_QWORD *)this + 7);
    LODWORD(Size) = 0;
    if ( (unsigned int)DpiQueryDisplayIDDescriptor(v31, (int *)&Size, 0LL) == -1073741789 )
    {
      v35 = (unsigned int)Size;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        v46 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v46 + 24) = v35;
        WdLogEvent5_WdWarning(v46);
        return (unsigned int)v17;
      }
      v36 = operator new[]((unsigned int)Size, 0x4D677844u, PagedPool);
      *((_QWORD *)this + 20) = v36;
      if ( v36 )
      {
        memset(v36, 0, (unsigned int)v35);
        DisplayIDDescriptor = DpiQueryDisplayIDDescriptor(*((_QWORD *)this + 7), (int *)&Size, *((_QWORD *)this + 20));
        v39 = DisplayIDDescriptor;
        if ( DisplayIDDescriptor < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v38);
          *(_QWORD *)(v44 + 24) = v39;
          WdLogEvent5_WdError(v44);
          operator delete[](*((void **)this + 20));
          *((_QWORD *)this + 20) = 0LL;
        }
        else
        {
          v40 = Size;
          v41 = (char *)*((_QWORD *)this + 20);
          *((_DWORD *)this + 38) = Size;
          DisplayID_Initialize((DXGMONITOR *)((char *)this + 168), v41, v40);
          if ( !*((_DWORD *)this + 32) )
          {
            v43 = WdLogNewEntry5_WdError(v42);
            WdLogEvent5_WdError(v43);
          }
        }
        return (unsigned int)v17;
      }
LABEL_47:
      v45 = WdLogNewEntry5_WdError(v26);
      WdLogEvent5_WdError(v45);
      LODWORD(v17) = -1073741801;
    }
  }
  return (unsigned int)v17;
}
