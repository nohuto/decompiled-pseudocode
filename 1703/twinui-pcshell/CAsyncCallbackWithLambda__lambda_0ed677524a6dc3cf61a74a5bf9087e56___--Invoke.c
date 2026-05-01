/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke @ 0x18005C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke(__int64 a1)
{
  CImmersiveApp::CImmersiveWindowCollection *v2; // rcx
  CImmersiveApp *v3; // rbx
  int v5; // [rsp+20h] [rbp-18h] BYREF
  HWND ApplicationWindow; // [rsp+28h] [rbp-10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 408LL))(*(_QWORD *)(a1 + 40) + 88LL) )
  {
    v2 = *(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 48);
    v3 = *(CImmersiveApp **)(a1 + 40);
    v5 = 8;
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v2);
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *)&v5, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
