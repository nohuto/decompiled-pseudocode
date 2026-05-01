/*
 * XREFs of ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x180066680
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C1EC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::s_SetWindowCloak(const struct CTaskWindow::WINDOW_ACTION_DATA *a1)
{
  __int64 v2; // rcx
  char v3; // dl
  unsigned __int64 v4; // rdi
  struct IImmersiveMonitor *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rbx
  struct IImmersiveMonitor *v10; // rcx
  struct IImmersiveMonitor *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_BYTE *)a1 + 8);
  if ( v3 != *(_BYTE *)(v2 + 24) && (*(_BYTE *)(v2 + 28) & 1) == 0 )
  {
    *(_BYTE *)(v2 + 24) = v3;
    if ( (*(int (__fastcall **)(PVOID, _QWORD, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
           CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
           **((_QWORD **)a1 + 3),
           *((_BYTE *)a1 + 8) != 0) >= 0 )
    {
      v4 = (*((_BYTE *)a1 + 8) == 0) | (unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 3) + 84LL);
      v5 = 0LL;
      v12 = 0LL;
      v6 = *((_QWORD *)a1 + 2);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v6 + 464LL))(v6, &v12);
        v5 = v12;
      }
      v7 = *((_QWORD *)a1 + 3);
      if ( *(_DWORD *)(v7 + 12) == 4 )
      {
        v8 = 13;
      }
      else if ( *(_DWORD *)(v7 + 12) == 5 )
      {
        v8 = 1;
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 12) + 8;
      }
      CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
        (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
        *(HWND *)v7,
        v8,
        v5,
        *((struct IImmersiveApplicationInternal **)a1 + 2),
        v4);
      v9 = *((_QWORD *)a1 + 3);
      if ( (v4 & 2) != 0 )
        QueryUnbiasedInterruptTime((PULONGLONG)(v9 + 72));
      else
        *(_QWORD *)(v9 + 72) = 0LL;
      *(_BYTE *)(v9 + 80) = v4 & 1;
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  return 0LL;
}
