/*
 * XREFs of ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180017188
 * Callers:
 *     ??_EDWMInputRouter@@OEA@EAAPEAXI@Z @ 0x180020530 (--_EDWMInputRouter@@OEA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC (--1DWMInputRouter@@MEAA@XZ.c)
 */

DWMInputRouter *__fastcall DWMInputRouter::`vector deleting destructor'(DWMInputRouter *this, char a2)
{
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
