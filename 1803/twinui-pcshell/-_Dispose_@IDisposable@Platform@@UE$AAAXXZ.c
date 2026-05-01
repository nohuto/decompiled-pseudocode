/*
 * XREFs of ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x1801FC010
 * Callers:
 *     ??1Application@Xaml@UI@Windows@@IE$AAA@XZ @ 0x1801FCD9C (--1Application@Xaml@UI@Windows@@IE$AAA@XZ.c)
 *     ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x1801FCE18 (--1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x1801FF250 (-__abi_Release@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAK.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::Invoke @ 0x18020C900 (Platform--Details--__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_--Invoke.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180220A80 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@_ea_180220A80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Platform::IDisposable::_Dispose_(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
