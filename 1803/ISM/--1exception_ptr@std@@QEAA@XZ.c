/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x180009310
 * Callers:
 *     _MPCMouseProcessor::InitializeConstants_::_1_::dtor$0 @ 0x1800E3573 (_MPCMouseProcessor--InitializeConstants_--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1800E3842 (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$27 @ 0x1800E62F4 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$27.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$2 @ 0x1800E74C5 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
