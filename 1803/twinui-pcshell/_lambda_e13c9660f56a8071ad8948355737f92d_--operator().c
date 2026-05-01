/*
 * XREFs of _lambda_e13c9660f56a8071ad8948355737f92d_::operator() @ 0x1801FA61C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_e13c9660f56a8071ad8948355737f92d_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1801FA1B0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_e13c9660f56a8071ad8948355737f92d_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18023551C (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIA_ea_18023551C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_e13c9660f56a8071ad8948355737f92d_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct IApplicationViewCollection *v10; // rbx
  struct IApplicationViewCollection *v12[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  UAPViewWrapper *v14; // [rsp+70h] [rbp+20h] BYREF
  struct IAppViewDataSourceAdapter *v15; // [rsp+78h] [rbp+28h] BYREF
  struct IImmersiveShellHookService *v16; // [rsp+80h] [rbp+30h] BYREF
  struct IApplicationViewIconLoader *v17; // [rsp+88h] [rbp+38h] BYREF

  v12[1] = (struct IApplicationViewCollection *)-2LL;
  v12[0] = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  v3 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, struct IApplicationViewCollection **))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         v12);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      180LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v17 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v5 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IApplicationViewIconLoader **))(*(_QWORD *)v4 + 24LL))(
         v4,
         &SID_ApplicationViewIconLoaderService,
         &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
         &v17);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      183LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v16 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IImmersiveShellHookService **))(*(_QWORD *)v6 + 24LL))(
         v6,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      186LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v8 = AppViewDataSourceAdapter_CreateInstance(v12[0], v17, v16, 0LL, &v15);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      189LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v14);
  v9 = (*(__int64 (__fastcall **)(struct IAppViewDataSourceAdapter *, GUID *, UAPViewWrapper **))(*(_QWORD *)v15 + 24LL))(
         v15,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v14);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      192LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (struct IApplicationViewCollection *)__abi_winrt_cast_to(
                                               0,
                                               (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v14,
                                               (__int64)&_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
  v12[2] = v10;
  __abi_winrt_ptr_assign((__int64 *)(*(_QWORD *)a1 + 72LL), (__int64)v10);
  __abi_winrt_ptr_dtor((__int64)v10);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
}
