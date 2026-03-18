/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0054268 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(__int64 *a1, char a2)
{
  if ( (a1[34] & 0x1000000000000000LL) != 0 )
  {
    WPP_RECORDER_SF_q(a1[9], 4u, 4u, 0xF2u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *a1);
    if ( Controller_IsSecureDevice((__int64)a1) )
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    else
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (a2 != 0), 0, 0LL, 0);
  }
}
