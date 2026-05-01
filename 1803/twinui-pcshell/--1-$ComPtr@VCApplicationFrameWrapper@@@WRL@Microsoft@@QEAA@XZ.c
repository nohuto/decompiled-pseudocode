/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9198
 * Callers:
 *     _CApplicationFrameService::OnChromeOffsetsChanged_::_1_::dtor$0 @ 0x1800B5D00 (_CApplicationFrameService--OnChromeOffsetsChanged_--_1_--dtor$0.c)
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1800B5D6C (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x1800B5DCC (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$6 @ 0x1800B5DE4 (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService_____ptr64_IApplicationFrameManager_____ptr64_IApplicationFrame_____ptr64_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&___ptr64_unsigned_long_const_&___ptr64__::_1_::dtor$2 @ 0x180128F11 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_180128F11.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x180129A6C (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x180129DB8 (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x180129EFD (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
