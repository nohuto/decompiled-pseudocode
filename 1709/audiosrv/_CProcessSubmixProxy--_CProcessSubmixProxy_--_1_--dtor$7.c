/*
 * XREFs of _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$7 @ 0x18003869A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 64) + 208LL);
}
