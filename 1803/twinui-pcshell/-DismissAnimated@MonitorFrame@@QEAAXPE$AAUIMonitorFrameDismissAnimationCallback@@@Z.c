/*
 * XREFs of ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18020A864
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x180204E0C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db___ @ 0x180202714 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802028EC (WindowsInternal--ComposableShell--Experiences--Switcher--DismissAnimationCompleted--DismissAnima.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x180205068 (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x180215D04 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall MonitorFrame::DismissAnimated(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v3; // r15
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-50h]
  _QWORD *v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16[3]; // [rsp+60h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+50h]
  RTL_SRWLOCK *v19; // [rsp+D0h] [rbp+58h]
  _QWORD *v20; // [rsp+D8h] [rbp+60h]

  v18 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v18 = v3;
  AcquireSRWLockExclusive(a1 + 21);
  v19 = a1 + 21;
  v17 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
  v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v20 = v4;
  v14[0] = (__int64)a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
  v14[1] = __abi_winrt_ptr_ctor(v3);
  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___(
         v4,
         v14);
  v20 = v5;
  v6 = __abi_winrt_ptr_ctor((__int64)v5);
  v20 = (_QWORD *)v6;
  __abi_winrt_ptr_dtor((__int64)v5);
  v15[0] = (__int64)a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v15);
  v7 = __abi_winrt_ptr_ctor(v6);
  v15[1] = v7;
  if ( a1[11].Ptr )
  {
    v8 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v9 = lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(v16, v15);
    v12 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5683c41a0d5b3fdfd49831f290fa76db___(v8, v9);
    v11 = Windows::UI::Xaml::IWindow::Dispatcher::get(a1[11].Ptr);
    v13 = Windows::UI::Core::ICoreDispatcher::RunAsync(v11, 0LL, (__int64)v12);
    __abi_winrt_ptr_dtor(v13);
    __abi_winrt_ptr_dtor(v11);
    __abi_winrt_ptr_dtor((__int64)v12);
  }
  __abi_winrt_ptr_dtor(v7);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  __abi_winrt_ptr_dtor(v6);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  if ( a1 != (RTL_SRWLOCK *)-168LL )
    ReleaseSRWLockExclusive(a1 + 21);
  return __abi_winrt_ptr_dtor(v3);
}
