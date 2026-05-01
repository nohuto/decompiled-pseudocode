/*
 * XREFs of _DeserializePropertySet_::_1_::dtor$0 @ 0x1800B28E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeserializePropertySet_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 56);
}
