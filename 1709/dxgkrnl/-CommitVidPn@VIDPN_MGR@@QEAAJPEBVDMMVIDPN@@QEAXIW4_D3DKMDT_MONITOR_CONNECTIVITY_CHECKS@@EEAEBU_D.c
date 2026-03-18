/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0006A54 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00AB084 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00E4E1C (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00E4E8C (MonitorIsUsingSimulatedMonitor.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01ED9B0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        unsigned __int8 a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  char v13; // di
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  _DXGKARG_COMMITVIDPN v38; // [rsp+20h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = *((_BYTE *)a8 + 4) & 8;
  memset(&v38, 0, sizeof(v38));
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v38.hFunctionalVidPn = 0LL;
  else
    v38.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v38.hPrimaryAllocation = a3;
  v38.AffectedVidPnSourceId = v9;
  v14 = *(_DWORD *)&v38.Flags & 0xFFFFFFFC | a6 & 1 | (2 * (a7 & 1));
  v38.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v38.Flags & 0xFFFFFFFC | a6 & 1 | (2 * (a7 & 1)));
  if ( !this[1] )
  {
    v24 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)this[1] + 2)) < 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( a7 )
    v38.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v38.MonitorConnectivityChecks = a5;
  if ( v13 )
    goto LABEL_17;
  if ( !this[1] )
  {
    v26 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v26);
  }
  v16 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v38);
  v18 = v16;
  if ( v16 == -1071774920 || v16 == -1071774976 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17);
    v31[3] = a2;
    v31[4] = v9;
    if ( !this[1] )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v32);
    }
    v31[5] = *((_QWORD *)this[1] + 2);
    WdLogEvent5_WdDmmEvent(v31);
    if ( v38.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
      *a9 = 1;
    if ( !this[1] )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v34);
    }
    if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)this[1] + 2)) < 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v36);
    }
    goto LABEL_24;
  }
  if ( v16 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v28[3] = a2;
    if ( !this[1] )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v29);
    }
    v28[4] = *((_QWORD *)this[1] + 2);
    v28[5] = v18;
    WdLogEvent5_WdError(v28);
LABEL_24:
    DmmLogCommitVidPnFailedPacket(&v38, (unsigned int)v18, 4LL);
    return (unsigned int)v18;
  }
LABEL_17:
  v19 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, a8);
  v21 = v19;
  if ( v19 >= 0 )
    return 0LL;
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v37[5] = (int)(*(_DWORD *)a8 << 28) >> 28;
  v37[3] = a2;
  v37[4] = v9;
  v37[6] = v21;
  WdLogEvent5_WdError(v37);
  return (unsigned int)v21;
}
