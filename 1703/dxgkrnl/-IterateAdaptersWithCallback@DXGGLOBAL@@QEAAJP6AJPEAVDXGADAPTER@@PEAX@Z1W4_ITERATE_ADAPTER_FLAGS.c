/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00124D0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkCompleteTopologyTransition @ 0x1C008CD60 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1C00A12D0 (DxgkInternalDeviceIoctl.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00AFF1C (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00DD9F8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBB18 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00F0538 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00F0CD0 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkGetAdapter @ 0x1C0104F10 (DxgkGetAdapter.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkTrimProcessCommitment @ 0x1C01A3910 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C01B0170 (DxgkProcessLockScreen.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E13E4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v8; // r14d
  char v9; // r12
  struct _KPROCESS *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PEPROCESS v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD **v29; // rsi
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  DXGFASTMUTEX *v42; // [rsp+20h] [rbp-20h] BYREF
  char v43; // [rsp+28h] [rbp-18h]
  DXGFASTMUTEX *v44; // [rsp+30h] [rbp-10h] BYREF
  char v45; // [rsp+38h] [rbp-8h]

  v45 = 0;
  v44 = (DXGFASTMUTEX *)(a1 + 400);
  v4 = a4;
  if ( a1 == -400 )
  {
    v35 = WdLogNewEntry5_WdAssertion(-400LL, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v35);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v44 + 1) == CurrentThread )
  {
    v36 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v36 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v8 = 0;
  v9 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(CurrentThread);
  v14 = PsInitialSystemProcess;
  if ( CurrentProcess == PsInitialSystemProcess )
    goto LABEL_19;
  v15 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v37 = WdLogNewEntry5_WdAssertion(PsInitialSystemProcess, v11, v12, v13);
    *(_QWORD *)(v37 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v37);
    v15 = DXGGLOBAL::m_pGlobal;
  }
  v16 = v15[73];
  if ( v16 )
  {
    v43 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v14, v11, v12, v13);
    v42 = (DXGFASTMUTEX *)(v16 + 80);
    if ( v16 == -80 )
    {
      v38 = WdLogNewEntry5_WdAssertion(0LL, v17, v19, v20);
      *(_QWORD *)(v38 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v21 = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v42 + 1) == v21 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v21, v17, v19, v20);
      *(_QWORD *)(v39 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v43 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
      v40[5] = &v42;
      v40[3] = 275LL;
      v40[4] = 4LL;
      v40[6] = 0LL;
      v40[7] = 0LL;
      WdLogEvent5_WdCriticalError(v40);
    }
    DXGFASTMUTEX::Acquire(v42);
    v43 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v16 + 72) )
    {
      _mm_lfence();
      v25 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * CurrentProcessSessionId);
      v43 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v42, v22, v23, v24);
      goto LABEL_17;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v42, v22, v23, v24);
  }
  v25 = 0LL;
LABEL_17:
  if ( v25 )
    v9 = *(_BYTE *)(v25 + 18489);
LABEL_19:
  if ( v45 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v11, v12);
    v41[5] = &v44;
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  DXGFASTMUTEX::Acquire(v44);
  v29 = (_QWORD **)(a1 + 440);
  v45 = 1;
  v30 = *v29;
LABEL_22:
  while ( v30 != v29 && v30 && !v8 )
  {
    v31 = v30;
    v30 = (_QWORD *)*v30;
    _m_prefetchw(v31 + 3);
    v32 = v31[3];
    v26 = 0LL;
    while ( v32 )
    {
      v33 = v32;
      v32 = _InterlockedCompareExchange64(v31 + 3, v32 + 1, v32);
      if ( v33 == v32 )
      {
        if ( (v4 != 1 || v31[285])
          && (v4 != 2 || v31[286])
          && (v4 != 3 || !v31[285])
          && (!v9 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v31) >= 2200) )
        {
          v8 = a2(v31, a3);
        }
        v26 = _InterlockedExchangeAdd64(v31 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v26 == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v31[2], (struct DXGADAPTER *)v31);
        goto LABEL_22;
      }
    }
  }
  if ( v45 )
  {
    v45 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v44, v26, v27, v28);
  }
  return v8;
}
