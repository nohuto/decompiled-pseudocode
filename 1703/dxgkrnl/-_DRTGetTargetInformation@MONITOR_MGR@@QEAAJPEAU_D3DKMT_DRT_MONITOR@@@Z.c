/*
 * XREFs of ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01E2648
 * Callers:
 *     MonitorDRTTest @ 0x1C01E3608 (MonitorDRTTest.c)
 * Callees:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall MONITOR_MGR::_DRTGetTargetInformation(
        MONITOR_MGR *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v12; // rcx
  unsigned int MonitorInformationForTargets; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  struct _D3DKMT_DRT_MONITOR *v20; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-10h]

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((unsigned int *)a2 + 4);
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( (unsigned int)v8 > *(_DWORD *)(v9 + 1164) )
  {
    v10 = WdLogNewEntry5_WdWarning(v9, v8, a3, a4);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)a2 + 4);
LABEL_7:
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  v12 = 12 * v8 + 20;
  if ( *((unsigned int *)a2 + 1) < v12 )
  {
    v10 = WdLogNewEntry5_WdWarning(v12, v8, a3, a4);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)a2 + 4);
    *(_QWORD *)(v10 + 32) = *((unsigned int *)a2 + 1);
    goto LABEL_7;
  }
  v21 = 0;
  v20 = a2;
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   (struct _FAST_MUTEX *)this,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&DRTGetTargetCBContext::_pDRTTargetInfoCollectorCB,
                                   &v20,
                                   a4);
  v17 = MonitorInformationForTargets;
  if ( MonitorInformationForTargets == -1073741275 )
  {
    v18 = v21;
    if ( *((_DWORD *)a2 + 4) < v21 )
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v17, v14, v15, v16);
      WdLogEvent5_WdDmmEvent(v19);
      v18 = v21;
    }
    LODWORD(v17) = 0;
    *((_DWORD *)a2 + 4) = v18;
  }
  return (unsigned int)v17;
}
