/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___ @ 0x1800375FC
 * Callers:
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002CCE0 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003BE5C (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003BE5C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed int v11; // edi
  __int64 v12; // rbx
  void *v13; // rax
  __int64 v14; // r8
  signed __int64 v16; // [rsp+20h] [rbp-28h]

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v7 )
  {
    *v7 = off_1800C4020;
    v8 = *a4;
    v7[1] = *a4;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 120);
      v16 = v9;
      while ( v9 >= 0 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 120), v9 + 1, v9);
        if ( v10 == v9 )
          goto LABEL_7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
    }
LABEL_7:
    v7[2] = a4[1];
    a4[1] = 0LL;
    *((_BYTE *)v7 + 24) = 0;
    *((_BYTE *)a4 + 16) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  v11 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v12 = 0LL;
    v13 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v13 )
      v12 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v13,
              a1,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              v16,
              -2LL);
    v11 = v12 == 0 ? 0x8007000E : 0;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 272) = v7;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 104LL))(v12 + 8);
      v7 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v14 = v12;
      v12 = 0LL;
      *a2 = (v14 + 184) & -(__int64)(v14 != 0);
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 16LL))(v12 + 8);
  }
  return (unsigned int)v11;
}
