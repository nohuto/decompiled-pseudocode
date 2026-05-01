/*
 * XREFs of ??$?0PE$AAVDispatchedHandler@Core@UI@Windows@@@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVDispatchedHandler@Core@UI@Windows@@W4CallbackContext@Platform@@_N@Z @ 0x180153C90
 * Callers:
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180152D30 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    *v4 = &Platform::Details::__abi_FunctorCapture<Windows::UI::Core::DispatchedHandler __gc *,void,>::`vftable';
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    a1[6] = a2;
  }
  a1[37] = v4;
  return a1;
}
