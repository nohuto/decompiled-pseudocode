/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x180005D78
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x1800076A0 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x180005DBC (--1InputStateManager@@MEAA@XZ.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(InputStateManager *this, char a2)
{
  InputStateManager::~InputStateManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
