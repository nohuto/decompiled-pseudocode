/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800664DC
 * Callers:
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180065DA0 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180065FA0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ @ 0x180064C80 (-_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_ReconcileViewWithVisibility(CTaskWindow *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    CTaskWindow::_UpdateNavigationLevel(this);
    v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
    v7 = 0LL;
    v3 = (**v2)(v2, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v7);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v7 + 88LL))(v7, *((_DWORD *)this + 32) == 2);
      if ( v3 >= 0 )
        goto LABEL_7;
      v4 = 1153LL;
    }
    else
    {
      v4 = 1149LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v3);
LABEL_7:
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
