/*
 * XREFs of ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130574
 * Callers:
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAVTaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x18012C280 (-Initialize@MonitorFrame@@QEAAXPE$AAVTaskViewViewModel@Switcher@Experiences@ComposableShell@Wind.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18013431C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::TaskViewSwitchItemCloseInvokedEventHandler(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 WeakReference; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v5 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    *v5 = &off_180240C80;
    v6 = 0LL;
    v11 = 0LL;
    if ( a2 )
    {
      v7 = (**a2)(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v11);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v6 = v11;
    }
    WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference(v6);
    v9 = WeakReference;
    if ( WeakReference )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
    a1[6] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    a1[7] = IXamlMultitaskingViewController::CloseSwitchItem;
  }
  a1[37] = v5;
  return a1;
}
