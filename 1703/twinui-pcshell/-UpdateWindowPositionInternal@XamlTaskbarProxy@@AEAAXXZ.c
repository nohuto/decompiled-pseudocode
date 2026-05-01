/*
 * XREFs of ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180128618
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x18011EE10 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 *     ?UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ @ 0x1801284D0 (-UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180129360 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___ @ 0x18012946C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlTaskbarProxy::UpdateWindowPositionInternal(XamlTaskbarProxy *this)
{
  signed __int32 i; // eax
  void *v3; // r8
  signed __int32 v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 9) )
  {
    for ( i = *((_DWORD *)this + 9);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)this + 9, i + 1, i);
          i = *((_DWORD *)this + 9) )
    {
      ;
    }
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v8[0] = this;
    v8[1] = this;
    do
      v4 = *((_DWORD *)this + 9);
    while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange((volatile signed __int32 *)this + 9, v4 + 1, v4) );
    v5 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___(v3, v8);
    v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, v5);
    v7 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v7);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)this);
  }
}
