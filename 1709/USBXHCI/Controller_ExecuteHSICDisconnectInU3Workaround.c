/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00572F0 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(_QWORD *a1, char a2)
{
  if ( (a1[34] & 0x1000000000000000LL) != 0 )
  {
    WPP_RECORDER_SF_q(a1[9], 4u, 4u, 0xF0u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, *a1);
    if ( Controller_IsSecureDevice((__int64)a1) )
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    else
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (unsigned int)(a2 != 0));
  }
}
