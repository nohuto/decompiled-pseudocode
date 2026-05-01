/*
 * XREFs of ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18013F070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18013FAE0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f___ @ 0x18013FF74 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall XamlAltTabViewHost::Show(unsigned __int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // rdi
  int v11; // eax
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r12d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-89h] BYREF
  int v20; // [rsp+40h] [rbp-81h]
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  char v22; // [rsp+50h] [rbp-71h]
  __int128 v23; // [rsp+58h] [rbp-69h] BYREF
  __int64 v24; // [rsp+68h] [rbp-59h] BYREF
  __int64 v25; // [rsp+70h] [rbp-51h]
  __int128 v26; // [rsp+78h] [rbp-49h] BYREF
  __int64 v27; // [rsp+88h] [rbp-39h]
  __int64 v28; // [rsp+90h] [rbp-31h]
  __int64 v29; // [rsp+98h] [rbp-29h]
  __int64 v30; // [rsp+A0h] [rbp-21h]
  __int64 v31; // [rsp+A8h] [rbp-19h]
  __int64 v32; // [rsp+B0h] [rbp-11h]
  __int64 v33; // [rsp+B8h] [rbp-9h]
  __int128 v34; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v30 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
  *(_QWORD *)&v23 = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v21, &v23);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v34);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x69,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    if ( v22 )
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v21);
    if ( v20 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v5;
  }
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(a1 + 128));
  v31 = v7;
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a1 + 136));
  v32 = v8;
  v9 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 136);
  v10 = 0LL;
  v24 = 0LL;
  if ( v9 )
  {
    v11 = (**v9)(v9, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v24);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v10 = v24;
  }
  v25 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v33 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v26 = v34;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v27 = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v28 = v8;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v29 = v10;
  v25 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f = (_QWORD *)Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f___(&v23, &v26);
  v13 = (*XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f
       + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f >> 64);
  *XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f_____lambda_650cc3be0f7c1281208c8cf80a59183f = 0LL;
  v14 = v23;
  if ( (_QWORD)v23 )
  {
    *(_QWORD *)&v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v13 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x81,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)0x8007000ELL);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_3;
  }
  v25 = v13;
  v23 = v34;
  v15 = *(_QWORD *)(a1 + 160);
  v16 = *(_QWORD *)(a1 + 176);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 176) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, GUID *, unsigned __int64))(*(_QWORD *)v15 + 24LL))(
          v15,
          v13,
          &v23,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 176);
  v18 = v17;
  if ( v17 >= 0 )
  {
    *(_BYTE *)(a1 + 104) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(
      *(_QWORD *)(a1 + 80),
      *(unsigned int *)(a1 + 64));
    v22 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v20 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x83,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v22 )
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v21);
    if ( v20 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v18;
  }
}
