/*
 * XREFs of imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x1C00D5670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(DriverGlobals, Pipe);
}
