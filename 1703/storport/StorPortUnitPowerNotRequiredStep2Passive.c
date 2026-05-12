/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x1C0037670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 404, 0);
  StorPortUnitPowerNotRequiredStep2((char *)Context);
}
