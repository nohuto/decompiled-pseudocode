/*
 * XREFs of ?__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@2345@UE$AAAJXZ @ 0x1801532B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x180153804 (-Invoke@__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_DispatchedHandler_Core_UI_Windows__2345_UE_AAAJXZ(
        __int64 a1)
{
  try
  {
    if ( *(void ***)a1 == &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'} )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
    else
      Windows::UI::Core::DispatchedHandler::__abi_IDelegate::Invoke(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
