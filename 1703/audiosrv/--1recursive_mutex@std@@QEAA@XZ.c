/*
 * XREFs of ??1recursive_mutex@std@@QEAA@XZ @ 0x1800ADF78
 * Callers:
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$1 @ 0x18005BAB7 (_CWorkFifo--CWorkFifo_--_1_--dtor$1.c)
 *     _std::make_unique_CPowerReferenceManager__::_1_::dtor$5 @ 0x18005C29B (_std--make_unique_CPowerReferenceManager__--_1_--dtor$5.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$1 @ 0x1800ADF65 (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::recursive_mutex::~recursive_mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
