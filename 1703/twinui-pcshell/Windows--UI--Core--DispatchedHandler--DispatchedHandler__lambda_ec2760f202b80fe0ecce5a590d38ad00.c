/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___ @ 0x180129594
 * Callers:
 *     ?AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ @ 0x180128740 (-AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-20h]

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
    v11 = *a2;
    v6 = (volatile signed __int32 *)a2[1];
    if ( v6 )
    {
      do
        v7 = *((_DWORD *)v6 + 9);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 9, v7 + 1, v7) );
      v5 = v11;
    }
    *v4 = &off_18023F780;
    a1[6] = v5;
    a1[7] = v6;
    if ( v6 )
    {
      do
        v8 = *((_DWORD *)v6 + 9);
      while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v6 + 9, v8 + 1, v8) );
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
    }
  }
  a1[37] = v4;
  v9 = (volatile signed __int32 *)a2[1];
  if ( v9 )
  {
    a2[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  return a1;
}
