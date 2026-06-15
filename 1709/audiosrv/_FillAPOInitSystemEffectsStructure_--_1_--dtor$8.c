/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x1800DCDCB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
