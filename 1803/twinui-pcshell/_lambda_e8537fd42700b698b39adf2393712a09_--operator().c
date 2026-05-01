/*
 * XREFs of _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x1801FD0E0
 * Callers:
 *     _lambda_e8537fd42700b698b39adf2393712a09_::_lambda_invoker_cdecl_ @ 0x1801FC040 (_lambda_e8537fd42700b698b39adf2393712a09_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1801FA958 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 *     Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___ @ 0x1801FC048 (Windows--UI--Xaml--ApplicationInitializationCallback--ApplicationInitializationCallback__lambda_.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1801FC858 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1801FCBD8 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1801FCF60 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     ??_GThreadData@?1??CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@345@@Z@QEAAPEAXI@Z @ 0x1801FD39C (--_GThreadData@-1--CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AA.c)
 *     ?StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindowCreationParameters@234@PE$AAVApplicationInitializationCallback@234@@Z @ 0x1801FE47C (-StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindo.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_e8537fd42700b698b39adf2393712a09_::operator()(__int64 a1, _DWORD *a2)
{
  int v3; // r15d
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  UAPViewWrapper *v6; // rdi
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 result; // rax
  UAPViewWrapper *v13[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-A8h]
  __int128 v15; // [rsp+40h] [rbp-98h] BYREF
  int v16; // [rsp+50h] [rbp-88h]
  __int64 v17[3]; // [rsp+60h] [rbp-78h] BYREF
  char v18; // [rsp+78h] [rbp-60h]
  __int64 v19; // [rsp+80h] [rbp-58h]
  __int64 (__fastcall ***v20)(_QWORD, __int64, __int64 *); // [rsp+88h] [rbp-50h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-48h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v19 = -2LL;
  try
  {
    v15 = *(_OWORD *)a2;
    v3 = a2[4];
    wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
      (__int64)v17,
      (__int64)(a2 + 6));
    `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView'::`2'::ThreadData::`scalar deleting destructor'(a2);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v5 = Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___(v4);
    v6 = (UAPViewWrapper *)__abi_winrt_ptr_ctor((__int64)v5);
    v13[1] = v6;
    __abi_winrt_ptr_dtor((__int64)v5);
    v13[0] = 0LL;
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Application",
      0x1Cu,
      0x1Bu);
    v7 = v22;
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v13);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v13);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        69LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor((__int64)v13[0]);
    v20 = v9;
    v10 = __abi_winrt_cast_to(0, v9, (__int64)&_uuidof__AUIFrameworkApplicationStaticsPrivate_Xaml_UI_Windows__);
    v14 = v10;
    v11 = __abi_winrt_ptr_ctor(v10);
    v14 = v11;
    __abi_winrt_ptr_dtor(v10);
    v16 = v3;
    Windows::UI::Xaml::IFrameworkApplicationStaticsPrivate::StartInCoreWindowHostingMode(v11, &v15, v6);
    v18 = 0;
    __abi_winrt_ptr_dtor(v11);
    __abi_winrt_ptr_dtor((__int64)v9);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v13);
    __abi_winrt_ptr_dtor((__int64)v6);
    if ( v18 )
    {
      v18 = 0;
      lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v17);
    }
    lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return 0xFFFFFFFFLL;
  }
  return result;
}
