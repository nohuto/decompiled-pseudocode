/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001F5AC
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_47b0fc75c26617fafd85d8fafd598033____::_1_::dtor$0 @ 0x1800B580B (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$2 @ 0x1800B5F62 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$2 @ 0x1800B5F86 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$2 @ 0x1800B5FAA (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800B5FAA.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$2 @ 0x1800B5FCE (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$2.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25____::_1_::dtor$0 @ 0x1800B652E (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6____::_1_::dtor$0 @ 0x1800B65A6 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800B65A6.c)
 *     _Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800B7DAD (_Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_14acc09073ccfc16760233ebaab8e057____::_1_::dtor$0 @ 0x1800B84D0 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Fou.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$3 @ 0x1800B9718 (_UnlockActionHelper--Execute_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
