/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180001850
 * Callers:
 *     _OneCoreUAPInputHost::Initialize_::_1_::dtor$2 @ 0x1800CC5CF (_OneCoreUAPInputHost--Initialize_--_1_--dtor$2.c)
 *     _BufferedInputTarget::Create_::_1_::dtor$0 @ 0x1800CCC9E (_BufferedInputTarget--Create_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800CCD3A (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _GestureTargetingComponent::Create_::_1_::dtor$0 @ 0x1800CCE35 (_GestureTargetingComponent--Create_--_1_--dtor$0.c)
 *     _GestureTargetingComponent::Create_::_1_::dtor$1 @ 0x1800CCE41 (_GestureTargetingComponent--Create_--_1_--dtor$1.c)
 *     _TouchProcessor::Create_::_1_::dtor$1 @ 0x1800CCF25 (_TouchProcessor--Create_--_1_--dtor$1.c)
 *     _MPCSharedWorldInputTarget::Create_::_1_::dtor$0 @ 0x1800CD83B (_MPCSharedWorldInputTarget--Create_--_1_--dtor$0.c)
 *     _DWMInputTarget::CreateFromINPUTDEST_::_1_::dtor$0 @ 0x1800CD847 (_DWMInputTarget--CreateFromINPUTDEST_--_1_--dtor$0.c)
 *     _DWMNullInputTarget::Create_::_1_::dtor$0 @ 0x1800CD86F (_DWMNullInputTarget--Create_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$0 @ 0x1800CDA49 (_DWMCursorBroker--Create_--_1_--dtor$0.c)
 *     _DWMHardwareCursor::Create_::_1_::dtor$1 @ 0x1800CDB14 (_DWMHardwareCursor--Create_--_1_--dtor$1.c)
 *     _EdgeGestureTarget::UpdateInputTarget_::_1_::dtor$2 @ 0x1800CDED4 (_EdgeGestureTarget--UpdateInputTarget_--_1_--dtor$2.c)
 *     _TargetingArbitrationComponent::Create_::_1_::dtor$0 @ 0x1800CDF6C (_TargetingArbitrationComponent--Create_--_1_--dtor$0.c)
 *     _GestureRecognizerCreate_::_1_::dtor$0 @ 0x1800CE9CB (_GestureRecognizerCreate_--_1_--dtor$0.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$2 @ 0x1800D0AA0 (_RIMRawInputProvider--Initialize_--_1_--dtor$2.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800D0AB8 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x1800D0AC4 (_GazeDeviceCollection--Create_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::Create_::_1_::dtor$1 @ 0x1800D0C47 (_SpatialInputControllerCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::Create_::_1_::dtor$1 @ 0x1800D18DE (_MPCInputRouter--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::CreateMPCTarget_::_1_::dtor$2 @ 0x1800D193E (_MPCInputRouter--CreateMPCTarget_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
