/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetPresentHistory @ 0x1C0092280 (DxgkGetPresentHistory.c)
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C009A800 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00A3210 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00A3D28 (OutputDuplProcessTerminate.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00A5254 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00A5784 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00A65A0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00A6C9C (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00A6DA8 (DxgkDestroyCsrssProcess.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00A8418 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00DCF90 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_ @ 0x1C00DD620 (_lambda_352933434268f97f7896632aa298aa71_--_lambda_invoker_cdecl_.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBE94 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00EDE40 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FA358 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     DxgkGetAdapter @ 0x1C0104F10 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0105050 (DxgkReleaseAdapter.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C01051E0 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0118618 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016BBD4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0191590 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C019D780 (DxgkRedrawCursorForPostCompositon.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01ACB28 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01B1718 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01B2680 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BC07C (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  int *v13; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  struct _KTHREAD **v25; // [rsp+20h] [rbp-18h] BYREF
  char v26; // [rsp+28h] [rbp-10h]

  v4 = (unsigned int)a2;
  v25 = (struct _KTHREAD **)((char *)this + 80);
  v26 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(-80LL, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v25[1] == CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v26 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v18[5] = &v25;
    v18[3] = 275LL;
    v18[4] = 4LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v7 = (int *)v25;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v7 + 1) == KeGetCurrentThread() )
  {
    if ( v7[6] <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v19 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v19);
    }
    ++v7[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = v7[7];
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v9, &EventBlockThread, v10, v20);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7);
      ExAcquirePushLockExclusiveEx(v7 + 4, 0LL);
    }
    if ( *((_QWORD *)v7 + 1) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v21 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( v7[6] )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v22);
    }
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v7[6] = 1;
  }
  v26 = 1;
  if ( (unsigned int)v4 >= *((_DWORD *)this + 18) )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4);
  v13 = (int *)v25;
  v26 = 0;
  if ( v25[1] != KeGetCurrentThread() )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = v13;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v13[6] <= 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v24 + 24) = 395LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( v13[6]-- == 1 )
  {
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v12;
}
