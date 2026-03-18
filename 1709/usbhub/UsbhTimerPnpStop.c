/*
 * XREFs of UsbhTimerPnpStop @ 0x1C0046710
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhDmDisableTimer @ 0x1C00464D0 (UsbhDmDisableTimer.c)
 */

void __fastcall UsbhTimerPnpStop(__int64 a1)
{
  _DWORD *v2; // rdi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_b1f65ad2a9363596a18d026b279b8408_Traceguids);
  v2 = FdoExt(a1);
  Log(a1, 0x2000, 1684886352, a1, 0LL);
  if ( (v2[640] & 0x2000000) != 0 )
  {
    UsbhDmDisableTimer(a1);
    v2[640] &= ~0x2000000u;
    Log(a1, 0x2000, 1684886321, a1, 0LL);
    UsbhReferenceListRemove(a1, (__int64)(v2 + 936));
  }
}
