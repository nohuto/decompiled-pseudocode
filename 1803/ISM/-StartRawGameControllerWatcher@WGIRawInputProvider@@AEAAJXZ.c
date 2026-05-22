/*
 * XREFs of ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800773B0
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800768D0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 *     ??$Callback@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIRawGameController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z@Z @ 0x180077B84 (--$Callback@U-$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VW.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIRawInputProvider::StartRawGameControllerWatcher(WGIRawInputProvider *this)
{
  __int64 (__fastcall *v2)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rbx
  __int64 (__fastcall *v3)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  HRESULT v5; // eax
  int ActivationFactory; // r14d
  __int64 (__fastcall **v7)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rax
  __int64 (__fastcall *v8)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // r14
  struct Windows::Gaming::Input::IRawGameController *v9; // rcx
  __int64 (__fastcall **v10)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rax
  __int64 (__fastcall *v11)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // r15
  struct Windows::Gaming::Input::IRawGameController *v12; // rcx
  unsigned int v13; // r15d
  struct Windows::Gaming::Input::IRawGameController *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct Windows::Gaming::Input::IRawGameController *v18; // [rsp+28h] [rbp-49h] BYREF
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-39h] BYREF
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 (__fastcall *v22)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+50h] [rbp-21h]
  __int64 (__fastcall *v24)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // [rsp+58h] [rbp-19h] BYREF
  int v25; // [rsp+60h] [rbp-11h]
  __int64 v26; // [rsp+68h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+70h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  HSTRING string; // [rsp+90h] [rbp+1Fh] BYREF

  v26 = -2LL;
  v19 = 0LL;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v27 = v4;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x1800776F4LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, &v19);
  if ( ActivationFactory >= 0 )
  {
    v22 = WGIRawInputProvider::OnRawGameControllerAdded;
    v23 = 0;
    v7 = (__int64 (__fastcall **)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *))Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(&v18, this, &v22);
    v2 = 0LL;
    v8 = 0LL;
    if ( &v22 != v7 )
    {
      v2 = *v7;
      *v7 = 0LL;
      v8 = v2;
    }
    v22 = v2;
    v9 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v24 = WGIRawInputProvider::OnRawGameControllerRemoved;
    v25 = 0;
    v10 = (__int64 (__fastcall **)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *))Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(&v18, this, &v24);
    v3 = 0LL;
    v11 = 0LL;
    if ( &v24 != v10 )
    {
      v3 = *v10;
      *v10 = 0LL;
      v11 = v3;
    }
    v24 = v3;
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v8 && v11 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 48LL))(
                            v19,
                            v2,
                            (char *)this + 64);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 64LL))(
                              v19,
                              v3,
                              (char *)this + 72);
        if ( ActivationFactory >= 0 )
        {
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v21);
          if ( ActivationFactory >= 0 )
          {
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &v20);
            if ( ActivationFactory >= 0 )
            {
              v13 = 0;
              if ( v20 )
              {
                while ( 1 )
                {
                  v18 = 0LL;
                  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Gaming::Input::IRawGameController **))(*(_QWORD *)v21 + 48LL))(
                                        v21,
                                        v13,
                                        &v18);
                  if ( ActivationFactory < 0 )
                    break;
                  ActivationFactory = WGIRawInputProvider::OnRawGameControllerAdded(this, 0LL, v18);
                  v14 = v18;
                  if ( ActivationFactory < 0 )
                    goto LABEL_29;
                  if ( v18 )
                  {
                    v18 = 0LL;
                    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v14 + 16LL))(v14);
                  }
                  if ( ++v13 >= v20 )
                    goto LABEL_31;
                }
                v14 = v18;
LABEL_29:
                if ( v14 )
                {
                  v18 = 0LL;
                  (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v14 + 16LL))(v14);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      ActivationFactory = -2147024882;
    }
  }
  else
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
LABEL_31:
  if ( v4 )
    LeaveCriticalSection(v4);
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64 (__fastcall *)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *)))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v2 )
    (*(void (__fastcall **)(__int64 (__fastcall *)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *)))(*(_QWORD *)v2 + 16LL))(v2);
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)ActivationFactory;
}
