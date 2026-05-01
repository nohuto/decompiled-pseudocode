/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x1800194B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x1800165A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___--Run.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180049880 (-IsApplicationRunning@CImmersiveApp@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______ptr64_::Invoke(__int64 a1)
{
  CImmersiveApp *v2; // rcx
  bool (__fastcall *v3)(CImmersiveApp *__hidden); // rax
  bool IsApplicationRunning; // al
  bool v5; // cl
  HWND NativeWindow; // rax
  __int64 v7; // rcx
  CTaskWindow *v8; // rcx
  HWND (__fastcall *v9)(CTaskWindow *__hidden); // rax
  int v11; // [rsp+28h] [rbp-20h] BYREF
  HWND v12; // [rsp+30h] [rbp-18h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (CImmersiveApp *)(*(_QWORD *)(a1 + 48) + 112LL);
  v3 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v2 + 408LL);
  if ( v3 == CImmersiveApp::IsApplicationRunning )
    IsApplicationRunning = CImmersiveApp::IsApplicationRunning(v2);
  else
    IsApplicationRunning = v3(v2);
  v5 = IsApplicationRunning;
  NativeWindow = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v7 + 160) )
    {
      v8 = **(CTaskWindow ***)(v7 + 152);
      v9 = *(HWND (__fastcall **)(CTaskWindow *__hidden))(*(_QWORD *)v8 + 32LL);
      if ( v9 == CTaskWindow::GetNativeWindow )
        NativeWindow = CTaskWindow::GetNativeWindow(v8);
      else
        NativeWindow = v9(v8);
    }
    v11 = 8;
    v12 = NativeWindow;
    CImmersiveApp::_ScheduleApplicationNotifications(
      *(CImmersiveApp **)(a1 + 48),
      (const struct APP_CHANGE_INFO *const)&v11,
      1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
