/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke @ 0x18005E640
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke(__int64 a1)
{
  CImmersiveApp::CImmersiveWindowCollection *v2; // rcx
  CImmersiveApp *v3; // rbx
  int v5; // [rsp+20h] [rbp-18h] BYREF
  HWND ApplicationWindow; // [rsp+28h] [rbp-10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL) + 408LL))(*(_QWORD *)(a1 + 56) + 112LL) )
  {
    v2 = *(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 64);
    v3 = *(CImmersiveApp **)(a1 + 56);
    v5 = 8;
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v2);
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *)&v5, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
