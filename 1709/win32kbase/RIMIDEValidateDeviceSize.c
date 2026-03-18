/*
 * XREFs of RIMIDEValidateDeviceSize @ 0x1C010A588
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01075C4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDEValidateDeviceSize(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // ecx

  v4 = 0;
  if ( a2 == -1 || a3 == -1 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x14u,
      (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids);
    v4 = -1073741668;
  }
  if ( a1[33] <= a1[31] || a1[34] <= a1[32] )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x15u,
      (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids);
    v4 = -1073741668;
  }
  if ( a1[37] <= a1[35] || a1[38] <= a1[36] )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x16u,
      (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids);
    return (unsigned int)-1073741668;
  }
  return v4;
}
