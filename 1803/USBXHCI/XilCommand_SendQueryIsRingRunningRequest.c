/*
 * XREFs of XilCommand_SendQueryIsRingRunningRequest @ 0x1C00062D8
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_SendQueryIsRingRunningRequest(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  char result; // al
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v12[5]; // [rsp+38h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[4]) = 17;
  v11 = 0LL;
  v12[3] = *(_QWORD *)(a1 + 32);
  v8 = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v12, 40, (unsigned int)&v11, 8);
  if ( v8 >= 0 )
  {
    if ( (int)v11 >= 0 )
    {
      *a2 = BYTE4(v11);
      result = BYTE5(v11);
      *a3 = BYTE5(v11);
    }
    else
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v9, 7, 28, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v11);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandQueryIsRingRunning failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               889LL);
    }
  }
  else
  {
    LOBYTE(v9) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v6 + 72),
             v9,
             7,
             27,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             v8);
  }
  return result;
}
