/*
 * XREFs of ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1800658C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C1EC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C2E8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::SendVisibilityChanged(CTaskWindow *this, __int64 a2)
{
  struct IImmersiveMonitor *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct IImmersiveMonitor *v8; // rcx
  struct IImmersiveMonitor *v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 464LL))(v5, &v9);
    v4 = v9;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, (unsigned int)(a2 & 1) + 3);
    v7 = (*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
    if ( v7 )
      CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        v7,
        1u,
        v9,
        *((struct IImmersiveApplicationInternal **)this + 16),
        a2);
  }
  else
  {
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((HWND *)this + 4),
      0xDu,
      v4,
      *((struct IImmersiveApplicationInternal **)this + 16),
      a2);
    if ( (a2 & 2) != 0 )
      QueryUnbiasedInterruptTime((PULONGLONG)this + 13);
    else
      *((_QWORD *)this + 13) = 0LL;
    *((_BYTE *)this + 112) = a2 & 1;
  }
  v8 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
