/*
 * XREFs of ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180065DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800664DC (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180066580 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::Reinitialize(CTaskWindow *this, const struct TASKWINDOW_REINIT_DATA *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  int v6; // edi

  v2 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)this + 16) != v2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v5 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = 0;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 6);
  if ( (*(_BYTE *)a2 & 1) == 0
    || (v6 = (*(__int64 (__fastcall **)(CTaskWindow *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
               this,
               *((_QWORD *)a2 + 1),
               *((_QWORD *)a2 + 4)),
        v6 >= 0) )
  {
    *((_BYTE *)this + 56) = 1;
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      CTaskWindow::_QueryCloakedState((CTaskWindow *)((char *)this - 8));
    }
    else if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      *((_DWORD *)this + 30) = 0;
      CTaskWindow::_ReconcileViewWithVisibility((CTaskWindow *)((char *)this - 8));
    }
  }
  return (unsigned int)v6;
}
