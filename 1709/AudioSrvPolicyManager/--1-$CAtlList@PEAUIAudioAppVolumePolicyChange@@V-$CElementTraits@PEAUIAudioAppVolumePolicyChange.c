/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180011200
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18002821C (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x18002822C (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800282B7 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800282C7 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$3 @ 0x1800284CD (_CProcess--CProcess_--_1_--dtor$3.c)
 *     _CProcess::_CProcess_::_1_::dtor$3 @ 0x180028616 (_CProcess--_CProcess_--_1_--dtor$3.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800287C7 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800287D7 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _TSSession::_TSSession_::_1_::dtor$0 @ 0x180028B77 (_TSSession--_TSSession_--_1_--dtor$0.c)
 *     _TSSession::_TSSession_::_1_::dtor$1 @ 0x180028B87 (_TSSession--_TSSession_--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$3 @ 0x180028BAA (_TSSession--_TSSession_--_1_--dtor$3.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$2 @ 0x180028E67 (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
