/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x18001AE90 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?GetSystemVisual@CFrameApplicationPresentation@@UEBA?AW4FRAME_SYSTEM_VISUAL@@XZ @ 0x180014940 (-GetSystemVisual@CFrameApplicationPresentation@@UEBA-AW4FRAME_SYSTEM_VISUAL@@XZ.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?GetPresentationState@CTaskWindow@@UEBA?AW4ViewPresentationState@@XZ @ 0x1800476A0 (-GetPresentationState@CTaskWindow@@UEBA-AW4ViewPresentationState@@XZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C68C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE5C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18012D660 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdql @ 0x180132AD8 (WPP_SF_Sdql.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(CImmersiveApp *this, struct ITaskWindow *a2, char a3)
{
  __int64 (__fastcall *v5)(CTaskWindow *); // rax
  HWND NativeWindow; // rax
  char *v7; // rbx
  HWND v8; // rsi
  int v9; // edx
  int v10; // r8d
  struct ITaskWindow *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  int PresentationState; // ebp
  CFrameApplicationPresentation *v14; // rcx
  __int64 (__fastcall *v15)(CFrameApplicationPresentation *, struct ITaskWindow *); // rax
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  int SystemVisual; // eax
  bool v20; // dl
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)a2 + 32LL);
  if ( v5 == CTaskWindow::GetNativeWindow )
    NativeWindow = (HWND)CTaskWindow::GetNativeWindow(a2);
  else
    NativeWindow = (HWND)v5(a2);
  v7 = (char *)this + 152;
  v8 = NativeWindow;
  if ( a3
    && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
              (CImmersiveApp::CImmersiveWindowCollection *)v7,
              NativeWindow,
              &v21) >= 0 )
  {
    if ( !v21 )
    {
      v11 = (struct ITaskWindow *)**((_QWORD **)v7 + 19);
      v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 216LL);
      if ( v12 == CTaskWindow::GetPresentationState )
      {
        PresentationState = CTaskWindow::GetPresentationState((__int64)v11);
      }
      else
      {
        PresentationState = v12((__int64)v11);
        v11 = (struct ITaskWindow *)**((_QWORD **)v7 + 19);
      }
      v14 = (CFrameApplicationPresentation *)*((_QWORD *)v7 + 17);
      v15 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct ITaskWindow *))(*(_QWORD *)v14 + 24LL);
      if ( v15 == CFrameApplicationPresentation::PresentWindow )
        CFrameApplicationPresentation::PresentWindow(v14, v11);
      else
        v15(v14, v11);
      if ( PresentationState == 3 )
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation((CImmersiveApp::CImmersiveWindowCollection *)v7);
    }
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sdql(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v9,
        v10,
        *(_QWORD *)(*((_QWORD *)v7 + 18) + 544LL),
        *(_DWORD *)(*((_QWORD *)v7 + 18) + 552LL),
        (char)v8,
        a3);
    if ( *((_QWORD *)v7 + 15)
      && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)v7) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)v7,
        v8);
      goto LABEL_20;
    }
    v16 = *((_QWORD *)v7 + 17);
    v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 48LL);
    if ( (char *)v17 == (char *)CFrameApplicationPresentation::GetSystemVisual )
      SystemVisual = CFrameApplicationPresentation::GetSystemVisual(v16);
    else
      SystemVisual = v17();
    if ( SystemVisual
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)v7) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        (CImmersiveApp::CImmersiveWindowCollection *)v7,
        v20);
LABEL_20:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)v7);
    }
  }
  return 0LL;
}
