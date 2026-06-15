/*
 * XREFs of _CSubmixImpl::_CSubmixImpl_::_1_::dtor$6 @ 0x1400215D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::_CSubmixImpl_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 80) + 184LL);
}
