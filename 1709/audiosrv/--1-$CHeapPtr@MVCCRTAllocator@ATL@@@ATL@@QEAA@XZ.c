/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x18005BBB4
 * Callers:
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x18006173A (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x1800617BB (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x18006B4FB (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x18006B6FF (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x18007C805 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
