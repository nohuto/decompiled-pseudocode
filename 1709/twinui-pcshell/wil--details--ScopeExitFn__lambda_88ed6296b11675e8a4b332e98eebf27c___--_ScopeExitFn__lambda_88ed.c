/*
 * XREFs of wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___ @ 0x18016A220
 * Callers:
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$8 @ 0x1801F3AF2 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SetDataS_ea_1801F3AF2.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___(
        _BYTE *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rcx

  if ( a1[8] )
  {
    v2 = *(_QWORD *)a1;
    a1[8] = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 88) + 80LL))(
           *(_QWORD *)(v2 + 88),
           *(_QWORD *)(v2 + 96));
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    v4 = *(_QWORD *)(v2 + 88);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(v2 + 88) = 0LL;
    }
  }
  if ( *(_QWORD *)a1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 16LL))(*(_QWORD *)a1);
}
