/*
 * XREFs of ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0
 * Callers:
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800130C4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x1800194B0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-___ptr64_--Invoke.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180047960 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047C10 (-SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x180047DF0 (-SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x180049600 (-GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BBCC (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005DC44 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::GetNativeWindow(CTaskWindow *this)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 (__fastcall *v3)(ViewWrapperBase *__hidden, unsigned int *); // rax
  RTL_SRWLOCK *v4; // rbx
  ViewWrapperBase *v5; // rcx
  HWND (__fastcall *v6)(ViewWrapperBase *__hidden); // rax
  __int64 v7; // rax
  int v8; // edi
  _QWORD *v9; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
  {
    v12 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 6))(
      *((_QWORD *)this + 6),
      &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
      &v12);
    v2 = v12;
    v3 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*v12 + 48LL);
    if ( v3 == ViewWrapperBase::get_ClientWindow )
    {
      v4 = (RTL_SRWLOCK *)(v12[17] + 296LL);
      AcquireSRWLockShared(v4);
      v13 = v4;
      v5 = (ViewWrapperBase *)(v2 - 3);
      v6 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*(v2 - 3) + 648LL);
      if ( v6 == ViewWrapperBase::GetWindow )
        v7 = *((_QWORD *)v5 + 32);
      else
        LODWORD(v7) = (__int64)v6(v5);
      v11 = v7;
      v8 = 0;
      if ( !(_DWORD)v7 )
        v8 = -2147023728;
      if ( v4 )
        ReleaseSRWLockShared(v4);
    }
    else
    {
      v8 = v3((ViewWrapperBase *)v12, (unsigned int *)&v11);
    }
    if ( v8 >= 0 )
      v1 = v11;
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
  }
  return v1;
}
