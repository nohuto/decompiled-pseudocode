/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C000A9A4 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000A9CC (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00A72F8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00A7368 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00E5D70 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01D2528 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        __int64 a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  __int64 v13; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v14; // r13
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // si
  int v20; // ecx
  DXGADAPTER *ContainingAdapter; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  DXGADAPTER *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  bool v64; // zf
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  _QWORD *v80; // rax
  _DXGKARG_COMMITVIDPN v81; // [rsp+20h] [rbp-20h] BYREF

  v9 = (unsigned int)a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, -96LL, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a8;
  v15 = *((_BYTE *)a8 + 4) & 8;
  memset(&v81, 0, sizeof(v81));
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v81.hFunctionalVidPn = 0LL;
  else
    v81.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v81.hPrimaryAllocation = a3;
  v19 = a7;
  v81.AffectedVidPnSourceId = v9;
  v20 = a7 & 1;
  LOBYTE(a7) = 0;
  v81.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v81.Flags & 0xFFFFFFFC | a6 & 1 | (2 * v20));
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v16, v17, v18);
  if ( (int)MonitorIsUsingSimulatedMonitor(ContainingAdapter, &a7, v22, v23) < 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( (_BYTE)a7 || v19 )
    v81.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v81.MonitorConnectivityChecks = a5;
  if ( !v15 )
  {
    if ( !this[1] )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v81);
    v35 = v30;
    if ( v30 == -1071774920
      || *((_DWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v31, v33, v34) + 69) == 1297040209
      && (_DWORD)v35 == -1071774976 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31, v33, v34);
      v41[3] = a2;
      v41[4] = v9;
      v41[5] = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v42, v43, v44);
      WdLogEvent5_WdDmmEvent(v41);
      if ( v81.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
        *a9 = 1;
      a7 = 0;
      v48 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v45, v46, v47);
      if ( (int)MonitorGetNumConnectedMonitor(v48, &a7, v49, v50) < 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
        WdLogEvent5_WdAssertion(v55);
      }
      if ( a7 != 1 || v81.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
        goto LABEL_20;
      v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v52, v51, v53, v54);
      v56[3] = a2;
      v56[4] = v9;
      v56[5] = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v57, v58, v59);
      WdLogEvent5_WdDmmEvent(v56);
      v64 = this[1] == 0LL;
      v81.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
      if ( v64 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
        WdLogEvent5_WdAssertion(v65);
      }
      v66 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v81);
      v35 = v66;
      if ( v66 < 0 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v68, v67, v69, v70);
        v71[3] = a2;
        v71[4] = v9;
        v71[5] = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v72, v73, v74);
        v71[6] = v35;
        WdLogEvent5_WdDmmEvent(v71);
        v40 = 2LL;
        goto LABEL_33;
      }
      DmmLogCommitVidPnFailedPacket(&v81, (unsigned int)v66, 3LL);
    }
    else if ( (int)v35 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v36[3] = a2;
      v36[4] = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this, v37, v38, v39);
      v36[5] = v35;
      WdLogEvent5_WdError(v36);
LABEL_20:
      v40 = 4LL;
LABEL_33:
      DmmLogCommitVidPnFailedPacket(&v81, (unsigned int)v35, v40);
      return (unsigned int)v35;
    }
  }
  v76 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, v14);
  v79 = v76;
  if ( v76 >= 0 )
    return 0LL;
  v80 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77);
  v80[5] = (int)(*(_DWORD *)v14 << 28) >> 28;
  v80[3] = a2;
  v80[4] = v9;
  v80[6] = v79;
  WdLogEvent5_WdError(v80);
  return (unsigned int)v79;
}
