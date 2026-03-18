/*
 * XREFs of ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  if ( a2 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      4u,
      2u,
      0x14u,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
      a2);
  return 0LL;
}
