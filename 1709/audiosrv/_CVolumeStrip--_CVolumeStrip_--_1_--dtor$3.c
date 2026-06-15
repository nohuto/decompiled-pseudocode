/*
 * XREFs of _CVolumeStrip::_CVolumeStrip_::_1_::dtor$3 @ 0x18006C3D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeStrip::_CVolumeStrip_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 232LL));
}
