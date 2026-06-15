/*
 * XREFs of _CExclusiveModeListener::SetDeviceRendererSelectionMode_::_1_::dtor$0 @ 0x1800F9818
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExclusiveModeListener::SetDeviceRendererSelectionMode_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 80));
}
