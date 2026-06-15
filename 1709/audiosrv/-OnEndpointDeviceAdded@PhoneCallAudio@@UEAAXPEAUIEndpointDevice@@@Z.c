/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800C8680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800C83F4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( (int)PhoneCallAudio::InitPhoneTopology(this) >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 6);
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 40LL))(*((_QWORD *)this + 7), (char *)this + 48);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
