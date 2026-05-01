/*
 * XREFs of ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180030EA0
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18009917C (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180109D90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeserializePropertySet(
        struct MsgBlob *a1,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  unsigned int v4; // r14d
  void *v5; // rdi
  int CanCastTo; // esi
  char *v7; // rsi
  unsigned int v8; // eax
  __int64 (__fastcall ***v9)(__int64, GUID *, void **); // rbx
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  LPUNKNOWN v13; // rcx
  void (*v14)(void); // rax
  __int64 (__fastcall *v15)(__int64, GUID *, void **); // rax
  volatile signed __int64 *v16; // r8
  __int64 (__fastcall *v17)(__int64); // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  int v20; // eax
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  HSTRING v24; // rbx
  struct Windows::Foundation::Collections::IPropertySet *v25; // rcx
  __int64 v26; // rax
  struct Windows::Foundation::Collections::IPropertySet *v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v31; // rcx
  __int64 v32; // rcx
  void *v33; // rcx
  void *v35; // [rsp+28h] [rbp-39h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+30h] [rbp-31h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+38h] [rbp-29h] BYREF
  void *v38; // [rsp+40h] [rbp-21h]
  __int64 v39; // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v40)(__int64, GUID *, void **); // [rsp+50h] [rbp-11h]
  _QWORD v41[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v41[1] = -2LL;
  *a2 = 0LL;
  if ( a1 )
    v4 = *(_DWORD *)a1 & 0x1FFFFFFF;
  else
    v4 = 0;
  v5 = CoTaskMemAlloc(v4);
  v38 = v5;
  if ( !v5 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)0x8007000ELL,
      (int)v35);
    goto LABEL_85;
  }
  if ( a1 )
  {
    v8 = *(_DWORD *)a1 & 0xE0000000;
    if ( v8 == 1610612736 )
    {
      v7 = (char *)a1 + 8;
    }
    else
    {
      if ( v8 != -1610612736 )
        __debugbreak();
      v7 = (char *)*((_QWORD *)a1 + 1);
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( v4 )
  {
    if ( v7 )
    {
      memcpy_0(v5, v7, v4);
    }
    else
    {
      memset_0(v5, 0, v4);
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
  }
  v35 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  v10 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  if ( v10 )
  {
    v10[2] = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    v10[4] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v10[7] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = v10[7];
      if ( v12 )
      {
        v10[7] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v10 + 7);
    }
    v13 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
    v10[9] = 1LL;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable';
    v10[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v10[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>'};
    v10[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,IMarshal>'};
    v10[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v14 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v14 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v5 = v38;
      }
      else
      {
        v14();
      }
    }
    v10[10] = v5;
    *((_DWORD *)v10 + 22) = v4;
    *((_DWORD *)v10 + 23) = v4;
    v10[12] = CoTaskMemFree;
    v10[13] = 0LL;
    *v10 = &Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable';
    v10[1] = &Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `IWeakReferenceSource'};
    v10[2] = &Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>'};
    v10[3] = &Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,IMarshal>'};
    v10[4] = &Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v9 = (__int64 (__fastcall ***)(__int64, GUID *, void **))v10;
    v40 = (__int64 (__fastcall ***)(__int64, GUID *, void **))v10;
    v11 = v10;
  }
  if ( !v11 )
  {
    CanCastTo = -2147024882;
    CoTaskMemFree(v5);
    goto LABEL_56;
  }
  v15 = **v9;
  if ( (char *)v15 != (char *)Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::QueryInterface )
  {
    CanCastTo = v15((__int64)v9, &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &v35);
    goto LABEL_56;
  }
  v35 = 0LL;
  if ( InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v35 = v9;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, void **)))(*v9)[1])(v9);
    CanCastTo = 0;
    goto LABEL_56;
  }
  if ( InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da) )
  {
    v16 = (volatile signed __int64 *)v9;
    v35 = v9;
    CanCastTo = 0;
  }
  else if ( InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    v35 = (void *)v16;
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_905a0fef_bc53_11df_8c49_001e4fc686da) )
    {
      v35 = (void *)v16;
      CanCastTo = 0;
    }
    else if ( InlineIsEqualGUID(&GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      v35 = (void *)v16;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                    (Microsoft::WRL::FtmBase *)(v16 + 1),
                    &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
                    &v35);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      v16 = (volatile signed __int64 *)v35;
    }
    if ( CanCastTo < 0 )
      goto LABEL_56;
  }
  v17 = *(__int64 (__fastcall **)(__int64))(*v16 + 8);
  if ( v17 == Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::AddRef )
  {
    v18 = *((_QWORD *)v16 + 9);
    while ( v18 >= 0 )
    {
      if ( (_DWORD)v18 != 0x7FFFFFFF )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(v16 + 9, v18 + 1, v18);
        if ( v19 != v18 )
          continue;
      }
      v5 = v38;
      v9 = v40;
      goto LABEL_56;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v18 + 16));
    v5 = v38;
    v9 = v40;
  }
  else
  {
    v17((__int64)v16);
  }
LABEL_56:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, void **)))(*v9)[2])(v9);
  if ( CanCastTo >= 0 )
  {
    v5 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v20 = RoCreatePropertySetSerializer(&v39);
    CanCastTo = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v20,
        (int)v35);
LABEL_81:
      v32 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_83;
    }
    v36 = 0LL;
    string = 0LL;
    v21 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &string);
    if ( v21 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
      JUMPOUT(0x1800314F1LL);
    }
    v24 = string;
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v36 = 0LL;
    CanCastTo = RoActivateInstance(v24, v41);
    if ( CanCastTo < 0 )
      goto LABEL_77;
    v26 = *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1
        - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v26 = *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4
          - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v26 )
    {
      CanCastTo = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v41[0])(
                    v41[0],
                    &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                    &v36);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
      v27 = v36;
    }
    else
    {
      v27 = (struct Windows::Foundation::Collections::IPropertySet *)v41[0];
      v36 = (struct Windows::Foundation::Collections::IPropertySet *)v41[0];
    }
    if ( CanCastTo < 0 )
    {
LABEL_77:
      v29 = (unsigned int)CanCastTo;
      v30 = 278LL;
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, void *))(*(_QWORD *)v39 + 56LL))(
              v39,
              v27,
              v35);
      CanCastTo = v28;
      if ( v28 >= 0 )
      {
        v31 = v36;
        if ( v36 )
        {
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v36 + 8LL))(v36);
          v31 = v36;
        }
        *a2 = v31;
        CanCastTo = 0;
        goto LABEL_79;
      }
      v29 = (unsigned int)v28;
      v30 = 279LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)v29,
      (int)v35);
    v31 = v36;
LABEL_79:
    if ( v31 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    goto LABEL_81;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10D,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
    (const char *)(unsigned int)CanCastTo,
    (int)v35);
LABEL_83:
  v33 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_85:
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)CanCastTo;
}
