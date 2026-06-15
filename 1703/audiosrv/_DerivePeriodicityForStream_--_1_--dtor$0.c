/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$0 @ 0x180058F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DerivePeriodicityForStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 104);
}
