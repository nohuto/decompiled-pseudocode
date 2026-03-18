/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0211648
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00442EC (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00C7B00 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00C7B70 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C015D75C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C0214394 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  __int64 v13; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v14; // r13
  char v15; // di
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // si
  int v19; // ecx
  ADAPTER_DISPLAY *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  ADAPTER_DISPLAY *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rsi
  ADAPTER_DISPLAY *v31; // rax
  __int64 v32; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rsi
  ADAPTER_DISPLAY *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  ADAPTER_DISPLAY *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdi
  ADAPTER_DISPLAY *v46; // rax
  __int64 v47; // rax
  ADAPTER_DISPLAY *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  ADAPTER_DISPLAY *v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  _DXGKARG_COMMITVIDPN v61; // [rsp+20h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a8;
  v15 = *((_BYTE *)a8 + 4) & 8;
  memset(&v61, 0, sizeof(v61));
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v61.hFunctionalVidPn = 0LL;
  else
    v61.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v61.hPrimaryAllocation = a3;
  v18 = a7;
  v61.AffectedVidPnSourceId = v9;
  v19 = a7 & 1;
  LOBYTE(a7) = 0;
  v61.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v61.Flags & 0xFFFFFFFC | a6 & 1 | (2 * v19));
  v20 = this[1];
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v21);
    v20 = this[1];
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)v20 + 2), (char *)&a7, v16, v17) < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (_BYTE)a7 || v18 )
    v61.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v61.MonitorConnectivityChecks = a5;
  if ( v15 )
    goto LABEL_45;
  v24 = this[1];
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v25);
    v24 = this[1];
  }
  v26 = ADAPTER_DISPLAY::DdiCommitVidPn(v24, &v61);
  v28 = v26;
  if ( v26 != -1071774920 && v26 != -1071774976 )
  {
    if ( v26 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v30[3] = a2;
      v31 = this[1];
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v32);
        v31 = this[1];
      }
      v30[4] = *((_QWORD *)v31 + 2);
      v30[5] = v28;
      WdLogEvent5_WdError(v30);
LABEL_23:
      DmmLogCommitVidPnFailedPacket(&v61, (unsigned int)v28, 4LL);
      return (unsigned int)v28;
    }
    goto LABEL_45;
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27);
  v35[3] = a2;
  v35[4] = v9;
  v36 = this[1];
  if ( !v36 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v34);
    WdLogEvent5_WdAssertion(v37);
    v36 = this[1];
  }
  v35[5] = *((_QWORD *)v36 + 2);
  WdLogEvent5_WdDmmEvent(v35);
  if ( v61.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
    *a9 = 1;
  a7 = 0;
  v40 = this[1];
  if ( !v40 )
  {
    v41 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v41);
    v40 = this[1];
  }
  if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)v40 + 2), &a7, v38, v39) < 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v42);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( a7 != 1 || v61.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
    goto LABEL_23;
  v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42);
  v45[3] = a2;
  v45[4] = v9;
  v46 = this[1];
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v44);
    WdLogEvent5_WdAssertion(v47);
    v46 = this[1];
  }
  v45[5] = *((_QWORD *)v46 + 2);
  WdLogEvent5_WdDmmEvent(v45);
  v48 = this[1];
  v61.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  if ( !v48 )
  {
    v49 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v49);
    v48 = this[1];
  }
  v50 = ADAPTER_DISPLAY::DdiCommitVidPn(v48, &v61);
  v52 = v50;
  if ( v50 >= 0 )
  {
    DmmLogCommitVidPnFailedPacket(&v61, (unsigned int)v50, 3LL);
LABEL_45:
    v57 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, v14);
    v59 = v57;
    if ( v57 >= 0 )
      return 0LL;
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
    v60[5] = (int)(*(_DWORD *)v14 << 28) >> 28;
    v60[3] = a2;
    v60[4] = v9;
    v60[6] = v59;
    WdLogEvent5_WdError(v60);
    return (unsigned int)v59;
  }
  v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v51);
  v54[3] = a2;
  v54[4] = v9;
  v55 = this[1];
  if ( !v55 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v53);
    WdLogEvent5_WdAssertion(v56);
    v55 = this[1];
  }
  v54[5] = *((_QWORD *)v55 + 2);
  v54[6] = v52;
  WdLogEvent5_WdDmmEvent(v54);
  DmmLogCommitVidPnFailedPacket(&v61, (unsigned int)v52, 2LL);
  return (unsigned int)v52;
}
