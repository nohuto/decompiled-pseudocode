/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$14 @ 0x1800DCE07
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
