/*
 * XREFs of StorPortAdapterPoFxD3Completion @ 0x1C000D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortAdapterPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[108] &= ~2u;
}
