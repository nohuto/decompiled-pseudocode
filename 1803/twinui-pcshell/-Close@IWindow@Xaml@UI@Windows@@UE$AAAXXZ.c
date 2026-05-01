/*
 * XREFs of ?Close@IWindow@Xaml@UI@Windows@@UE$AAAXXZ @ 0x180200B10
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180201890 (Platform--Details--__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IWindow::Close(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
