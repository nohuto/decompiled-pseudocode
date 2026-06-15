/*
 * XREFs of _AudioJournal::FindStreamInfo_::_1_::dtor$0 @ 0x180069890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioJournal::FindStreamInfo_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 32);
}
