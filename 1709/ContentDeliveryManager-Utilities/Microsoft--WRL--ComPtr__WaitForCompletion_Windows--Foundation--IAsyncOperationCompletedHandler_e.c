/*
 * XREFs of Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate_ @ 0x1800068A0
 * Callers:
 *     _Windows::Internal::ComTaskPoolHandler::FireCompletion_::_1_::dtor$1 @ 0x1800B510E (_Windows--Internal--ComTaskPoolHandler--FireCompletion_--_1_--dtor$1.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_1_::dtor$1 @ 0x1800B5733 (_WaitForCompletion_Windows--Foundation--IAsyncActionCompletedHandler_Windows--Found_ea_1800B5733.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64______ptr64__Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64______ptr64____::_1_::dtor$1 @ 0x1800B59A9 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800B59A9.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult_____ptr64_Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult_____ptr64_Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x1800B59CD (_WaitForCompletion_Windows--Foundation--IAsyncOperationWithProgressCompletedHandler_ea_1800B59CD.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____ptr64______ptr64__Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____ptr64______ptr64____::_1_::dtor$1 @ 0x1800B59F1 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800B59F1.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData_____ptr64__Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData_____ptr64____::_1_::dtor$1 @ 0x1800B5A15 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800B5A15.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_____ptr64______ptr64__Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_____ptr64______ptr64____::_1_::dtor$1 @ 0x1800B5A39 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800B5A39.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_bool__Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x1800B5A5D (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_bool__Windo_ea_1800B5A5D.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Security::WebAuthentication::UserHostIdentity_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Internal::Security::WebAuthentication::UserHostIdentity_____ptr64____::_1_::dtor$1 @ 0x1800B5A81 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--In_ea_1800B5A81.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::AppService::AppServiceResponse_____ptr64__Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::AppService::AppServiceResponse_____ptr64____::_1_::dtor$1 @ 0x1800B6687 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800B6687.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_1_::dtor$1 @ 0x1800B66AB (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_enum_Window_ea_1800B66AB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_2_::FTMEventDelegate_(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
