/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1800432EC
 * Callers:
 *     ??_EGazeProcessor@@OBA@EAAPEAXI@Z @ 0x180043860 (--_EGazeProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18006D66C (--1NonPointerProcessor@@MEAA@XZ.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  NonPointerProcessor *v4; // rcx

  *(_QWORD *)this = &GazeProcessor::`vftable';
  v4 = (GazeProcessor *)((char *)this + 8);
  *(_QWORD *)v4 = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  NonPointerProcessor::~NonPointerProcessor(v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
