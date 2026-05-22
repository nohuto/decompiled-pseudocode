/*
 * XREFs of ??_EInputRedirectionComponent@@MEAAPEAXI@Z @ 0x1800A6B0C
 * Callers:
 *     ??_EInputRedirectionComponent@@OBI@EAAPEAXI@Z @ 0x1800A79C0 (--_EInputRedirectionComponent@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1InputRedirectionComponent@@MEAA@XZ @ 0x1800A6B50 (--1InputRedirectionComponent@@MEAA@XZ.c)
 */

InputRedirectionComponent *__fastcall InputRedirectionComponent::`vector deleting destructor'(
        InputRedirectionComponent *this,
        char a2)
{
  InputRedirectionComponent::~InputRedirectionComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
