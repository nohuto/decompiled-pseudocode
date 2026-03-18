/*
 * XREFs of ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002EBFC
 * Callers:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000FCC8 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C002EB98 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002F670 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DprProcessEventFromPoxCallback(
        FxPoxInterface *this,
        FxDevicePwrRequirementEvents Event)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, Event);
  KeLowerIrql(v4);
}
