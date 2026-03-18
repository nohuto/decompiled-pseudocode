/*
 * XREFs of UsbhEnablePortIndicators @ 0x1C0007F00
 * Callers:
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028BCC (UsbhDispatch_PindicatorEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhEnablePortIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int16 i; // bx
  __int64 PortData; // rsi
  __int64 v6; // rax

  result = FdoExt(a1);
  v3 = result;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               13,
               (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids);
  if ( *(_BYTE *)(v3 + 3008) )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      PortData = UsbhGetPortData(a1, i);
      if ( PortData )
      {
        v6 = FdoExt(a1);
        UsbhDispatch_PindicatorEvent(a1, PortData, 5LL, v6 + 1384);
      }
    }
  }
  return result;
}
