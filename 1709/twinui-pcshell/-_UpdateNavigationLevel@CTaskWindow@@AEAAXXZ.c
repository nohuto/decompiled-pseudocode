/*
 * XREFs of ?_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ @ 0x180064C80
 * Callers:
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180065BC0 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800664DC (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C2E8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CTaskWindow::_UpdateNavigationLevel(CTaskWindow *this)
{
  struct IImmersiveApplicationInternal *v2; // rdi
  int v3; // edx
  unsigned int v4; // r14d
  int v5; // edx
  unsigned int v6; // esi
  __int64 v7; // r15
  struct IImmersiveMonitor *v8; // r9
  int v9; // eax
  struct IImmersiveMonitor *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+80h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+88h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+50h] BYREF

  v2 = (struct IImmersiveApplicationInternal *)*((_QWORD *)this + 17);
  v3 = *((_DWORD *)this + 32);
  v4 = 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( !v5 )
    {
      v6 = 3;
      goto LABEL_7;
    }
    if ( v5 == 1 )
    {
      v6 = 4;
      goto LABEL_7;
    }
  }
  v6 = 1;
LABEL_7:
  v16 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
    *((_QWORD *)this + 7),
    &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
    &v16);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 336LL))(v16, v6);
  v15 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
    *((_QWORD *)this + 7),
    &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
    &v15);
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 48LL))(v15, &v13) >= 0 )
  {
    v7 = v13;
    v8 = 0LL;
    v14 = 0LL;
    if ( v2 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)v2 + 464LL))(
        v2,
        &v14);
      v8 = v14;
    }
    v9 = *((_DWORD *)this + 13);
    if ( v9 != 5 )
      v4 = v9 + 8;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
      v7,
      v4,
      v8,
      v2,
      v6 == 4);
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
