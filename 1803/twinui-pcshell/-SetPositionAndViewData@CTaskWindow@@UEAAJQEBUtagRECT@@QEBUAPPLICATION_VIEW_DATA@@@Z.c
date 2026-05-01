/*
 * XREFs of ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047C10
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004FC50 (-SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x180095EC4 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetPositionAndViewData(
        CTaskWindow *this,
        struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(ViewWrapperBase *__hidden, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(CTaskWindow *); // rax
  ImmersiveOwnedWindowHelper *v10; // rax
  const struct tagRECT *v11; // r8
  ViewWrapperBase *v12; // rcx
  ViewWrapperBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*((_BYTE *)this + 60) & 2) == 0 )
  {
    v14 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))this + 6))(
      *((_QWORD *)this + 6),
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v14);
    v7 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, const struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v14 + 72LL);
    if ( v7 == ViewWrapperBase::SetPositionAndViewData )
      v8 = ViewWrapperBase::SetPositionAndViewData(v14, a2, a3);
    else
      v8 = v7(v14, a2, a3);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL);
      v10 = (ImmersiveOwnedWindowHelper *)(v9 == CTaskWindow::GetNativeWindow
                                         ? CTaskWindow::GetNativeWindow(this)
                                         : v9(this));
      if ( v10 )
        ImmersiveOwnedWindowHelper::RepositionOwnedWindows(v10, (HWND)a2, v11);
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v6;
}
