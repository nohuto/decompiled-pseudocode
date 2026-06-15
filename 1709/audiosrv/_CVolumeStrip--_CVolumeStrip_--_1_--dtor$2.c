/*
 * XREFs of _CVolumeStrip::_CVolumeStrip_::_1_::dtor$2 @ 0x18006C3BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeStrip::_CVolumeStrip_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::~CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 128LL));
}
