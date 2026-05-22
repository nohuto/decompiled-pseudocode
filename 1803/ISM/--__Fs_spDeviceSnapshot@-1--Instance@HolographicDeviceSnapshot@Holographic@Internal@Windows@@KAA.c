/*
 * XREFs of ??__Fs_spDeviceSnapshot@?1??Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ@YAXXZ @ 0x1800EACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@@std@@QEBAXPEAVHolographicDeviceSnapshot@Holographic@Internal@Windows@@@Z @ 0x18009C64C (--R-$default_delete@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@@std@@QEBAXPEAVHolo.c)
 */

void __fastcall `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_spDeviceSnapshot''(
        __int64 a1)
{
  if ( `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot )
    std::default_delete<Windows::Internal::Holographic::HolographicDeviceSnapshot>::operator()(
      a1,
      (void **)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot);
}
