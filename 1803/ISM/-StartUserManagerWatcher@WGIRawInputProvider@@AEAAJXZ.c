/*
 * XREFs of ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800776F8
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x180077C70 (--$_Callback_once@V-$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInput.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x180077174 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WGIRawInputProvider::StartUserManagerWatcher(WGIRawInputProvider *this)
{
  _DWORD *v2; // rdi
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  _DWORD *v5; // rbx
  _DWORD *v6; // rax
  unsigned int i; // ebx
  struct Windows::System::Internal::IUserProfile *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct Windows::System::Internal::IUserProfile *v13; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-39h] BYREF
  __int64 v16; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-21h]
  __int128 v19; // [rsp+58h] [rbp-19h]
  _BYTE v20[24]; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+2Fh] BYREF

  v21 = -2LL;
  v17 = 0LL;
  v14 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
LABEL_20:
    ActivationFactory = 0;
    goto LABEL_21;
  }
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x1800779C9LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v17);
  string = 0LL;
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
                          v17,
                          &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1,
                          &v14);
    if ( ActivationFactory >= 0 )
    {
      *(_QWORD *)&v19 = WGIRawInputProvider::OnUserProfileChanged;
      DWORD2(v19) = 0;
      *(_QWORD *)v20 = this;
      *(_OWORD *)&v20[8] = v19;
      v2 = 0LL;
      *(_QWORD *)&v19 = 0LL;
      v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = 0LL;
      if ( v5 )
      {
        *(_QWORD *)v5 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
        v5[3] = 1;
        *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::Internal::UserProfileEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v5 + 1) = *(_OWORD *)v20;
        *((_QWORD *)v5 + 4) = *(_QWORD *)&v20[16];
        *(_QWORD *)v5 = off_1800EFDF0;
        v2 = v5;
        v6 = v5;
      }
      v18 = v2;
      if ( !v6 )
      {
        ActivationFactory = -2147024882;
        goto LABEL_21;
      }
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v14 + 48LL))(
                            v14,
                            v2,
                            (char *)this + 80);
      if ( ActivationFactory >= 0 )
      {
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 88LL))(v17, &v16) >= 0
          && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 56LL))(v16, &v15) >= 0 )
        {
          for ( i = 0; i < v15; ++i )
          {
            v13 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)v16 + 48LL))(
                   v16,
                   i,
                   &v13) >= 0 )
              WGIRawInputProvider::OnUserProfileChanged_impl(this, v13);
            v8 = v13;
            if ( v13 )
            {
              v13 = 0LL;
              (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v8 + 16LL))(v8);
            }
          }
        }
        goto LABEL_20;
      }
    }
  }
LABEL_21:
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)ActivationFactory;
}
