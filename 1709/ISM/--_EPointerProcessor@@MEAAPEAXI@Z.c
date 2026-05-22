/*
 * XREFs of ??_EPointerProcessor@@MEAAPEAXI@Z @ 0x180070BC4
 * Callers:
 *     ??_EPointerProcessor@@O7EAAPEAXI@Z @ 0x180071CA0 (--_EPointerProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PointerProcessor@@MEAA@XZ @ 0x180070C08 (--1PointerProcessor@@MEAA@XZ.c)
 */

PointerProcessor *__fastcall PointerProcessor::`vector deleting destructor'(PointerProcessor *this, char a2)
{
  PointerProcessor::~PointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
