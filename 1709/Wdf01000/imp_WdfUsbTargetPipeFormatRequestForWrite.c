/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C008A5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C008F2F8 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 */

int __fastcall imp_WdfUsbTargetPipeFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  if ( BYTE4(DriverGlobals[-2].Driver) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      5u,
      0xEu,
      0xCu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      WriteMemory);
  return FxUsbPipe::_FormatTransfer(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           Pipe,
           Request,
           WriteMemory,
           WriteOffsets,
           0);
}
