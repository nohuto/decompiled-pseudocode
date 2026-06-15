/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x180069B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::NotifyAudioDGTerminated(CVolumeSoftware *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 248);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 30);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
