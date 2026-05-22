/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180001900
 * Callers:
 *     _OneCoreUAPInputHost::Initialize_::_1_::dtor$1 @ 0x1800E347B (_OneCoreUAPInputHost--Initialize_--_1_--dtor$1.c)
 *     _TouchProcessor::Create_::_1_::dtor$2 @ 0x1800E3DE7 (_TouchProcessor--Create_--_1_--dtor$2.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800E3EA7 (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _TapProcessor::Initialize_::_1_::dtor$0 @ 0x1800E4B4A (_TapProcessor--Initialize_--_1_--dtor$0.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x1800E4BFA (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _HeatProcessor::Initialize_::_1_::dtor$0 @ 0x1800E4C52 (_HeatProcessor--Initialize_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$0 @ 0x1800E6E2C (_DragNDropProcessorLegacy--Create_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$2 @ 0x1800E6E50 (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$2.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$0 @ 0x1800E72F2 (_RIMRawInputProvider--Initialize_--_1_--dtor$0.c)
 *     _MPCInputRouter::Create_::_1_::dtor$1 @ 0x1800E7EF8 (_MPCInputRouter--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::CreateMPCTarget_::_1_::dtor$2 @ 0x1800E7F64 (_MPCInputRouter--CreateMPCTarget_--_1_--dtor$2.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$3 @ 0x1800E8048 (_EdgyProcessorTarget--Initialize_--_1_--dtor$3.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$0 @ 0x1800E81F4 (_InputConfigContextProvider--Create_--_1_--dtor$0.c)
 *     _ComboButtonProcessor::Create_::_1_::dtor$3 @ 0x1800E966A (_ComboButtonProcessor--Create_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
