/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@EEAAXXZ @ 0x18016A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::_Destroy(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 144LL))(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 32));
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
