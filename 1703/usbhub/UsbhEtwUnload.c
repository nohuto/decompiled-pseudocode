/*
 * XREFs of UsbhEtwUnload @ 0x1C0059270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

int UsbhEtwUnload()
{
  int result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0xAu,
               (__int64)&WPP_1891e271e5e13539cad0dc5135a7cece_Traceguids);
  if ( RegHandle )
  {
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
  }
  return result;
}
