/*
 * XREFs of _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$4 @ 0x1800682F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 80);
}
