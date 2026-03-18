/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C008F740 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C008FEF0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0090314 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BBC7C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00DE704 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DF374 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1E38 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00E2740 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00EB0A0 (DxgkGetPresentHistory.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00F77D4 (OutputDuplProcessTerminate.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00F84DC (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00F8ABC (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C00FA874 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00FAB8C (DxgkDestroyCsrssProcess.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00FC2E0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkGetAdapter @ 0x1C01045D0 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0104780 (DxgkReleaseAdapter.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C0104A50 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C01075F4 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016F9B4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C01A60B0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01B4120 (DxgkRedrawCursorForPostCompositon.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C6580 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C01C9200 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01CB4D8 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01CC128 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01CC440 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01D46BC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int *v11; // rbx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct _KTHREAD **v23; // [rsp+20h] [rbp-18h] BYREF
  char v24; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int)a2;
  v23 = (struct _KTHREAD **)((char *)this + 80);
  v24 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-80LL);
    *(_QWORD *)(v15 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v23[1] == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v16 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v24 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v17[5] = &v23;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v6 = (int *)v23;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v6 + 1) == KeGetCurrentThread() )
  {
    if ( v6[6] <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v18 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v18);
    }
    ++v6[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = v6[7];
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v8, &EventBlockThread, v9, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6);
      ExAcquirePushLockExclusiveEx(v6 + 4, 0LL);
    }
    if ( *((_QWORD *)v6 + 1) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v19 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( v6[6] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v20);
    }
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v6[6] = 1;
  }
  v24 = 1;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 18) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3);
  v11 = (int *)v23;
  v24 = 0;
  if ( v23[1] != KeGetCurrentThread() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[5] = v11;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v11[6] <= 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v22 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v11[6]-- == 1 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v10;
}
