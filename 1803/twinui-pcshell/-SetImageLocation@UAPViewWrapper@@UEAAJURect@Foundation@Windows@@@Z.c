/*
 * XREFs of ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18005B4E0
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 * Callees:
 *     ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x180056310 (-SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetImageLocation(__int64 a1, const struct Windows::Foundation::Rect *a2)
{
  RTL_SRWLOCK *v4; // rdi
  struct IUnknown *v5; // rdx
  ViewManagerBridge *v6; // rcx
  void (__fastcall *v7)(ViewManagerBridge *, struct IUnknown *, const struct Windows::Foundation::Rect *); // rax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 - 360) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = *(struct IUnknown **)(a1 - 336);
  if ( v5 )
  {
    v6 = *(ViewManagerBridge **)(*(_QWORD *)(a1 - 360) + 520LL);
    v7 = *(void (__fastcall **)(ViewManagerBridge *, struct IUnknown *, const struct Windows::Foundation::Rect *))(*(_QWORD *)v6 + 144LL);
    if ( v7 == ViewManagerBridge::SetSplashScreenRect )
      ViewManagerBridge::SetSplashScreenRect(v6, v5, a2);
    else
      v7(v6, v5, a2);
    v8 = 0;
  }
  else
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL,
      -2);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}
