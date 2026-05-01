/*
 * XREFs of ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x1801FAD98
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1801FAF7C (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ?get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal@@SAPE$AAU?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x1801FBC5C (-get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x18020A3A0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180221C38 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHost::EnsureMetadataRegistered(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 Instance; // r14
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h]
  __int64 v12; // [rsp+70h] [rbp+18h]

  if ( !*(_BYTE *)(a1 + 96) )
  {
    XamlExplorerHost::GetRuntimeSiteAggregator(a1, &v10);
    v3 = WindowsInternal::ComposableShell::Desktop::NativeHostingXamlMetadataProvider::MetadataProviders::get(v2);
    v11 = v3;
    v4 = __abi_winrt_ptr_ctor(v3);
    v11 = v4;
    __abi_winrt_ptr_dtor(v3);
    v5 = 0;
    v6 = v10;
    while ( v5 < (unsigned int)Windows::UI::Xaml::Interop::IBindableVector::Size::get(v4) )
    {
      Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                   v4,
                   v5);
      v12 = Instance;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, Instance);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          62LL,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v8);
        break;
      }
      __abi_winrt_ptr_dtor(Instance);
      ++v5;
    }
    *(_BYTE *)(a1 + 96) = 1;
    __abi_winrt_ptr_dtor(v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
}
