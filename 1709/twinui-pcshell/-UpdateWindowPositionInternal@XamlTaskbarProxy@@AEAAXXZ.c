/*
 * XREFs of ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180152994
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x180149140 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 *     ?UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ @ 0x180152820 (-UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ.c)
 * Callees:
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180153790 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___ @ 0x18015389C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlTaskbarProxy::UpdateWindowPositionInternal(XamlTaskbarProxy *this)
{
  void *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 11) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 13);
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v6[0] = this;
    v6[1] = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 13);
    v3 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___(v2, v6);
    v4 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 11), 0LL, v3);
    v5 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v5);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(XamlTaskbarProxy *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
