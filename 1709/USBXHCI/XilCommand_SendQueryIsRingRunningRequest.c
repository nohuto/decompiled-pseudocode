/*
 * XREFs of XilCommand_SendQueryIsRingRunningRequest @ 0x1C000F4E0
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_SendQueryIsRingRunningRequest(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  char result; // al
  int v10; // [rsp+28h] [rbp-70h]
  int v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v13[5]; // [rsp+38h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[4]) = 17;
  v12 = 0LL;
  v13[3] = *(_QWORD *)(a1 + 16);
  v8 = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v13, 40, (unsigned int)&v12, 8);
  if ( v8 >= 0 )
  {
    if ( (int)v12 >= 0 )
    {
      *a2 = BYTE4(v12);
      result = BYTE5(v12);
      *a3 = BYTE5(v12);
    }
    else
    {
      v11 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        2u,
        7u,
        0x1Cu,
        (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
        v11);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandQueryIsRingRunning failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               875LL);
    }
  }
  else
  {
    v10 = v8;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v6 + 72),
             2u,
             7u,
             0x1Bu,
             (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
             v10);
  }
  return result;
}
