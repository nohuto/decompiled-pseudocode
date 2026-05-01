/*
 * XREFs of ??1Application@Xaml@UI@Windows@@IE$AAA@XZ @ 0x1801FCD9C
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::_XamlExplorerHostApp_::_1_::dtor$0 @ 0x1801FCF0D (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--_XamlExplorerHostApp_--_1_--dto.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x1801FC010 (-_Dispose_@IDisposable@Platform@@UE$AAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Xaml::Application::~Application(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = __abi_winrt_cast_to(
             1,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 48),
             (__int64)&_uuidof__AUIDisposable_Platform__);
  v2 = result;
  if ( result )
  {
    Platform::IDisposable::_Dispose_(result);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
