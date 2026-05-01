/*
 * XREFs of ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001C890
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 * Callees:
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18001C970 (-SetFocus@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D0D0 (-GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::SwitchTo(CWinRTApplicationView *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, __int64, GUID *, CImmersiveApplicationWindow **); // rax
  int Windows; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(CImmersiveApplicationWindow *, HWND *); // rax
  int NativeWindow; // eax
  int v8; // eax
  CImmersiveApplicationWindow *v9; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CImmersiveApplicationWindow *v15; // [rsp+50h] [rbp+8h] BYREF
  HWND v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v2 = *((_QWORD *)this + 25);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v2 + 24LL);
  if ( (char *)v3 == (char *)CImmersiveApp::GetWindows )
    Windows = CImmersiveApp::GetWindows(v2, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v15);
  else
    Windows = v3(v2, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v15);
  v5 = Windows;
  if ( Windows == -2147023728 )
  {
    v8 = CWinRTApplicationView::SetFocus(this);
    v5 = v8;
    if ( v8 >= 0 )
      goto LABEL_10;
    v11 = 85LL;
    goto LABEL_20;
  }
  if ( Windows < 0 )
  {
    v12 = (unsigned int)Windows;
    v11 = 90LL;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CImmersiveApplicationWindow *, HWND *))(*(_QWORD *)v15 + 32LL);
    if ( v6 == CImmersiveApplicationWindow::GetNativeWindow )
      NativeWindow = CImmersiveApplicationWindow::GetNativeWindow(v15, &v16);
    else
      NativeWindow = v6(v15, &v16);
    v5 = NativeWindow;
    if ( NativeWindow >= 0 )
    {
      v8 = CWinRTApplicationView::SetFocus(this);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v11 = 99LL;
LABEL_20:
      v12 = (unsigned int)v8;
      goto LABEL_21;
    }
    v12 = (unsigned int)NativeWindow;
    v11 = 93LL;
  }
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)v12,
    v13);
LABEL_10:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
