/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180017490
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x180036A74 (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x180036A84 (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$3 @ 0x180036E21 (_CProcess--CProcess_--_1_--dtor$3.c)
 *     _GetNotificationDataSize_::_1_::dtor$0 @ 0x180037788 (_GetNotificationDataSize_--_1_--dtor$0.c)
 *     _SetNotificationData_::_1_::dtor$0 @ 0x180037794 (_SetNotificationData_--_1_--dtor$0.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$2 @ 0x180037A36 (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
