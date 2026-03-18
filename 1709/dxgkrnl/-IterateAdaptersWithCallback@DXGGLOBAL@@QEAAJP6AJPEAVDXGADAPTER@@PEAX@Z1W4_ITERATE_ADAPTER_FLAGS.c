/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000EFC0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0090080 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00D2B10 (DxgkGetDisplayConfigBufferSizes.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00D9938 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00DB780 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DEFF8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0B7C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00E0D88 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E761C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1C00F4430 (DxgkInternalDeviceIoctl.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00FBCB0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C00FEAB0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkGetAdapter @ 0x1C01045D0 (DxgkGetAdapter.c)
 *     DxgkTrimProcessCommitment @ 0x1C01BB8B0 (DxgkTrimProcessCommitment.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01C3AE8 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C01C9F30 (DxgkProcessLockScreen.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FB6F4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB790 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB828 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v8; // r14d
  char v9; // r12
  struct _KPROCESS *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  PEPROCESS v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v17; // r8
  struct _KTHREAD *v18; // rcx
  __int64 v19; // rbx
  _QWORD **v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  DXGFASTMUTEX *v32; // [rsp+20h] [rbp-20h] BYREF
  char v33; // [rsp+28h] [rbp-18h]
  DXGFASTMUTEX *v34; // [rsp+30h] [rbp-10h] BYREF
  char v35; // [rsp+38h] [rbp-8h]

  v35 = 0;
  v34 = (DXGFASTMUTEX *)(a1 + 400);
  if ( a1 == -400 )
  {
    v26 = WdLogNewEntry5_WdAssertion(-400LL);
    *(_QWORD *)(v26 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v34 + 1) == CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v27 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v8 = 0;
  v9 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
  v13 = PsInitialSystemProcess;
  if ( CurrentProcess == PsInitialSystemProcess )
    goto LABEL_17;
  v14 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess) + 73);
  if ( v14 )
  {
    v33 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
    v32 = (DXGFASTMUTEX *)(v14 + 80);
    if ( v14 == -80 )
    {
      v28 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v28 + 24) = 464LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v18 = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v32 + 1) == v18 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v29 + 24) = 471LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v33 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
      v30[5] = &v32;
      v30[3] = 275LL;
      v30[4] = 4LL;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    DXGFASTMUTEX::Acquire(v32);
    v33 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v14 + 72) )
    {
      _mm_lfence();
      v19 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8 * CurrentProcessSessionId);
      v33 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v32);
      goto LABEL_15;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v32);
  }
  v19 = 0LL;
LABEL_15:
  if ( v19 )
    v9 = *(_BYTE *)(v19 + 18489);
LABEL_17:
  if ( v35 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11, v12);
    v31[5] = &v34;
    v31[3] = 275LL;
    v31[4] = 4LL;
    v31[6] = 0LL;
    v31[7] = 0LL;
    WdLogEvent5_WdCriticalError(v31);
  }
  DXGFASTMUTEX::Acquire(v34);
  v20 = (_QWORD **)(a1 + 440);
  v35 = 1;
  v21 = *v20;
LABEL_20:
  while ( v21 != v20 && v21 && !v8 )
  {
    v22 = v21;
    v21 = (_QWORD *)*v21;
    _m_prefetchw(v22 + 3);
    v23 = v22[3];
    while ( v23 )
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v22 + 3, v23 + 1, v23);
      if ( v24 == v23 )
      {
        if ( (a4 != 1 || v22[288])
          && (a4 != 2 || v22[289])
          && (a4 != 3 || !v22[288])
          && (!v9 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v22) >= 2200) )
        {
          v8 = a2(v22, a3);
        }
        if ( _InterlockedExchangeAdd64(v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v22[2], (struct DXGADAPTER *)v22);
        goto LABEL_20;
      }
    }
  }
  if ( v35 )
  {
    v35 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v34);
  }
  return v8;
}
