/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0054388
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C00193DC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 *a1, char a2)
{
  __int64 v4; // rcx

  WPP_RECORDER_SF_q(a1[9], 4u, 4u, 0xF3u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *a1);
  v4 = a1[11];
  if ( !a2 )
    return Register_UpdateKBLUSB2PMCTRLRegister(v4, 3u);
  Register_UpdateKBLUSB2PMCTRLRegister(v4, 0);
  return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 2, 0LL, 0);
}
