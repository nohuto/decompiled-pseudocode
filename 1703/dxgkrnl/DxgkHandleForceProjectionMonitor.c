/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C01AB420
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorType @ 0x1C00F0468 (MonitorGetMonitorType.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01E378C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  signed int v20; // edi
  DXGGLOBAL *Global; // rax
  __int64 v22; // r9
  struct DXGADAPTER *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DXGADAPTER *v28; // r14
  __int64 v29; // rax
  bool v30; // zf
  int v31; // r8d
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int MonitorHandle; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int MonitorType; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int SimulatedMonitor; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  int v62; // [rsp+20h] [rbp-B9h]
  int v63; // [rsp+30h] [rbp-A9h]
  char v64[4]; // [rsp+40h] [rbp-99h] BYREF
  signed int v65; // [rsp+44h] [rbp-95h] BYREF
  struct HDXGMONITOR__ *v66; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-89h]
  LONG HighPart; // [rsp+54h] [rbp-85h]
  unsigned __int64 v69; // [rsp+58h] [rbp-81h] BYREF
  __int64 v70; // [rsp+60h] [rbp-79h] BYREF
  char v71[32]; // [rsp+68h] [rbp-71h] BYREF
  char v72[40]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v73[8]; // [rsp+B0h] [rbp-29h] BYREF

  v4 = a2;
  v6 = a3;
  HighPart = a1.HighPart;
  v7 = a4;
  memset(v73, 0, sizeof(v73));
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v73[1]);
  v73[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v73[3]) = 41;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v9);
  v11 = v7;
  v10[6] = HighPart;
  v10[7] = a1.LowPart;
  v10[3] = v6;
  v10[4] = v4;
  v10[5] = v7;
  WdLogEvent5_WdEvent(v10);
  v16 = v6;
  v17 = v6 & 0x7FFFFFFF;
  v67 = v16 >> 31;
  if ( v17 > 2 )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v18 + 24) = v17;
LABEL_3:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( !(_DWORD)v7 )
  {
    v8 = 2;
LABEL_7:
    v20 = 0;
    goto LABEL_8;
  }
  if ( (_DWORD)v7 == 1 )
    goto LABEL_7;
  v30 = (_DWORD)v7 == 2;
  v8 = 4;
  v20 = 0;
  if ( !v30 )
    v8 = 0;
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v18 + 24) = v11;
    goto LABEL_3;
  }
LABEL_8:
  Global = DXGGLOBAL::GetGlobal(v13, v12, v14, v15);
  v23 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v69, v22);
  v28 = v23;
  if ( !v23 )
  {
    v29 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = 2573LL;
    WdLogEvent5_WdWarning(v29);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v70, v23, 0LL);
  v32 = (int)COREADAPTERACCESS::AcquireExclusive(&v70, v31 + 1);
  DXGADAPTER::ReleaseReference(v28);
  if ( (int)v32 < 0 )
  {
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v37 + 24) = v28;
    *(_QWORD *)(v37 + 32) = v32;
    goto LABEL_51;
  }
  v64[0] = 0;
  LODWORD(v32) = DmmIsTargetForcable(v28, (unsigned int)v4, v64, 0LL);
  if ( (int)v32 >= 0 && !v64[0] )
  {
    v39 = WdLogNewEntry5_WdEvent(v38);
    *(_QWORD *)(v39 + 24) = v4;
    *(_QWORD *)(v39 + 32) = v28;
    WdLogEvent5_WdEvent(v39);
    LODWORD(v32) = -1073741811;
  }
  v65 = 0;
  if ( (int)v32 >= 0 )
  {
    v66 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v28, (unsigned int)v4, 0LL, DxgkHandleForceProjectionMonitor, &v66);
    LODWORD(v32) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v66 )
        {
          v51 = WdLogNewEntry5_WdAssertion(0LL, v41, v42, v43);
          *(_QWORD *)(v51 + 24) = 2641LL;
          WdLogEvent5_WdAssertion(v51);
        }
        LODWORD(v32) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v28, v66, &v65, v43);
      v20 = v65;
      LODWORD(v32) = MonitorType;
      if ( MonitorType >= 0 && !v65 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
        *(_QWORD *)(v49 + 24) = 2630LL;
        WdLogEvent5_WdAssertion(v49);
      }
      if ( (int)MonitorReleaseMonitorHandle(v28, v66, DxgkHandleForceProjectionMonitor, v48) < 0 )
      {
        v50 = WdLogNewEntry5_WdAssertion(0LL, v41, v42, v43);
        *(_QWORD *)(v50 + 24) = 2635LL;
        WdLogEvent5_WdAssertion(v50);
      }
    }
    if ( (int)v32 >= 0 && v17 != 2 )
    {
      if ( !v17 )
      {
        if ( v20 && (v20 != 1 || v8 == 4) && v20 != 5 && (int)v8 >= v20 )
        {
          v52 = WdLogNewEntry5_WdError(0LL, v41);
          *(_QWORD *)(v52 + 24) = v8;
          *(_QWORD *)(v52 + 32) = v20;
          WdLogEvent5_WdError(v52);
          goto LABEL_48;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v28, v62, 0, v63, (__int64)v73);
        goto LABEL_47;
      }
      if ( v20 )
      {
        if ( v8 == v20 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v28, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v73);
LABEL_47:
          LODWORD(v32) = SimulatedMonitor;
          goto LABEL_48;
        }
        v55 = WdLogNewEntry5_WdWarning(0LL, v41, v42, v43);
        *(_QWORD *)(v55 + 24) = v8;
        *(_QWORD *)(v55 + 32) = v20;
        WdLogEvent5_WdWarning(v55);
      }
      else
      {
        v54 = WdLogNewEntry5_WdError(0LL, v41);
        *(_QWORD *)(v54 + 24) = v4;
        WdLogEvent5_WdError(v54);
      }
      LODWORD(v32) = -1073741811;
    }
  }
LABEL_48:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v70);
  if ( !(_BYTE)v67 )
    goto LABEL_52;
  v56 = DxgkInvalidateMonitorConnections(1uLL);
  v61 = v56;
  if ( v56 >= 0 )
    goto LABEL_52;
  v37 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
  *(_QWORD *)(v37 + 24) = v61;
LABEL_51:
  WdLogEvent5_WdWarning(v37);
LABEL_52:
  COREACCESS::~COREACCESS((COREACCESS *)v72);
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  return (unsigned int)v32;
}
