/*
 * XREFs of RIMValidatePTPProperties @ 0x1C0116E80
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = -1073741668;
  if ( a1 == 3 && (*(_DWORD *)(a2 + 276) & 0x200) != 0 && *(_DWORD *)(a2 + 680) <= 6u )
    return 0;
  else
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0xAu,
      (__int64)&WPP_b44500e65563304a3a6666df8c002c39_Traceguids);
  return v2;
}
