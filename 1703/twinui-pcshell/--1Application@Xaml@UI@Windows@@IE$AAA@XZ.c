/*
 * XREFs of ??1Application@Xaml@UI@Windows@@IE$AAA@XZ @ 0x180126958
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Platform::Object]::__abi_Release_::_1_::dtor$0 @ 0x1801A05E8 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Platform--Object]--__abi_Relea.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Xaml::Application::~Application(__int64 a1)
{
  unsigned int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  v2 = 0LL;
  v4 = 0LL;
  if ( v1 )
  {
    if ( (**v1)(v1, &_uuidof__AUIDisposable_Platform__, &v4) )
      return;
    v2 = v4;
  }
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
