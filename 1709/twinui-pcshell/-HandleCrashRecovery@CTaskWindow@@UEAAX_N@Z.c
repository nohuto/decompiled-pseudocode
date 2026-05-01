/*
 * XREFs of ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180065BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C1EC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ @ 0x180064C80 (-_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::HandleCrashRecovery(CTaskWindow *this, char a2)
{
  _BOOL8 v4; // rdi
  struct IImmersiveMonitor *v5; // r9
  __int64 v6; // rcx
  struct IImmersiveMonitor *v7; // rcx
  struct IImmersiveMonitor *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) )
  {
    CTaskWindow::_UpdateNavigationLevel((CTaskWindow *)((char *)this - 8));
  }
  else
  {
    v4 = *((_BYTE *)this + 56) == 0;
    v5 = 0LL;
    v8 = 0LL;
    v6 = *((_QWORD *)this + 16);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v6 + 464LL))(v6, &v8);
      v5 = v8;
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((HWND *)this + 4),
      0xDu,
      v5,
      *((struct IImmersiveApplicationInternal **)this + 16),
      v4);
    v7 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( !a2 )
      (*(void (__fastcall **)(CTaskWindow *, _QWORD))(*(_QWORD *)this + 160LL))(this, 0LL);
  }
}
