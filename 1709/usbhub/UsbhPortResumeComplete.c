/*
 * XREFs of UsbhPortResumeComplete @ 0x1C0006230
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     UsbhSS_SignalPdoWake @ 0x1C00062E4 (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rax

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (*(_DWORD *)(v7 + 2816) & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 2848) + 4LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884443469, a2, 0LL);
  UsbhWait(a1, v6);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
