/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x1800A1C20
 * Callers:
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x18009D17A (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x18009D1FB (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x1800A4AB1 (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x1800A4CB8 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800B5721 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
