/*
 * XREFs of _CSubmixImpl::_CSubmixImpl_::_1_::dtor$5 @ 0x1400215C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::_CSubmixImpl_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 80) + 176LL);
}
