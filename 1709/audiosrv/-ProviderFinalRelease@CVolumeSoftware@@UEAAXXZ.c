/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x180069FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180069CC0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(const wchar_t **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( this[8] )
  {
    if ( *((_BYTE *)this + 292) )
      CVolumeSoftware::PersistVolumeState(this);
    v3 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 31);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>(this + 30);
    if ( v3 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
