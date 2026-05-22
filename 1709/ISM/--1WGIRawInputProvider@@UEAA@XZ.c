/*
 * XREFs of ??1WGIRawInputProvider@@UEAA@XZ @ 0x18009D214
 * Callers:
 *     ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x18009D1D0 (--_EWGIRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18009DEE8 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 *     ??1?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009E848 (--1-$vector@V-$ComPtr@VWGIController@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VWGIController@@@WR.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall WGIRawInputProvider::~WGIRawInputProvider(WGIRawInputProvider *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rcx
  HRESULT v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  void *v14; // rcx
  signed int LastError; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  v19[1] = -2LL;
  v19[2] = this;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || !*((_QWORD *)this + 10) )
    goto LABEL_14;
  v19[0] = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1, v19);
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_12;
    v5 = 532;
    goto LABEL_11;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 56LL))(
                        v19[0],
                        *((_QWORD *)this + 10));
  if ( ActivationFactory < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 535;
LABEL_11:
    McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v5, ActivationFactory);
  }
LABEL_12:
  v6 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_14:
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_33;
  v19[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, v19);
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 442, v8);
    goto LABEL_31;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 56LL))(v19[0], *((_QWORD *)this + 8));
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v12 = 445;
    goto LABEL_27;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 72LL))(v19[0], *((_QWORD *)this + 9));
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_28;
      v12 = 450;
LABEL_27:
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
LABEL_28:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
LABEL_31:
  v13 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_33:
  LODWORD(v19[0]) = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, v19, 4LL, 0LL);
  WGIRawInputProvider::SetInputFocusProcess(this, 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  std::vector<Microsoft::WRL::ComPtr<WGIController>>::~vector<Microsoft::WRL::ComPtr<WGIController>>((char *)this + 88);
  *((_QWORD *)this + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v14 = (void *)*((_QWORD *)this + 7);
  if ( v14 != (void *)-1LL )
  {
    if ( !CloseHandle(v14) )
    {
      LastError = GetLastError();
      v16 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v16 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v16);
      __debugbreak();
    }
    *((_QWORD *)this + 7) = -1LL;
  }
  v17 = *((_QWORD *)this + 5);
  if ( v17 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 4);
  if ( v18 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
