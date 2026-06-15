/*
 * XREFs of ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180088260
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800880A8 (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeInternalNotification(
        CVolumeStrip *this,
        struct IAudioEndpointVolumeCallback *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v4, a2);
  return CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(
           (struct _RTL_CRITICAL_SECTION *)((char *)this + 112),
           &v4);
}
