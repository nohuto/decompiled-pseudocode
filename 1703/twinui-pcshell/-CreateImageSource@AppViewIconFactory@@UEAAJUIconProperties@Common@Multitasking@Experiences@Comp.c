/*
 * XREFs of ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z @ 0x180165F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064DD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIApplicationViewIconLoaderNotifications@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166640 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIApplicationViewIconLoaderNotifications@@VNil@D.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppViewIconFactory::CreateImageSource(__int64 a1, __int64 a2, _QWORD *a3)
{
  HRESULT v6; // eax
  int ActivationFactory; // eax
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r12
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v14; // r14
  volatile signed __int64 *v15; // rax
  volatile signed __int64 *v16; // rbx
  int v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp-41h] BYREF
  __int64 v29; // [rsp+58h] [rbp-39h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h]
  __int64 v31; // [rsp+68h] [rbp-29h]
  volatile signed __int64 *v32; // [rsp+70h] [rbp-21h]
  volatile signed __int64 *v33; // [rsp+78h] [rbp-19h]
  __int64 v34; // [rsp+80h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v34 = -2LL;
  *a3 = 0LL;
  v27 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap", 0x2Du, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_5563ebb1_3ef2_42c5_9c6d_1cf5dcc041ff, &v27);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_29;
  }
  v9 = MulDiv((int)*(float *)a2, *(_DWORD *)(a2 + 24), 96);
  v10 = (unsigned int)MulDiv((int)*(float *)(a2 + 4), *(_DWORD *)(a2 + 24), 96);
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v27 + 48LL))(
          v27,
          v9,
          v10,
          &v28);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v28;
    v14 = *(_QWORD *)(a1 + 32);
    v29 = 0LL;
    v32 = 0LL;
    v15 = (volatile signed __int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v33 = v15;
    if ( v15 )
    {
      *((_QWORD *)v15 + 4) = 1LL;
      *v15 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
      *((_QWORD *)v15 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IApplicationViewIconLoaderNotifications'};
      *((_QWORD *)v15 + 2) = &AppViewIconLoader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v16 = (volatile signed __int64)&AppViewIconLoader::`vftable';
      *((_QWORD *)v16 + 1) = &AppViewIconLoader::`vftable'{for `IApplicationViewIconLoaderNotifications'};
      *((_QWORD *)v16 + 2) = &AppViewIconLoader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
      *((_QWORD *)v16 + 5) = 0LL;
      v32 = v16;
      v33 = 0LL;
      hstringHeader = *(HSTRING_HEADER *)a2;
      v17 = *(_DWORD *)(a2 + 24);
      if ( v13 )
      {
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[1])(v13);
        v18 = *((_QWORD *)v16 + 5);
        *((_QWORD *)v16 + 5) = v13;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      LODWORD(v30) = MulDiv((int)*(float *)&hstringHeader.Reserved.Reserved2[16], v17, 96);
      HIDWORD(v30) = MulDiv((int)*(float *)&hstringHeader.Reserved.Reserved2[20], v17, 96);
      LODWORD(v31) = MulDiv((int)*(float *)&hstringHeader.Reserved.Reserved2[8], v17, 96);
      HIDWORD(v31) = MulDiv((int)*(float *)&hstringHeader.Reserved.Reserved2[12], v17, 96);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned __int64))(*(_QWORD *)v12 + 24LL))(
              v12,
              v14,
              v31,
              v30,
              v17,
              (unsigned __int64)(v16 + 1) & -(__int64)(v16 != 0LL));
      v8 = v19;
      if ( v19 >= 0 )
        v8 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewIconLoaderNotifications,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
               v16,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v29);
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
          (const char *)(unsigned int)v19);
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v16);
      if ( v8 >= 0 )
      {
        v22 = (**v28)(v28, &GUID_737ef309_ea41_4d96_a71c_98e98efcab07, a3);
        v8 = v22;
        if ( v22 >= 0 )
        {
          v8 = 0;
LABEL_25:
          v23 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          goto LABEL_27;
        }
        v20 = (unsigned int)v22;
        v21 = 117LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
          (const char *)v20);
        goto LABEL_25;
      }
    }
    else
    {
      v8 = -2147024882;
    }
    v20 = (unsigned int)v8;
    v21 = 115LL;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x70,
    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
    (const char *)(unsigned int)v11);
LABEL_27:
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
  }
LABEL_29:
  v25 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v8;
}
