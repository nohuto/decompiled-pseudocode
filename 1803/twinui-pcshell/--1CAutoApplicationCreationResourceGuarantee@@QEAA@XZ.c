/*
 * XREFs of ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800810EC
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$4 @ 0x1800B10BC (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$4.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$3 @ 0x1800B37D0 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$3.c)
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18010B500 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 *     _CApplicationManager::SetApplicationWindow_::_1_::dtor$0 @ 0x18010B587 (_CApplicationManager--SetApplicationWindow_--_1_--dtor$0.c)
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x180121BD0 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$2 @ 0x180121DF2 (_CAppViewManager--SplitView_--_1_--dtor$2.c)
 * Callees:
 *     ?UnensureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800811B0 (-UnensureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(
        CApplicationFrameService **this)
{
  CApplicationFrameService *v2; // rcx
  __int64 (__fastcall *v3)(CApplicationFrameService *__hidden); // rax

  v2 = *this;
  v3 = *(__int64 (__fastcall **)(CApplicationFrameService *__hidden))(*(_QWORD *)v2 + 48LL);
  if ( v3 == CApplicationFrameService::UnensureFramePool )
    CApplicationFrameService::UnensureFramePool(v2);
  else
    v3(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
