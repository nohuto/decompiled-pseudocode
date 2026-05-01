/*
 * XREFs of WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___ @ 0x180148E98
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 * Callees:
 *     _lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_ @ 0x1801482CC (_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_--__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'};
  a1[1] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `Platform::Object's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'};
  a1[2] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable';
  a1[3] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[4] = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[6] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v4 = a1 + 7;
  a1[39] = a1 + 7;
  if ( a1 != (_QWORD *)-56LL )
  {
    v5 = *a2;
    v8[0] = v5;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 52));
      v5 = v8[0];
    }
    v6 = a2[1];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(a2[1]);
    v8[1] = v6;
    *v4 = &off_1802B27C8;
    a1[8] = v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 52));
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    a1[9] = v6;
    lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_((__int64)v8);
  }
  a1[39] = v4;
  lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_((__int64)a2);
  return a1;
}
