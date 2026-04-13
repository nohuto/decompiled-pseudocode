/*
 * XREFs of ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180051984
 * Callers:
 *     ?StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18004FAF0 (-StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPE.c)
 *     ?UnstageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18004FEC0 (-UnstageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJ.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x1800530E0 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_1800530E0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64))
{
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  signed int v7; // edi
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // r8

  v4 = a4;
  *a2 = 0LL;
  v7 = a4 == 0LL ? 0x8007000E : 0;
  if ( a4 )
  {
    v8 = 0LL;
    v9 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v9 )
      v8 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             v9,
             a1,
             L"Windows.Foundation.IAsyncAction",
             1LL,
             -2LL);
    v7 = v8 == 0 ? 0x8007000E : 0;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 272) = v4;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
      v4 = 0LL;
    }
    if ( v7 >= 0 )
    {
      v10 = v8;
      v8 = 0LL;
      *a2 = (v10 + 184) & -(__int64)(v10 != 0);
    }
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  return (unsigned int)v7;
}
