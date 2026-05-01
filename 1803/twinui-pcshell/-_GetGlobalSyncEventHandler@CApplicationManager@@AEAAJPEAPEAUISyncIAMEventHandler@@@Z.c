/*
 * XREFs of ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0
 * Callers:
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004361C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     _lambda_8d0ab586cd065271f427bd7ab75519d7_::operator() @ 0x180104B84 (_lambda_8d0ab586cd065271f427bd7ab75519d7_--operator().c)
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801092E0 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180110EA8 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetGlobalSyncEventHandler(
        CApplicationManager *this,
        struct ISyncIAMEventHandler **a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  HRESULT v5; // ebx
  struct ISyncIAMEventHandler *v6; // rcx
  IUnknown *punk; // [rsp+58h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  ppvOut = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 48);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v3->Ptr + 4);
  if ( v4 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v4(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(punk, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( v5 >= 0 )
  {
    v6 = (struct ISyncIAMEventHandler *)ppvOut;
    if ( ppvOut )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
      v6 = (struct ISyncIAMEventHandler *)ppvOut;
    }
    *a2 = v6;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
