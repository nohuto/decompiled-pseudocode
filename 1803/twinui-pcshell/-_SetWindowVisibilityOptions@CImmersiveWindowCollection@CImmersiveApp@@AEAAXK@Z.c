/*
 * XREFs of ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x1801320D4
 * Callers:
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18012EDF4 (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  if ( *((_QWORD *)this + 20) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(***((_QWORD ***)this + 19) + 136LL))(
      **((_QWORD **)this + 19),
      a2,
      (unsigned int)a2);
}
