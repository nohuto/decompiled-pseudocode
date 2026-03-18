/*
 * XREFs of imp_WdfIoTargetFormatRequestForIoctl @ 0x1C003ACA0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIoctl @ 0x1C0004AF0 (FxIoTargetFormatIoctl.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForIoctl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *InputBuffer,
        _MDL *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  return FxIoTargetFormatIoctl(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           (unsigned __int64)IoTarget,
           (__int64)Request,
           Ioctl,
           0,
           InputBuffer,
           InputBufferOffsets,
           OutputBuffer,
           OutputBufferOffsets);
}
