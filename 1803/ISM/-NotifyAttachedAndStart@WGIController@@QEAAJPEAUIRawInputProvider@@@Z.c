/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180078C1C
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029C10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGame_ea_180029C10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x180079144 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___ @ 0x18007AA5C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Gaming--Input--IGameCo.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v16; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int64 *v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this + 20) )
    goto LABEL_49;
  v5 = operator new(0x3D8uLL);
  v16 = v5;
  memset_0(v5, 0, 0x3D8uLL);
  v5[2] = 984;
  *((_QWORD *)this + 20) = v5;
  **((_DWORD **)this + 20) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
  *(_DWORD *)(*((_QWORD *)this + 20) + 4LL) = *((_DWORD *)this + 39);
  *(_DWORD *)(*((_QWORD *)this + 20) + 8LL) = 984;
  v16 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      v6[2] = 0LL;
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    v16 = v6;
    if ( v6 )
    {
      v7 = *v6;
      v8 = *((_QWORD *)this + 12);
      if ( *v6 != v8 )
      {
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 12));
          v7 = *v6;
        }
        *v6 = v8;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( (struct IRawInputProvider *)v6[1] != a2 )
      {
        (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)a2 + 8LL))(a2);
        v9 = v6[1];
        v6[1] = a2;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v6[2] = *((_QWORD *)this + 20);
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 13)
                                                                                                + 128LL))(
             *((_QWORD *)this + 13),
             WGIController::NotifyDeviceAttachCallback,
             v6,
             4LL);
      if ( v4 >= 0 )
      {
        v6 = 0LL;
      }
      else
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v6 )
  {
    v10 = v6[1];
    if ( v10 )
    {
      v6[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = *v6;
    if ( *v6 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    operator delete(v6);
  }
  if ( v4 >= 0
    && (v4 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 160LL))(
               *((_QWORD *)this + 8),
               this),
        v4 >= 0) )
  {
LABEL_49:
    if ( *((_QWORD *)this + 9) )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef((__int64)this);
      v17 = (volatile signed __int64 *)this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef((__int64)this);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___(
        &v18,
        &v17);
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v17);
      v12 = v18;
      if ( v18 )
      {
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        }
        v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 9))(
               *((_QWORD *)this + 9),
               &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
               &v16);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(*v16 + 80LL))(v16, v12, (char *)this + 240);
          if ( v4 >= 0 )
          {
            WGIController::ApplyUserSettingsForController(this, 0LL);
            v4 = 0;
          }
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      else
      {
        v4 = -2147024882;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
      v14 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      }
    }
  }
  else
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v4;
}
