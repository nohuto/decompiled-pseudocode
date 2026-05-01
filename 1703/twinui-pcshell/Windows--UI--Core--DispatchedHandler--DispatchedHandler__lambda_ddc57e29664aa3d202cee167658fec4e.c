/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___ @ 0x1801296BC
 * Callers:
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180128910 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___(
        _QWORD *a1,
        volatile signed __int32 **a2)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rcx
  signed __int32 v6; // eax
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v10; // [rsp+40h] [rbp+8h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = *a2;
    v10 = *a2;
    if ( *a2 )
    {
      do
        v6 = *((_DWORD *)v5 + 9);
      while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(v5 + 9, v6 + 1, v6) );
      v5 = v10;
    }
    *v4 = &off_18023F700;
    a1[6] = v5;
    if ( v5 )
    {
      do
        v7 = *((_DWORD *)v5 + 9);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v5 + 9, v7 + 1, v7) );
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
    }
  }
  a1[37] = v4;
  v8 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
  }
  return a1;
}
