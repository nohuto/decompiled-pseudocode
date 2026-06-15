/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x18007C480
 * Callers:
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x180080ACA (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x180080B4B (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x18008737F (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x180087582 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x180095BC9 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x180095F59 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
