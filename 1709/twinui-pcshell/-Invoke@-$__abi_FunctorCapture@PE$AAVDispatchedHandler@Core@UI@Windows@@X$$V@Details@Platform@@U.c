/*
 * XREFs of ?Invoke@?$__abi_FunctorCapture@PE$AAVDispatchedHandler@Core@UI@Windows@@X$$V@Details@Platform@@UEAAXXZ @ 0x1801545B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture<Windows::UI::Core::DispatchedHandler __gc *,void,>::Invoke(
        __int64 a1)
{
  _QWORD **v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD ***)(a1 + 8);
  if ( *v1 == &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v1[37] + 8LL))(v1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*v1)[3])(v1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
