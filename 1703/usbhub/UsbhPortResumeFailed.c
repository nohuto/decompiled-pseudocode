/*
 * XREFs of UsbhPortResumeFailed @ 0x1C0051090
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSS_SignalPdoWake @ 0x1C0007864 (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeFailed(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x26u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884443425, a2, 0LL);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x81u, 0LL, 0, 0, 0, usbfile_busfunc_c, 2448, 0);
  UsbhWait(a1, 10);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
