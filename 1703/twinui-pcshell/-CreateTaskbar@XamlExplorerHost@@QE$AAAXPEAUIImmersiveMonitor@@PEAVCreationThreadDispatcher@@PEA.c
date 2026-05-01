/*
 * XREFs of ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011DBEC
 * Callers:
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120A24 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x1800039D8 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x18011D948 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x18011DA98 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ??$MakeAndInitializeOrThrow@VXamlTaskbarProxy@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@wil@@YA?AV?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x18011E848 (--$MakeAndInitializeOrThrow@VXamlTaskbarProxy@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDi.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___ @ 0x18011E9B4 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlTaskbarProxyInternal@@UIXamlTaskbarProxy@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801200F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIXamlTaskbarPro_ea_1801200F0.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  void **v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdi
  signed __int32 v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // rsi
  signed __int32 v19; // eax
  RTL_SRWLOCK *v20; // rsi
  int Interface; // eax
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rcx
  int nDenominator; // [rsp+20h] [rbp-B9h] BYREF
  volatile signed __int32 *v25; // [rsp+28h] [rbp-B1h] BYREF
  __int64 v26; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v27[20]; // [rsp+38h] [rbp-A1h]
  __int64 v28; // [rsp+50h] [rbp-89h] BYREF
  __int64 v29; // [rsp+58h] [rbp-81h] BYREF
  __int64 v30; // [rsp+60h] [rbp-79h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+68h] [rbp-71h] BYREF
  volatile signed __int32 *v32; // [rsp+78h] [rbp-61h]
  __int64 v33; // [rsp+80h] [rbp-59h]
  _QWORD v34[3]; // [rsp+88h] [rbp-51h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-39h] BYREF
  int v36; // [rsp+B0h] [rbp-29h]
  __int64 v37; // [rsp+C0h] [rbp-19h]
  __int64 v38; // [rsp+C8h] [rbp-11h]
  void *v39; // [rsp+D0h] [rbp-9h]
  int nNumber[4]; // [rsp+D8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v37 = -2LL;
  v7 = a2;
  v28 = a2;
  v30 = a3;
  wil::srwlock::lock_exclusive(a1 + 10, SRWLock);
  if ( !a1[5].Ptr )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)0x8007139FLL);
    __debugbreak();
  }
  XamlExplorerHost::EnsureMetadataRegistered((__int64)a1, v9, v10, v11);
  XamlExplorerHost::EnsureHostAppCreated((__int64)a1);
  v26 = 0LL;
  v12 = (**a4)(a4, &GUID_a9fb332f_1d91_498e_8f2c_ecfe8f4f518f, &v26);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v29 = v26;
  wil::MakeAndInitializeOrThrow<XamlTaskbarProxy,IImmersiveMonitor * &,CreationThreadDispatcher * &,IXamlTaskbarProxyHost *>(
    &v25,
    &v28,
    &v30,
    &v29);
  v13 = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  if ( v13 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v38 = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v14 = v25;
  v32 = v25;
  if ( v25 )
  {
    do
      v15 = *((_DWORD *)v14 + 9);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange(v14 + 9, v15 + 1, v15) );
    v14 = v32;
    v7 = v28;
  }
  if ( v13 )
    (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v13 + 8LL))(
      (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL),
      0x7FFFFFFFLL);
  v33 = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v16 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v7 + 112LL))(v7, &nDenominator, &nDenominator);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  *(_OWORD *)nNumber = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 72LL))(v7, nNumber);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  *(_DWORD *)&v27[8] = 0;
  *(_QWORD *)&v27[12] = 40LL;
  *(_QWORD *)v27 = (unsigned int)nNumber[0];
  *(_DWORD *)&v27[4] = MulDiv(nNumber[3], 96, nDenominator) - 40;
  *(_DWORD *)&v27[8] = MulDiv(nNumber[2] - nNumber[0], 96, nDenominator);
  v27[16] = 1;
  v18 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v39 = v18;
  v34[0] = v14;
  if ( v14 )
  {
    do
      v19 = *((_DWORD *)v14 + 9);
    while ( v19 != 0x7FFFFFFF && v19 != _InterlockedCompareExchange(v14 + 9, v19 + 1, v19) );
    v14 = v32;
  }
  if ( v13 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v34[1] = (unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL);
  v20 = (RTL_SRWLOCK *)WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___(
                         v18,
                         v34);
  SRWLock[1] = v20;
  v35 = *(_OWORD *)v27;
  v36 = *(_DWORD *)&v27[16];
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(a1[8].Ptr, &v35, v20);
  if ( v20 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 2))(v20);
  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IXamlTaskbarProxyInternal,IXamlTaskbarProxy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                v25,
                &GUID_4a18900d_2219_4123_8afb_e733c16a2e33,
                a6);
  if ( Interface < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Interface);
  if ( v13 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
  if ( v13 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))((unsigned __int64)&a1[1] & -(__int64)(a1 != 0LL));
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v22);
  }
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
