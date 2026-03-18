/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009E200 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00AA958 (OutputDuplProcessTerminate.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B3234 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00B63F8 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00DE334 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DE82C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E27B0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E2870 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00E5230 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F79B0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C010F5D0 (DxgkDisplayOnOff.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C01987F0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkGetAdapter @ 0x1C01A1960 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C01A1EC0 (DxgkReleaseAdapter.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01AFE14 (DxgkRedrawCursorForPostCompositon.c)
 *     DxgkRegisterDwmProcess @ 0x1C01B9150 (DxgkRegisterDwmProcess.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C01BCA9C (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C01BCC10 (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C01BCD84 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?Destroy@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C01BDEF4 (-Destroy@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BE054 (-DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAX0@Z @ 0x1C01BE244 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAX0@Z.c)
 *     ?SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE68C (-SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@.c)
 *     ?SendEnqueueFlipExToken@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN@@@Z @ 0x1C01BEB34 (-SendEnqueueFlipExToken@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHIST.c)
 *     ?SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BEE74 (-SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?SendUnbindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BF0D4 (-SendUnbindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C93A8 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C01C9B44 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DxgkCreateOutputDupl @ 0x1C01CC530 (DxgkCreateOutputDupl.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01D0610 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01D0F50 (DxgkDestroyCsrssProcess.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C01D1090 (DxgkGetUseHWGPUInRemoteSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01D111C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01D123C (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01D1708 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01D2364 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01D267C (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01DD0A4 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD21C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C01E8F80 (NtDxgkVailDisconnect.c)
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdi
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rcx
  int v12; // ecx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct _KTHREAD **v24; // [rsp+20h] [rbp-18h] BYREF
  char v25; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v24 = (struct _KTHREAD **)((char *)this + 80);
  v25 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-80LL);
    *(_QWORD *)(v15 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v24[1] == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v16 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v25 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v17[5] = &v24;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v5 = v24;
  KeEnterCriticalRegion();
  if ( v5[1] == KeGetCurrentThread() )
  {
    v18 = *((_DWORD *)v5 + 6);
    if ( v18 <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v19 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v19);
      v18 = *((_DWORD *)v5 + 6);
    }
    v8 = v18 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *((_DWORD *)v5 + 7);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v6, &EventBlockThread, v7, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ExAcquirePushLockExclusiveEx(v5 + 2, 0LL);
    }
    if ( v5[1] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v20 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v21 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v5[1] = KeGetCurrentThread();
    v8 = 1;
  }
  *((_DWORD *)v5 + 6) = v8;
  v25 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
  v10 = v24;
  v25 = 0;
  if ( v24[1] != KeGetCurrentThread() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6);
    v22[3] = 275LL;
    v22[4] = 4LL;
    v22[5] = v10;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v11 = *((unsigned int *)v10 + 6);
  if ( (int)v11 <= 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v23 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v23);
    LODWORD(v11) = *((_DWORD *)v10 + 6);
  }
  v12 = v11 - 1;
  *((_DWORD *)v10 + 6) = v12;
  if ( !v12 )
  {
    v10[1] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v9;
}
