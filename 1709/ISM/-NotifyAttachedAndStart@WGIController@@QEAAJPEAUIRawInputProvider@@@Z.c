/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18009FEF8
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DA90 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009E7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A0444 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800A1544 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___ @ 0x1800A25A8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Gaming--Input--IGameCo.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  unsigned int v4; // esi
  void *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF
  volatile signed __int64 *v25; // [rsp+90h] [rbp+40h] BYREF
  signed __int64 v26; // [rsp+98h] [rbp+48h]

  v23[1] = -2LL;
  v4 = 0;
  if ( !*((_QWORD *)this + 20) )
  {
    v5 = operator new(0xA40uLL);
    memset(v5, 0, 0xA40uLL);
    *((_QWORD *)this + 20) = v5;
    **((_DWORD **)this + 20) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    *(_DWORD *)(*((_QWORD *)this + 20) + 4LL) = *((_DWORD *)this + 39);
    v6 = WGIController::NotifyDeviceAttach(this, a2);
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v8 = 379;
      goto LABEL_5;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 160LL))(
           *((_QWORD *)this + 8),
           this);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_6:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v8 = 380;
LABEL_5:
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v8, v6);
      goto LABEL_6;
    }
  }
  if ( *((_QWORD *)this + 9) )
  {
    v24 = 0LL;
    v23[2] = this;
    v9 = *((_QWORD *)this + 7);
    v26 = v9;
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_17;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_17:
    v25 = (volatile signed __int64 *)this;
    v11 = *((_QWORD *)this + 7);
    while ( v11 >= 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_21;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_21:
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___(
      v23,
      &v25);
    v13 = v25;
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v25);
    v14 = v23[0];
    if ( !v23[0] )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v13, &MinInput_Warning_CheckResult, 0, 394, 14);
      goto LABEL_41;
    }
    v15 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
            *((_QWORD *)this + 9),
            &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
            &v24);
    v4 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v24 + 80LL))(v24, v14, (char *)this + 240);
      v4 = v16;
      if ( v16 >= 0 )
      {
        v19 = WGIController::ApplyUserSettingsForController(this, 0LL);
        if ( v19 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 400, v19);
        v4 = 0;
        goto LABEL_40;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v18 = 397;
        goto LABEL_32;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 396;
LABEL_32:
      McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, v18, v16);
    }
LABEL_40:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_41:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  return v4;
}
