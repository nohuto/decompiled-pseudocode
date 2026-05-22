/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x180020FA0
 * Callers:
 *     ??_EDWMInputTarget@@WDA@EAAPEAXI@Z @ 0x180022500 (--_EDWMInputTarget@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x1800211A4 (--1DWMInputTarget@@UEAA@XZ.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
