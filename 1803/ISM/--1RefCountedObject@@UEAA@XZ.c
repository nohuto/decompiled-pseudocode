/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x1800018F4
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x1800E3D33 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _HeatProcessor::Initialize_::_1_::dtor$1 @ 0x1800E4C5E (_HeatProcessor--Initialize_--_1_--dtor$1.c)
 *     _PointerInfoAdapter::PointerInfoAdapter_::_1_::dtor$0 @ 0x1800E6CBE (_PointerInfoAdapter--PointerInfoAdapter_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x1800E6D23 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x1800E7891 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _MPCInputRouter::CreateMPCTarget_::_1_::dtor$3 @ 0x1800E7F70 (_MPCInputRouter--CreateMPCTarget_--_1_--dtor$3.c)
 *     _MPCSharedWorldInputTarget::MPCSharedWorldInputTarget_::_1_::dtor$0 @ 0x1800E800C (_MPCSharedWorldInputTarget--MPCSharedWorldInputTarget_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x1800E8054 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::InputConfigContextProvider_::_1_::dtor$5 @ 0x1800E81C4 (_InputConfigContextProvider--InputConfigContextProvider_--_1_--dtor$5.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x1800E94EC (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _ComboButtonProcessor::Create_::_1_::dtor$4 @ 0x1800E9676 (_ComboButtonProcessor--Create_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
