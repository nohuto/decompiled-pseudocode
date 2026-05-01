/*
 * XREFs of ?Invoke@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180129280
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (*)(void))(*a1)[3])();
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
