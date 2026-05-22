/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18000777C
 * Callers:
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1800CC70E (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::GetInstance_::_1_::dtor$0 @ 0x1800CC726 (_MPCHeadUpdateListener--GetInstance_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$23 @ 0x1800CEF6A (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$23.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$2 @ 0x1800D1344 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
