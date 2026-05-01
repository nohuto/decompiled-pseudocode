/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180064818
 * Callers:
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x1800640E0 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ @ 0x180062FE0 (-_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
    v3 = (**v2)(v2, &GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c, &v7);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v7 + 80LL))(v7, *((_DWORD *)this + 32) == 2);
      if ( v3 >= 0 )
        goto LABEL_7;
      v4 = 1156LL;
    }
    else
    {
      v4 = 1152LL;
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
