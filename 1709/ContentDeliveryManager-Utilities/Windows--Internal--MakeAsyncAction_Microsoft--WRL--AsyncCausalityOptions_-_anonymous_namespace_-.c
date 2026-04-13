/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25___ @ 0x18003716C
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002B6F0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_ @ 0x180038E18 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_71_ea_180038E18.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003CA28 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003CA28.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  signed int v9; // edi
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx

  v7 = operator new(0x70uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_(
                                                   v7,
                                                   a4);
  else
    v8 = 0LL;
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    v10 = 0LL;
    v11 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v11 )
      v10 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v11,
              a1,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              -2LL);
    v9 = v10 == 0 ? 0x8007000E : 0;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 272) = v8;
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
      v8 = 0LL;
    }
    if ( v9 >= 0 )
    {
      v12 = v10;
      v10 = 0LL;
      *a2 = (v12 + 184) & -(__int64)(v12 != 0);
    }
    if ( v8 )
      (**v8)(v8, 1LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  }
  return (unsigned int)v9;
}
