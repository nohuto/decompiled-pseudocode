/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x1C0039560
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0039324 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 412, 0);
  StorPortUnitPowerNotRequiredStep2((char *)Context);
}
