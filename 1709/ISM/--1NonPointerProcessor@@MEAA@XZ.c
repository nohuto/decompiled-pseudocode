/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x18006D66C
 * Callers:
 *     ??_EButtonProcessor@@UEAAPEAXI@Z @ 0x18003A50C (--_EButtonProcessor@@UEAAPEAXI@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1800432EC (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x180047AD4 (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x18004904C (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x18006D628 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1800CE71F (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::_ControllerProcessor_::_1_::dtor$0 @ 0x1800CE822 (_ControllerProcessor--_ControllerProcessor_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
