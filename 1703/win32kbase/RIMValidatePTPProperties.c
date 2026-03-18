/*
 * XREFs of RIMValidatePTPProperties @ 0x1C0117F74
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = -1073741668;
  if ( a1 == 3 && (*(_DWORD *)(a2 + 260) & 0x200) != 0 && *(_DWORD *)(a2 + 696) <= 6u )
  {
    return 0;
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      18,
      10,
      (__int64)&WPP_b44500e65563304a3a6666df8c002c39_Traceguids);
  }
  return v2;
}
