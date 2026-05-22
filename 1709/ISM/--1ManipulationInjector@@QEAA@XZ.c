/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x1800C047C
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800620CC (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x1800CE7B0 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _ControllerProcessor::_ControllerProcessor_::_1_::dtor$8 @ 0x1800CE8B3 (_ControllerProcessor--_ControllerProcessor_--_1_--dtor$8.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1800CF640 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     _MPCGestureHandler::_MPCGestureHandler_::_1_::dtor$1 @ 0x1800CF6C8 (_MPCGestureHandler--_MPCGestureHandler_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
