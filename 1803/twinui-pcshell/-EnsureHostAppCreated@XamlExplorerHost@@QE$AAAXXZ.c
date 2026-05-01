/*
 * XREFs of ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1801FAC48
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1801FAF7C (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1801FCA74 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 */

// Hidden C++ exception states: #wind=7
int __fastcall XamlExplorerHost::EnsureHostAppCreated(__int64 a1)
{
  wil::details::in1diag3 **v1; // rax
  _QWORD *RuntimeSiteAggregator; // rbx
  int v4; // eax
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h] BYREF
  UAPViewWrapper *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h]

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v10 = 0LL;
    RuntimeSiteAggregator = (_QWORD *)XamlExplorerHost::GetRuntimeSiteAggregator(a1, &v11);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v10);
    v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, UAPViewWrapper **))*RuntimeSiteAggregator)(
           *RuntimeSiteAggregator,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v5 = Platform::Details::Heap::Allocate(0xE0uLL, 0xF8uLL);
    v11 = (__int64)v5;
    v6 = __abi_winrt_cast_to(
           0,
           (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v10,
           (__int64)&_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__);
    v12 = v6;
    v7 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
           v5,
           v6,
           *(_QWORD *)(a1 + 40));
    v11 = v7;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 88), v7);
    __abi_winrt_ptr_dtor(v7);
    __abi_winrt_ptr_dtor(v6);
    LODWORD(v1) = Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v10);
  }
  return (int)v1;
}
