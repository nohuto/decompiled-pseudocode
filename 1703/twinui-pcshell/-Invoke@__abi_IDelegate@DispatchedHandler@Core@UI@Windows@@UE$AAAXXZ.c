/*
 * XREFs of ?Invoke@__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x1801293D4
 * Callers:
 *     ?__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@2345@UE$AAAJXZ @ 0x180128E80 (-__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Dispatc.c)
 *     ?Invoke@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x180129060 (-Invoke@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Core::DispatchedHandler::__abi_IDelegate::Invoke(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
