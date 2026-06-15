/*
 * XREFs of _CPdcActivationClient::ActivatorCallback_::_1_::dtor$0 @ 0x1800AE0B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPdcActivationClient::ActivatorCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 72));
}
