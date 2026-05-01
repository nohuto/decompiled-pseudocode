/*
 * XREFs of ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x1801346C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180112A04 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::HandleCrashRecovery(struct IImmersiveApplicationInternal **this, char a2)
{
  _BOOL8 v4; // rsi
  struct IUnknown *v5; // r9
  struct IImmersiveApplicationInternal *v6; // rdi
  struct IUnknown *v7; // [rsp+50h] [rbp+8h] BYREF

  if ( this[6] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[16], (struct CTaskWindow::TASK_WINDOW *)(this + 4));
  }
  else
  {
    v4 = *((_BYTE *)this + 56) == 0;
    v5 = 0LL;
    v7 = 0LL;
    v6 = this[16];
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IUnknown **))(*(_QWORD *)v6 + 464LL))(
        v6,
        &v7);
      v6 = this[16];
      v5 = v7;
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      (HWND)this[4],
      13,
      v5,
      v6,
      v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( !a2 )
      (*((void (__fastcall **)(struct IImmersiveApplicationInternal **, _QWORD))*this + 20))(this, 0LL);
  }
}
