/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___ @ 0x18003AEF8
 * Callers:
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002FF00 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026D90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProce.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003F64C (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003F64C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  signed int v9; // ebx
  void *v10; // rax
  __int64 v11; // rdi

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = off_1800D2730;
    v8 = *(_QWORD *)a4;
    v7[1] = *(_QWORD *)a4;
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(v8);
    v7[2] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    *((_BYTE *)v7 + 24) = 0;
    *(_BYTE *)(a4 + 16) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  v9 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v10 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = 0LL;
    if ( v10 )
      v11 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v10,
              a1,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              -2LL);
    v9 = v11 == 0 ? 0x8007000E : 0;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 256) = v7;
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
      v7 = 0LL;
    }
    if ( v9 >= 0 )
    {
      *a2 = (v11 + 176) & -(__int64)(v11 != 0);
      v11 = 0LL;
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8);
  }
  return (unsigned int)v9;
}
