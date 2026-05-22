/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x18006D628
 * Callers:
 *     ??_ENonPointerProcessor@@O7EAAPEAXI@Z @ 0x18006D9A0 (--_ENonPointerProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18006D66C (--1NonPointerProcessor@@MEAA@XZ.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
