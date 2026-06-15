/*
 * XREFs of _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$6 @ 0x180059A0D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 64) + 168LL);
}
