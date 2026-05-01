/*
 * XREFs of wil::details::ScopeExitFn__lambda_38f0b4823446344b7a7cb6d42b07ea64___::_ScopeExitFn__lambda_38f0b4823446344b7a7cb6d42b07ea64___ @ 0x180133D8C
 * Callers:
 *     _ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView::SwitchItemDataViewImpl::[WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView]::SetDataSource_::_1_::dtor$8 @ 0x1801A198A (_ComposableShell--Experiences--Multitasking--Common--ISwitchItemDataView--SwitchIte_ea_1801A198A.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_38f0b4823446344b7a7cb6d42b07ea64___::_ScopeExitFn__lambda_38f0b4823446344b7a7cb6d42b07ea64___(
        _BYTE *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rcx

  if ( a1[8] )
  {
    v2 = *(_QWORD *)a1;
    a1[8] = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 88) + 64LL))(
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
