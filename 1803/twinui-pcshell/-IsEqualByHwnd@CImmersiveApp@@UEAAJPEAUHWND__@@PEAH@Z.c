/*
 * XREFs of ?IsEqualByHwnd@CImmersiveApp@@UEAAJPEAUHWND__@@PEAH@Z @ 0x18004CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::IsEqualByHwnd(CImmersiveApp *this, HWND a2, int *a3)
{
  bool (__fastcall *v6)(_QWORD *, HWND *, char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)); // rax
  __int64 v7; // r14
  CTaskWindow *v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CTaskWindow *); // rax
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 (__fastcall *v13)(ViewWrapperBase *__hidden, unsigned int *); // rax
  RTL_SRWLOCK *v14; // rbx
  ViewWrapperBase *v15; // rcx
  HWND (__fastcall *v16)(ViewWrapperBase *__hidden); // rax
  __int64 v17; // rax
  int v18; // esi
  _QWORD *v19; // rcx
  char v20; // al
  _QWORD *v21; // r8
  bool (__fastcall *v22)(HWND *, HWND); // rax
  bool v23; // al
  bool v24; // al
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // rcx
  char (__fastcall *v27)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  char IsEqualByView; // al
  HWND v29; // [rsp+28h] [rbp-60h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+10h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h]
  RTL_SRWLOCK *v34; // [rsp+A8h] [rbp+20h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v29 = a2;
  v30 = 0LL;
  v6 = *(bool (__fastcall **)(_QWORD *, HWND *, char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)))(*((_QWORD *)this + 3) + 296LL);
  if ( (char *)v6 != (char *)CImmersiveApp::MatchByWindow )
  {
    v24 = v6(
            (_QWORD *)this + 3,
            &v29,
            (char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))2);
    goto LABEL_27;
  }
  v33 = 0LL;
  v7 = 0LL;
  if ( !*((_QWORD *)this + 42) )
  {
LABEL_19:
    v20 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v8 = *(CTaskWindow **)(*((_QWORD *)this + 41) + 8 * v7);
    v9 = *(_QWORD *)v8;
    if ( v29 )
      break;
    v27 = *(char (__fastcall **)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(v9 + 48);
    if ( v27 == CTaskWindow::IsEqualByView )
      IsEqualByView = CTaskWindow::IsEqualByView(v8, v30);
    else
      IsEqualByView = v27(v8, v30);
    if ( IsEqualByView )
      goto LABEL_33;
LABEL_18:
    if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 42) )
      goto LABEL_19;
  }
  v10 = *(__int64 (__fastcall **)(CTaskWindow *))(v9 + 32);
  if ( v10 == CTaskWindow::GetNativeWindow )
  {
    v11 = *((_QWORD *)v8 + 4);
    if ( !v11 )
    {
      v32 = 0LL;
      (***((void (__fastcall ****)(__int64, GUID *, _QWORD **))v8 + 6))(
        *((_QWORD *)v8 + 6),
        &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
        &v32);
      v12 = v32;
      v13 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*v32 + 48LL);
      if ( v13 == ViewWrapperBase::get_ClientWindow )
      {
        v14 = (RTL_SRWLOCK *)(v32[17] + 296LL);
        AcquireSRWLockShared(v14);
        v34 = v14;
        v15 = (ViewWrapperBase *)(v12 - 3);
        v16 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*(v12 - 3) + 648LL);
        if ( v16 == ViewWrapperBase::GetWindow )
          v17 = *((_QWORD *)v15 + 32);
        else
          LODWORD(v17) = (__int64)v16(v15);
        v31 = v17;
        v18 = 0;
        if ( !(_DWORD)v17 )
          v18 = -2147023728;
        if ( v14 )
          ReleaseSRWLockShared(v14);
      }
      else
      {
        v18 = v13((ViewWrapperBase *)v32, (unsigned int *)&v31);
      }
      if ( v18 >= 0 )
        v11 = v31;
      v19 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      }
    }
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(CTaskWindow *, _QWORD))v10)(v8, CTaskWindow::IsEqualByView);
  }
  if ( (HWND)v11 != v29 )
    goto LABEL_18;
LABEL_33:
  v20 = 1;
LABEL_20:
  v24 = 1;
  if ( !v20 )
  {
    if ( !v29
      || ((v21 = (_QWORD *)*((_QWORD *)this + 39),
           v22 = *(bool (__fastcall **)(HWND *, HWND))(*v21 + 160LL),
           v22 != CFrameApplicationPresentation::IsPresentationLayerWindow)
        ? (v23 = v22(*((HWND **)this + 39), v29))
        : (v23 = v29 == (HWND)v21[16]),
          !v23) )
    {
      v24 = 0;
    }
  }
LABEL_27:
  *a3 = v24;
  v25 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
