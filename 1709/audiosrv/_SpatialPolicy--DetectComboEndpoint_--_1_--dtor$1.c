/*
 * XREFs of _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$1 @ 0x1800BA7D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialPolicy::DetectComboEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 32));
}
