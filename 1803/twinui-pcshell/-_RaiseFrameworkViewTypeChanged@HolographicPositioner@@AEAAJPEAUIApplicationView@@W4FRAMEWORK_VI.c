/*
 * XREFs of ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801B2DA0
 * Callers:
 *     ?FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801AE3C0 (-FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001A210 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA320 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801AA5D8 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1801AC970 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2F8 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseFrameworkViewTypeChanged(__int64 a1, __int64 a2)
{
  void *v3; // rax
  unsigned int v4; // ebx
  ViewHostItemPropertyChangedArgs *v5; // rdi
  int v6; // eax
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  void *v16; // [rsp+30h] [rbp-30h] BYREF
  ViewHostItemPropertyChangedArgs *v17; // [rsp+38h] [rbp-28h] BYREF
  const WCHAR *v18; // [rsp+40h] [rbp-20h] BYREF
  ViewHostItemPropertyChangedArgs *v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  ViewHostItemPropertyChangedArgs *v22; // [rsp+98h] [rbp+38h] BYREF

  v20[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(a1, &v15, a2);
  if ( !v15 )
    goto LABEL_22;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v22);
  v22 = 0LL;
  v3 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v3;
  if ( v3 )
  {
    v5 = ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs((ViewHostItemPropertyChangedArgs *)v3);
    v17 = v5;
    v16 = 0LL;
    v18 = L"FrameworkViewType";
    *((_DWORD *)v5 + 12) = 5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)v5 + 7, 0LL);
    v6 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)v5 + 12, &v18);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v17);
      goto LABEL_6;
    }
    v8 = *((_QWORD *)v5 + 11);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 11, v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_13;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
LABEL_13:
    v22 = v5;
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v17);
    v19 = v22;
    v20[0] = v15;
    v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemPropertyChangedArgs *>(
            (PVOID)(a1 + 296),
            (volatile int *)v20,
            (__int64 *)&v19);
    v4 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BB,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_20;
    }
    v14 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
            &v15,
            &v14);
    v4 = v11;
    if ( v11 < 0 )
    {
      v12 = 1471LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_20;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 88LL))(v14);
    v4 = v11;
    if ( v11 < 0 )
    {
      v12 = 1472LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v22);
LABEL_22:
    v4 = 0;
    goto LABEL_23;
  }
  v4 = -2147024882;
LABEL_6:
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v16);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5BA,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v4);
LABEL_20:
  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v22);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v4;
}
