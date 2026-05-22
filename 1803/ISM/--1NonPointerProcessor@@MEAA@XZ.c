/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x18006AFDC
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1800E4A15 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1800E4BB4 (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x1800E7257 (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1800E8230 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
