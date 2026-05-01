/*
 * XREFs of ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180217510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___ @ 0x1802164E0 (MakeXamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___.c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_ @ 0x18021687C (_lambda_7e172f12ff20f7d48d0a79092595c49c_--__lambda_7e172f12ff20f7d48d0a79092595c49c_.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180216E80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall XamlAltTabViewHost::Show(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdi
  int XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+40h] [rbp-71h]
  __int128 v19; // [rsp+48h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-59h]
  __int64 v21; // [rsp+60h] [rbp-51h]
  __int64 v22; // [rsp+68h] [rbp-49h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  char v24; // [rsp+78h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+98h] [rbp-19h]
  int v29; // [rsp+A0h] [rbp-11h]
  __int128 v30; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v31; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v25 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v28 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v29 = v5;
  v23 = a1;
  v24 = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v31);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v6);
LABEL_3:
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    if ( v5 >= 0 )
      LeaveCriticalSection(v4);
    return v7;
  }
  v9 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 136));
  v26 = v9;
  v10 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 144));
  v27 = v10;
  v11 = __abi_winrt_cast_to(
          0,
          *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 144),
          (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  v12 = __abi_winrt_ptr_ctor(v11);
  v18 = v12;
  __abi_winrt_ptr_dtor(v11);
  v19 = v31;
  v20 = __abi_winrt_ptr_ctor(v9);
  v21 = __abi_winrt_ptr_ctor(v10);
  v22 = __abi_winrt_ptr_ctor(v12);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c = MakeXamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c_(
                                                                                     &v17,
                                                                                     (__int64)&v19);
  v7 = XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c;
  if ( XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_((__int64 *)&v19);
    v14 = v12;
LABEL_8:
    __abi_winrt_ptr_dtor(v14);
    __abi_winrt_ptr_dtor(v10);
    __abi_winrt_ptr_dtor(v9);
    goto LABEL_3;
  }
  v30 = v31;
  v15 = *(_QWORD *)(a1 + 176);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 184));
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
          v15,
          v17,
          &v30,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 184);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_((__int64 *)&v19);
    v14 = v18;
    goto LABEL_8;
  }
  *(_BYTE *)(a1 + 112) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  v24 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_((__int64 *)&v19);
  __abi_winrt_ptr_dtor(v18);
  __abi_winrt_ptr_dtor(v10);
  __abi_winrt_ptr_dtor(v9);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
