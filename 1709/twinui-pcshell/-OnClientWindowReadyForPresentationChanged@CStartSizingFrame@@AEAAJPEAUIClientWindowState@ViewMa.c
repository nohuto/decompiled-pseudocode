/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CStartSizingFrame@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800D0B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z @ 0x1800D14B8 (-UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStartSizingFrame::OnClientWindowReadyForPresentationChanged(
        CStartSizingFrame *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *v8; // rcx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int updated; // eax
  unsigned int v13; // esi
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v16[1] = -2LL;
  if ( *((_QWORD *)this + 4) )
  {
    *(_QWORD *)&Rect.left = 0LL;
    v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct tagRECT *))(*((_QWORD *)this + 2) + 24LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 24LL),
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &Rect);
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&Rect.left + 88LL))(
             *(_QWORD *)&Rect.left,
             *((_QWORD *)this + 4));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x180,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
          (const char *)(unsigned int)v6);
      *((_QWORD *)this + 4) = 0LL;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
        (const char *)(unsigned int)v5);
    }
    v7 = *(_QWORD *)&Rect.left;
    if ( *(_QWORD *)&Rect.left )
    {
      *(_QWORD *)&Rect.left = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = *(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState **)(*((_QWORD *)this + 2) + 24LL);
  if ( !v8 || !a2 )
    return 0LL;
  if ( v8 != a2 )
  {
    v16[0] = 0LL;
    *(_QWORD *)&Rect.left = 0LL;
    if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_00000000_0000_0000_c000_000000000046,
           v16) < 0 )
      return 0LL;
    v9 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, GUID *, struct tagRECT *))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &Rect);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&Rect.left + 16LL))(*(_QWORD *)&Rect.left);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
    if ( v9 < 0 || v16[0] != *(_QWORD *)&Rect.left )
      return 0LL;
  }
  if ( !*((_QWORD *)this + 19) )
  {
LABEL_33:
    if ( *((_BYTE *)this + 204) )
      PostMessageW(*((HWND *)this + 1), 0x401u, 0LL, 0LL);
    return 0LL;
  }
  if ( *((_DWORD *)this + 10) == 3 )
    v10 = MulDiv(8, *((_DWORD *)this + 14), 96);
  else
    v10 = 0;
  *((_DWORD *)this + 50) = v10 + (int)*(float *)(*((_QWORD *)this + 2) + 48LL);
  GetClientRect(*((HWND *)this + 1), &Rect);
  Rect.top = *((_DWORD *)this + 50);
  if ( *((_DWORD *)this + 10) == 3 )
    v11 = 0;
  else
    v11 = MulDiv(8, *((_DWORD *)this + 14), 96);
  Rect.bottom -= v11;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  v16[0] = (char *)this + 160;
  updated = CStartSizingFrame::UpdateBackgroundTransform(this, &Rect);
  v13 = updated;
  if ( updated >= 0 )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
    v13 = updated;
    if ( updated < 0 )
    {
      v14 = 409LL;
      goto LABEL_28;
    }
    if ( this != (CStartSizingFrame *)-160LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
    goto LABEL_33;
  }
  v14 = 408LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
    (const char *)(unsigned int)updated);
  if ( this != (CStartSizingFrame *)-160LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
  return v13;
}
