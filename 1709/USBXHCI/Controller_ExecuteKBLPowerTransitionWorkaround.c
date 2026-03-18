/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0057418
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C001F628 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 *a1, char a2)
{
  __int64 v4; // rcx

  WPP_RECORDER_SF_q(a1[9], 4u, 4u, 0xF1u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, *a1);
  v4 = a1[11];
  if ( !a2 )
    return Register_UpdateKBLUSB2PMCTRLRegister(v4, 3u);
  Register_UpdateKBLUSB2PMCTRLRegister(v4, 0);
  return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 2, 0LL, 0);
}
