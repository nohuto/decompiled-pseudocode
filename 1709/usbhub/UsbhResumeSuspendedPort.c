/*
 * XREFs of UsbhResumeSuspendedPort @ 0x1C000784C
 * Callers:
 *     UsbhHandleSuspend @ 0x1C0007790 (UsbhHandleSuspend.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     UsbhResumePort @ 0x1C0007924 (UsbhResumePort.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v8; // r10d
  __int64 v10; // rax
  int v11; // r10d
  int v12; // r10d
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937549, a4, a3);
  FdoExt(a1);
  if ( (a3 & 0x1A) == 0x18 && a5 )
  {
    v10 = PdoExt(a5);
    *(_DWORD *)(v10 + 1412) |= 0x2000u;
  }
  if ( (a3 & 2) == 0 || (a3 & 0x10) == 0 )
    goto LABEL_9;
  v8 = UsbhResumePort(a1, a4, &v15);
  v13 = *(unsigned __int16 *)(a4 + 4);
  if ( v8 < 0 )
  {
    Log(a1, 16, 1347568944, v8, v13);
    if ( !Usb_Disconnected(v11) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 47, 0, 0, v12, v15, usbfile_busfunc_c, 3115, v14);
    }
LABEL_9:
    UsbhSignalResumeEvent(a1, a4);
    return 0LL;
  }
  Log(a1, 16, 2004111955, 0, v13);
  return 0LL;
}
