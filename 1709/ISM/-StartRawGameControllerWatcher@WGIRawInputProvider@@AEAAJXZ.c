/*
 * XREFs of ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009DFF8
 * Callers:
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x18009D69C (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DA90 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 *     ??$Callback@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIRawGameController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z@Z @ 0x18009EAA0 (--$Callback@U-$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VW.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIRawInputProvider::StartRawGameControllerWatcher(WGIRawInputProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  __int64 v5; // rcx
  __int64 (__fastcall **v6)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rax
  __int64 (__fastcall *v7)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rbx
  struct Windows::Gaming::Input::IRawGameController *v8; // rcx
  __int64 (__fastcall **v9)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rax
  __int64 (__fastcall *v10)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rdi
  struct Windows::Gaming::Input::IRawGameController *v11; // rcx
  int v12; // eax
  unsigned int v13; // r14d
  int v14; // r9d
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  struct Windows::Gaming::Input::IRawGameController *v18; // rcx
  int v19; // r9d
  struct Windows::Gaming::Input::IRawGameController *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct Windows::Gaming::Input::IRawGameController *v24; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h] BYREF
  __int64 (__fastcall *v28)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // [rsp+58h] [rbp-29h] BYREF
  int v29; // [rsp+60h] [rbp-21h]
  __int64 (__fastcall *v30)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // [rsp+68h] [rbp-19h] BYREF
  int v31; // [rsp+70h] [rbp-11h]
  __int64 v32; // [rsp+78h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF

  v32 = -2LL;
  v25 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v33 = v2;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, &v25);
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 391, ActivationFactory);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v28 = WGIRawInputProvider::OnRawGameControllerAdded;
  v29 = 0;
  v6 = (__int64 (__fastcall **)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *))Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(&v24, this, &v28);
  v7 = 0LL;
  if ( &v28 != v6 )
  {
    v7 = *v6;
    *v6 = 0LL;
  }
  v28 = v7;
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v30 = WGIRawInputProvider::OnRawGameControllerRemoved;
  v31 = 0;
  v9 = (__int64 (__fastcall **)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *))Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(&v24, this, &v30);
  v10 = 0LL;
  if ( &v30 != v9 )
  {
    v10 = *v9;
    *v9 = 0LL;
  }
  v30 = v10;
  v11 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !v7 )
  {
    LOBYTE(v12) = 14;
    v13 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_50;
    v14 = 399;
    goto LABEL_20;
  }
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v25 + 48LL))(v25, v7, (char *)this + 64);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v25 + 64LL))(v25, v10, (char *)this + 72);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 80LL))(v25, &v27);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v26);
          v13 = v12;
          if ( v12 >= 0 )
          {
            v15 = 0;
            if ( v26 )
            {
              while ( 1 )
              {
                v24 = 0LL;
                v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Gaming::Input::IRawGameController **))(*(_QWORD *)v27 + 48LL))(
                        v27,
                        v15,
                        &v24);
                v13 = v16;
                if ( v16 < 0 )
                  break;
                v16 = WGIRawInputProvider::OnRawGameControllerAdded(this, 0LL, v24);
                v13 = v16;
                if ( v16 < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_48;
                  v19 = 421;
                  goto LABEL_47;
                }
                v18 = v24;
                if ( v24 )
                {
                  v24 = 0LL;
                  (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v18 + 16LL))(v18);
                }
                if ( ++v15 >= v26 )
                  goto LABEL_50;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_48;
              v19 = 420;
LABEL_47:
              McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, v19, v16);
LABEL_48:
              v20 = v24;
              if ( v24 )
              {
                v24 = 0LL;
                (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v20 + 16LL))(v20);
              }
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v14 = 415;
            goto LABEL_20;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v14 = 414;
          goto LABEL_20;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 408;
        goto LABEL_20;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 404;
      goto LABEL_20;
    }
  }
  else
  {
    LOBYTE(v12) = 14;
    v13 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 400;
LABEL_20:
      McTemplateU0qqq((__int64)v11, &MinInput_Warning_CheckResult, 0, v14, v12);
    }
  }
LABEL_50:
  if ( v2 )
    LeaveCriticalSection(v2);
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64 (__fastcall *)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *)))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 )
    (*(void (__fastcall **)(__int64 (__fastcall *)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *)))(*(_QWORD *)v7 + 16LL))(v7);
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v13;
}
