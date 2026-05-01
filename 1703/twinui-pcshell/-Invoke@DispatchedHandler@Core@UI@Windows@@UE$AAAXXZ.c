/*
 * XREFs of ?Invoke@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x180129060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Core::DispatchedHandler::Invoke(__int64 a1)
{
  if ( *(void ***)a1 == &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Core::DispatchedHandler::__abi_IDelegate::Invoke(a1);
}
