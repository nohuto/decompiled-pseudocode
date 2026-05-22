/*
 * XREFs of ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x1800240B4
 * Callers:
 *     ??_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z @ 0x180024AE0 (--_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x1800240F8 (--1DWMFocusedInputTarget@@MEAA@XZ.c)
 */

DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::`scalar deleting destructor'(
        DWMFocusedInputTarget *this,
        char a2)
{
  DWMFocusedInputTarget::~DWMFocusedInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
