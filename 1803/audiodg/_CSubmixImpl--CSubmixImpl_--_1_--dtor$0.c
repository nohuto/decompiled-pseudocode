/*
 * XREFs of _CSubmixImpl::CSubmixImpl_::_1_::dtor$0 @ 0x14001F8EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CSubmixImpl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 64) + 8LL);
}
