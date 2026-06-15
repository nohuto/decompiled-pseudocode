/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180069F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 240);
  if ( *((_QWORD *)this + 30) && *((_DWORD *)this + 68) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(*(_QWORD *)*v1 + 120LL))(*v1, this);
    *((_DWORD *)this + 68) = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>(v1);
}
