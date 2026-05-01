/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::Invoke @ 0x18015F760
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::Invoke(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
