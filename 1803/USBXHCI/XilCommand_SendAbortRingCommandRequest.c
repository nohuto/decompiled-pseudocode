/*
 * XREFs of XilCommand_SendAbortRingCommandRequest @ 0x1C0005EB0
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendAbortRingCommandRequest(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[4]) = 15;
  v7 = 0;
  v8[3] = *(_QWORD *)(a1 + 32);
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( v4 >= 0 )
  {
    result = (unsigned int)v7;
    if ( v7 < 0 )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v5, 7, 26, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v7);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandAbortRing failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               788LL);
    }
  }
  else
  {
    LOBYTE(v5) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v2 + 72),
             v5,
             7,
             25,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             v4);
  }
  return result;
}
