/*
 * XREFs of ?add_TitleBarChanged@Win32BackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180108350
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005EFC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::add_TitleBarChanged(RTL_SRWLOCK *a1, __int64 a2, struct IUnknown **a3)
{
  signed int AgileReference; // edi
  _QWORD *v7; // rbx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct IUnknown *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h]

  v17 = 0LL;
  *a3 = 0LL;
  if ( !a2 )
  {
    AgileReference = -2147024809;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)AgileReference);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)AgileReference);
    return (unsigned int)AgileReference;
  }
  v16 = 0LL;
  v7 = 0LL;
  v8 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x40uLL);
    *(_QWORD *)v9 = &IAppViewDataSourceAdapter::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 2));
    v9[13] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>'};
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>>,2>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>'};
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    v7 = v9;
    *((_QWORD *)v9 + 7) = 0LL;
  }
  AgileReference = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v10 = v7[7];
    if ( v10 )
    {
      v7[7] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v15 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_85c8b24e_a24d_51f5_96c5_aa9540791d50, a2, &v15);
    if ( AgileReference < 0 )
    {
      v11 = v15;
    }
    else
    {
      v11 = v7[7];
      v7[7] = v15;
      v15 = v11;
    }
    if ( v11 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IUnknown **))*v7)(
                         v7,
                         &GUID_85c8b24e_a24d_51f5_96c5_aa9540791d50,
                         &v16);
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  if ( AgileReference >= 0 )
  {
    if ( !v16 )
    {
      AgileReference = -2147024809;
      goto LABEL_24;
    }
    AgileReference = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
                       a1 + 64,
                       v16,
                       *(void **)(*(_QWORD *)a2 + 24LL),
                       a3);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  }
LABEL_24:
  if ( AgileReference < 0 )
    goto LABEL_25;
  return 0LL;
}
