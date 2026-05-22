/*
 * XREFs of ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800773B0 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800092C8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800092F8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029C10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGame_ea_180029C10.c)
 *     ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x180076EB4 (--$emplace_back@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIController@@@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ??0WGIController@@QEAA@XZ @ 0x180078350 (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x180078610 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180078C1C (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerAdded(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct Windows::Gaming::Input::IRawGameController *v3; // r15
  WGIRawInputProvider *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  struct IMessageSession *v6; // r12
  struct IRawInputClient *v7; // r13
  WGIController *v8; // rbx
  WGIController *v9; // rax
  WGIController *v10; // rdi
  int v11; // r15d
  std::exception_ptr *v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-88h] BYREF
  char *v15; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v17[11]; // [rsp+50h] [rbp-58h] BYREF
  WGIRawInputProvider *v18; // [rsp+B0h] [rbp+8h] BYREF
  struct Windows::Gaming::Input::IRawGameController *v19; // [rsp+C0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+C8h] [rbp+20h] BYREF

  v19 = a3;
  v18 = this;
  v14[1] = -2LL;
  v3 = a3;
  v4 = this;
  v14[0] = this;
  LOBYTE(v20) = 0;
  __ExceptionPtrCreate(v16);
  v17[0] = v16;
  v17[1] = v14;
  v17[2] = &v20;
  if ( std::_Execute_once(
         (WGIRawInputProvider *)((char *)v4 + 152),
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_fdfea97a1e4915bc7c15af4fd38df93b_ &&,WGIRawInputProvider * &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0,1>,2>,
         v17) )
  {
    __ExceptionPtrDestroy(v16);
  }
  else
  {
    if ( __ExceptionPtrToBool(v16) )
    {
      v13 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v15, (const struct std::exception_ptr *)v16);
      std::rethrow_exception(v13);
    }
    std::_XGetLastError();
    v4 = v18;
    v3 = v19;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 112));
  v15 = (char *)v4 + 112;
  v6 = (struct IMessageSession *)*((_QWORD *)v4 + 5);
  v7 = (struct IRawInputClient *)*((_QWORD *)v4 + 4);
  v8 = 0LL;
  v18 = 0LL;
  v9 = (WGIController *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = WGIController::WGIController(v9);
    v14[0] = v10;
    v16[0] = 0LL;
    v11 = WGIController::RuntimeClassInitialize(v10, v3, v7, v6);
    if ( v11 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef((__int64)v10);
      v8 = v10;
      v18 = v10;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
      v11 = 0;
    }
    else if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
    }
    if ( v11 >= 0 && (int)WGIController::NotifyAttachedAndStart(v8, v4) >= 0 )
    {
      try
      {
        std::vector<Microsoft::WRL::ComPtr<WGIController>>::emplace_back<Microsoft::WRL::ComPtr<WGIController>>(
          (char *)v4 + 88,
          &v18);
      }
      catch ( ... )
      {
        v5 = v20;
      }
      v8 = v18;
    }
  }
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v8);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
