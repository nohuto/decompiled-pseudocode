/*
 * XREFs of ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18016D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18016DF80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall XamlAltTabViewHost::Show(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 (__fastcall ***v11)(_QWORD, void *, __int64 *); // rcx
  __int64 v12; // rsi
  int v13; // eax
  __int128 v14; // xmm6
  Microsoft::WRL::FtmBase *v15; // rdi
  Microsoft::WRL::FtmBase *v16; // rax
  Microsoft::WRL::FtmBase *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  int v25; // [rsp+38h] [rbp-D0h]
  __int64 v26; // [rsp+40h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+90h] [rbp-78h]
  int v37; // [rsp+98h] [rbp-70h]
  _OWORD v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int64 v41; // [rsp+D8h] [rbp-30h]
  __int128 v42; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v31 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v4;
  v36 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v25 = v5;
  v37 = v5;
  v29 = a1;
  LOBYTE(v30) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v42);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v6);
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    if ( v5 < 0 )
      return v7;
LABEL_3:
    LeaveCriticalSection(v4);
    return v7;
  }
  v9 = *(_QWORD *)(a1 + 136);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(a1 + 136));
  v32 = v9;
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(a1 + 144));
  v33 = v10;
  v11 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 144);
  v12 = 0LL;
  v26 = 0LL;
  if ( v11 )
  {
    v13 = (**v11)(v11, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v26);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v12 = v26;
  }
  v28 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v34 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = v42;
  v38[1] = v42;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v39 = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v40 = v10;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v41 = v12;
  v28 = 0LL;
  v15 = 0LL;
  v35 = 0LL;
  v16 = (Microsoft::WRL::FtmBase *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v16);
    *((_DWORD *)v17 + 13) = 1;
    *(_QWORD *)v17 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v17 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlExplorerHostWindowCreatedCallback>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v17 = off_1802B54F0;
    *((_QWORD *)v17 + 5) = off_1802B54D0;
    *(_OWORD *)((char *)v17 + 56) = v14;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)v17 + 9) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v17 + 10) = v10;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)v17 + 11) = v12;
    v15 = v17;
  }
  v18 = (__int64)v15 + 40;
  v19 = -(__int64)v15;
  v20 = v18 & -(__int64)(v19 != 0);
  if ( !v20 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)0x8007000ELL);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    if ( v25 < 0 )
      return v7;
    goto LABEL_3;
  }
  v28 = v18 & -(__int64)(v19 != 0);
  v38[0] = v42;
  v21 = *(_QWORD *)(a1 + 176);
  v22 = *(_QWORD *)(a1 + 184);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *, GUID *, __int64))(*(_QWORD *)v21 + 24LL))(
          v21,
          v20,
          v38,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 184);
  v24 = v23;
  if ( v23 >= 0 )
  {
    *(_BYTE *)(a1 + 112) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    LOBYTE(v30) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v25 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    if ( v25 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v24;
  }
}
