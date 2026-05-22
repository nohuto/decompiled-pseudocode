/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x1800AC1B8
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800320A4 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18005911C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x1800E4A5A (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1800E6896 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
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
