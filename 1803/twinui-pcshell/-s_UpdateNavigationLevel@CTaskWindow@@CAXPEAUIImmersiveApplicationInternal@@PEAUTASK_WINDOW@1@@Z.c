/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800475B0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800F29F0 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x1801346C0 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180003E50 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0 (-GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1800534D0 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *this,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  int v5; // r14d
  int v6; // r8d
  unsigned int v7; // ebx
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v9)(ViewWrapperBase *__hidden, unsigned int *); // rax
  int ClientWindow; // eax
  ViewWrapperBase *v11; // rcx
  __int64 v12; // rcx
  LPARAM v13; // r15
  void (__fastcall *v14)(CImmersiveApp *__hidden, struct IImmersiveMonitor **); // rax
  int v15; // eax
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+80h] [rbp+40h] BYREF
  ViewWrapperBase *v19; // [rsp+88h] [rbp+48h] BYREF

  v16[1] = -2LL;
  v4 = *((_DWORD *)a2 + 22);
  v5 = 1;
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( !v6 )
    {
      v7 = 3;
      goto LABEL_5;
    }
    if ( v6 == 1 )
    {
      v7 = 4;
      goto LABEL_5;
    }
  }
  v7 = 1;
LABEL_5:
  v16[0] = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
    v16);
  v8 = *(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 336LL);
  if ( (char *)v8 == (char *)ViewWrapperBase::Navigate )
    ViewWrapperBase::Navigate(v16[0], v7);
  else
    v8(v16[0], v7);
  v19 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
    &v19);
  v9 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*(_QWORD *)v19 + 48LL);
  if ( v9 == ViewWrapperBase::get_ClientWindow )
    ClientWindow = ViewWrapperBase::get_ClientWindow(v19, &v17);
  else
    ClientWindow = v9(v19, &v17);
  if ( ClientWindow >= 0 )
  {
    v13 = (int)v17;
    v18 = 0LL;
    if ( this )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
      v14 = *(void (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)this + 464LL);
      if ( v14 == CImmersiveApp::GetMonitorInternal )
        CImmersiveApp::GetMonitorInternal(this, &v18);
      else
        v14(this, &v18);
    }
    v15 = *((_DWORD *)a2 + 3);
    if ( v15 != 5 )
      v5 = v15 + 8;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
      v13,
      v5,
      v18,
      this,
      v7 == 4);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  }
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
