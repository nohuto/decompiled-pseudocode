/*
 * XREFs of ??1WGIRawInputProvider@@UEAA@XZ @ 0x180076634
 * Callers:
 *     ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x1800765F0 (--_EWGIRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ??1?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180077A90 (--1-$vector@V-$ComPtr@VWGIController@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VWGIController@@@WR.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WGIRawInputProvider::~WGIRawInputProvider(WGIRawInputProvider *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  __int64 v4; // rcx
  HRESULT v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed int LastError; // eax
  unsigned __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF

  v13[1] = -2LL;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 && *((_QWORD *)this + 10) )
  {
    v13[0] = 0LL;
    string = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
    if ( v2 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
      goto LABEL_29;
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1, v13);
    string = 0LL;
    v4 = v13[0];
    if ( ActivationFactory >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13[0] + 56LL))(v13[0], *((_QWORD *)this + 10));
      v4 = v13[0];
    }
    if ( v4 )
    {
      v13[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_20;
  v13[0] = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
LABEL_29:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_30;
  }
  v6 = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, v13);
  v7 = v13[0];
  if ( v6 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13[0] + 56LL))(v13[0], *((_QWORD *)this + 8)) < 0
      || *((_QWORD *)this + 9)
      && (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13[0] + 72LL))(v13[0], *((_QWORD *)this + 9)) < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v7 = v13[0];
  }
  if ( v7 )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_20:
  LODWORD(v13[0]) = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, v13, 4LL, 0LL);
  WGIRawInputProvider::SetInputFocusProcess(this, 0, 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  std::vector<Microsoft::WRL::ComPtr<WGIController>>::~vector<Microsoft::WRL::ComPtr<WGIController>>((char *)this + 88);
  *((_QWORD *)this + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 == (void *)-1LL )
    goto LABEL_23;
  if ( !CloseHandle(v8) )
  {
LABEL_30:
    LastError = GetLastError();
    v12 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v12 = (unsigned int)LastError;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v12);
    JUMPOUT(0x1800768C9LL);
  }
  *((_QWORD *)this + 7) = -1LL;
LABEL_23:
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
