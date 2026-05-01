/*
 * XREFs of ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C
 * Callers:
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AF78 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180147C78 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x180147DC8 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     _lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_ @ 0x1801482CC (_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_--__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___ @ 0x180148E98 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??$MakeAndInitialize@VXamlTaskbarProxy@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x1801493B4 (--$MakeAndInitialize@VXamlTaskbarProxy@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlTaskbarProxyInternal@@UIXamlTaskbarProxy@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014A620 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014A620.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18014C8B4 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall XamlExplorerHost::CreateTaskbar(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        int a5,
        __int64 a6)
{
  __int64 v7; // r14
  RTL_SRWLOCK *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  void **v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rdi
  int v17; // eax
  int v18; // eax
  void *v19; // r14
  __int64 v20; // rdi
  int Interface; // eax
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rcx
  int nDenominator; // [rsp+20h] [rbp-B9h] BYREF
  int v25; // [rsp+24h] [rbp-B5h]
  volatile signed __int32 *v26; // [rsp+28h] [rbp-B1h] BYREF
  __int64 v27; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v28[20]; // [rsp+38h] [rbp-A1h]
  __int64 v29; // [rsp+50h] [rbp-89h] BYREF
  __int64 v30; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp-59h] BYREF
  __int128 v34; // [rsp+90h] [rbp-49h] BYREF
  int v35; // [rsp+A0h] [rbp-39h]
  __int64 v36; // [rsp+B0h] [rbp-29h]
  RTL_SRWLOCK *v37; // [rsp+B8h] [rbp-21h]
  __int64 v38; // [rsp+C0h] [rbp-19h]
  void *v39; // [rsp+C8h] [rbp-11h]
  int nNumber[4]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v36 = -2LL;
  v7 = a2;
  v29 = a2;
  v31[0] = a3;
  v25 = 0;
  v9 = a1 + 11;
  AcquireSRWLockExclusive(a1 + 11);
  v37 = v9;
  if ( !a1[5].Ptr )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)0x8007139FLL);
    __debugbreak();
  }
  XamlExplorerHost::EnsureMetadataRegistered((__int64)a1, v10, v11, v12);
  XamlExplorerHost::EnsureHostAppCreated((__int64)a1);
  v27 = 0LL;
  v13 = (**a4)(a4, &GUID_a9fb332f_1d91_498e_8f2c_ecfe8f4f518f, &v27);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v30 = v27;
  v26 = 0LL;
  v25 = 1;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<XamlTaskbarProxy,XamlTaskbarProxy,IImmersiveMonitor * &,CreationThreadDispatcher * &,IXamlTaskbarProxyHost *>(
          &v26,
          &v29,
          v31,
          &v30);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil\\wrl.h",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v38 = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v16 = v26;
  v33[0] = v26;
  if ( v26 )
  {
    _InterlockedIncrement(v26 + 13);
    v16 = (volatile signed __int32 *)v33[0];
    v7 = v29;
  }
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v33[1] = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v17 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v7 + 112LL))(v7, &nDenominator, &nDenominator);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  *(_OWORD *)nNumber = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 72LL))(v7, nNumber);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  *(_DWORD *)&v28[8] = 0;
  *(_QWORD *)&v28[12] = 40LL;
  *(_QWORD *)v28 = (unsigned int)nNumber[0];
  *(_DWORD *)&v28[4] = MulDiv(nNumber[3], 96, nDenominator) - 40;
  *(_DWORD *)&v28[8] = MulDiv(nNumber[2] - nNumber[0], 96, nDenominator);
  v28[16] = 1;
  v19 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v39 = v19;
  v32[0] = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 13);
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v32[1] = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v20 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___(
          v19,
          v32);
  v31[1] = v20;
  v34 = *(_OWORD *)v28;
  v35 = *(_DWORD *)&v28[16];
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(a1[9].Ptr, &v34, v20);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::QueryInterface(
                v26,
                &GUID_4a18900d_2219_4123_8afb_e733c16a2e33,
                a6);
  if ( Interface < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Interface);
  lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_(v33);
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 16LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    if ( _InterlockedExchangeAdd(v22 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 72LL))(v22, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
}
