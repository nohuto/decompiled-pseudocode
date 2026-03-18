/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C01C7430
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C44F0 (DxgkInvalidateMonitorConnections.c)
 *     MonitorGetMonitorType @ 0x1C00C689C (MonitorGetMonitorType.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C022D784 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C022DA54 (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  signed int v34; // edi
  int MonitorHandle; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int MonitorType; // eax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int SimulatedMonitor; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // r8
  int v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+30h] [rbp-D0h]
  bool v60; // [rsp+40h] [rbp-C0h] BYREF
  signed int v61; // [rsp+44h] [rbp-BCh] BYREF
  struct HDXGMONITOR__ *v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 HighPart; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  char v69[32]; // [rsp+88h] [rbp-78h] BYREF
  char v70[40]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71[10]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  HighPart = (unsigned int)a1.HighPart;
  v6 = a3;
  v63 = (unsigned int)a1.HighPart;
  v7 = a4;
  memset(v71, 0, 0x48uLL);
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v71[1]);
  v11 = HIDWORD(*(unsigned __int64 *)&a1);
  v66 = 0LL;
  v71[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v71[3]) = 41;
  LOBYTE(v71[6]) = -1;
  v65 = 2179;
  if ( (qword_1C0079010 & 2) != 0 )
  {
    LODWORD(v11) = v63;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v9, &EventProfilerEnter, v10, 2179);
      LODWORD(v11) = HighPart;
    }
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 2179);
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  HighPart = v4;
  v14[4] = v4;
  v14[6] = (int)v11;
  v14[7] = a1.LowPart;
  v14[3] = v6;
  v14[5] = v7;
  WdLogEvent5_WdEvent(v14);
  v16 = v6;
  v17 = v6 & 0x7FFFFFFF;
  LODWORD(v63) = v16 >> 31;
  if ( v17 > 2 )
  {
    v18 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v18 + 24) = v17;
LABEL_52:
    WdLogEvent5_WdError(v18);
    goto LABEL_53;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( (_DWORD)v7 != 2 )
      {
        v18 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v18 + 24) = v7;
        goto LABEL_52;
      }
      v8 = 4;
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v15);
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v67);
  v24 = v20;
  if ( !v20 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 1983LL;
    WdLogEvent5_WdWarning(v25);
LABEL_53:
    LODWORD(v26) = -1073741811;
    goto LABEL_54;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v68, v20, 0LL);
  v26 = (int)COREADAPTERACCESS::AcquireExclusive(&v68);
  DXGADAPTER::ReleaseReferenceNoTracking(v24);
  if ( (int)v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = v24;
    *(_QWORD *)(v30 + 32) = v26;
    goto LABEL_49;
  }
  v60 = 0;
  LODWORD(v26) = DmmIsTargetForcable(v24, v4, &v60, 0);
  if ( (int)v26 >= 0 && !v60 )
  {
    v33 = WdLogNewEntry5_WdEvent(v32, v31);
    *(_QWORD *)(v33 + 24) = v4;
    *(_QWORD *)(v33 + 32) = v24;
    WdLogEvent5_WdEvent(v33);
    LODWORD(v26) = -1073741811;
  }
  v34 = 0;
  v61 = 0;
  if ( (int)v26 >= 0 )
  {
    v62 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v24, (unsigned int)v4, 0LL, DxgkHandleForceProjectionMonitor, &v62);
    LODWORD(v26) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v62 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v45 + 24) = 2051LL;
          WdLogEvent5_WdAssertion(v45);
        }
        LODWORD(v26) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v24, v62, &v61, v39);
      v34 = v61;
      LODWORD(v26) = MonitorType;
      if ( MonitorType >= 0 && !v61 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v43 + 24) = 2040LL;
        WdLogEvent5_WdAssertion(v43);
      }
      if ( (int)MonitorReleaseMonitorHandle(v24, (__int64)v62, DxgkHandleForceProjectionMonitor, v42) < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v37);
        *(_QWORD *)(v44 + 24) = 2045LL;
        WdLogEvent5_WdAssertion(v44);
      }
    }
    if ( (int)v26 >= 0 && v17 != 2 )
    {
      if ( !v17 )
      {
        if ( v34 && (v34 != 1 || v8 == 4) && v34 != 5 && (int)v8 >= v34 )
        {
          v46 = WdLogNewEntry5_WdError(v37);
          *(_QWORD *)(v46 + 24) = v8;
          *(_QWORD *)(v46 + 32) = v34;
          WdLogEvent5_WdError(v46);
          goto LABEL_46;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v24, v58, 0, v59, (__int64)v71);
        goto LABEL_45;
      }
      if ( v34 )
      {
        if ( v8 == v34 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v24, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v71);
LABEL_45:
          LODWORD(v26) = SimulatedMonitor;
          goto LABEL_46;
        }
        v49 = WdLogNewEntry5_WdWarning(v37, v36, v38);
        *(_QWORD *)(v49 + 24) = v8;
        *(_QWORD *)(v49 + 32) = v34;
        WdLogEvent5_WdWarning(v49);
      }
      else
      {
        v48 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v48 + 24) = HighPart;
        WdLogEvent5_WdError(v48);
      }
      LODWORD(v26) = -1073741811;
    }
  }
LABEL_46:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v68);
  if ( !(_BYTE)v63 )
    goto LABEL_50;
  v50 = DxgkInvalidateMonitorConnections(1uLL);
  v54 = v50;
  if ( v50 >= 0 )
    goto LABEL_50;
  v30 = WdLogNewEntry5_WdWarning(v52, v51, v53);
  *(_QWORD *)(v30 + 24) = v54;
LABEL_49:
  WdLogEvent5_WdWarning(v30);
LABEL_50:
  COREACCESS::~COREACCESS((COREACCESS *)v70);
  COREACCESS::~COREACCESS((COREACCESS *)v69);
LABEL_54:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v55, &EventProfilerExit, v56, v65);
  return (unsigned int)v26;
}
