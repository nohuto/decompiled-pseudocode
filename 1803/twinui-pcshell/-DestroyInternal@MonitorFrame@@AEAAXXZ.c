/*
 * XREFs of ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18020A708
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x180204F0C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180204F0C.c)
 *     wil::details::ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___::_ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___ @ 0x1802073EC (wil--details--ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___--_ScopeExitFn__lambda_a047.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a___ @ 0x180202608 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x180215D04 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x18027BA6C (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MonitorFrame::DestroyInternal(MonitorFrame *this)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v7[48]; // [rsp+38h] [rbp-30h] BYREF
  MonitorFrame *v8; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+78h] [rbp+10h]
  __int64 v10; // [rsp+80h] [rbp+18h]
  __int64 v11; // [rsp+88h] [rbp+20h]

  v8 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
  v6[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v6);
  v6[1] = (__int64)this;
  if ( *((_QWORD *)this + 11) )
  {
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v9 = v2;
    v3 = (__int64 *)lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(v7, v6);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a___(v2, v3);
    v9 = v4;
    v5 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 11));
    v10 = v5;
    v11 = Windows::UI::Core::ICoreDispatcher::RunAsync(v5, 0LL, (__int64)v4);
    __abi_winrt_ptr_dtor(v11);
    __abi_winrt_ptr_dtor(v5);
    __abi_winrt_ptr_dtor((__int64)v4);
  }
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
}
