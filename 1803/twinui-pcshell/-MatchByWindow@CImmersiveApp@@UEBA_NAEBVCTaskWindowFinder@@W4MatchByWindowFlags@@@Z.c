/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650
 * Callers:
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C6D0 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C950 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003EE20 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180040A10 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180043DB0 (-GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8F08 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CImmersiveApp::MatchByWindow(
        _QWORD *a1,
        _QWORD *a2,
        char (__fastcall *a3)(CTaskWindow *this, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2))
{
  char v3; // r12
  __int64 v6; // r15
  CTaskWindow *v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CTaskWindow *); // rax
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(ViewWrapperBase *__hidden, unsigned int *); // rax
  RTL_SRWLOCK *v13; // rbx
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  int v16; // edi
  _QWORD *v17; // rcx
  char v18; // al
  _QWORD *v19; // rcx
  bool (__fastcall *v20)(HWND *, HWND); // rax
  char v21; // al
  bool result; // al
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // rdx
  char (__fastcall *v24)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  char IsEqualByView; // al
  bool v26; // bl
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (char)a3;
  v6 = 0LL;
  if ( !a1[39] )
  {
LABEL_18:
    v18 = 0;
    goto LABEL_19;
  }
  while ( 1 )
  {
    a3 = CTaskWindow::IsEqualByView;
    v7 = *(CTaskWindow **)(a1[38] + 8 * v6);
    v8 = *(_QWORD *)v7;
    if ( *a2 )
      break;
    v23 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2[1];
    v24 = *(char (__fastcall **)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(v8 + 48);
    if ( v24 == CTaskWindow::IsEqualByView )
      IsEqualByView = CTaskWindow::IsEqualByView(v7, v23);
    else
      IsEqualByView = ((__int64 (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)))v24)(
                        v7,
                        v23,
                        CTaskWindow::IsEqualByView);
    if ( IsEqualByView )
      goto LABEL_31;
LABEL_17:
    if ( (unsigned __int64)++v6 >= a1[39] )
      goto LABEL_18;
  }
  v9 = *(__int64 (__fastcall **)(CTaskWindow *))(v8 + 32);
  if ( v9 == CTaskWindow::GetNativeWindow )
  {
    v10 = *((_QWORD *)v7 + 4);
    if ( !v10 )
    {
      v28 = 0LL;
      (***((void (__fastcall ****)(__int64, GUID *, _QWORD **))v7 + 6))(
        *((_QWORD *)v7 + 6),
        &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
        &v28);
      v11 = v28;
      v12 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*v28 + 48LL);
      if ( v12 == ViewWrapperBase::get_ClientWindow )
      {
        v13 = (RTL_SRWLOCK *)(v28[17] + 296LL);
        AcquireSRWLockShared(v13);
        v14 = *(__int64 (**)(void))(*(v11 - 3) + 648LL);
        if ( (char *)v14 == (char *)ViewWrapperBase::GetWindow )
          v15 = v11[29];
        else
          LODWORD(v15) = v14();
        LODWORD(v27) = v15;
        v16 = 0;
        if ( !(_DWORD)v15 )
          v16 = -2147023728;
        if ( v13 )
          ReleaseSRWLockShared(v13);
      }
      else
      {
        v16 = v12((ViewWrapperBase *)v28, (unsigned int *)&v27);
      }
      if ( v16 >= 0 )
        v10 = (int)v27;
      v17 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      }
    }
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(CTaskWindow *, __int64 (__fastcall *)(CTaskWindow *), char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)))v9)(
            v7,
            CTaskWindow::GetNativeWindow,
            CTaskWindow::IsEqualByView);
  }
  if ( v10 != *a2 )
    goto LABEL_17;
LABEL_31:
  v18 = 1;
LABEL_19:
  result = 1;
  if ( !v18 )
  {
    if ( (v3 & 1) == 0
      || (v27 = 0LL,
          v26 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                       a1 + 49,
                       a2,
                       a3,
                       &v28) >= 0,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27),
          !v26) )
    {
      if ( (v3 & 2) == 0 || !*a2 )
        return 0;
      v19 = (_QWORD *)a1[36];
      v20 = *(bool (__fastcall **)(HWND *, HWND))(*v19 + 160LL);
      v21 = v20 == CFrameApplicationPresentation::IsPresentationLayerWindow
          ? *a2 == v19[16]
          : ((__int64 (*)(void))v20)();
      if ( !v21 )
        return 0;
    }
  }
  return result;
}
