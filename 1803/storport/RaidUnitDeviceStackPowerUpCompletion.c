/*
 * XREFs of RaidUnitDeviceStackPowerUpCompletion @ 0x1C000D8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[152] &= ~0x80u;
}
