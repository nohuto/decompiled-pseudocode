/*
 * XREFs of ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009E414
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x18009EBA0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInput.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18009DD64 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WGIRawInputProvider::StartUserManagerWatcher(WGIRawInputProvider *this)
{
  _DWORD *v2; // rdi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  _DWORD *v8; // rax
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r9d
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  struct Windows::System::Internal::IUserProfile *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct Windows::System::Internal::IUserProfile *v23; // [rsp+38h] [rbp-49h] BYREF
  __int64 v24; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-39h] BYREF
  __int64 v26; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  _DWORD *v28; // [rsp+60h] [rbp-21h]
  __int128 v29; // [rsp+68h] [rbp-19h]
  _BYTE v30[24]; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+17h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+2Fh] BYREF

  v31 = -2LL;
  v27 = 0LL;
  v24 = 0LL;
  v2 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
    goto LABEL_39;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v27);
  v6 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_40;
    v7 = 477;
    goto LABEL_7;
  }
  ActivationFactory = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
                        v27,
                        &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1,
                        &v24);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 479;
LABEL_7:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, ActivationFactory);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  *(_QWORD *)&v29 = WGIRawInputProvider::OnUserProfileChanged;
  DWORD2(v29) = 0;
  *(_QWORD *)v30 = this;
  *(_OWORD *)&v30[8] = v29;
  v2 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v8[3] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::Internal::UserProfileEventArgs *>>::`vftable';
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v10 + 1) = *(_OWORD *)v30;
    *((_QWORD *)v10 + 4) = *(_QWORD *)&v30[16];
    *(_QWORD *)v10 = off_1800D8210;
    v2 = v10;
  }
  v28 = v2;
  if ( !v2 )
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 484, 14);
    goto LABEL_40;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v24 + 48LL))(
                        v24,
                        v2,
                        (char *)this + 80);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 88LL))(v27, &v26);
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_39:
        v6 = 0;
        goto LABEL_40;
      }
      v13 = 498;
LABEL_24:
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v13, v11);
      goto LABEL_39;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 56LL))(v26, &v25);
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_39;
      v13 = 499;
      goto LABEL_24;
    }
    v14 = 0;
    if ( !v25 )
      goto LABEL_39;
    while ( 1 )
    {
      v23 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)v26 + 48LL))(
              v26,
              v14,
              &v23);
      if ( v15 >= 0 )
        break;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v17 = 504;
LABEL_35:
        McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, v17, v15);
      }
LABEL_36:
      v18 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( ++v14 >= v25 )
        goto LABEL_39;
    }
    v15 = WGIRawInputProvider::OnUserProfileChanged_impl(this, v23);
    if ( v15 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v17 = 505;
    goto LABEL_35;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 488;
    goto LABEL_7;
  }
LABEL_40:
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v6;
}
