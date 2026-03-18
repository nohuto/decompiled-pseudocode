/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00B99F0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00DF040 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DF374 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1E38 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C00E2A20 (DxgkUpdateGdiInfo.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01B4120 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  DXGFASTMUTEX *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( v2 )
  {
    v14 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1);
    v13 = (DXGFASTMUTEX *)(v2 + 80);
    if ( v2 == -80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v9 + 24) = 464LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v13 + 1) == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v10 + 24) = 471LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v14 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v3, v5);
      v11[5] = &v13;
      v11[3] = 275LL;
      v11[4] = 4LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    DXGFASTMUTEX::Acquire(v13);
    v14 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v2 + 72) )
    {
      _mm_lfence();
      v7 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * CurrentProcessSessionId);
      v14 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v13);
      goto LABEL_10;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v13);
  }
  v7 = 0LL;
LABEL_10:
  if ( v7 )
  {
    v8 = v7 + 18520;
    if ( *(struct _KTHREAD **)(v7 + 18528) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 18528) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v12 + 24) = 208LL;
    WdLogEvent5_WdAssertion(v12);
  }
}
