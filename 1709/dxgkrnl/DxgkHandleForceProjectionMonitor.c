/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C01C4FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C00E44B0 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00FBDA0 (DxgkInvalidateMonitorConnections.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01FDE0C (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01FE0DC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  signed int v23; // edi
  DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int MonitorHandle; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int MonitorType; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int SimulatedMonitor; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdi
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v56[4]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v57; // [rsp+44h] [rbp-BCh] BYREF
  struct HDXGMONITOR__ *v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+50h] [rbp-B0h]
  LONG HighPart; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A0h] BYREF
  char v63[32]; // [rsp+68h] [rbp-98h] BYREF
  char v64[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65[10]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2;
  v6 = a3;
  HighPart = a1.HighPart;
  v7 = a4;
  memset(v65, 0, 0x48uLL);
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v65[1]);
  v65[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v65[3]) = 41;
  LOBYTE(v65[6]) = -1;
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
  v13[6] = HighPart;
  v13[7] = a1.LowPart;
  v13[3] = v6;
  v13[4] = v4;
  v13[5] = v7;
  WdLogEvent5_WdEvent(v13);
  v14 = (unsigned int)v6 >> 31;
  v15 = v6 & 0x7FFFFFFF;
  v59 = v14;
  if ( v15 > 2 )
  {
    v16 = WdLogNewEntry5_WdError(2LL);
    *(_QWORD *)(v16 + 24) = v15;
LABEL_3:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = 4;
      if ( (_DWORD)v7 != 2 )
      {
        v16 = WdLogNewEntry5_WdError(2LL);
        *(_QWORD *)(v16 + 24) = v7;
        goto LABEL_3;
      }
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(2LL);
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v61);
  v23 = 0;
  v24 = v19;
  if ( !v19 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v25 + 24) = 1958LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v62, v19, 0LL);
  v27 = (int)COREADAPTERACCESS::AcquireExclusive(&v62, v26 + 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v24);
  if ( (int)v27 < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v24;
    *(_QWORD *)(v31 + 32) = v27;
    goto LABEL_48;
  }
  v56[0] = 0;
  LODWORD(v27) = DmmIsTargetForcable((__int64)v24, v4, v56, 0);
  if ( (int)v27 >= 0 && !v56[0] )
  {
    v36 = WdLogNewEntry5_WdEvent(v33, v32, v34, v35);
    *(_QWORD *)(v36 + 24) = v4;
    *(_QWORD *)(v36 + 32) = v24;
    WdLogEvent5_WdEvent(v36);
    LODWORD(v27) = -1073741811;
  }
  v57 = 0;
  if ( (int)v27 >= 0 )
  {
    v58 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v24, (unsigned int)v4, 0, DxgkHandleForceProjectionMonitor, &v58);
    LODWORD(v27) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v58 )
        {
          v44 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v44 + 24) = 2026LL;
          WdLogEvent5_WdAssertion(v44);
        }
        LODWORD(v27) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v24, v58, &v57);
      v23 = v57;
      LODWORD(v27) = MonitorType;
      if ( MonitorType >= 0 && !v57 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v42 + 24) = 2015LL;
        WdLogEvent5_WdAssertion(v42);
      }
      if ( (int)MonitorReleaseMonitorHandle(v24, (struct _IO_REMOVE_LOCK *)v58, DxgkHandleForceProjectionMonitor) < 0 )
      {
        v43 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v43 + 24) = 2020LL;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    if ( (int)v27 >= 0 && v15 != 2 )
    {
      if ( !v15 )
      {
        if ( v23 && (v23 != 1 || v8 == 4) && v23 != 5 && (int)v8 >= v23 )
        {
          v45 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v45 + 24) = v8;
          *(_QWORD *)(v45 + 32) = v23;
          WdLogEvent5_WdError(v45);
          goto LABEL_45;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v24, v54, 0, v55, (__int64)v65);
        goto LABEL_44;
      }
      if ( v23 )
      {
        if ( v8 == v23 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v24, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v65);
LABEL_44:
          LODWORD(v27) = SimulatedMonitor;
          goto LABEL_45;
        }
        v48 = WdLogNewEntry5_WdWarning(0LL, v38, v39);
        *(_QWORD *)(v48 + 24) = v8;
        *(_QWORD *)(v48 + 32) = v23;
        WdLogEvent5_WdWarning(v48);
      }
      else
      {
        v47 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v47 + 24) = v4;
        WdLogEvent5_WdError(v47);
      }
      LODWORD(v27) = -1073741811;
    }
  }
LABEL_45:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v62);
  if ( !(_BYTE)v59 )
    goto LABEL_49;
  v49 = DxgkInvalidateMonitorConnections(1uLL);
  v53 = v49;
  if ( v49 >= 0 )
    goto LABEL_49;
  v31 = WdLogNewEntry5_WdWarning(v51, v50, v52);
  *(_QWORD *)(v31 + 24) = v53;
LABEL_48:
  WdLogEvent5_WdWarning(v31);
LABEL_49:
  COREACCESS::~COREACCESS((COREACCESS *)v64);
  COREACCESS::~COREACCESS((COREACCESS *)v63);
  return (unsigned int)v27;
}
