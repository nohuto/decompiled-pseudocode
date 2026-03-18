/*
 * XREFs of CiDriverUnload @ 0x1C0009E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 *     CsTerminate @ 0x1C0009F94 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
