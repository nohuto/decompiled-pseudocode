/*
 * XREFs of ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180124400
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
Platform::Details *__fastcall Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        Platform::Details *a1,
        __int64 a2)
{
  void *v4; // rdx

  Platform::Object::Object((char *)a1 + 24);
  *(_QWORD *)a1 = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object's `Platform::IBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>'};
  *((_QWORD *)a1 + 1) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Details::IPrintable'};
  *((_QWORD *)a1 + 3) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object'};
  *((_QWORD *)a1 + 4) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `__abi_IUnknown'};
  *((_QWORD *)a1 + 5) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 8) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)a1 + 6) = a2;
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxVtable(a1, v4);
  return a1;
}
