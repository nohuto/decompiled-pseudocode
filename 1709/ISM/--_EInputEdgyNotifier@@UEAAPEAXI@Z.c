/*
 * XREFs of ??_EInputEdgyNotifier@@UEAAPEAXI@Z @ 0x18002E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1InputEdgyNotifier@@UEAA@XZ @ 0x18002E324 (--1InputEdgyNotifier@@UEAA@XZ.c)
 */

InputEdgyNotifier *__fastcall InputEdgyNotifier::`vector deleting destructor'(InputEdgyNotifier *this, char a2)
{
  InputEdgyNotifier::~InputEdgyNotifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
