/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x180026640
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x1800272F0 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1800266A0 (--1DWMCursor@@MEAA@XZ.c)
 */

DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  DWMCursor::~DWMCursor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
