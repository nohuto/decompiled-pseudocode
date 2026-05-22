/*
 * XREFs of ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DA90
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009DFF8 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180007784 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009E7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@Z @ 0x18009E914 (--$emplace_back@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIController@@@W.c)
 *     ??0WGIController@@QEAA@XZ @ 0x18009F3DC (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x18009F72C (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18009FEF8 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerAdded(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct Windows::Gaming::Input::IRawGameController *v3; // r15
  WGIRawInputProvider *v4; // rsi
  std::exception_ptr *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // r14
  struct IMessageSession *v7; // r12
  struct IRawInputClient *v8; // r13
  WGIController *v9; // rbx
  WGIController *v10; // rax
  volatile signed __int64 *v11; // rdi
  int v12; // r15d
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _BYTE v17[16]; // [rsp+30h] [rbp-98h] BYREF
  WGIRawInputProvider *v18; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v19[7]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v20[72]; // [rsp+80h] [rbp-48h] BYREF
  WGIRawInputProvider *v21; // [rsp+D0h] [rbp+8h] BYREF
  struct Windows::Gaming::Input::IRawGameController *v22; // [rsp+E0h] [rbp+18h]
  char v23; // [rsp+E8h] [rbp+20h] BYREF

  v22 = a3;
  v21 = this;
  v19[3] = -2LL;
  v3 = a3;
  v4 = this;
  v18 = this;
  v23 = 0;
  __ExceptionPtrCreate(v17);
  v19[0] = v17;
  v19[1] = &v18;
  v19[2] = &v23;
  if ( std::_Execute_once(
         (WGIRawInputProvider *)((char *)v4 + 152),
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_fdfea97a1e4915bc7c15af4fd38df93b_ &&,WGIRawInputProvider * &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0,1>,2>,
         v19) )
  {
    __ExceptionPtrDestroy(v17);
  }
  else
  {
    if ( __ExceptionPtrToBool(v17) )
    {
      v5 = std::exception_ptr::exception_ptr((std::exception_ptr *)v20, (const struct std::exception_ptr *)v17);
      std::rethrow_exception(v5);
    }
    std::_XGetLastError();
    v4 = v21;
    v3 = v22;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 112));
  v19[4] = (char *)v4 + 112;
  v7 = (struct IMessageSession *)*((_QWORD *)v4 + 5);
  v8 = (struct IRawInputClient *)*((_QWORD *)v4 + 4);
  v9 = 0LL;
  v21 = 0LL;
  v10 = (WGIController *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = (volatile signed __int64 *)WGIController::WGIController(v10);
    v19[5] = v11;
    v19[6] = 0LL;
    v12 = WGIController::RuntimeClassInitialize((WGIController *)v11, v3, v8, v7);
    if ( v12 >= 0 )
    {
      if ( v11 )
      {
        v13 = *((_QWORD *)v11 + 7);
        while ( v13 >= 0 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v11 + 7, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_16;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
      }
LABEL_16:
      v9 = (WGIController *)v11;
      v21 = (WGIRawInputProvider *)v11;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((WGIController *)v11);
      v12 = 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((WGIController *)v11);
    }
    if ( v12 >= 0 && (int)WGIController::NotifyAttachedAndStart(v9, v4) >= 0 )
    {
      try
      {
        std::vector<Microsoft::WRL::ComPtr<WGIController>>::emplace_back<Microsoft::WRL::ComPtr<WGIController>>(
          (char *)v4 + 88,
          &v21);
      }
      catch ( ... )
      {
        v6 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
      }
      v9 = v21;
    }
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v9);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
