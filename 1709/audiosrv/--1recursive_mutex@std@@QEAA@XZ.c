/*
 * XREFs of ??1recursive_mutex@std@@QEAA@XZ @ 0x18009C9C0
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$7 @ 0x180060E85 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$7.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$22 @ 0x180060EA4 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$22.c)
 *     _CPdcActivationClient::CPdcActivationClient_::_1_::dtor$1 @ 0x18009C90C (_CPdcActivationClient--CPdcActivationClient_--_1_--dtor$1.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$1 @ 0x18009C9AD (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$1.c)
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$1 @ 0x1800BF4A7 (_CWorkFifo--CWorkFifo_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::recursive_mutex::~recursive_mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
