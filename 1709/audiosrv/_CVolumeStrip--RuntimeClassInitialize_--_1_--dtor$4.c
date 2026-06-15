/*
 * XREFs of _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18006E0DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeStrip::RuntimeClassInitialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 264));
}
